`timescale 1ps/1ps

module _____00003aT0( addr, data ); 
   input [3:0] addr;
   output [7:0] data;
   reg [7:0] content  [31:0];

   assign data = content[addr];

   initial begin

      content[32'd0] = 32'd0;

      content[32'd1] = 32'd1;

      content[32'd2] = 32'd6;

      content[32'd3] = 32'd11;

      content[32'd4] = 32'd20;

      content[32'd5] = 32'd37;

      content[32'd6] = 32'd70;

      content[32'd7] = 32'd135;

      content[32'd8] = 32'd264;

      content[32'd9] = 32'd521;

      content[32'd10] = 32'd1034;

      content[32'd11] = 32'd2059;

      content[32'd12] = 32'd4108;

      content[32'd13] = 32'd8205;

      content[32'd14] = 32'd16398;

      content[32'd15] = 32'd32783;

      content[32'd16] = 32'd65552;

      content[32'd17] = 32'd131089;

      content[32'd18] = 32'd262162;

      content[32'd19] = 32'd524307;

      content[32'd20] = 32'd1048596;

      content[32'd21] = 32'd2097173;

      content[32'd22] = 32'd4194326;

      content[32'd23] = 32'd8388631;

      content[32'd24] = 32'd16777240;

      content[32'd25] = 32'd33554457;

      content[32'd26] = 32'd67108890;

      content[32'd27] = 32'd134217755;

      content[32'd28] = 32'd268435484;

      content[32'd29] = 32'd536870941;

      content[32'd30] = 32'd1073741854;

      content[32'd31] = 32'd2147483679;

   end

endmodule