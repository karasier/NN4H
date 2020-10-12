# A module of counter for times of mac_n1 ack.

system :mac_counter do |layer_size|
  ack_times = layer_size == 1 ? 1 : (layer_size - 1)
  #ack_times = layer_size

  input :clk, :ack, :rst
  output :ack_mac

  [(layer_size + 1).width].inner :q

  par(clk.posedge) do
    hif(rst) do
      q <= 0
      ack_mac <= 0
    end
    helsif(ack) do
      seq do
        q <= q + 1
        hif(q == ack_times) do
          q <= 0
          ack_mac <= 1
        end
      end
    end
  end

=begin
  par(clk.negedge) do
    hif(q == ack_times) do
      q <= 0
    end
  end
  
  par(q) do
    hif(q == ack_times) do
      ack_mac <= 1
    end
  end 
=end
end