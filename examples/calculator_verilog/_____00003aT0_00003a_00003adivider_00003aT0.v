`timescale 1ps/1ps

module _____00003aT0_00003a_00003adivider_00003aT0( x, y, s ); 
   input [3:0] x;
   input [3:0] y;
   output [7:0] s;

   assign s = (x / y);

endmodule