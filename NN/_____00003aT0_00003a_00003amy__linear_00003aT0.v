`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__linear_00003aT0( decimal__part, data__prev, data__next, g ); 
   input [23:0] decimal__part;
   input signed[31:0] data__prev;
   input signed[31:0] data__next;
   output [31:0] g;

   assign g = (data__prev + ((data__next - data__prev) * decimal__part));

endmodule