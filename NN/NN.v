`timescale 1ps/1ps

module _____00003aT0( ); 
   reg signed[31:0] z;
   wire signed[31:0] a;
   wire signed[31:0] base;
   wire signed[31:0] next__data;
   wire [7:0] _00005e_0000600;
   wire signed[31:0] _00005e_0000601;
   wire signed[31:0] _00005e_0000602;
   wire [27:0] _00005e_0000603;
   wire signed[31:0] _00005e_0000604;
   wire signed[31:0] _00005e_0000605;
   wire signed[31:0] _00005e_0000606;

   _____00003aT0_00003a_00003amy__table_00003aT0 my__table(.addr(_00005e_0000600),.base(_00005e_0000601),.next__data(_00005e_0000602));
   _____00003aT0_00003a_00003amy__calculator_00003aT0 my__calculator(.decimal__part(_00005e_0000603),.base(_00005e_0000604),.next__data(_00005e_0000605),.estimated__value(_00005e_0000606));
   assign _00005e_0000600 = z[31:24];

   assign base = _00005e_0000601;

   assign next__data = _00005e_0000602;

   assign _00005e_0000603 = z[23:0];

   assign _00005e_0000604 = base;

   assign _00005e_0000605 = next__data;

   assign a = _00005e_0000606;

   initial begin

      z = 32'd0;

   end

endmodule