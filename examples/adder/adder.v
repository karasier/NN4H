module adder(a, b, s, carry);
  input wire [3:0] a, b; 
  output wire [3:0] s;
  output wire carry;

  assign {carry, s} = a + b;
endmodule