# A simple 16-bit adder
system :adder do |type|
  type.input :x,:y
  type.output :s

  s <= x + y
end