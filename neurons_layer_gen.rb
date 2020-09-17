# neurons_layerのジェネリック化モジュールとテストベンチ

require "std/memory.rb"
require "std/linear.rb"
require "std/fixpoint.rb"
require_relative "activation_function.rb"
require_relative "mac_counter.rb"

include HDLRuby::High::Std

system :layer_gen_bench do
  # データ型の宣言
  integer_width = 4 # 整数部のビット幅
  decimal_width = 4 # 実数部のビット幅
  address_width = 4 # lutのアドレスのビット幅
  typ = signed[integer_width, decimal_width] # データ型
  func = proc{|i| Math.tanh(i)} # 活性化関数

  # ニューラルネットワークの構造
  columns = [2, 2, 1]

  # 重みを持つ層の形
  neuron_columns = columns[1..-1]  

  #---------------内部信号の宣言---------------------
  inner :clk,   # clock 
        :rst,   # reset
        :req,   # request
        :fill   # メモリの初期化用

  # ackのジェネリック宣言
  # 層の数だけ宣言
  ack = neuron_columns.size.times.map{ |i| inner :"ack_#{i}"}  
  #---------------チャンネルの宣言-------------------
  # ニューラルネットワークへの入力を格納するメモリ
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_x)

  # ニューロンの出力値を格納するメモリ
  channel_a = neuron_columns.size.times.map{ |i| mem_file(typ, neuron_columns[i] , clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:"channel_a#{i}") }

  #---------------ブランチの宣言-------------------
  # 入力値のRead用ポート作成
  reader_x = channel_x.branch(:rinc)

  # 入力値のWrite用ポート作成
  writer_x = channel_x.branch(:winc)

  # 隠れ層の出力値のRead用ポート作成
  reader_a = (neuron_columns.size - 1).times.map{ |i| channel_a[i].branch(:rinc) }

  # ニューラルネットワークの出力値のR/W用ポート作成
  accessor_a = neuron_columns.size.times.map{ |i| channel_a[i].branch(:anum) }

  # アクセスの固定化
  a = neuron_columns.size.times.map{ |i| neuron_columns[i].times.map{ |j| accessor_a[i].wrap(j) } }

  #---------------neurons_layerのインスタンス生成-------------------
  # 入力層→隠れ層の計算  
  neurons_layer(func, typ, integer_width, decimal_width, address_width, columns[0], columns[1], reader_x, a[0]).(:layer_hidden).(clk, rst, fill, req, ack[0])  
  
  # 隠れ層→出力層の計算
  output_layer(func, typ, integer_width, decimal_width, address_width, columns[1], columns[2], reader_a[0], a[1]).(:layer_output).(clk, rst, fill, ack[0], ack[1])
  #---------------テストベンチと入力値の書き込み-------------------
  par(clk.posedge) do
    hif(fill) do
      writer_x.write(_b8b00010000)
    end
  end

  timed do
    # リセット
    clk <= 0
    rst <= 0
    req <= 0
    fill <= 0
    !10.ps

    # メモリ読み出し位置の初期化
    rst <= 1
    !10.ps
    clk <= 1
    !10.ps
    
    # メモリの内容の初期化
    clk <= 0
    rst <= 0
    fill <= 1

    !10.ps
    10.times do |i|
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps
    end    

    fill <= 0
    clk <= 1

    # 計算の実行
    clk <= 0
    req <= 1
    !10.ps
    clk <= 1
    !10.ps
    clk <= 0    
    20.times do
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps     
    end
  end
end

system :neurons_layer do |func, typ, integer_width, decimal_width, address_width, input_size, output_size, reader_input, a|
  func = func.to_proc
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i
  address_width = address_width.to_i
  input_size = input_size.to_i
  output_size = output_size.to_i

  input :clk, :rst, :fill, :req
  output :ack_layer

  inner :req_mac
  inner :ack, :ack_mac, :ack_add

  req_mac <= req & ~ack_mac
  #---------------------------------------------------------------------------
  # 入力と重みの積和計算
  # 重みのメモリ
  channel_w = output_size.times.map{ |i| mem_dual(typ, input_size, clk, rst, rinc: :rst, winc: :rst).(:"channel_w#{i}") }

  # 重みのRead用ポートの作成
  reader_w = output_size.times.map{ |i| channel_w[i].branch(:rinc) }
  
  weights = output_size.times.map{ |i| reader_w[i] }

  # 積和計算の結果の格納用
  mem_file(typ, output_size, clk, rst, anum: :rst).(:channel_accum)

  accum = channel_accum.branch(:anum)
  
  result_mac = output_size.times.map{ |i| accum.wrap(i) }
  
  # 積和演算のモジュール
  # 入力のニューロンの数だけackを出力する
  mac_n1(typ, clk, req_mac, ack, weights, reader_input, result_mac)

  # mac_n1のackのカウンタ
  mac_counter(input_size).(:counter).(clk, ack, rst, ack_mac)
  #---------------------------------------------------------------------------
  # バイアスの計算
  mem_file(typ, output_size, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_bias)

  mem_file(typ, output_size, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_z)

  reader_bias = channel_bias.branch(:anum) 
  accessor_z = channel_z.branch(:anum)
  
  bias = output_size.times.map{ |i| reader_bias.wrap(i) }  
  z = output_size.times.map{ |i| accessor_z.wrap(i) }

  add_n(typ, clk, ack_mac, ack_add, result_mac, bias, z)
  #---------------------------------------------------------------------------
  # 活性化関数の適用
  value_z = output_size.times.map{ |i| typ.inner :"value_z#{i}"}
  value_a = output_size.times.map{ |i| typ.inner :"value_a#{i}"}     

  flag_z = output_size.times.map{ |i| inner :"flag_z#{i}"}
  ack_a = output_size.times.map{ |i| inner :"ack_a#{i}"}

  output_size.times do |i|
    activation_function(func, typ, integer_width, decimal_width, address_width).(:"func#{i}").(value_z[i], value_a[i])
  end

  par(clk.posedge) do
    hif(ack_add) do
      output_size.times do |i|
        z[i].read(value_z[i]) { flag_z[i] <= 1 }
      end
    end
    helse do
      output_size.times do |i|
        flag_z[i] <= 0
      end
    end
  end

  par(clk.posedge) do
    hif(flag_z.inject(:&)) do
      output_size.times do |i|
        a[i].write(value_a[i]) { ack_a[i] <= 1 }
      end
    end
  end

  ack_layer <= ack_a.inject(:&)
  #---------------------------------------------------------------------------
  # パラメータの初期化
  writer_w = output_size.times.map{ |i| channel_w[i].branch(:winc) }
  channel_bias.branch(:winc).output :writer_bias

  par(clk.posedge) do
    hif(fill) do
      output_size.times do |i|
        writer_w[i].write(_b8b00010000)        
      end
      writer_bias.write(_b8b00010000)
    end
  end
end

system :output_layer do |func, typ, integer_width, decimal_width, address_width, input_size, output_size, reader_a0, a1|
  func = func.to_proc
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i
  address_width = address_width.to_i

  input :clk, :rst, :fill, :req
  output :ack_1

  inner :req_mac
  inner :ack, :ack_mac, :ack_add

  req_mac <= req & ~ack_mac
  #---------------------------------------------------------------------------
  # 入力と重みの積和計算
  # 第1層の重みのメモリ
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w0)
  #mem_dual(typ, 1, clk, rst, rinc: :rst, winc: :rst).(:channel_w0)
  #mem_dual(typ, 1, clk, rst, rinc: :rst, winc: :rst).(:channel_w1)
  
  # 重みのRead用ポート作成
  channel_w0.branch(:rinc).input :reader_w0
  #channel_w1.branch(:rinc).input :reader_w1

  #weights = [reader_w0, reader_w1]
  weights = [reader_w0]

  # 積和計算の結果の格納用
  mem_file(typ, 1, clk, rst, anum: :rst).(:channel_accum)

  channel_accum.branch(:anum).inout :accum
  result_mac = [accum.wrap(0)]

  # ニューロンの数だけ繰り返す必要あり
  mac_n1(typ, clk, req_mac, ack, weights, reader_a0, result_mac)
  mac_counter(2).(:counter1).(clk, ack, rst, ack_mac)  
  #---------------------------------------------------------------------------
  # バイアスの計算
  mem_file(typ, 1, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_bias)

  mem_file(typ, 1, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_z)

  channel_bias.branch(:anum).input :reader_bias
  channel_z.branch(:anum).inout :accessor_z

  bias = [reader_bias.wrap(0)]
  z = [accessor_z.wrap(0)]

  add_n(typ, clk, ack_mac, ack_add, result_mac, bias, z)
  #---------------------------------------------------------------------------
  # 活性化関数の適用
  typ.inner :value_z0
  typ.inner :value_a10

  inner :flag_z0, :ack_a10

  activation_function(func, typ, integer_width, decimal_width, address_width).(:func10).(value_z0, value_a10)

  par(clk.posedge) do
    hif(ack_add) do
      z[0].read(value_z0) { flag_z0 <= 1 }      
    end
    helse { flag_z0 <= 0 }
  end

  par(clk.posedge) do
    hif(flag_z0) do
        a1[0].write(value_a10) { ack_a10 <= 1 }
      end
  end

  ack_1 <= ack_a10
  #---------------------------------------------------------------------------
  # パラメータの初期化
  channel_w0.branch(:winc).output :writer_w0
  #channel_w1.branch(:winc).output :writer_w1
  channel_bias.branch(:winc).output :writer_bias

  par(clk.posedge) do
    hif(fill) do
      writer_w0.write(_b8b00010000)
      #writer_w1.write(_b8b00010000)
      writer_bias.write(_b8b00010000)
    end
  end
end