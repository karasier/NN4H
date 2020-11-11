require "std/fixpoint.rb"
require_relative "network_constructor.rb"
require_relative "network_simulator.rb"
require_relative "network_loader.rb"
require_relative "quantize.rb"

system :lstm_test do
    # データ型の宣言
    integer_width = 4 # 整数部のビット幅
    decimal_width = 4 # 実数部のビット幅
    address_width = 4 # lutのアドレスのビット幅
    typ = signed[integer_width, decimal_width] # データ型
    tanh = proc{ |x| Math.tanh(x) }
    sigmoid = proc{ |x| 1 / (1 + Math.exp(-x)) }
    linear = proc { |x| x }

    # ニューラルネットワークの構造
    columns0 = [2, 2, 1]
    func0 = [sigmoid, linear] # 活性化関数

    cllumns0 = [2, 2, 1]
    func1 = [tanh, linear]   # 活性化関数

    parameters0 = load_network("xor1.json")
    parameters1 = load_network("xor.json")

    biases0 = parameters0[:biases]
    weights0 = parameters0[:weights]

    biases1 = parameters1[:biases]
    weights1 = parameters1[:weights]

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
end
