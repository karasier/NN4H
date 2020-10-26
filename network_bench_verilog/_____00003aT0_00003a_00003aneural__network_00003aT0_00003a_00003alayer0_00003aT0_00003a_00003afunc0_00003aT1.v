`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_000060551;
   wire signed[7:0] _00005e_000060552;
   wire signed[7:0] _00005e_000060553;
   wire signed[7:0] _00005e_000060554;
   wire signed[7:0] _00005e_000060555;
   wire signed[7:0] _00005e_000060556;
   wire signed[7:0] _00005e_000060557;
   wire signed[7:0] _00005e_000060558;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__lut_00003aT2 my__lut(.address(_00005e_000060551),.base(_00005e_000060552),.next__data(_00005e_000060553));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__interpolator_00003aT2 my__interpolator(.base(_00005e_000060554),.next__data(_00005e_000060555),.change(_00005e_000060556),.remaining(_00005e_000060557),.interpolated__value(_00005e_000060558));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign change = {{1'b0,1'b0,1'b0},1'b1,{1'b0,1'b0,1'b0,1'b0}};

   assign _00005e_000060551 = address;

   assign base = _00005e_000060552;

   assign next__data = _00005e_000060553;

   assign _00005e_000060554 = base;

   assign _00005e_000060555 = next__data;

   assign _00005e_000060556 = change;

   assign _00005e_000060557 = remaining;

   assign a = _00005e_000060558;

endmodule