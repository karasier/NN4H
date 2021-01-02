`timescale 1ps/1ps

module _____00003aT0_00003a_00003afunc1__0_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_00006089;
   wire signed[7:0] _00005e_00006090;
   wire signed[7:0] _00005e_00006091;
   wire signed[7:0] _00005e_00006092;
   wire signed[7:0] _00005e_00006093;
   wire signed[7:0] _00005e_00006094;
   wire signed[7:0] _00005e_00006095;

   _____00003aT0_00003a_00003afunc1__0_00003aT0_00003a_00003amy__lut_00003aT00 my__lut(.address(_00005e_00006089),.base(_00005e_00006090),.next__data(_00005e_00006091));
   _____00003aT0_00003a_00003afunc1__0_00003aT0_00003a_00003amy__interpolator_00003aT00 my__interpolator(.base(_00005e_00006092),.next__data(_00005e_00006093),.remaining(_00005e_00006094),.interpolated__value(_00005e_00006095));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_00006089 = address;

   assign base = _00005e_00006090;

   assign next__data = _00005e_00006091;

   assign _00005e_00006092 = base;

   assign _00005e_00006093 = next__data;

   assign _00005e_00006094 = remaining;

   assign a = _00005e_00006095;

endmodule