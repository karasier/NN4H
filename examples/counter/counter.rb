system :counter do
  input :clk, :rst
  [4].output :q

  par(clk.posedge) do
    hif(rst) do
      q <= _b4b0
    end
    helse do
      q <= q + _b4b1
    end
  end
end