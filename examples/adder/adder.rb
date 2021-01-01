system :adder do
  [3..0].input :a,:b
  [4].output :s
  output :carry
  
  [carry, s] <= a + b
end