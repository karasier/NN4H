`timescale 1ps/1ps

module _____00003aT0_00003a_00003afunc0__1_00003aT0_00003a_00003amy__interpolator_00003aT10( base, next__data, remaining, interpolated__value ); 
   input signed[7:0] base;
   input signed[7:0] next__data;
   input signed[7:0] remaining;
   output reg signed[7:0] interpolated__value;
   reg signed[7:0] _00003a45_00003a_00003a_00003a42;
   reg signed[7:0] _00003a45_00003a_00003a_00003a43;

   always @( * ) begin

      _00003a45_00003a_00003a_00003a42 = ((next__data - base) >> 32'd0);

      _00003a45_00003a_00003a_00003a43 = ((next__data - base) >> 32'd0);

      interpolated__value = (base + (($signed({{4{_00003a45_00003a_00003a_00003a43[7]}},_00003a45_00003a_00003a_00003a43}) * remaining) >> 32'd4));

   end

endmodule