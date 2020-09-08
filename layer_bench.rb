#neurons_layerのテストベンチ

require "std/memory.rb"
require "std/linear.rb"
require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

integer_width = 4 # 整数部のビット幅
decimal_width = 4 # 実数部のビット幅
address_width = 4 # lutのアドレスのビット幅
typ = signed[integer_width, decimal_width] # データ型

system :layer_bench do
  inner :clk,   # clock 
        :rst,   # reset
        :req,   # request
        :ack_0, # 第1層のack
        :ack_1, # 第2層のack
        :fill   # メモリの初期化用

  # ニューラルネットワークへの入力のメモリ
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_x)

  # 第1層のニューロンの出力のメモリ
  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_a0)

  # ニューラルネットワークの出力のメモリ
  mem_file(typ, 1, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_a1)

  # 入力値のRead用ポート作成
  channel_x.branch(:rinc).input :reader_x
  #reader_x = channel_x.branch(:rinc)
  channel_x.branch(:winc).output :writer_x

  # 第1層の出力値のR/W用ポート作成
  channel_a0.branch(:anum).inout :accessor_a0

  # 第1層の出力値のRead用ポート作成
  channel_a0.branch(:rinc).input :reader_a0

  # ニューラルネットワークの出力のR/W用ポート作成
  channel_a1.branch(:anum).inout :accessor_a1

  a0 = [accessor_a0.wrap(0), accessor_a0.wrap(1)]
  a1 = [accessor_a1.wrap(0)]

  # 第1層の計算
  neurons_layer(typ, reader_x, a0).(:layer0).(clk, rst, fill, req, ack_0)

  # 第2層の計算
  output_layer(typ, reader_a0, a1).(:layer1).(clk, rst, fill, ack_0, ack_1)

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
    !10.ns

    # メモリ読み出し位置の初期化
    rst <= 1
    !10.ns
    clk <= 1
    !10.ns
    
    # メモリの内容の初期化
    clk <= 0
    rst <= 0
    fill <= 1

    !10.ns
    10.times do |i|
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns
    end    

    fill <= 0
    clk <= 1

    # 計算の実行
    clk <= 0
    req <= 1
    !10.ns
    clk <= 1
    !10.ns
    clk <= 0
    req <= 0
    10.times do
      clk <= 1
      !10.ns
      clk <= 0
      !10.ns     
    end
  end
end

system :neurons_layer do |typ, reader_x, a0|
  input :clk, :rst, :fill, :req
  output :ack_0

  inner :ack_mac0, :ack_mac1, :ack_add

  #---------------------------------------------------------------------------
  # 入力と重みの積和計算
  # 第1層の重みのメモリ
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w0)
  mem_dual(typ, 2, clk, rst, rinc: :rst, winc: :rst).(:channel_w1)
  
  # 重みのRead用ポート作成
  channel_w0.branch(:rinc).input :reader_w0
  channel_w1.branch(:rinc).input :reader_w1

  weights = [reader_w0, reader_w1]

  # 積和計算の結果の格納用
  mem_file(typ, 2, clk, rst, anum: :rst).(:channel_accum)

  channel_accum.branch(:anum).inout :accum
  result_mac = [accum.wrap(0), accum.wrap(1)]

  # ニューロンの数だけ繰り返す必要あり
  mac_n1(typ, clk, req, ack_mac0, weights, reader_x, result_mac)
  mac_n1(typ, clk, ack_mac0, ack_mac1, weights, reader_x, result_mac)
  #---------------------------------------------------------------------------
  # バイアスの計算
  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_bias)

  mem_file(typ, 2, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_z)

  channel_bias.branch(:anum).input :reader_bias
  channel_z.branch(:anum).inout :accessor_z

  bias = [reader_bias.wrap(0), reader_bias.wrap(1)]
  z = [accessor_z.wrap(0), accessor_z.wrap(1)]

  add_n(typ, clk, ack_mac1, ack_add, result_mac, bias, z)
  #---------------------------------------------------------------------------
  # 活性化関数の適用
  typ.inner :value_z0, :value_z1
  typ.inner :value_a00, :value_a01

  inner :flag_z0, :flag_z1, :ack_a00, :ack_a01

  activation_function(proc{|i| Math.tanh(i)}, typ, integer_width, decimal_width, address_width).(:func0).(value_z0, value_a00)
  activation_function(proc{|i| Math.tanh(i)}, typ, integer_width, decimal_width, address_width).(:func1).(value_z1, value_a01)

  par(clk.posedge) do
    hif(ack_add) do
      z[0].read(value_z0) { flag_z0 <= 1 }
      z[1].read(value_z1) { flag_z1 <= 1 }
    end
    helse { flag_z0 <= 0; flag_z1 <= 0}
  end

  par(clk.posedge) do
    hif(flag_z0 & flag_z1) do
        a0[0].write(value_a00) { ack_a00 <= 1 }
        a0[1].write(value_a01) { ack_a01 <= 1 }
      end
  end

  ack_0 <= ack_a00 & ack_a01
  #---------------------------------------------------------------------------
  # パラメータの初期化
  channel_w0.branch(:winc).output :writer_w0
  channel_w1.branch(:winc).output :writer_w1
  channel_bias.branch(:winc).output :writer_bias

  par(clk.posedge) do
    hif(fill) do
      writer_w0.write(_b8b00010000)
      writer_w1.write(_b8b00010000)
      writer_bias.write(_b8b00010000)
    end
  end
end

system :output_layer do |typ, reader_a0, a1|
  input :clk, :rst, :fill, :req
  output :ack_1

  inner :ack_mac0, :ack_mac1, :ack_add

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
  mac_n1(typ, clk, req, ack_mac0, weights, reader_a0, result_mac)
  mac_n1(typ, clk, ack_mac0, ack_mac1, weights, reader_a0, result_mac)
  #---------------------------------------------------------------------------
  # バイアスの計算
  mem_file(typ, 1, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_bias)

  mem_file(typ, 1, clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_z)

  channel_bias.branch(:anum).input :reader_bias
  channel_z.branch(:anum).inout :accessor_z

  bias = [reader_bias.wrap(0)]
  z = [accessor_z.wrap(0)]

  add_n(typ, clk, ack_mac1, ack_add, result_mac, bias, z)
  #---------------------------------------------------------------------------
  # 活性化関数の適用
  typ.inner :value_z0
  typ.inner :value_a10

  inner :flag_z0, :ack_a10

  activation_function(proc{|i| Math.tanh(i)}, typ, integer_width, decimal_width, address_width).(:func0).(value_z0, value_a10)

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