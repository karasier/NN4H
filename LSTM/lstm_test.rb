require_relative '..\..\FastNeurons\lib\fast_neurons.rb'
require_relative './lstm.rb'

#LSTMCell test

# cell = LSTMCell.new(7,7)

# cell.input([1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0],
#            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
#            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])

# cell.propagate
# c,h = cell.output
# puts c
# puts h

#LSTM test

#lstm = LSTM.new(1000,7,7)
x = [[1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0],
     [0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0],
     [1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0]]
lstm = LSTM.new(3,7,7)
lstm.input(x)
lstm.propagate
#print lstm.output
