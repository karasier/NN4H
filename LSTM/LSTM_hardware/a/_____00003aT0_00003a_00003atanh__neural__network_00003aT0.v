`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh__neural__network_00003aT0( clk, rst, req, fill, _00003a48, ack__fill, ack__network, _00003a46, _00003a47, _00003a67, _00003a68 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a48;
   output ack__fill;
   output reg ack__network;
   output reg _00003a46;
   output reg [0:0] _00003a47;
   output reg signed[7:0] _00003a67;
   inout [0:0] _00003a68;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [1:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a432;
   reg [0:0] _00003a433;
   reg signed[7:0] _00003a434;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [0:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a455;
   reg [0:0] _00003a456;
   wire channel__inputs_00003a416_00003a_00003atrig__r;
   wire channel__inputs_00003a416_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a416_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a416_00003a_00003adbus__w;
   wire [0:0] channel__inputs_00003a416_00003a_00003aabus__r;
   wire [0:0] channel__inputs_00003a416_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a416_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__outputs_00003a445_00003a_00003areg__0;
   wire [0:0] channel__outputs_00003a445_00003a_00003arinc_00003a454_00003a_00003aabus__r;
   wire [0:0] channel__outputs_00003a445_00003a_00003awinc_00003a457_00003a_00003aabus__w;
   wire [0:0] channel__outputs_00003a445_00003a_00003ardec_00003a460_00003a_00003aabus__r;
   wire [0:0] channel__outputs_00003a445_00003a_00003awdec_00003a464_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a468_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a468_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a468_00003a_00003arinc_00003a480_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a468_00003a_00003awinc_00003a484_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a468_00003a_00003ardec_00003a488_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a468_00003a_00003awdec_00003a493_00003a_00003aabus__w;
   wire _00005e_000060107;
   wire _00005e_000060108;
   wire _00005e_000060109;
   wire _00005e_000060110;
   wire _00005e_000060111;
   wire _00005e_000060112;
   wire _00005e_000060113;
   wire _00005e_000060114;
   wire signed[7:0] _00005e_000060959;
   wire _00005e_000060960;
   wire [0:0] _00005e_000060961;
   wire signed[7:0] _00005e_000060962;
   wire signed[7:0] _00005e_000060963;
   wire signed[7:0] _00005e_000060964;
   wire signed[7:0] _00005e_000060965;
   wire signed[7:0] _00005e_000060966;
   wire [0:0] _00005e_000060967;

   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer0_00003aT00 layer0(.clk(_00005e_000060107),.rst(_00005e_000060108),.req(_00005e_000060109),._00003a430(_00005e_000060959),.ack__layer(_00005e_000060110),._00003a428(_00005e_000060960),._00003a429(_00005e_000060961),._00003a470(_00005e_000060963),._00003a471(_00005e_000060964));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00 layer1(.clk(_00005e_000060111),.rst(_00005e_000060112),.req(_00005e_000060113),._00003a481(_00005e_000060965),._00003a482(_00005e_000060966),.ack__layer(_00005e_000060114),._00003a483(_00005e_000060967),._00003a447(_00005e_000060962));
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

   assign _00003a432 = channel__inputs_00003a416_00003a_00003atrig__w;

   assign _00003a433 = channel__inputs_00003a416_00003a_00003aabus__w;

   assign _00003a434 = channel__inputs_00003a416_00003a_00003adbus__w;

   assign _00005e_000060959 = channel__inputs_00003a416_00003a_00003adbus__r;

   assign _00005e_000060960 = channel__inputs_00003a416_00003a_00003atrig__r;

   assign _00005e_000060961 = channel__inputs_00003a416_00003a_00003aabus__r;

   assign _00003a455 = channel__outputs_00003a445_00003a_00003areg__0;

   assign _00005e_000060962 = channel__outputs_00003a445_00003a_00003areg__0;

   assign _00003a456 = channel__outputs_00003a445_00003a_00003arinc_00003a454_00003a_00003aabus__r;

   assign _00005e_000060963 = channel__a0_00003a468_00003a_00003areg__0;

   assign _00005e_000060964 = channel__a0_00003a468_00003a_00003areg__1;

   assign _00005e_000060965 = channel__a0_00003a468_00003a_00003areg__0;

   assign _00005e_000060966 = channel__a0_00003a468_00003a_00003areg__1;

   assign _00005e_000060967 = channel__a0_00003a468_00003a_00003arinc_00003a480_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a433 <= -32'd1;
      end

      _00003a432 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a47 <= -32'd1;
      end

      _00003a46 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a46 == 32'd1)) begin
               value__inputs <= _00003a48;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a47 <= ((_00003a47 + 32'd1) == 32'd2) == 1 ? (_00003a47 + 32'd1) : 32'd0;
               _00003a46 <= 32'd1;
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
            _00003a433 <= ((_00003a433 + 32'd1) == 32'd2) == 1 ? (_00003a433 + 32'd1) : 32'd0;
            _00003a432 <= 32'd1;
            _00003a434 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a68 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a456 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a456)
               32'd0: value__outputs <= _00003a455;
            endcase
            flag__outputs <= 32'd1;
            _00003a456 <= ((_00003a456 + 32'd1) == 32'd1) == 1 ? (_00003a456 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd1)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            case(_00003a68)
               32'd0: _00003a67 <= value__outputs;
            endcase
            _00003a68 <= ((_00003a68 + 32'd1) == 32'd1) == 1 ? (_00003a68 + 32'd1) : 32'd0;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a416_00003a_00003adbus__r <= channel__inputs_00003a416_00003a_00003amem[channel__inputs_00003a416_00003a_00003aabus__r];

      if (channel__inputs_00003a416_00003a_00003atrig__w) begin
         channel__inputs_00003a416_00003a_00003amem[channel__inputs_00003a416_00003a_00003aabus__w] <= channel__inputs_00003a416_00003a_00003adbus__w;
      end

   end

endmodule