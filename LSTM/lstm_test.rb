require_relative 'FastNeurons-master/lib/fast_neurons'
require './lstm.rb'

cell = LSTM.new(7,7)

cell.input([1.0,0.0,0.0,1.0,1.0,1.0,0.0],[0.0,0.0,0.0,0.0,0.0,0.0,0.0],
           [0.0,0.0,0.0,0.0,0.0,0.0,0.0])
cell.propagate
puts cell.output
