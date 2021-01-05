`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0( clk, rst, req, fill, _00003a10, ack__fill, ack__network, _00003a8, _00003a9, _00003a32, _00003a33, _00003a34 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a10;
   output ack__fill;
   output reg ack__network;
   output reg _00003a8;
   output reg [0:0] _00003a9;
   output reg _00003a32;
   output reg [0:0] _00003a33;
   output reg signed[7:0] _00003a34;
   wire ack__0;
   wire ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [1:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a61;
   reg [0:0] _00003a62;
   reg signed[7:0] _00003a63;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [0:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a89;
   reg [0:0] _00003a90;
   wire channel__inputs_00003a45_00003a_00003atrig__r;
   wire channel__inputs_00003a45_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a45_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a45_00003a_00003adbus__w;
   wire [0:0] channel__inputs_00003a45_00003a_00003aabus__r;
   wire [0:0] channel__inputs_00003a45_00003a_00003aabus__w;
   reg signed[7:0] channel__inputs_00003a45_00003a_00003amem  [0:1];
   wire signed[7:0] channel__outputs_00003a74_00003a_00003areg__0;
   wire [0:0] channel__outputs_00003a74_00003a_00003arinc_00003a88_00003a_00003aabus__r;
   wire [0:0] channel__outputs_00003a74_00003a_00003awinc_00003a91_00003a_00003aabus__w;
   wire [0:0] channel__outputs_00003a74_00003a_00003ardec_00003a94_00003a_00003aabus__r;
   wire [0:0] channel__outputs_00003a74_00003a_00003awdec_00003a98_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a102_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a102_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a102_00003a_00003arinc_00003a122_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a102_00003a_00003awinc_00003a126_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a102_00003a_00003ardec_00003a130_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a102_00003a_00003awdec_00003a135_00003a_00003aabus__w;
   wire _00005e_00006054;
   wire _00005e_00006055;
   wire _00005e_00006056;
   wire _00005e_00006057;
   wire _00005e_00006058;
   wire _00005e_00006059;
   wire _00005e_00006060;
   wire _00005e_00006061;
   wire signed[7:0] _00005e_00006062;
   wire _00005e_00006063;
   wire [0:0] _00005e_00006064;
   wire signed[7:0] _00005e_00006065;
   wire signed[7:0] _00005e_00006066;
   wire signed[7:0] _00005e_00006067;
   wire signed[7:0] _00005e_00006068;
   wire signed[7:0] _00005e_00006069;
   wire [0:0] _00005e_00006070;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0 layer0(.clk(_00005e_00006054),.rst(_00005e_00006055),.req(_00005e_00006056),._00003a59(_00005e_00006062),.ack__layer(_00005e_00006057),._00003a57(_00005e_00006063),._00003a58(_00005e_00006064),._00003a106(_00005e_00006066),._00003a107(_00005e_00006067));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0 layer1(.clk(_00005e_00006058),.rst(_00005e_00006059),.req(_00005e_00006060),._00003a123(_00005e_00006068),._00003a124(_00005e_00006069),.ack__layer(_00005e_00006061),._00003a125(_00005e_00006070),._00003a77(_00005e_00006065));
   assign _00005e_00006054 = clk;

   assign _00005e_00006055 = rst;

   assign _00005e_00006056 = req;

   assign ack__0 = _00005e_00006057;

   assign _00005e_00006058 = clk;

   assign _00005e_00006059 = rst;

   assign _00005e_00006060 = ack__0;

   assign ack__1 = _00005e_00006061;

   assign ack__fill = ack__inputs;

   assign fill__inputs = ((fill & ~ack__inputs) & ~flag__inputs);

   assign fill__outputs = ((ack__1 & ~ack__network) & ~flag__outputs);

   assign channel__inputs_00003a45_00003a_00003atrig__w = _00003a61;

   assign channel__inputs_00003a45_00003a_00003aabus__w = _00003a62;

   assign channel__inputs_00003a45_00003a_00003adbus__w = _00003a63;

   assign _00005e_00006062 = channel__inputs_00003a45_00003a_00003adbus__r;

   assign channel__inputs_00003a45_00003a_00003atrig__r = _00005e_00006063;

   assign channel__inputs_00003a45_00003a_00003aabus__r = _00005e_00006064;

   assign _00003a89 = channel__outputs_00003a74_00003a_00003areg__0;

   assign channel__outputs_00003a74_00003a_00003areg__0 = _00005e_00006065;

   assign channel__outputs_00003a74_00003a_00003arinc_00003a88_00003a_00003aabus__r = _00003a90;

   assign channel__a0_00003a102_00003a_00003areg__0 = _00005e_00006066;

   assign channel__a0_00003a102_00003a_00003areg__1 = _00005e_00006067;

   assign _00005e_00006068 = channel__a0_00003a102_00003a_00003areg__0;

   assign _00005e_00006069 = channel__a0_00003a102_00003a_00003areg__1;

   assign channel__a0_00003a102_00003a_00003arinc_00003a122_00003a_00003aabus__r = _00005e_00006070;

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a62 <= -32'd1;
      end

      _00003a61 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a9 <= -32'd1;
         _00003a8 <= 32'd0;
      end

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a8 == 32'd1)) begin
               _00003a8 <= 32'd0;
               value__inputs <= _00003a10;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a9 <= (_00003a9 + 32'd1);
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
            _00003a62 <= (_00003a62 + 32'd1);
            _00003a61 <= 32'd1;
            _00003a63 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a33 <= -32'd1;
      end

      _00003a32 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a90 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a90)
               32'd0: value__outputs <= _00003a89;
            endcase
            flag__outputs <= 32'd1;
            _00003a90 <= ((_00003a90 + 32'd1) == 32'd1) == 1 ? (_00003a90 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd1)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            _00003a33 <= ((_00003a33 + 32'd1) == 32'd1) == 1 ? (_00003a33 + 32'd1) : 32'd0;
            _00003a32 <= 32'd1;
            _00003a34 <= value__outputs;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a45_00003a_00003adbus__r <= channel__inputs_00003a45_00003a_00003amem[channel__inputs_00003a45_00003a_00003aabus__r];

      if (channel__inputs_00003a45_00003a_00003atrig__w) begin
         channel__inputs_00003a45_00003a_00003amem[channel__inputs_00003a45_00003a_00003aabus__w] <= channel__inputs_00003a45_00003a_00003adbus__w;
      end

   end

endmodule