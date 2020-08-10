`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__interpolator_00003aT0( z__value, base, next__data, integer__part, interpolated__value ); 
   input signed[7:0] z__value;
   input signed[7:0] base;
   input signed[7:0] next__data;
   input signed[7:0] integer__part;
   output signed[7:0] interpolated__value;

   assign interpolated__value = (base + (($unsigned((next__data - base)) * (z__value - integer__part)) >> 32'd4));

endmodule