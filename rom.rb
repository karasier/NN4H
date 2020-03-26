system :rom do
  [4].input :addr
  [8].output :data

  bit[8][32].constant content: Array.new(32) {|i| i == 0 ? 0 : i == 1 ? 1:i+2**i}

  data <= content[addr]
end
