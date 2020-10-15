`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire [3:0] _00005e_000060431;
   wire signed[7:0] _00005e_000060432;
   wire signed[7:0] _00005e_000060433;
   wire signed[7:0] _00005e_000060434;
   wire signed[7:0] _00005e_000060435;
   wire signed[7:0] _00005e_000060436;
   wire signed[7:0] _00005e_000060437;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__lut_00003aT2 my__lut(.address(_00005e_000060431),.base(_00005e_000060432),.next__data(_00005e_000060433));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__interpolator_00003aT2 my__interpolator(.remaining(_00005e_000060434),.base(_00005e_000060435),.next__data(_00005e_000060436),.interpolated__value(_00005e_000060437));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060431 = address;

   assign base = _00005e_000060432;

   assign next__data = _00005e_000060433;

   assign _00005e_000060434 = remaining;

   assign _00005e_000060435 = base;

   assign _00005e_000060436 = next__data;

   assign a = _00005e_000060437;

endmodule