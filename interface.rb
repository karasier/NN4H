# rubyを用いてHDLRubyの回路記述を
# ジェネリックにインスタンス化して
# VerilogやVHDLの記述に変換する
# プログラム

require 'HDLRuby'
configure_high
require_relative 'network_constructor.rb'

# データ型の宣言
integer_width = 4 # 整数部のビット幅
decimal_width = 4 # 実数部のビット幅
address_width = 4 # lutのアドレスのビット幅
typ = signed[integer_width, decimal_width] # データ型  
tanh = proc{ |i| Math.tanh(i) }
    
# ニューラルネットワークの構造
columns = [2, 2, 1]
func = [tanh, tanh] # 活性化関数

# 重みを持つ層の形
neuron_columns = columns[1..-1]

# 重みとバイアスの配列の形状
weights_geometry = neuron_columns.zip(columns[0..-2])
biases_geometry = neuron_columns.map{ |col| col }

# ランダムに初期化した重みとバイアスの配列
biases = biases_geometry.map{ |size| size.times.map{ rand(-1.0..1.0) }}  
weights = weights_geometry.map{ |shape| Array.new(shape[0], shape[1].times.map{ rand(-1.0..1.0) } ) }

puts "biases : #{biases}"
puts "weights : #{weights}"

# Instantiate it for checking.
network_constructor(columns, func, typ, integer_width, decimal_width, address_width, weights, biases).(:neural_network)

# Generate the low level representation.
low = neural_network.systemT.to_low

# Displays it
puts low.to_yaml.size

