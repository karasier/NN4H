`timescale 1ps/1ps

module _____00003aT0_00003a_00003adivider_00003aT0( a, b, s ); 
   input signed[3:0] a;
   input signed[3:0] b;
   output signed[7:0] s;

   assign s = (a / b);

endmodule