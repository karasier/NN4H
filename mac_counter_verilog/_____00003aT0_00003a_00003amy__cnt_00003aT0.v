`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__cnt_00003aT0( ack, rst, ack__mac ); 
   input ack;
   input rst;
   output reg ack__mac;
   reg [1:0] q;

   always @( posedge rst ) begin

      q <= 32'd0;

      ack__mac <= 32'd0;

   end

   always @( posedge ack ) begin

      q <= (q + 32'd1);

   end

   always @( negedge ack ) begin

      if ((q == 32'd2)) begin
         q <= 32'd0;
      end

   end

   always @( q ) begin

      if ((q == 32'd2)) begin
         ack__mac <= 32'd1;
      end
      else begin
         ack__mac <= 32'd0;
      end

   end

endmodule