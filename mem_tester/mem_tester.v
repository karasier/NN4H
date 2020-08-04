`timescale 1ps/1ps

module _____00003aT0( ); 
   wire clk;
   wire rst;
   wire req;
   wire [7:0] _00003a14;
   wire _00003a12;
   wire [0:0] _00003a13;
   wire [7:0] _00003a43;
   wire _00003a41;
   wire [0:0] _00003a42;
   wire _00003a74_00003a_00003atrig__r;
   wire _00003a74_00003a_00003atrig__w;
   reg [7:0] _00003a74_00003a_00003adbus__r;
   wire [7:0] _00003a74_00003a_00003adbus__w;
   wire [0:0] _00003a74_00003a_00003aabus__r;
   wire [0:0] _00003a74_00003a_00003aabus__w;
   reg [7:0] _00003a74_00003a_00003amem  [0:1];
   wire _00003a75_00003a_00003atrig__r;
   wire _00003a75_00003a_00003atrig__w;
   reg [7:0] _00003a75_00003a_00003adbus__r;
   wire [7:0] _00003a75_00003a_00003adbus__w;
   wire [0:0] _00003a75_00003a_00003aabus__r;
   wire [0:0] _00003a75_00003a_00003aabus__w;
   reg [7:0] _00003a75_00003a_00003amem  [0:1];

   assign _00003a14 = _00003a74_00003a_00003adbus__r;

   assign _00003a12 = _00003a74_00003a_00003atrig__r;

   assign _00003a13 = _00003a74_00003a_00003aabus__r;

   assign _00003a43 = _00003a75_00003a_00003adbus__r;

   assign _00003a41 = _00003a75_00003a_00003atrig__r;

   assign _00003a42 = _00003a75_00003a_00003aabus__r;

   always @( negedge clk ) begin

      _00003a74_00003a_00003adbus__r <= _00003a74_00003a_00003amem[_00003a74_00003a_00003aabus__r];

      if (_00003a74_00003a_00003atrig__w) begin
         _00003a74_00003a_00003amem[_00003a74_00003a_00003aabus__w] <= _00003a74_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      _00003a75_00003a_00003adbus__r <= _00003a75_00003a_00003amem[_00003a75_00003a_00003aabus__r];

      if (_00003a75_00003a_00003atrig__w) begin
         _00003a75_00003a_00003amem[_00003a75_00003a_00003aabus__w] <= _00003a75_00003a_00003adbus__w;
      end

   end

endmodule