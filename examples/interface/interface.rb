require 'HDLRuby'

configure_high
require_relative 'adder_gen.rb'

adder_gen(signed[15], signed[16]).(:adder_instance)

low = adder_instance.systemT.to_low

puts low.to_yaml