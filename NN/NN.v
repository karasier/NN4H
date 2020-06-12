`timescale 1ps/1ps

module _____00003aT0( data, tanh__output ); 
   input [31:0] data;
   output [31:0] tanh__output;
   wire [31:0] data__prev;
   wire [31:0] data__next;
   wire [7:0] _00005e_0000600;
   wire signed[7:0] _00005e_0000601;
   wire signed[7:0] _00005e_0000602;
   wire [23:0] _00005e_0000603;
   wire signed[31:0] _00005e_0000604;
   wire signed[31:0] _00005e_0000605;
   wire [31:0] _00005e_0000606;

   _____00003aT0_00003a_00003atanh_00003aT0 tanh(.addr(_00005e_0000600),.data__prev(_00005e_0000601),.data__next(_00005e_0000602));
   _____00003aT0_00003a_00003amy__linear_00003aT0 my__linear(.decimal__part(_00005e_0000603),.data__prev(_00005e_0000604),.data__next(_00005e_0000605),.g(_00005e_0000606));
   assign _00005e_0000600 = data[31:24];

   assign data__prev = _00005e_0000601;

   assign data__next = _00005e_0000602;

   assign _00005e_0000603 = data[23:0];

   assign _00005e_0000604 = data__prev;

   assign _00005e_0000605 = data__next;

   assign tanh__output = _00005e_0000606;

endmodule