# メモ

require "std/fixpoint.rb"
require_relative "binfixed.rb"

include HDLRuby::High::Std

# インスタンス化のテストモジュール
system :tester do
  signed[4,28].inner :z
  signed[4,28].inner :a

  signed[4,28].inner :base,:next_data

  table(8, 4, 28, proc{ |i| Math.tanh(i) }).(:my_table).(z[31..24],base,next_data)
  calculator(4, 28).(:my_calculator).(z[23..0],base,next_data,a)

  timed do
    z <= _b32b00000001010111111111101110000000
  end
end

# module of activation function's LUT
# 活性化関数のLUTを表現するモジュール
# 任意の活性化関数をprocで渡せる
system :table do |addr_width, integer_width, decimal_width, activation_function|
  size = 2 ** addr_width

  # address of LUT
  [addr_width].input :addr

  # value of LUT that corresponds to address
  signed[integer_width, decimal_width].output :base,:next_data
  
  # points of tanh
  # tanhの点を格納するLUT
  signed[integer_width, decimal_width][size].constant table: initialize_table(size, integer_width, decimal_width, activation_function)

  base <= table[addr]

  # アドレスが255の場合、次のデータは最後のデータと等しい
  hif(addr == [_b1] * size.width ) { next_data <= table[addr] }
  helse { next_data <= table[addr+1] }
end

# compute tanh
# LUTの点の間の値を計算するモジュール
system :calculator do |integer_width, decimal_width|
  [decimal_width].input :decimal_part
  signed[integer_width, decimal_width].input :base,:next_data

  signed[integer_width, decimal_width].output :estimated_value

  estimated_value <= base + (next_data - base) * decimal_part
end

# Make an array consists of a point of tanh.
# @param [Integer] size the size of LUT
# @return [Array] table an array consists of a point of tanh
def initialize_table(size, integer_width, decimal_width, func)
  # 表現可能なアドレスの範囲
  range_array = Range.new(-size/2,size/2 - 1).to_a

  # 範囲の変換
  range_array.map!{ |value| convert(value,-size/2.to_f,size/2.to_f,-3.0,3.0) }

  # 活性化関数の適用
  table = range_array.map(&func).map{ |value| value.to_fix(decimal_width) }

  # 配列を分割して順番入れ替え
  sliced = table.each_slice(size/2).to_a
  table = [sliced[1], sliced[0]].flatten
  
  return table
end

# Convert value's range.
# @param [Float] value the value you want to convert range
def convert(value,imin,imax,omin,omax)
  return omin + (omax - omin) * ((value - imin) / (imax - imin))
end
