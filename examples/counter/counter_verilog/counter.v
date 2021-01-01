`timescale 1ps/1ps

module _____00003aT0( clk, rst, q ); 
   input clk;
   input rst;
   output reg [3:0] q;

   always @( posedge clk ) begin

      if (rst) begin
         q <= 4'b0;
      end
      else begin
         q <= (q + 4'b1);
      end

   end

endmodule