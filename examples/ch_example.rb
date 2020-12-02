system :ch_example do
  channel0 :ch0
  channel1([8], 256).(:ch1)

  p0 = ch1.branch(:port0)
  addr0 = p0.wrap(0)
end

system :ch_access do |channel|
  input :clk, :rst, :ch_read, :ch_write

  [8].inner :counter
  [8].inner :value

  par(clk.posedge) do
    hif(rst) do
      counter <= 0
    end 
    helsif(ch_write) do
      channel.write(counter) { counter <= counter + 1 }
    end
    helsif(ch_read) do
      channel.read(value)
    end
  end
end