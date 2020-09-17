`timescale 1ps/1ps

module _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003afunc0_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire [3:0] _00005e_000060377;
   wire signed[7:0] _00005e_000060378;
   wire signed[7:0] _00005e_000060379;
   wire signed[7:0] _00005e_000060380;
   wire signed[7:0] _00005e_000060381;
   wire signed[7:0] _00005e_000060382;
   wire signed[7:0] _00005e_000060383;

   _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003afunc0_00003aT0_00003a_00003amy__lut_00003aT2 my__lut(.address(_00005e_000060377),.base(_00005e_000060378),.next__data(_00005e_000060379));
   _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003afunc0_00003aT0_00003a_00003amy__interpolator_00003aT2 my__interpolator(.remaining(_00005e_000060380),.base(_00005e_000060381),.next__data(_00005e_000060382),.interpolated__value(_00005e_000060383));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060377 = address;

   assign base = _00005e_000060378;

   assign next__data = _00005e_000060379;

   assign _00005e_000060380 = remaining;

   assign _00005e_000060381 = base;

   assign _00005e_000060382 = next__data;

   assign a = _00005e_000060383;

endmodule