# テスト用ベンチ
# 現在、xorの学習結果を移植している。

require "std/fixpoint.rb"
require_relative "network_constructor.rb"
require_relative "network_simulator.rb"
require_relative "network_loader.rb"
require_relative "quantize.rb"

system :network_bench do
    # データ型の宣言
    integer_width = 4 # 整数部のビット幅
    decimal_width = 4 # 実数部のビット幅
    address_width = 4 # lutのアドレスのビット幅
    typ = signed[integer_width, decimal_width] # データ型  
    tanh = proc{ |x| Math.tanh(x) }
    sigmoid = proc{ |x| 1 / (1 + Math.exp(-x)) }
    relu = proc{ |x| [x, 0].max }
    linear = proc { |x| x }
    
    # ニューラルネットワークの構造
    columns = [2, 2, 1]
    func = [relu, linear] # 活性化関数  

    # ファイルからのパラメータ読み出し
    parameters = load_network("xor2.json")
  
    biases = parameters[:biases]
    weights = parameters[:weights]    

    inputs = [1, 1]

    puts "inputs : #{inputs}"

    #---------------内部信号の宣言---------------------
    inner :clk,   # clock 
          :rst,   # reset
          :req,   # request
          :fill   # 入力値のメモリへの書き込み
  
    inner :ack_fill, # 書き込みのack
          :ack_network # ニューラルネットワークのack

    network_simulator(columns, func, typ, integer_width, decimal_width, address_width, inputs, weights, biases).(:nn_simulator).(clk, rst, req, fill, ack_fill, ack_network)
  
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
      clk <= 0
      !10.ps
      clk <= 1
      !10.ps
      
      # パラメータのメモリへの書き込み
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
      !10.ps

      # 計算の実行
      clk <= 0
      req <= 1
      !10.ps
      clk <= 1
      !10.ps
      clk <= 0
      !10.ps   
      30.times do
        clk <= 1
        !10.ps
        clk <= 0
        !10.ps     
      end
    end
  end