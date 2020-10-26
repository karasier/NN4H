require_relative '..\..\FastNeurons\lib\fast_neurons.rb'
require_relative './lstm.rb'

cell = LSTMCell.new(7,7)

cell.input([1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0],
           [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
           [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
cell.propagate
print cell.output
