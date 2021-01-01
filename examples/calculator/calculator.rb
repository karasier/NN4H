# An example of generic module.
system :calc_bench do
  calculator([4], [5], proc{ |x, y| x + y}).(:adder)
  calculator([4], [5], proc{ |x, y| x - y}).(:subtractor)
  calculator(signed[4], signed[8], proc{ |x, y| x * y}).(:multiplier)
  calculator(signed[4], signed[8], proc{ |x, y| x / y}).(:divider)
end
  
system :calculator do |typ0, typ1, calc|
  typ0.input :a,:b
  typ1.output :s
  
  s <= calc.(a, b)
end