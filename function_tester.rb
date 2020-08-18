# テスト用ベンチ
# Icarus Verilogで活性化関数の出力値に近い値が出ていることが確認できた
# 整数部のみの場合の対応を検討する必要あり

require "std/fixpoint.rb"
require_relative "activation_function.rb"

include HDLRuby::High::Std

integer_width = 4
decimal_width = 4

typ = signed[integer_width, decimal_width]

func = proc{ |i| Math.tanh(i) }

system :tester do
  typ.inner :z_value, :a

  activation_function(func, typ, integer_width, decimal_width).(:tanh).(z_value, a)

  timed do
    z_value <= _b8b00000000
    !10.ps
    z_value <= _b8b10110000
    !10.ps
    z_value <= _b8b11111111
    !10.ps
  end
end