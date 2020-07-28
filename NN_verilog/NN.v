`timescale 1ps/1ps

module _____00003aT0( ); 
   reg signed[31:0] z__value;
   wire signed[31:0] a;
   wire signed[31:0] base;
   wire signed[31:0] next__data;
   wire [7:0] addr;
   wire [23:0] remaining;
   wire signed[31:0] _00005e_0000600;
   wire [7:0] _00005e_0000601;
   wire [23:0] _00005e_0000602;
   wire [7:0] _00005e_0000603;
   wire signed[31:0] _00005e_0000604;
   wire signed[31:0] _00005e_0000605;
   wire [23:0] _00005e_0000606;
   wire signed[31:0] _00005e_0000607;
   wire signed[31:0] _00005e_0000608;
   wire signed[31:0] _00005e_0000609;
   wire signed[31:0] _00005e_00006010;
   wire signed[31:0] _00005e_00006011;

   _____00003aT0_00003a_00003amy__translator_00003aT0 my__translator(.z__value(_00005e_0000600),.addr(_00005e_0000601),.remaining(_00005e_0000602));
   _____00003aT0_00003a_00003amy__table_00003aT0 my__table(.addr(_00005e_0000603),.base(_00005e_0000604),.next__data(_00005e_0000605));
   _____00003aT0_00003a_00003amy__calculator_00003aT0 my__calculator(.remaining(_00005e_0000606),.z__value(_00005e_0000607),.base(_00005e_0000608),.next__data(_00005e_0000609),.addr(_00005e_00006010),.estimated__value(_00005e_00006011));
   assign _00005e_0000600 = z__value;

   assign addr = _00005e_0000601;

   assign remaining = _00005e_0000602;

   assign _00005e_0000603 = addr;

   assign base = _00005e_0000604;

   assign next__data = _00005e_0000605;

   assign _00005e_0000606 = remaining;

   assign _00005e_0000607 = z__value;

   assign _00005e_0000608 = base;

   assign _00005e_0000609 = next__data;

   assign _00005e_00006010 = (addr << 32'd24);

   assign a = _00005e_00006011;

   initial begin

      z__value = 32'b0;

      #10

      z__value = 32'b00000001010111111111101110000000;

      #10

   end

endmodule