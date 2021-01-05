`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__interpolator_00003aT2( base, next__data, remaining, interpolated__value ); 
   input signed[7:0] base;
   input signed[7:0] next__data;
   input signed[7:0] remaining;
   output reg signed[7:0] interpolated__value;
   reg signed[7:0] _00003a536_00003a_00003a_00003a533;
   reg signed[7:0] _00003a536_00003a_00003a_00003a534;

   always @( * ) begin

      _00003a536_00003a_00003a_00003a533 <= ((next__data - base) >> 32'd0);

      _00003a536_00003a_00003a_00003a534 <= ((next__data - base) >> 32'd0);

      interpolated__value <= (base + (($signed({{4{_00003a536_00003a_00003a_00003a534[7]}},_00003a536_00003a_00003a_00003a534}) * remaining) >> 32'd4));

   end

endmodule