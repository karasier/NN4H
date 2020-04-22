require "std/fixpoint.rb"

include HDLRuby::High::Std

system :tanh do |width|
  func = proc{|i| Math.tanh(i)}
  size = 2**width

  [width].input :addr
  [8].output :data

  signed[8][size].constant content: (-size/2).upto(size/2).map(&func)

  data <= content[addr]
end
