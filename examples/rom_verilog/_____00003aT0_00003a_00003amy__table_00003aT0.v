`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__table_00003aT0( addr, data ); 
   input [1:0] addr;
   output [1:0] data;
   reg [1:0] content  [3:0];

   assign data = content[addr];

   initial begin

      content[32'd0] = 32'd0;

      content[32'd1] = 32'd1;

      content[32'd2] = 32'd2;

      content[32'd3] = 32'd3;

   end

endmodule