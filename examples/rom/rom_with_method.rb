system :rom_with_method do
    [2].input :addr
    [8].output :data

    size = 2 ** addr.width
    bit[8][-size].constant content: initialize_rom(size)

    data <= content[addr]
end

def initialize_rom(size)
  return size.times.map{ |i| i * 2 }
end
