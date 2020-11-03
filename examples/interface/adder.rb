system :adder do |typ0, typ1|
  typ0.input :x,:y
  typ1.output :s

  s <= x + y
end