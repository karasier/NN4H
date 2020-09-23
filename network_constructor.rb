# 与えられた構造に基づいてニューラルネットワークを生成するモジュールとテストベンチ
# undefined method "get_by_name"のエラーが発生している。(neurons_layerのインスタンス生成の時に)
# => branchの問題。子モジュールの子モジュールにはbranchが渡せない。
# インターフェースについて検討する必要あり。

require "std/memory.rb"
require "std/fixpoint.rb"
require_relative "neurons_layer.rb"

include HDLRuby::High::Std

system :network_bench do
  # データ型の宣言
  integer_width = 4 # 整数部のビット幅
  decimal_width = 4 # 実数部のビット幅
  address_width = 4 # lutのアドレスのビット幅
  typ = signed[integer_width, decimal_width] # データ型  
  tanh = proc{ |i| Math.tanh(i) }
  # ニューラルネットワークの構造
  columns = [2, 2, 1]
  func = [tanh, tanh] # 活性化関数
  #---------------内部信号の宣言---------------------
  inner :clk,   # clock 
        :rst,   # reset
        :req,   # request
        :fill   # メモリの初期化用

  inner :ack    # ニューラルネットワークのack

  network_constructor(columns, func, typ, integer_width, decimal_width, address_width).(:neural_network).(clk, rst, req, fill, ack)

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

system :network_constructor do |columns, func, typ, integer_width, decimal_width, address_width|
  columns = columns.to_a
  func = func.to_a
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i
  address_width = address_width.to_i

  # 重みを持つ層の形
  neuron_columns = columns[1..-1]

  input :clk, :rst, :req, :fill
  output :ack_network

  # ackのジェネリック宣言
  # 隠れ層と出力層の数だけ宣言
  ack = neuron_columns.size.times.map{ |i| inner :"ack_#{i}"}  

  # ニューラルネットワークの計算のack
  ack_network <= ack[-1]
  #---------------チャンネルの宣言-------------------
  # ニューラルネットワークへの入力を格納するメモリ
  mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:channel_input)

  # ニューラルネットワークからの出力を格納するメモリ
  mem_file(typ, columns[-1] , clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_output)

  # ニューロンの出力値を格納するメモリ
  channel_a = (neuron_columns.size - 1).times.map{ |i| mem_file(typ, neuron_columns[i] , clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:"channel_a#{i}") }  

  #---------------ブランチの宣言-------------------
  # 入力値のRead用ポート作成
  reader_input = channel_input.branch(:rinc)

  # 入力値のWrite用ポート作成
  writer_input = channel_input.branch(:winc)

  # 出力値のR/W用ポート
  accessor_output = channel_output.branch(:anum)    

  # 隠れ層の出力値のRead用ポート作成
  reader_a = (neuron_columns.size - 1).times.map{ |i| channel_a[i].branch(:rinc) }

  # ニューラルネットワークの出力値のR/W用ポート作成
  accessor_a = (neuron_columns.size - 1).times.map{ |i| channel_a[i].branch(:anum) }
  accessor_a << accessor_output

  # アクセスの固定化
  a = neuron_columns.size.times.map{ |i| neuron_columns[i].times.map{ |j| accessor_a[i].wrap(j) } }
  #---------------neurons_layerのインスタンス生成-------------------  
  neuron_columns.size.times do |i|
    if i == 0 then
      neurons_layer(func[i], typ, integer_width, decimal_width, address_width, columns[i], columns[i+1], reader_input, a[i]).(:"layer#{i}").(clk, rst, fill, req, ack[i])
    else
      neurons_layer(func[i], typ, integer_width, decimal_width, address_width, columns[i], columns[i+1], reader_a[i-1], a[i]).(:"layer#{i}").(clk, rst, fill, ack[i-1], ack[i])
    end
  end
  
  #---------------テストベンチと入力値の書き込み-------------------
  par(clk.posedge) do
    hif(fill) do
      writer_input.write(_b8b00010000)
    end
  end
end