require 'std/memory.rb'
require 'std/linear.rb'

system :mem_bench do
  inner :clk, :rst, :req

  mem = []
  2.times do |i|
    mem << mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:"mem#{i}")    
  end

  #mem = 2.times.map {|i| send(:"mem#{i}")}

  2.times do |i|
    mem[i].branch(:rinc).inner :read[i]
  end
end