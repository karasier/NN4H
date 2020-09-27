`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire [3:0] _00005e_000060481;
   wire signed[7:0] _00005e_000060482;
   wire signed[7:0] _00005e_000060483;
   wire signed[7:0] _00005e_000060484;
   wire signed[7:0] _00005e_000060485;
   wire signed[7:0] _00005e_000060486;
   wire signed[7:0] _00005e_000060487;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__lut_00003aT00 my__lut(.address(_00005e_000060481),.base(_00005e_000060482),.next__data(_00005e_000060483));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__interpolator_00003aT00 my__interpolator(.remaining(_00005e_000060484),.base(_00005e_000060485),.next__data(_00005e_000060486),.interpolated__value(_00005e_000060487));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060481 = address;

   assign base = _00005e_000060482;

   assign next__data = _00005e_000060483;

   assign _00005e_000060484 = remaining;

   assign _00005e_000060485 = base;

   assign _00005e_000060486 = next__data;

   assign a = _00005e_000060487;

endmodule