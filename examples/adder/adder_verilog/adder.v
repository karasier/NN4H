`timescale 1ps/1ps

module _____00003aT0( a, b, s, carry ); 
   input [3:0] a;
   input [3:0] b;
   output [3:0] s;
   output carry;

   assign {carry,s} = (a + b);

endmodule