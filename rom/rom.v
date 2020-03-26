`timescale 1ps/1ps

module _____00003aT0( addr, data ); 
   input [3:0] addr;
   output [7:0] data;
   reg [31:0] mask  [31:0];

   assign data = mask[addr];

   initial begin

      mask[32'd0] = 32'd0;

      mask[32'd1] = 32'd1;

      mask[32'd2] = 32'd3;

      mask[32'd3] = 32'd7;

      mask[32'd4] = 32'd15;

      mask[32'd5] = 32'd31;

      mask[32'd6] = 32'd63;

      mask[32'd7] = 32'd127;

      mask[32'd8] = 32'd255;

      mask[32'd9] = 32'd511;

      mask[32'd10] = 32'd1023;

      mask[32'd11] = 32'd2047;

      mask[32'd12] = 32'd4095;

      mask[32'd13] = 32'd8191;

      mask[32'd14] = 32'd16383;

      mask[32'd15] = 32'd32767;

      mask[32'd16] = 32'd65535;

      mask[32'd17] = 32'd131071;

      mask[32'd18] = 32'd262143;

      mask[32'd19] = 32'd524287;

      mask[32'd20] = 32'd1048575;

      mask[32'd21] = 32'd2097151;

      mask[32'd22] = 32'd4194303;

      mask[32'd23] = 32'd8388607;

      mask[32'd24] = 32'd16777215;

      mask[32'd25] = 32'd33554431;

      mask[32'd26] = 32'd67108863;

      mask[32'd27] = 32'd134217727;

      mask[32'd28] = 32'd268435455;

      mask[32'd29] = 32'd536870911;

      mask[32'd30] = 32'd1073741823;

      mask[32'd31] = 32'd2147483647;

   end

endmodule