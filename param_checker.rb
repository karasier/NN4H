require "std/fixpoint.rb"
require_relative "quantize.rb"
require_relative "network_loader.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

# System for testing calculation of neural network.
system :param_checker do
    integer_width = 4 # 整数部のビット幅
    decimal_width = 4 # 実数部のビット幅
    address_width = 4 # lutのアドレスのビット幅
    typ = signed[integer_width, decimal_width] # データ型  
    func = proc{ |i| Math.tanh(i) }

    # input signal
    signed[4, 4].inner :x0, :x1

    # weights of layer0
    signed[4, 4].inner :w00_0, :w01_0, :w10_0, :w11_0

    # biases of layer0
    signed[4, 4].inner :b0_0, :b1_0
    signed[4, 4].inner :z0_0, :z1_0
    signed[4, 4].inner :a0_0, :a1_0

    # weights of layer1
    signed[4, 4].inner :w00_1, :w10_1

    # bias of layer1
    signed[4, 4].inner :b0_1
    signed[4, 4].inner :z0_1
    signed[4, 4].inner :a0_1

    # product of neuron outputs and weights
    signed[4, 4].inner :r0_0, :r1_0
    signed[4, 4].inner :r0_1, :r1_1
    
    # activation function for layer0
    activation_function(func, typ, integer_width, decimal_width, address_width).(:func0_0).(z0_0, a0_0)
    activation_function(func, typ, integer_width, decimal_width, address_width).(:func1_0).(z1_0, a1_0)

    # activation function for layer1
    activation_function(func, typ, integer_width, decimal_width, address_width).(:func0_1).(z0_1, a0_1)

    timed do
        x0 <= _b8b00010000
        x1 <= _b8b00010000
        w00_0 <= _b8b00010101
        w01_0 <= _b8b00011110
        w10_0 <= _b8b11101001
        w11_0 <= _b8b11011101
        b0_0 <= _b8b11111001
        b1_0 <= _b8b00010011

        w00_1 <= _b8b00011010
        w10_1 <= _b8b11100111
        b0_1 <= _b8b00100010
        !10.ps
        r0_0 <= w00_0 * x0 + w10_0 * x1
        z0_0 <= r0_0 + b0_0
        r1_0 <= w01_0 * x0 + w11_0 * x1
        z1_0 <= r1_0 + b1_0
        !10.ps
        r0_1 <= w00_1 * a0_0
        r1_1 <= w10_1 * a1_0
        z0_1 <= r0_1 + r1_1 + b0_1
        !10.ps
    end
end
