system :table_test do
  [2].inner :addr
  [2].inner :data

  table(:my_table).(addr, data)
  
  timed do
    addr <= _b2b00
    !10.ps
    addr <= _b2b01
    !10.ps
    addr <= _b2b10
    !10.ps
    addr <= _b2b11
  end

end

system :table do
    [2].input :addr
    [2].output :data
    
    bit[2][-4].constant  content: 4.times.to_a

    data <= content[addr]
end
