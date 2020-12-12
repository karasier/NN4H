`timescale 1ps/1ps

module _____00003aT0_00003a_00003ann__simulator_00003aT0( clk, rst, req, fill, ack__fill, ack__network ); 
   input clk;
   input rst;
   input req;
   input fill;
   output ack__fill;
   output ack__network;
   wire rom__inputs_00003a1_00003a_00003atrig__r;
   reg signed[7:0] rom__inputs_00003a1_00003a_00003adbus__r;
   wire [0:0] rom__inputs_00003a1_00003a_00003aabus__r;
   wire signed[7:0] rom__inputs_00003a1_00003a_00003amem  :0[0:1];
   wire ram__outputs_00003a16_00003a_00003atrig__r;
   wire ram__outputs_00003a16_00003a_00003atrig__w;
   reg signed[7:0] ram__outputs_00003a16_00003a_00003adbus__r;
   wire signed[7:0] ram__outputs_00003a16_00003a_00003adbus__w;
   wire [0:0] ram__outputs_00003a16_00003a_00003aabus__r;
   wire [0:0] ram__outputs_00003a16_00003a_00003aabus__w;
   wire signed[7:0] ram__outputs_00003a16_00003a_00003amem  :0[0:0];
   wire _00005e_00006024;
   wire _00005e_00006025;
   wire _00005e_00006026;
   wire _00005e_00006027;
   wire _00005e_00006028;
   wire _00005e_00006029;
   wire signed[7:0] _00005e_00006030;
   wire _00005e_00006031;
   wire [0:0] _00005e_00006032;
   wire _00005e_00006033;
   wire [0:0] _00005e_00006034;
   wire signed[7:0] _00005e_00006035;

   _____00003aT0_00003a_00003ann__simulator_00003aT0_00003a_00003aneural__network_00003aT0 neural__network(.clk(_00005e_00006024),.rst(_00005e_00006025),.req(_00005e_00006026),.fill(_00005e_00006027),._00003a10(_00005e_00006030),.ack__fill(_00005e_00006028),.ack__network(_00005e_00006029),._00003a8(_00005e_00006031),._00003a9(_00005e_00006032),._00003a32(_00005e_00006033),._00003a33(_00005e_00006034),._00003a34(_00005e_00006035));
   assign _00005e_00006024 = clk;

   assign _00005e_00006025 = rst;

   assign _00005e_00006026 = req;

   assign _00005e_00006027 = fill;

   assign ack__fill = _00005e_00006028;

   assign ack__network = _00005e_00006029;

   assign _00005e_00006030 = rom__inputs_00003a1_00003a_00003adbus__r;

   assign _00005e_00006031 = rom__inputs_00003a1_00003a_00003atrig__r;

   assign _00005e_00006032 = rom__inputs_00003a1_00003a_00003aabus__r;

   assign _00005e_00006033 = ram__outputs_00003a16_00003a_00003atrig__w;

   assign _00005e_00006034 = ram__outputs_00003a16_00003a_00003aabus__w;

   assign _00005e_00006035 = ram__outputs_00003a16_00003a_00003adbus__w;

   always @( negedge clk ) begin

      rom__inputs_00003a1_00003a_00003adbus__r <= rom__inputs_00003a1_00003a_00003amem[rom__inputs_00003a1_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      ram__outputs_00003a16_00003a_00003adbus__r <= ram__outputs_00003a16_00003a_00003amem[ram__outputs_00003a16_00003a_00003aabus__r];

      if (ram__outputs_00003a16_00003a_00003atrig__w) begin
         ram__outputs_00003a16_00003a_00003amem[ram__outputs_00003a16_00003a_00003aabus__w] <= ram__outputs_00003a16_00003a_00003adbus__w;
      end

   end

   initial begin

      rom__inputs_00003a1_00003a_00003amem[32'd0] = $signed(32'd16);

      rom__inputs_00003a1_00003a_00003amem[32'd1] = $signed(32'd16);

   end

endmodule