`timescale 1ps/1ps

module _____00003aT0_00003a_00003afunc0_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] addr;
   wire signed[7:0] integer__part;
   wire [3:0] _00005e_000060338;
   wire signed[7:0] _00005e_000060339;
   wire signed[7:0] _00005e_000060340;
   wire signed[7:0] _00005e_000060341;
   wire signed[7:0] _00005e_000060342;
   wire signed[7:0] _00005e_000060343;
   wire signed[7:0] _00005e_000060344;
   wire signed[7:0] _00005e_000060345;

   _____00003aT0_00003a_00003afunc0_00003aT0_00003a_00003amy__lut_00003aT1 my__lut(.addr(_00005e_000060338),.base(_00005e_000060339),.next__data(_00005e_000060340));
   _____00003aT0_00003a_00003afunc0_00003aT0_00003a_00003amy__interpolator_00003aT1 my__interpolator(.z__value(_00005e_000060341),.base(_00005e_000060342),.next__data(_00005e_000060343),.integer__part(_00005e_000060344),.interpolated__value(_00005e_000060345));
   assign addr = z__value[7:4];

   assign integer__part = {addr,{1'b0,1'b0,1'b0,1'b0}};

   assign _00005e_000060338 = addr;

   assign base = _00005e_000060339;

   assign next__data = _00005e_000060340;

   assign _00005e_000060341 = z__value;

   assign _00005e_000060342 = base;

   assign _00005e_000060343 = next__data;

   assign _00005e_000060344 = integer__part;

   assign a = _00005e_000060345;

endmodule