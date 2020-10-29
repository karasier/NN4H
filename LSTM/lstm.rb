#require_relative 'FastNeurons-master/lib/fast_neurons'
require_relative '..\..\FastNeurons\lib\fast_neurons.rb'
class LSTMCell
  def initialize(x_size,h_size)
    @nn_forget = FastNeurons::NN.new([x_size + h_size,h_size],[:Sigmoid])

    @nn_input0 = FastNeurons::NN.new([x_size + h_size,h_size],[:Sigmoid])

    @nn_input1 = FastNeurons::NN.new([x_size + h_size,h_size],[:Tanh])

    @nn_output0 = FastNeurons::NN.new([x_size + h_size,h_size],[:Sigmoid])

    @nn_forget.randomize
    @nn_input0.randomize
    @nn_input1.randomize
    @nn_output0.randomize

  end

  def input(x, c, h)
    # @x_in = N[x, dtype: :float]
    # @c_in = N[c, dtype: :float]
    # @h_in = N[h, dtype: :float]

    # @x_in = N[x.clone.flatten, dtype: :float64].transpose
    # @c_in = N[c.clone.flatten, dtype: :float64].transpose
    # @h_in = N[h.clone.flatten, dtype: :float64].transpose

    @x_in = x.clone
    @c_in = c.clone
    @h_in = h.clone

     puts "\ninput: data"
     print @x_in
     puts
     print @c_in
     puts
     print @h_in
     puts
  end

  def output
    #return [@c_out.to_a, @h_out.to_a]
    return [@c_out, @h_out]
  end

  def propagate

    #忘却ゲート
    uvw = proc { N[@c_in, dtype: :float64].transpose * @nn_forget.get_outputs }
    # uvw = proc { @c_in * @nn_forget.get_outputs }

    #入力ゲート
    xyz = proc { @nn_input0.get_outputs * @nn_input1.get_outputs }

    #出力ゲート
    abc = proc { uvw.call + xyz.call }

    # nn_output1 = FastNeurons::NN.new([2,1],[:Tanh])
    pqr = proc { abc.call.map {|u| Math.tanh(u) }}

    nn_output1 = proc { pqr.call * @nn_output0.get_outputs}

    # puts "\npropagate:@x_in,@c_in"
    # print @x_in
    # puts
    # print @c_in
    # puts

    puts "class: @x_in, @c_in"
    puts @x_in.class
    puts @c_in.class

    nn_inputs = @x_in + @c_in
    # print nn_inputs
    @nn_forget.input(nn_inputs)
    @nn_input0.input(nn_inputs)
    @nn_input1.input(nn_inputs)
    @nn_output0.input(nn_inputs)

    @nn_forget.propagate
    @nn_input0.propagate
    @nn_input1.propagate
    @nn_output0.propagate

    @h_out = nn_output1.call
    @c_out = abc.call

  end

  def back_propagate


  end

end



class LSTM

  def initialize(cells_num, x_size, h_size)
    @cells = cells_num.times.map { LSTMCell.new(x_size, h_size) }
  end

  def input(x)
    @xs = x.to_a
    #puts @cells[0]
    # @cells.each do |i|
    #   @cells[i].input(@xs[i],[0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
    #                  [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    # end
    @cells[0].input(@xs[0],[0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],[0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
  end

  def propagate
    puts "\ncells[0]: propagate"
    @cells[0].propagate
    @c,@h = @cells[0].output
    # puts "output data"
    # puts @c
    # puts @h

    @cells[1].input(@xs[1],@c,@h)
    puts "\ncells[1]: propagate"
    @cells[1].propagate
    # puts "output data"
    # puts @c
    # puts @h

    # puts @cells.length
    #  for i in 1..@cells.length-1 do
    #    print @cells[i-1].output
    #    puts
    #    @c_in, @h_in =@cells[i-1].output
    #    print @c_in
    #    puts
    #    print @h_in
    #    @cells[i].input(@xs[i], @c_in, @h_in)
    #    @cells[i].propagate
    #  end
  end
end
