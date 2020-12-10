`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc1_00003aT40( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_0000602449;
   wire signed[7:0] _00005e_0000602450;
   wire signed[7:0] _00005e_0000602451;
   wire signed[7:0] _00005e_0000602452;
   wire signed[7:0] _00005e_0000602453;
   wire signed[7:0] _00005e_0000602454;
   wire signed[7:0] _00005e_0000602455;
   wire signed[7:0] _00005e_0000602456;

   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc1_00003aT40_00003a_00003amy__lut_00003aT220 my__lut(.address(_00005e_0000602449),.base(_00005e_0000602450),.next__data(_00005e_0000602451));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc1_00003aT40_00003a_00003amy__interpolator_00003aT220 my__interpolator(.base(_00005e_0000602452),.next__data(_00005e_0000602453),.change(_00005e_0000602454),.remaining(_00005e_0000602455),.interpolated__value(_00005e_0000602456));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign change = {{1'b0,1'b0,1'b0},1'b1,{1'b0,1'b0,1'b0,1'b0}};

   assign _00005e_0000602449 = address;

   assign base = _00005e_0000602450;

   assign next__data = _00005e_0000602451;

   assign _00005e_0000602452 = base;

   assign _00005e_0000602453 = next__data;

   assign _00005e_0000602454 = change;

   assign _00005e_0000602455 = remaining;

   assign a = _00005e_0000602456;

endmodule