require_relative 'FastNeurons-master/lib/fast_neurons'
require './lstm.rb'

cell = LSTMCell.new(7,7)

cell.input([1.0,0.0,0.0,1.0,1.0,1.0,0.0],[0.0,0.0,0.0,0.0,0.0,0.0,0.0],
           [0.0,0.0,0.0,0.0,0.0,0.0,0.0])
cell.propagate
print cell.output
