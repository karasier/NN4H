`timescale 1ps/1ps

module _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer0_00003aT20_00003a_00003acounter_00003aT50( clk, ack, rst, ack__mac ); 
   input clk;
   input ack;
   input rst;
   output reg ack__mac;
   reg [3:0] q;

   always @( negedge clk ) begin

      if (rst) begin
         q <= 32'd0;
         ack__mac <= 32'd0;
      end
      else if (ack) begin
         q <= (q + 32'd1);
         if ((q == 32'd8)) begin
            q <= 32'd0;
            ack__mac <= 32'd1;
         end
      end

   end

endmodule