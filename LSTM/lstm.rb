repuire_realative 'FastNeurons-master/lib/fast_neurons'

f = File.open("fakeNewsDataset/fake/biz01.fake.txt");

#入力データ[c_in,h_in,x_in]
inputs = [ [[1,2], [3,4], [5,6]], [[1,2], [3,4], [5,6]] ]

c_in = h_in = x_in = nil

nn_forget = FastNeurons::NN.new([8,1],[:Sigmoid])

nn_input0 = FastNeurons::NN.new([8,1],[:Sigmoid])

nn_input1 = FastNeurons::NN.new([8,1],[:Tanh])

nn_output0 = FastNeurons::NN.new([8,1],[:Sigmoid])

# nn_output1 = FastNeurons::NN.new([2,1],[:Tanh])
nn_output1 = proc { abc.call.map {|u| Math.tanh(u) }}

#忘却ゲート
uvw = proc { c_in * nn_forget.get_outputs }

#入力ゲート
xyz = proc { nn_input0.get_outputs * nn_input1 }

#出力ゲート
abc = proc { uvw.call + xyz.call }

inputs.each |c, h, x|
   c_in = N[c, dtype: :float].transpose
   h_in = N[h, dtype: :float].transpose
   x_in = N[x, dtype: :float].transpose
   nn_inputs = x + c
   nn_forget.input(nn_inputs)
   nn_input0.input(nn_inputs)
   ...
   nn_forget.propagate
   ...
end

nn_forget.randomize
nn_input0.randomize
nn_input1.randomize
nn_output0.randomize
nn_output1.randomize
