# rubyを用いてHDLRubyの回路記述を
# ジェネリックにインスタンス化して
# VerilogやVHDLの記述に変換する
# プログラム

require 'HDLRuby'
configure_high
require_relative 'network_constructor.rb'
#!/usr/bin/ruby

require 'fileutils'
require 'HDLRuby'
require 'HDLRuby/hruby_check.rb'
# require 'ripper'
require 'HDLRuby/hruby_low2high'
require 'HDLRuby/hruby_low2c'
require 'HDLRuby/hruby_low2vhd'
require 'HDLRuby/hruby_low_fix_types'
# require 'HDLRuby/hruby_low_expand_types' # For now dormant
require 'HDLRuby/hruby_low_without_outread'
require 'HDLRuby/hruby_low_with_bool'
require 'HDLRuby/hruby_low_bool2select'
require 'HDLRuby/hruby_low_without_select'
require 'HDLRuby/hruby_low_without_namespace'
require 'HDLRuby/hruby_low_without_bit2vector'
require 'HDLRuby/hruby_low_with_port'
require 'HDLRuby/hruby_low_with_var'
require 'HDLRuby/hruby_low_without_concat'
require 'HDLRuby/hruby_low_without_connection'
require 'HDLRuby/hruby_low_cleanup'

require 'HDLRuby/hruby_verilog.rb'

require 'HDLRuby/backend/hruby_allocator'
require 'HDLRuby/backend/hruby_c_allocator'


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

def to_verilog(top_instance)
  # Generate the low level representation.
  top_system = top_instance.to_low.systemT

  top_system.each_systemT_deep do |systemT|
    systemT.to_upper_space!
    systemT.to_global_systemTs!
    
    # systemT.break_types!
    # systemT.expand_types!
    systemT.initial_concat_to_timed!
    systemT.with_port!
  end

  output = []
  # Single file generation mode.
  top_system.each_systemT_deep.reverse_each do |systemT|
    output << systemT.to_verilog
  end

  # Displays it
  puts output
end

def to_vhdl(top_instance)
  top_system = top_instance.to_low.systemT

  top_system.each_systemT_deep do |systemT|
    systemT.outread2inner!            #unless $options[:vhdl08] || $options[:alliance]
    systemT.with_boolean!
    systemT.boolean_in_assign2select! #unless $options[:alliance]
    systemT.bit2vector2inner!         #unless $options[:vhdl08] || $options[:alliance]
    systemT.select2case!              # if     $options[:alliance]
    systemT.break_concat_assigns!     # if     $options[:alliance]
    systemT.to_upper_space!
    systemT.to_global_systemTs!
    systemT.break_types!
    systemT.with_port!
    systemT.with_var!
    systemT.cleanup!
  end 

  output = []
  # Single file generation mode.
  top_system.each_systemT_deep.reverse_each do |systemT|
    output << systemT.to_vhdl
  end

  # Displays it
  puts output
end

to_verilog(neural_network)
to_vhdl(neural_network)

