# テスト用ベンチ

require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

int_w = 4
dec_w = 28
addr_w = 8
func = proc{ |i| Math.tanh(i) }

system :tester do
  signed[int_w, dec_w].inner :z_value, :a

  activation_function(func, int_w, dec_w, addr_w).(:tanh).(z_value, a)

  timed do
    z_value <= _b32b0
    !10.ps
    z_value <= _b32b00000001010111111111101110000000
    !10.ps
  end
end