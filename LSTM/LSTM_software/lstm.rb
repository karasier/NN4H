#require_relative 'FastNeurons-master/lib/fast_neurons'
require_relative '..\..\..\FastNeurons\lib\fast_neurons.rb'

# LSTMブロックを表現するLSTMCellクラス
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

  # 各データの入力メソッド
  def input(x, c, h)
    @x_in = x.clone
    @c_in = c.is_a?(Array) ? N[c, dtype: :float64].transpose : c.clone
    @h_in = h.clone

    #  puts "\ninput: data"
    #  print @x_in.class
    #  puts
    #  print @c_in.class
    #  puts
    #  print @h_in.class
    #  puts
  end

  # 出力メソッド(長記憶, 短記憶)
  def output
    return [@c_out, @h_out]
  end

  # 実行メソッド
  def propagate
    #忘却ゲート
    uvw = proc { @c_in * @nn_forget.get_outputs }

    #入力ゲート
    xyz = proc { @nn_input0.get_outputs * @nn_input1.get_outputs }

    #出力ゲート
    abc = proc { uvw.call + xyz.call }

    pqr = proc { abc.call.map {|u| Math.tanh(u) }}

    nn_output1 = proc { pqr.call * @nn_output0.get_outputs}

    nn_inputs = @x_in + @c_in.to_a
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


#LSTM全体を表現するLSTMクラス
class LSTM

  def initialize(cells_num, x_size, h_size)
    @cells = cells_num.times.map { LSTMCell.new(x_size, h_size) }
  end

  def input(x)
    @xs = x.to_a
    @cells[0].input(@xs[0],[0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],[0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
  end

  def propagate
    #長短期記憶用配列の初期化宣言
    @c = []
    @h = []

    # 最初のLSTMCellの実行
    @cells[0].propagate
    @c[0],@h[0] = @cells[0].output

    # @cells[1].input(@xs[1],@c[0],@h[0])
    # puts "\ncells[1]: propagate"
    # @cells[1].propagate
    # @c[1],@h[1] = @cells[1].output

    # @cells[2].input(@xs[2],@c[1],@h[1])
    # puts "\ncells[1]: propagate"
    # @cells[2].propagate
    # @c[2],@h[2] = @cells[2].output

    # puts "output data"
    # puts "#{@c[2]}"
    # puts ""
    # puts "#{@h[2]}"
    # puts ""

    # ループでinput～output実行
     for i in 1..@cells.length-1 do
       @cells[i].input(@xs[i].nil? ? [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0] : @xs[i], @c[i-1], @h[i-1])
       @cells[i].propagate
       @c[i], @h[i] =@cells[i].output
      #  print @c[i]
      #  puts
      #  print @h[i]
     end
  end

  def output_x_in
    puts "\noutput: x_in"
    @xs.each_with_index do |x, i|
      puts "x_in[#{i}]: #{x}"
    end
  end

  def foutput_x_in
    print "\nfoutput: x_in... "
    file = File.open('x_in.txt',"w")
    @xs.each_with_index do |x, i|
      file.puts "x_in[#{i}]: #{x}"
    end
    puts "Success!!"
  end

  def output_c_out
    puts "\noutput: c_out"
    @c.each_with_index do |x, i|
      puts "c_out[#{i}]: #{x}"
    end
  end

  def foutput_c_out
    print "\nfoutput: c_out... "
    file = File.open('c_out.txt',"w")
    @c.each_with_index do |x, i|
      file.puts "c_out[#{i}]: #{x}"
    end
    puts "Success!!"
  end

  def output_h_out
    puts "\noutput: h_out"
    @h.each_with_index do |x, i|
      puts "h_out[#{i}]: #{x}"
    end
  end

  def foutput_h_out
    print "\nfoutput: h_out... "
    file = File.open('h_out.txt',"w")
    @h.each_with_index do |x, i|
      file.puts "h_out[#{i}]: #{x}"
    end
    puts "Success!!"
  end
end
