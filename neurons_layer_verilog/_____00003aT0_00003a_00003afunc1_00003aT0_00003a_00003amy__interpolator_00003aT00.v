`timescale 1ps/1ps

module _____00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__interpolator_00003aT00( z__value, base, next__data, integer__part, interpolated__value ); 
   input [7:0] z__value;
   input [7:0] base;
   input [7:0] next__data;
   input [7:0] integer__part;
   output [7:0] interpolated__value;
   wire [7:0] denominator;

   assign denominator = 32'd16;

   assign interpolated__value = (base + (((next__data - base) / denominator) * (z__value - integer__part)));

endmodule