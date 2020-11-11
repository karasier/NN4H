require "std/memory.rb"
require "std/fixpoint.rb"
require_relative "network_constructor.rb"
require_relative "network_loader.rb"
require_relative "quantize.rb"

system :lstm_test do |columns, functions, types, integer_width,
decimal_width, address_width, inputs, weights, biases|
  columns = columns.to_a
  integer_width = integer_width.to_i
  decimal_width = decimal_width.to_i
  address_width = address_width.to_i
