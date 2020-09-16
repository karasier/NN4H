`timescale 1ps/1ps

module _____00003aT0( ); 
   wire clk;
   wire rst;
   wire req;
   wire _00003aack00;
   wire _00003aack01;
   wire mem0_00003a0_00003a_00003atrig__r;
   wire mem0_00003a0_00003a_00003atrig__w;
   reg [7:0] mem0_00003a0_00003a_00003adbus__r;
   wire [7:0] mem0_00003a0_00003a_00003adbus__w;
   wire [0:0] mem0_00003a0_00003a_00003aabus__r;
   wire [0:0] mem0_00003a0_00003a_00003aabus__w;
   reg [7:0] mem0_00003a0_00003a_00003amem  [0:1];
   wire mem1_00003a29_00003a_00003atrig__r;
   wire mem1_00003a29_00003a_00003atrig__w;
   reg [7:0] mem1_00003a29_00003a_00003adbus__r;
   wire [7:0] mem1_00003a29_00003a_00003adbus__w;
   wire [0:0] mem1_00003a29_00003a_00003aabus__r;
   wire [0:0] mem1_00003a29_00003a_00003aabus__w;
   reg [7:0] mem1_00003a29_00003a_00003amem  [0:1];

   always @( negedge clk ) begin

      mem0_00003a0_00003a_00003adbus__r <= mem0_00003a0_00003a_00003amem[mem0_00003a0_00003a_00003aabus__r];

      if (mem0_00003a0_00003a_00003atrig__w) begin
         mem0_00003a0_00003a_00003amem[mem0_00003a0_00003a_00003aabus__w] <= mem0_00003a0_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      mem1_00003a29_00003a_00003adbus__r <= mem1_00003a29_00003a_00003amem[mem1_00003a29_00003a_00003aabus__r];

      if (mem1_00003a29_00003a_00003atrig__w) begin
         mem1_00003a29_00003a_00003amem[mem1_00003a29_00003a_00003aabus__w] <= mem1_00003a29_00003a_00003adbus__w;
      end

   end

endmodule