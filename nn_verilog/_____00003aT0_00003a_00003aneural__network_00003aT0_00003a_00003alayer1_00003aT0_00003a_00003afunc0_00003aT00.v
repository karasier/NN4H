`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_000060545;
   wire signed[7:0] _00005e_000060546;
   wire signed[7:0] _00005e_000060547;
   wire signed[7:0] _00005e_000060548;
   wire signed[7:0] _00005e_000060549;
   wire signed[7:0] _00005e_000060550;
   wire signed[7:0] _00005e_000060551;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00_00003a_00003amy__lut_00003aT10 my__lut(.address(_00005e_000060545),.base(_00005e_000060546),.next__data(_00005e_000060547));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00_00003a_00003amy__interpolator_00003aT10 my__interpolator(.base(_00005e_000060548),.next__data(_00005e_000060549),.remaining(_00005e_000060550),.interpolated__value(_00005e_000060551));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060545 = address;

   assign base = _00005e_000060546;

   assign next__data = _00005e_000060547;

   assign _00005e_000060548 = base;

   assign _00005e_000060549 = next__data;

   assign _00005e_000060550 = remaining;

   assign a = _00005e_000060551;

endmodule