`timescale 1ps/1ps

module _____00003aT0_00003a_00003afunc1_00003aT0( z__value, a ); 
   input [7:0] z__value;
   output [7:0] a;
   wire [7:0] base;
   wire [7:0] next__data;
   wire [3:0] addr;
   wire [7:0] integer__part;
   wire [3:0] decimal__part;
   wire [3:0] _00005e_000060329;
   wire [7:0] _00005e_000060330;
   wire [7:0] _00005e_000060331;
   wire [7:0] _00005e_000060332;
   wire [7:0] _00005e_000060333;
   wire [7:0] _00005e_000060334;
   wire [7:0] _00005e_000060335;
   wire [7:0] _00005e_000060336;

   _____00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__lut_00003aT00 my__lut(.addr(_00005e_000060329),.base(_00005e_000060330),.next__data(_00005e_000060331));
   _____00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__interpolator_00003aT00 my__interpolator(.z__value(_00005e_000060332),.base(_00005e_000060333),.next__data(_00005e_000060334),.integer__part(_00005e_000060335),.interpolated__value(_00005e_000060336));
   assign addr = z__value[7:4];

   assign integer__part = {addr,{1'b0,1'b0,1'b0,1'b0}};

   assign decimal__part = z__value[3:0];

   assign _00005e_000060329 = addr;

   assign base = _00005e_000060330;

   assign next__data = _00005e_000060331;

   assign _00005e_000060332 = z__value;

   assign _00005e_000060333 = base;

   assign _00005e_000060334 = next__data;

   assign _00005e_000060335 = integer__part;

   assign a = _00005e_000060336;

endmodule