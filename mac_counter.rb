# A module of counter for times of mac_n1 ack.

system :mac_counter do |layer_size|
  input :clk, :ack, :rst
  output :ack_mac

  [layer_size.width].inner :q

  par(clk.posedge) do
    hif(rst) do
      q <= 0
      ack_mac <= 0
    end  
    helse do
      hif(q == layer_size) do
        q <= 0        
      end
      helse do
        q <= q + ack
      end
    end
  end
  
  par(q) do
    hif(q == layer_size) do
      ack_mac <= 1
    end
    helse do
      ack_mac <= 0
    end
  end
end