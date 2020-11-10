require_relative '..\..\FastNeurons\lib\fast_neurons.rb'
require_relative './lstm.rb'

#LSTMCellの数
lstm_size = 1500

# 入力データx
x = Array.new().map{Array.new(7,0)}

# text本文の出力
# f = File.open("fakeNewsDataset/fake/biz01.fake.txt")
# puts f.read

# 入力データファイルの読み込み => 2進数変換
File.open("fakeNewsDataset/fake/biz01.fake.txt") do |f|
  f.each_codepoint.each_with_index do |a, i|
    x[i] = a.to_s(2).chars
    # print "#{a.to_s(2)} "
    # print " #{i} "
    # print a.to_s(2)
    # print " "
  end
end

# 型変換 : String => Float
x = x.map{|x| x.map{|x| x.to_f}}

# 入力データサイズの均一化(size = 7)
x.map do |i|
  while(i.size < 7) do
    i.unshift(0.0)
  end
end
# print x.size
# print x

#LSTMCell実行テスト
# cell = LSTMCell.new(7,7)

# cell.input([1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0],
#            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
#            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])

# cell.propagate
# c,h = cell.output
# puts c
# puts h


#LSTM 実行test
# x = [[1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0],
#      [0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0],
#      [1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0],
#      [1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0],
#      [0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0],
#      [1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0],
#      [1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0],
#      [0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0],
#      [1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0]]

lstm = LSTM.new(lstm_size,7,7)
puts "\nlstm_size: #{lstm_size}"
lstm.input(x)
lstm.propagate

# lstm.output_x_in
# lstm.output_c_out
# lstm.output_h_out

lstm.foutput_x_in
lstm.foutput_c_out
lstm.foutput_h_out