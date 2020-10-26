require_relative '..\..\FastNeurons\lib\fast_neurons.rb'
require_relative './lstm.rb'

#LSTMCell test
cell = LSTMCell.new(7,7)

cell.input([1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0],
           [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
           [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])

cell.propagate

print cell.output

#LSTM test

#lstm = LSTM.new(1000,7,7)
lstm = LSTM.new(2,7,7)
