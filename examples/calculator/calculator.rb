# An example of generic module.
system :calc_bench do
    calculator([4], [5], proc{ |x, y| x + y}).(:adder)
    calculator([4], [5], proc{ |x, y| x - y}).(:subtractor)
    calculator([4], [8], proc{ |x, y| x * y}).(:multiplier)
    calculator([4], [8], proc{ |x, y| x / y}).(:divider)
  end
  
  system :calculator do |typ0, typ1, calc|
    typ0.input :x,:y
    typ1.output :s
  
    s <= calc.(x, y)
  end