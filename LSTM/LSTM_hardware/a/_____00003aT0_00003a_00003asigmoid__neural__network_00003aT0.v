`timescale 1ps/1ps

module _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0( clk, rst, req, fill, _00003a10, ack__fill, ack__network, _00003a8, _00003a9, _00003a29, _00003a30 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a10;
   output ack__fill;
   output reg ack__network;
   output reg _00003a8;
   output reg [0:0] _00003a9;
   output reg signed[7:0] _00003a29;
   inout [0:0] _00003a30;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [1:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a116;
   reg [0:0] _00003a117;
   reg signed[7:0] _00003a118;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [0:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a139;
   reg [0:0] _00003a140;
   wire channel__inputs_00003a100_00003a_00003atrig__r;
   wire channel__inputs_00003a100_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a100_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a100_00003a_00003adbus__w;
   wire [0:0] channel__inputs_00003a100_00003a_00003aabus__r;
   wire [0:0] channel__inputs_00003a100_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a100_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__outputs_00003a129_00003a_00003areg__0;
   wire [0:0] channel__outputs_00003a129_00003a_00003arinc_00003a138_00003a_00003aabus__r;
   wire [0:0] channel__outputs_00003a129_00003a_00003awinc_00003a141_00003a_00003aabus__w;
   wire [0:0] channel__outputs_00003a129_00003a_00003ardec_00003a144_00003a_00003aabus__r;
   wire [0:0] channel__outputs_00003a129_00003a_00003awdec_00003a148_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a152_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a152_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a152_00003a_00003arinc_00003a164_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a152_00003a_00003awinc_00003a168_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a152_00003a_00003ardec_00003a172_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a152_00003a_00003awdec_00003a177_00003a_00003aabus__w;
   wire _00005e_000060107;
   wire _00005e_000060108;
   wire _00005e_000060109;
   wire _00005e_000060110;
   wire _00005e_000060111;
   wire _00005e_000060112;
   wire _00005e_000060113;
   wire _00005e_000060114;
   wire signed[7:0] _00005e_000060115;
   wire _00005e_000060116;
   wire [0:0] _00005e_000060117;
   wire signed[7:0] _00005e_000060118;
   wire signed[7:0] _00005e_000060119;
   wire signed[7:0] _00005e_000060120;
   wire signed[7:0] _00005e_000060121;
   wire signed[7:0] _00005e_000060122;
   wire [0:0] _00005e_000060123;

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer0_00003aT1 layer0(.clk(_00005e_000060107),.rst(_00005e_000060108),.req(_00005e_000060109),._00003a114(_00005e_000060115),.ack__layer(_00005e_000060110),._00003a112(_00005e_000060116),._00003a113(_00005e_000060117),._00003a154(_00005e_000060119),._00003a155(_00005e_000060120));
   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1 layer1(.clk(_00005e_000060111),.rst(_00005e_000060112),.req(_00005e_000060113),._00003a165(_00005e_000060121),._00003a166(_00005e_000060122),.ack__layer(_00005e_000060114),._00003a167(_00005e_000060123),._00003a131(_00005e_000060118));
   assign _00005e_000060107 = clk;

   assign _00005e_000060108 = rst;

   assign _00005e_000060109 = req;

   assign ack__0 = _00005e_000060110;

   assign _00005e_000060111 = clk;

   assign _00005e_000060112 = rst;

   assign _00005e_000060113 = ack__0;

   assign ack__1 = _00005e_000060114;

   assign ack__fill = ack__inputs;

   assign fill__inputs = ((fill & ~ack__inputs) & ~flag__inputs);

   assign fill__outputs = ((ack__1 & ~ack__network) & ~flag__outputs);

   assign _00003a116 = channel__inputs_00003a100_00003a_00003atrig__w;

   assign _00003a117 = channel__inputs_00003a100_00003a_00003aabus__w;

   assign _00003a118 = channel__inputs_00003a100_00003a_00003adbus__w;

   assign _00005e_000060115 = channel__inputs_00003a100_00003a_00003adbus__r;

   assign _00005e_000060116 = channel__inputs_00003a100_00003a_00003atrig__r;

   assign _00005e_000060117 = channel__inputs_00003a100_00003a_00003aabus__r;

   assign _00003a139 = channel__outputs_00003a129_00003a_00003areg__0;

   assign _00005e_000060118 = channel__outputs_00003a129_00003a_00003areg__0;

   assign _00003a140 = channel__outputs_00003a129_00003a_00003arinc_00003a138_00003a_00003aabus__r;

   assign _00005e_000060119 = channel__a0_00003a152_00003a_00003areg__0;

   assign _00005e_000060120 = channel__a0_00003a152_00003a_00003areg__1;

   assign _00005e_000060121 = channel__a0_00003a152_00003a_00003areg__0;

   assign _00005e_000060122 = channel__a0_00003a152_00003a_00003areg__1;

   assign _00005e_000060123 = channel__a0_00003a152_00003a_00003arinc_00003a164_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a117 <= -32'd1;
      end

      _00003a116 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a9 <= -32'd1;
      end

      _00003a8 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a8 == 32'd1)) begin
               value__inputs <= _00003a10;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a9 <= ((_00003a9 + 32'd1) == 32'd2) == 1 ? (_00003a9 + 32'd1) : 32'd0;
               _00003a8 <= 32'd1;
            end
         end
      end
      else if (flag__inputs) begin
         address__inputs <= (address__inputs + 32'd1);
         flag__inputs <= 32'd0;
         if ((address__inputs == 32'd2)) begin
            ack__inputs <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            _00003a117 <= ((_00003a117 + 32'd1) == 32'd2) == 1 ? (_00003a117 + 32'd1) : 32'd0;
            _00003a116 <= 32'd1;
            _00003a118 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a30 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a140 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a140)
               32'd0: value__outputs <= _00003a139;
            endcase
            flag__outputs <= 32'd1;
            _00003a140 <= ((_00003a140 + 32'd1) == 32'd1) == 1 ? (_00003a140 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd1)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            case(_00003a30)
               32'd0: _00003a29 <= value__outputs;
            endcase
            _00003a30 <= ((_00003a30 + 32'd1) == 32'd1) == 1 ? (_00003a30 + 32'd1) : 32'd0;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a100_00003a_00003adbus__r <= channel__inputs_00003a100_00003a_00003amem[channel__inputs_00003a100_00003a_00003aabus__r];

      if (channel__inputs_00003a100_00003a_00003atrig__w) begin
         channel__inputs_00003a100_00003a_00003amem[channel__inputs_00003a100_00003a_00003aabus__w] <= channel__inputs_00003a100_00003a_00003adbus__w;
      end

   end

endmodule