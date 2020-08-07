# テスト用ベンチ

require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

integer_width = 4
decimal_width = 4
addr_width = 4

#typ = signed[integer_width, decimal_width]
typ = bit[integer_width + decimal_width]

func = proc{ |i| Math.tanh(i) }

system :tester do
  typ.inner :z_value, :a

  activation_function(func, typ, integer_width, decimal_width, addr_width).(:tanh).(z_value, a)

  timed do
    z_value <= _b32b00000000000000000000000000000000
    !10.ps
    z_value <= _b32b11111111111111111111111111111111
    !10.ps
  end
end