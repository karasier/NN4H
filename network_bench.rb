# テスト用ベンチ
# 現在、xorの学習結果を移植している。
# ファイル読み出しの手法を変えたところ正常に計算できることが確認できた。

require "std/fixpoint.rb"
require_relative "network_constructor.rb"
require_relative "network_loader.rb"

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
    
    neuron_columns = columns[1..-1]

    # ファイルからのパラメータ読み出し
    parameters = load_network("xor.json")

    # 重みとバイアスの配列の形状
    #weights_geometry = neuron_columns.zip(columns[0..-2])
    #biases_geometry = neuron_columns.map{ |col| col }
  
    # ランダムに初期化した重みとバイアスの配列
    #biases = biases_geometry.map{ |size| size.times.map{ rand(-1.0..1.0) }}  
    #weights = weights_geometry.map{ |shape| Array.new(shape[0], shape[1].times.map{ rand(-1.0..1.0) } ) }
  
    biases = parameters[:biases]
    weights = parameters[:weights]

    #puts "biases : #{biases}"
    #puts "weights : #{weights}"

    #---------------内部信号の宣言---------------------
    inner :clk,   # clock 
          :rst,   # reset
          :req,   # request
          :fill   # メモリの初期化用
  
    inner :ack    # ニューラルネットワークのack
  
    network_constructor(columns, func, typ, integer_width, decimal_width, address_width, weights, biases).(:neural_network).(clk, rst, req, fill, ack)
  
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