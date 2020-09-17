`timescale 1ps/1ps

module _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003acounter_00003aT1( clk, ack, rst, ack__mac ); 
   input clk;
   input ack;
   input rst;
   output reg ack__mac;
   reg [1:0] q;

   always @( posedge clk ) begin

      if (rst) begin
         q <= 32'd0;
         ack__mac <= 32'd0;
      end
      else if (ack) begin
         q <= (q + 32'd1);
      end

   end

   always @( negedge clk ) begin

      if ((q == 32'd1)) begin
         q <= 32'd0;
      end

   end

   always @( q ) begin

      if ((q == 32'd1)) begin
         ack__mac <= 32'd1;
      end

   end

endmodule