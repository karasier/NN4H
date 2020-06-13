# メモ
# ・inputとoutputにfix_pointは使えない？
# ・constantのビット幅がおかしい

require "std/fixpoint.rb"

include HDLRuby::High::Std

size = 2**8 # size of LUT

system :tester do
  signed[32].input :data
  signed[32].output :tanh_output

  signed[32].inner :base,:next_data

  table(:tanh).(data[31..24],base,next_data)
  calculator(:my_calculator).(data[23..0],base,next_data,tanh_output)
end

# compute tanh
system :calculator do
  [24].input :decimal_part
  signed[32].input :base,:next_data

  signed[32].output :estimated_value

  estimated_value <= base + (next_data - base) * decimal_part
end

# module of tanh LUT
system :table do

  # address of LUT
  [8].input :addr

  # value of LUT that corresponds to address
  signed[32].output :base,:next_data

  # a linear approximated tanh
  signed[32][size].constant table: tanh(size)

  base <= table[addr]
  hif(addr == _b8b11111111) { next_data <= table[addr] }
  helse { next_data <= table[addr+1] }
end

# Make an array consists of a point of tanh.
# @param [Int] size the size of LUT
# @return [Array] arr an array consists of a point of tanh
def tanh(size)
  func = proc{ |i| Math.tanh(i) }
  range_array = Range.new(-size/2,size/2 - 1 ).to_a
  range_array.map!{ |value| convert(value,-size/2.to_f,size/2.to_f,-3.0,3.0) }
  table = range_array.map(&func).map{ |value| value }
  return table
end

# Convert value's range.
# @param [float] value the value you want to convert range
def convert(value,imin,imax,omin,omax)
  return omin + (omax - omin) * ((value - imin) / (imax - imin))
end
