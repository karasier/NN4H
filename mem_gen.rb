require 'std/memory.rb'
require 'std/linear.rb'

system :mem_gen do |layer_num|
  inner :clk, :rst, :req

  mem = []
  2.times do |i|
    mem << mem_dual([8], 2, clk, rst, rinc: :rst, winc: :rst).(:"mem#{i}")    
  end  

  #mem = 2.times.map {|i| send(:"mem#{i}")}

  read = Array.new(2)
  2.times do |i|
    read[i] = mem[i].branch(:rinc)
  end  
  
  2.times do |i|
    inner ":ack#{layer_num}#{i}"
  end
end