# rubyを用いてHDLRubyで記述した回路を
# ジェネリックにインスタンス化するプログラム
require 'HDLRuby'
configure_high
require_relative 'adder.rb'

# Instantiate it for checking.
adder(signed[15]).(:adderI)

# Generate the low level representation.
low = adderI.systemT.to_low

# Displays it
puts low.to_yaml

