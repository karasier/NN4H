`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire [3:0] _00005e_00006012;
   wire signed[7:0] _00005e_00006013;
   wire signed[7:0] _00005e_00006014;
   wire signed[7:0] _00005e_00006015;
   wire signed[7:0] _00005e_00006016;
   wire signed[7:0] _00005e_00006017;
   wire signed[7:0] _00005e_00006018;

   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__lut_00003aT0 my__lut(.address(_00005e_00006012),.base(_00005e_00006013),.next__data(_00005e_00006014));
   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__interpolator_00003aT0 my__interpolator(.remaining(_00005e_00006015),.base(_00005e_00006016),.next__data(_00005e_00006017),.interpolated__value(_00005e_00006018));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_00006012 = address;

   assign base = _00005e_00006013;

   assign next__data = _00005e_00006014;

   assign _00005e_00006015 = remaining;

   assign _00005e_00006016 = base;

   assign _00005e_00006017 = next__data;

   assign a = _00005e_00006018;

endmodule