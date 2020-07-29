`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__translator_00003aT0( z__value, addr, remaining ); 
   input signed[31:0] z__value;
   output [7:0] addr;
   output [23:0] remaining;

   assign addr = z__value[31:24];

   assign remaining = z__value[23:0];

endmodule