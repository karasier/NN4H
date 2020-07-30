`timescale 1ps/1ps

module _____00003aT0( ); 
   wire clk;
   wire rst;
   wire req;
   wire _00003a37_00003a_00003atrig__r;
   wire _00003a37_00003a_00003atrig__w;
   reg [7:0] _00003a37_00003a_00003adbus__r;
   wire [7:0] _00003a37_00003a_00003adbus__w;
   wire [7:0] _00003a37_00003a_00003aabus__r;
   wire [7:0] _00003a37_00003a_00003aabus__w;
   reg [7:0] _00003a37_00003a_00003amem  [0:255];

   always @( negedge clk ) begin

      _00003a37_00003a_00003adbus__r <= _00003a37_00003a_00003amem[_00003a37_00003a_00003aabus__r];

      if (_00003a37_00003a_00003atrig__w) begin
         _00003a37_00003a_00003amem[_00003a37_00003a_00003aabus__w] <= _00003a37_00003a_00003adbus__w;
      end

   end

endmodule