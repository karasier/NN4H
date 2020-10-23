require_relative 'FastNeurons-master/lib/fast_neurons'

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
    #@x_in = N[x, dtype: :float]
    #@c_in = N[c, dtype: :float]
    #@h_in = N[h, dtype: :float]
    @x_in = x.clone
    @c_in = c.clone
    @h_in = h.clone

  end

  def output
    return [@h_out.to_a, @c_out.to_a]
  end

  def propagate


    #忘却ゲート
    uvw = proc { N[@c_in, dtype: :float64].transpose * @nn_forget.get_outputs }

    #入力ゲート
    xyz = proc { @nn_input0.get_outputs * @nn_input1.get_outputs }

    #出力ゲート
    abc = proc { uvw.call + xyz.call }

    # nn_output1 = FastNeurons::NN.new([2,1],[:Tanh])
    pqr = proc { abc.call.map {|u| Math.tanh(u) }}

    nn_output1 = proc { pqr.call * @nn_output0.get_outputs}

    nn_inputs = @x_in + @c_in
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
      @cells = cells_num.times { LSTMCell.new(x_size, h_size) }
  end

  def input(xs)
     @xs = x.to_a
  end

  def propagate

  end
end
