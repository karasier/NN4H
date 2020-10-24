# テスト用ベンチ
# 現在、xorの学習結果を移植している。

require "std/fixpoint.rb"
require_relative "network_constructor.rb"
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
    func = [sigmoid, linear] # 活性化関数
    
    neuron_columns = columns[1..-1]

    # ファイルからのパラメータ読み出し
    parameters = load_network("xor1.json")
  
    biases = parameters[:biases]
    weights = parameters[:weights]

    #weights_geometry = neuron_columns.zip(columns[0..-2])
    #biases_geometry = neuron_columns.map{ |col| col }
    
    #biases = biases_geometry.map{ |size| size.times.map{ rand(-1.0..1.0) }}  
    #weights = weights_geometry.map{ |shape| Array.new(shape[0], shape[1].times.map{ rand(-1.0..1.0) } ) }

    inputs = [1, 1]

    puts "inputs : #{inputs}"

    #---------------内部信号の宣言---------------------
    inner :clk,   # clock 
          :rst,   # reset
          :req,   # request
          :fill   # 入力値のメモリへの書き込み
  
    inner :ack_fill, # 書き込みのack
          :ack_network # ニューラルネットワークのack
  
    inputs = quantize(inputs, typ, decimal_width)
    # NOTE: 入力のメモリに関して
    # network_constructorにはbranchを渡すので、mem_romからmem_dualやmem_fileに変更できる。
    # ただし、branchはrincのみ。つまり、rincのbranchを持つメモリなら何でもOK。
    mem_rom(typ, columns[0], clk, rst, inputs, rinc: :rst, winc: :rst).(:rom_inputs) # 入力値を格納するrom

    mem_dual(typ, columns[-1], clk, rst, rinc: :rst, winc: :rst).(:ram_outputs) # 出力値を格納するram

    reader_inputs = rom_inputs.branch(:rinc) # 入力値の読み出し用branch
    writer_outputs = ram_outputs.branch(:winc) # 出力値の書き込み用branch

    network_constructor(columns, func, typ, integer_width, decimal_width, address_width, reader_inputs, writer_outputs, weights, biases).(:neural_network).(clk, rst, req, fill, ack_fill, ack_network)
  
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