`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__calculator_00003aT0( remaining, z__value, base, next__data, addr, estimated__value ); 
   input [23:0] remaining;
   input [31:0] z__value;
   input [31:0] base;
   input [31:0] next__data;
   input [31:0] addr;
   output [31:0] estimated__value;

   assign estimated__value = ((((next__data - base) * z__value) + base) - ((next__data - base) * addr));

endmodule