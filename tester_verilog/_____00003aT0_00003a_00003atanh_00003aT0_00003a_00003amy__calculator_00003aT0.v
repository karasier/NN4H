`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__calculator_00003aT0( remaining, z__value, base, next__data, addr, estimated__value ); 
   input [23:0] remaining;
   input signed[31:0] z__value;
   input signed[31:0] base;
   input signed[31:0] next__data;
   input signed[31:0] addr;
   output signed[31:0] estimated__value;

   assign estimated__value = (((($unsigned((next__data - base)) * z__value) >> 32'd28) + base) - (($unsigned((next__data - base)) * addr) >> 32'd28));

endmodule