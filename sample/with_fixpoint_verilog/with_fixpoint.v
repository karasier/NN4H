`timescale 1ps/1ps

module _____00003aT0( ); 
   reg [7:0] x;
   reg [7:0] y;
   reg [7:0] z;

   initial begin

      x = 8'b00110011;

      y = 8'b01000000;

      z = (x + y);

      z = (($unsigned(x) * y) >> 32'd4);

      z = (($unsigned(z) << 32'd4) / x);

   end

endmodule