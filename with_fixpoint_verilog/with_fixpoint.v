`timescale 1ps/1ps

module _____00003aT0( );
   reg [3:0] x  [3:0];
   reg [3:0] y  [3:0];
   reg [3:0] z  [3:0];

   initial begin

      x[0] = 4'b0011;

      y[0] = 4'b0100;

      #10000

      z[0]= (x[0] + y[0]);

      #10000

      z[0] = (x[0] * y[0]);

      #10000

      z[0] = (z[0] / x[0]);

      #10000

      $finish;

   end

   initial begin
      $dumpfile("fp.vcd");
      $dumpvars(0,_____00003aT0);
   end

endmodule
