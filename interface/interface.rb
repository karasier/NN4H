# rubyを用いてHDLRubyで記述した回路を
# ジェネリックにインスタンス化するプログラム

require_relative 'adder.rb'

set_parameter(15)
# Instantiate it for checking.
adder :adderI

# Generate the low level representation.
low = adderI.systemT.to_low

# Displays it
puts low.to_yaml

