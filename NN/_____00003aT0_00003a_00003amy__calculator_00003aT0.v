`timescale 1ps/1ps

module _____00003aT0_00003a_00003amy__calculator_00003aT0( decimal__part, base, next__data, estimated__value ); 
   input [23:0] decimal__part;
   input signed[31:0] base;
   input signed[31:0] next__data;
   output signed[31:0] estimated__value;

   assign estimated__value = (base + ((next__data - base) * decimal__part));

endmodule