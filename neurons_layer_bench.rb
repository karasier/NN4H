# neurons_layerのテストベンチ

require "std/memory.rb"
require "std/fixpoint.rb"
require_relative "neurons_layer.rb"

include HDLRuby::High::Std

system :neurons_layer_bench do
  # データ型の宣言
  integer_width = 4 # 整数部のビット幅
  decimal_width = 4 # 実数部のビット幅
  address_width = 4 # lutのアドレスのビット幅
  typ = signed[integer_width, decimal_width] # データ型
  func = proc{|i| Math.tanh(i) } # 活性化関数

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
  mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:channel_x)

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
  (columns.size - 1).times do |i|
    if i == 0 then
      neurons_layer(func, typ, integer_width, decimal_width, address_width, columns[i], columns[i+1], reader_x, a[i]).(:"layer#{i}").(clk, rst, fill, req, ack[i])
    else
      neurons_layer(func, typ, integer_width, decimal_width, address_width, columns[i], columns[i+1], reader_a[i-1], a[i]).(:"layer#{i}").(clk, rst, fill, ack[i-1], ack[i])
    end
  end  
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