`timescale 1ps/1ps

module _____00003aT0( addr, data ); 
   input [1:0] addr;
   output [7:0] data;
   reg [7:0] content  [0:3];

   assign data = content[addr];

   initial begin

      content[32'd0] = 32'd0;

      content[32'd1] = 32'd2;

      content[32'd2] = 32'd4;

      content[32'd3] = 32'd6;

   end

endmodule