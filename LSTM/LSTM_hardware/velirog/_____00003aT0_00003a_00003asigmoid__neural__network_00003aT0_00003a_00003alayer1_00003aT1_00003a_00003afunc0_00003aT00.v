`timescale 1ps/1ps

module _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1_00003a_00003afunc0_00003aT00( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire signed[7:0] change;
   wire [3:0] _00005e_000060580;
   wire signed[7:0] _00005e_000060581;
   wire signed[7:0] _00005e_000060582;
   wire signed[7:0] _00005e_000060583;
   wire signed[7:0] _00005e_000060584;
   wire signed[7:0] _00005e_000060585;
   wire signed[7:0] _00005e_000060586;
   wire signed[7:0] _00005e_000060587;

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1_00003a_00003afunc0_00003aT00_00003a_00003amy__lut_00003aT10 my__lut(.address(_00005e_000060580),.base(_00005e_000060581),.next__data(_00005e_000060582));
   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1_00003a_00003afunc0_00003aT00_00003a_00003amy__interpolator_00003aT10 my__interpolator(.base(_00005e_000060583),.next__data(_00005e_000060584),.change(_00005e_000060585),.remaining(_00005e_000060586),.interpolated__value(_00005e_000060587));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign change = {{1'b0,1'b0,1'b0},1'b1,{1'b0,1'b0,1'b0,1'b0}};

   assign _00005e_000060580 = address;

   assign base = _00005e_000060581;

   assign next__data = _00005e_000060582;

   assign _00005e_000060583 = base;

   assign _00005e_000060584 = next__data;

   assign _00005e_000060585 = change;

   assign _00005e_000060586 = remaining;

   assign a = _00005e_000060587;

endmodule