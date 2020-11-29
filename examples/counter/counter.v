module counter(clk, rst, q); 
  input wire clk;
  input wire rst;
  output reg [3:0] q;

  always @( posedge clk )
    if (rst)
      q <= 4'b0;
    else
      q <= q + 4'b1;
endmodule