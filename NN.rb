require "std/fixpoint.rb"

include HDLRuby::High::Std

size = 2**8 # size of LUT

system :tester do
  [32].input :data
  [32].output :tanh_output

  [32].inner :data_prev,:data_next

  table(:tanh).(data[31..24],data_prev,data_next)
  linear(:my_linear).(data[23..0],data_prev,data_next,tanh_output)
end

# compute tanh
system :linear do
  [24].input :decimal_part
  signed[32].input :data_prev,:data_next

  [32].output :g

  g <= data_prev + (data_next - data_prev) * decimal_part
end

# module of tanh LUT
system :table do

  # address of LUT
  [8].input :addr

  # value of LUT that corresponds to address
  signed[8].output :data_prev,:data_next

  # a linear approximated tanh
  signed[32][size].constant table_prev: approximate_tanh(size,:prev)
  signed[32][size].constant table_next: approximate_tanh(size,:next)

  data_prev <= table_prev[addr]
  data_next <= table_next[addr]
end

# make array for LUT
def approximate_tanh(size,symbol)
  th = size/4 # threshold
  range = (-size/2).upto(size/2-1).to_a

  if symbol == :next
    arr = range.map{ |num| num.abs < th ? num : num >= 0 ? th : -th }
  else
    arr = range.map{ |num| num.abs < th ? num+1 : num >= 0 ? th : -th }
  end

  return arr
end
