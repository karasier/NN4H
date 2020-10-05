`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire [3:0] _00005e_000060488;
   wire signed[7:0] _00005e_000060489;
   wire signed[7:0] _00005e_000060490;
   wire signed[7:0] _00005e_000060491;
   wire signed[7:0] _00005e_000060492;
   wire signed[7:0] _00005e_000060493;
   wire signed[7:0] _00005e_000060494;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00_00003a_00003amy__lut_00003aT10 my__lut(.address(_00005e_000060488),.base(_00005e_000060489),.next__data(_00005e_000060490));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00_00003a_00003amy__interpolator_00003aT10 my__interpolator(.remaining(_00005e_000060491),.base(_00005e_000060492),.next__data(_00005e_000060493),.interpolated__value(_00005e_000060494));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060488 = address;

   assign base = _00005e_000060489;

   assign next__data = _00005e_000060490;

   assign _00005e_000060491 = remaining;

   assign _00005e_000060492 = base;

   assign _00005e_000060493 = next__data;

   assign a = _00005e_000060494;

endmodule