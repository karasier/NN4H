`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] addr;
   wire signed[7:0] integer__part;
   wire [3:0] _00005e_00006012;
   wire signed[7:0] _00005e_00006013;
   wire signed[7:0] _00005e_00006014;
   wire signed[7:0] _00005e_00006015;
   wire signed[7:0] _00005e_00006016;
   wire signed[7:0] _00005e_00006017;
   wire signed[7:0] _00005e_00006018;
   wire signed[7:0] _00005e_00006019;

   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__lut_00003aT0 my__lut(.addr(_00005e_00006012),.base(_00005e_00006013),.next__data(_00005e_00006014));
   _____00003aT0_00003a_00003atanh_00003aT0_00003a_00003amy__interpolator_00003aT0 my__interpolator(.z__value(_00005e_00006015),.base(_00005e_00006016),.next__data(_00005e_00006017),.integer__part(_00005e_00006018),.interpolated__value(_00005e_00006019));
   assign addr = z__value[7:4];

   assign integer__part = {addr,{1'b0,1'b0,1'b0,1'b0}};

   assign _00005e_00006012 = addr;

   assign base = _00005e_00006013;

   assign next__data = _00005e_00006014;

   assign _00005e_00006015 = z__value;

   assign _00005e_00006016 = base;

   assign _00005e_00006017 = next__data;

   assign _00005e_00006018 = integer__part;

   assign a = _00005e_00006019;

endmodule