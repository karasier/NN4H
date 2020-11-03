require 'HDLRuby'

configure_high
require_relative 'adder.rb'

adder(signed[15], signed[16]).(:adder_instance)

low = adder_instance.systemT.to_low

puts low.to_yaml