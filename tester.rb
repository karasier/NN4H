# テスト用ベンチ

require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

integer_width = 4
decimal_width = 28
addr_width = 8
func = proc{ |i| Math.tanh(i) }

# インスタンス化のテストモジュール
system :tester do
  signed[integer_width, decimal_width].inner :z_value
  signed[integer_width, decimal_width].inner :a

  activation_function(func, integer_width, decimal_width, addr_width).(:tanh).(z_value, a)

  timed do
    z_value <= _b32b0
    !10.ps
    z_value <= _b32b00000001010111111111101110000000
    !10.ps
  end
end