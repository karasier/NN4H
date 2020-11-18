`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc0_00003aT20( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_000060589;
   wire signed[7:0] _00005e_000060590;
   wire signed[7:0] _00005e_000060591;
   wire signed[7:0] _00005e_000060592;
   wire signed[7:0] _00005e_000060593;
   wire signed[7:0] _00005e_000060594;
   wire signed[7:0] _00005e_000060595;
   wire signed[7:0] _00005e_000060596;

   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc0_00003aT20_00003a_00003amy__lut_00003aT40 my__lut(.address(_00005e_000060589),.base(_00005e_000060590),.next__data(_00005e_000060591));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc0_00003aT20_00003a_00003amy__interpolator_00003aT40 my__interpolator(.base(_00005e_000060592),.next__data(_00005e_000060593),.change(_00005e_000060594),.remaining(_00005e_000060595),.interpolated__value(_00005e_000060596));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign change = {{1'b0,1'b0,1'b0},1'b1,{1'b0,1'b0,1'b0,1'b0}};

   assign _00005e_000060589 = address;

   assign base = _00005e_000060590;

   assign next__data = _00005e_000060591;

   assign _00005e_000060592 = base;

   assign _00005e_000060593 = next__data;

   assign _00005e_000060594 = change;

   assign _00005e_000060595 = remaining;

   assign a = _00005e_000060596;

endmodule