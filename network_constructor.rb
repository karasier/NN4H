# 与えられた構造に基づいてニューラルネットワークを生成するモジュール
# undefined method "get_by_name"のエラーが発生している。(neurons_layerのインスタンス生成の時に)
# => branchの問題。子モジュールの子モジュールにはbranchが渡せない。
# インターフェースについて検討する必要あり。

require "std/memory.rb"
require "std/fixpoint.rb"
require_relative "neurons_layer.rb"
require_relative "quantize.rb"

include HDLRuby::High::Std

module FastNeurons
system :network_constructor do |columns, func, typ, integer_width, decimal_width, address_width, weights, biases|
  columns = columns.to_a
  func = func.to_a
  func = func.map{ |f| f.to_proc }
  typ = typ.to_type
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i
  address_width = address_width.to_i

  # 重みを持つ層の形
  neuron_columns = columns[1..-1]

  #------------------入出力の宣言-------------------
  input :clk, :rst, :req, :fill
  output :ack_network

  # ackのジェネリック宣言
  # 隠れ層と出力層の数だけ宣言
  ack = neuron_columns.size.times.map{ |i| inner :"ack_#{i}"}  

  # ニューラルネットワークの計算のack
  ack_network <= ack[-1]

  par(clk.posedge) do
    hif(rst) do
      neuron_columns.size.times do |i|
        ack[i] <= 0
      end
    end
  end
  #---------------チャンネルの宣言-------------------
  # ニューラルネットワークへの入力を格納するメモリ
  mem_dual(typ, columns[0], clk, rst, rinc: :rst, winc: :rst).(:channel_input)
  #inputs = [1, 1]
  #mem_rom(typ, columns[0], clk, rst, quantize(inputs, typ, decimal_width), rinc: :rst, winc: :rst).(:channel_input)

  # ニューラルネットワークからの出力を格納するメモリ
  mem_file(typ, columns[-1] , clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:channel_output)

  # ニューロンの出力値を格納するメモリ
  channel_a = (neuron_columns.size - 1).times.map{ |i| mem_file(typ, neuron_columns[i] , clk, rst, rinc: :rst, winc: :rst, anum: :rst).(:"channel_a#{i}") }  

  #---------------ブランチの宣言-------------------
  # 入力値のRead用ポート作成
  reader_input = channel_input.branch(:rinc)

  # 入力値のWrite用ポート作成
  writer_input = channel_input.branch(:winc)

  # 出力値のR/W用ポート
  accessor_output = channel_output.branch(:anum)    

  # 隠れ層の出力値のRead用ポート作成
  reader_a = (neuron_columns.size - 1).times.map{ |i| channel_a[i].branch(:rinc) }

  # ニューラルネットワークの出力値のR/W用ポート作成
  accessor_a = (neuron_columns.size - 1).times.map{ |i| channel_a[i].branch(:anum) }
  accessor_a << accessor_output

  # アクセスの固定化
  a = neuron_columns.size.times.map{ |i| neuron_columns[i].times.map{ |j| accessor_a[i].wrap(j) } }
  #---------------neurons_layerのインスタンス生成-------------------  
  neuron_columns.size.times do |i|
    if i == 0 then
      neurons_layer(func[i], typ, integer_width, decimal_width, address_width, columns[i], columns[i+1], reader_input, a[i], weights[i], biases[i]).(:"layer#{i}").(clk, rst, fill, req, ack[i])
    else
      neurons_layer(func[i], typ, integer_width, decimal_width, address_width, columns[i], columns[i+1], reader_a[i-1], a[i], weights[i], biases[i]).(:"layer#{i}").(clk, rst, fill, ack[i-1], ack[i])
    end
  end
  
  #---------------入力値の書き込み-------------------
#=begin
  inner :fill_inputs
  [columns[0].width].inner :address_inputs
  inner :ack_inputs
    
  #inputs = columns[0].times.map{ rand }
  inputs = [1, 1]
  puts "inputs : #{inputs}"

  typ[-columns[0]].constant rom_inputs: quantize(inputs, typ, decimal_width)
  
  fill_inputs <= fill & ~ack_inputs

  par(clk.posedge) do
    hif(rst) do
      address_inputs <= 0
      ack_inputs <= 0
    end

    hif(fill_inputs) do
      writer_input.write(rom_inputs[address_inputs])
      address_inputs <= address_inputs + 1      
    end

    hif(address_inputs == columns[0] - 1) do
      ack_inputs <= 1
    end
  end
#=end
end

def instantiate(columns, func, typ, integer_width, decimal_width, address_width, weights, biases)
  return network_constructor(columns, func, typ, integer_width, decimal_width, address_width, weights, biases).(:neural_network)
end

module_function :instantiate
end