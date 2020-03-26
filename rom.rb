system :rom do
  [4].input :addr
  [8].output :data

  bit[32][32].constant mask: Array.new(32) {|i| i == 0 ? 0 : i == 1 ? 1 : Array.new(i){|j| 2**j}.sum }

  data <= mask[addr]
end
