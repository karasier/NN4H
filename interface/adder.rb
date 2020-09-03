require 'HDLRuby'

def set_parameter(width)
  $bit_width = width
end

configure_high
  # A simple 16-bit adder
system :adder do
  [$bit_width].input :x,:y
  [$bit_width + 1].output :s

  s <= x + y
end



