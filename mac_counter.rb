# A module of counter for times of mac_n1 ack.

system :mac_counter do |layer_size|
  input :ack, :rst
  output :ack_mac

  [layer_size.width].inner :q

  par(rst.posedge) do
    q <= 0
    ack_mac <= 0
  end

  par(ack.posedge) do
    q <= q + 1
  end

  par(ack.negedge) do
    hif(q == layer_size) do
      q <= 0
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