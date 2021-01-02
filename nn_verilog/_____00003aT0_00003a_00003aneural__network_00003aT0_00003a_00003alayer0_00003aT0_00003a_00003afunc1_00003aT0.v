`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_000060550;
   wire signed[7:0] _00005e_000060551;
   wire signed[7:0] _00005e_000060552;
   wire signed[7:0] _00005e_000060553;
   wire signed[7:0] _00005e_000060554;
   wire signed[7:0] _00005e_000060555;
   wire signed[7:0] _00005e_000060556;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__lut_00003aT00 my__lut(.address(_00005e_000060550),.base(_00005e_000060551),.next__data(_00005e_000060552));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__interpolator_00003aT00 my__interpolator(.base(_00005e_000060553),.next__data(_00005e_000060554),.remaining(_00005e_000060555),.interpolated__value(_00005e_000060556));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060550 = address;

   assign base = _00005e_000060551;

   assign next__data = _00005e_000060552;

   assign _00005e_000060553 = base;

   assign _00005e_000060554 = next__data;

   assign _00005e_000060555 = remaining;

   assign a = _00005e_000060556;

endmodule