`timescale 1ps/1ps

module _____00003aT0( addr, data0, data1, data2, data ); 
   input [2:0] addr;
   output [7:0] data0;
   output [7:0] data1;
   output [7:0] data2;
   output [7:0] data;
   reg [7:0] content  [2:0];

   assign data = content[addr];

   initial begin

      content[32'd0] = 32'd0;

      content[32'd1] = 32'd1;

      content[32'd2] = 32'd2;

   end

endmodule