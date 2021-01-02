`timescale 1ps/1ps

module _____00003aT0( ); 
   reg signed[7:0] x0;
   reg signed[7:0] x1;
   reg signed[7:0] w00__0;
   reg signed[7:0] w01__0;
   reg signed[7:0] w10__0;
   reg signed[7:0] w11__0;
   reg signed[7:0] b0__0;
   reg signed[7:0] b1__0;
   reg signed[7:0] z0__0;
   reg signed[7:0] z1__0;
   wire signed[7:0] a0__0;
   wire signed[7:0] a1__0;
   reg signed[7:0] w00__1;
   reg signed[7:0] w10__1;
   reg signed[7:0] b0__1;
   reg signed[7:0] z0__1;
   wire signed[7:0] a0__1;
   reg signed[7:0] r0__0;
   reg signed[7:0] r1__0;
   reg signed[7:0] r0__1;
   reg signed[7:0] r1__1;
   wire signed[7:0] _00005e_0000600;
   wire signed[7:0] _00005e_0000601;
   wire signed[7:0] _00005e_0000602;
   wire signed[7:0] _00005e_0000603;
   wire signed[7:0] _00005e_0000604;
   wire signed[7:0] _00005e_0000605;

   _____00003aT0_00003a_00003afunc0__0_00003aT0 func0__0(.z__value(_00005e_0000600),.a(_00005e_0000601));
   _____00003aT0_00003a_00003afunc1__0_00003aT0 func1__0(.z__value(_00005e_0000602),.a(_00005e_0000603));
   _____00003aT0_00003a_00003afunc0__1_00003aT0 func0__1(.z__value(_00005e_0000604),.a(_00005e_0000605));
   assign _00005e_0000600 = z0__0;

   assign a0__0 = _00005e_0000601;

   assign _00005e_0000602 = z1__0;

   assign a1__0 = _00005e_0000603;

   assign _00005e_0000604 = z0__1;

   assign a0__1 = _00005e_0000605;

   initial begin

      x0 = 8'b00000000;

      x1 = 8'b00010000;

      w00__0 = 8'b00010101;

      w01__0 = 8'b00011110;

      w10__0 = 8'b11101001;

      w11__0 = 8'b11011101;

      b0__0 = 8'b11111001;

      b1__0 = 8'b00010011;

      w00__1 = 8'b00011010;

      w10__1 = 8'b11100111;

      b0__1 = 8'b00100010;

      #10;

      r0__0 = ((($signed({{4{w00__0[7]}},w00__0}) * x0) >> 32'd4) + (($signed({{4{w10__0[7]}},w10__0}) * x1) >> 32'd4));

      z0__0 = (r0__0 + b0__0);

      r1__0 = ((($signed({{4{w01__0[7]}},w01__0}) * x0) >> 32'd4) + (($signed({{4{w11__0[7]}},w11__0}) * x1) >> 32'd4));

      z1__0 = (r1__0 + b1__0);

      #10;

      r0__1 = (($signed({{4{w00__1[7]}},w00__1}) * a0__0) >> 32'd4);

      r1__1 = (($signed({{4{w10__1[7]}},w10__1}) * a1__0) >> 32'd4);

      z0__1 = ((r0__1 + r1__1) + b0__1);

      #10;

      $finish;

   end

   initial begin
      $dumpfile("param.vcd");
      $dumpvars(0,  _____00003aT0);
   end

endmodule