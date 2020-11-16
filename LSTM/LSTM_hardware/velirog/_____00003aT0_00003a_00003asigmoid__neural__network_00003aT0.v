`timescale 1ps/1ps

module _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0( clk, rst, req, fill, _00003a10, ack__fill, ack__network, _00003a8, _00003a9, _00003a32, _00003a33, _00003a34 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input :0[0:-1] _00003a10;
   output ack__fill;
   output reg ack__network;
   output reg _00003a8;
   output reg [0:0] _00003a9;
   output reg _00003a32;
   output reg [0:0] _00003a33;
   output reg :0[0:0] _00003a34;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [1:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a105;
   reg [0:0] _00003a106;
   reg signed[7:0] _00003a107;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [0:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a128;
   reg [0:-1] _00003a129;
   wire channel__inputs_00003a89_00003a_00003atrig__r;
   wire channel__inputs_00003a89_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a89_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a89_00003a_00003adbus__w;
   wire [0:0] channel__inputs_00003a89_00003a_00003aabus__r;
   wire [0:0] channel__inputs_00003a89_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a89_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__outputs_00003a118_00003a_00003areg__0;
   wire [0:-1] channel__outputs_00003a118_00003a_00003arinc_00003a127_00003a_00003aabus__r;
   wire [0:-1] channel__outputs_00003a118_00003a_00003awinc_00003a130_00003a_00003aabus__w;
   wire [0:-1] channel__outputs_00003a118_00003a_00003ardec_00003a133_00003a_00003aabus__r;
   wire [0:-1] channel__outputs_00003a118_00003a_00003awdec_00003a137_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a141_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a141_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a141_00003a_00003arinc_00003a153_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a141_00003a_00003awinc_00003a157_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a141_00003a_00003ardec_00003a161_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a141_00003a_00003awdec_00003a166_00003a_00003aabus__w;
   wire _00005e_00006081;
   wire _00005e_00006082;
   wire _00005e_00006083;
   wire _00005e_00006084;
   wire _00005e_00006085;
   wire _00005e_00006086;
   wire _00005e_00006087;
   wire _00005e_00006088;
   wire signed[7:0] _00005e_00006089;
   wire _00005e_00006090;
   wire [0:0] _00005e_00006091;
   wire signed[7:0] _00005e_00006092;
   wire signed[7:0] _00005e_00006093;
   wire signed[7:0] _00005e_00006094;
   wire signed[7:0] _00005e_00006095;
   wire signed[7:0] _00005e_00006096;
   wire [0:0] _00005e_00006097;

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer0_00003aT1 layer0(.clk(_00005e_00006081),.rst(_00005e_00006082),.req(_00005e_00006083),._00003a103(_00005e_00006089),.ack__layer(_00005e_00006084),._00003a101(_00005e_00006090),._00003a102(_00005e_00006091),._00003a143(_00005e_00006093),._00003a144(_00005e_00006094));
   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1 layer1(.clk(_00005e_00006085),.rst(_00005e_00006086),.req(_00005e_00006087),._00003a154(_00005e_00006095),._00003a155(_00005e_00006096),.ack__layer(_00005e_00006088),._00003a156(_00005e_00006097),._00003a120(_00005e_00006092));
   assign _00005e_00006081 = clk;

   assign _00005e_00006082 = rst;

   assign _00005e_00006083 = req;

   assign ack__0 = _00005e_00006084;

   assign _00005e_00006085 = clk;

   assign _00005e_00006086 = rst;

   assign _00005e_00006087 = ack__0;

   assign ack__1 = _00005e_00006088;

   assign ack__fill = ack__inputs;

   assign fill__inputs = ((fill & ~ack__inputs) & ~flag__inputs);

   assign fill__outputs = ((ack__1 & ~ack__network) & ~flag__outputs);

   assign _00003a105 = channel__inputs_00003a89_00003a_00003atrig__w;

   assign _00003a106 = channel__inputs_00003a89_00003a_00003aabus__w;

   assign _00003a107 = channel__inputs_00003a89_00003a_00003adbus__w;

   assign _00005e_00006089 = channel__inputs_00003a89_00003a_00003adbus__r;

   assign _00005e_00006090 = channel__inputs_00003a89_00003a_00003atrig__r;

   assign _00005e_00006091 = channel__inputs_00003a89_00003a_00003aabus__r;

   assign _00003a128 = channel__outputs_00003a118_00003a_00003areg__0;

   assign _00005e_00006092 = channel__outputs_00003a118_00003a_00003areg__0;

   assign _00003a129 = channel__outputs_00003a118_00003a_00003arinc_00003a127_00003a_00003aabus__r;

   assign _00005e_00006093 = channel__a0_00003a141_00003a_00003areg__0;

   assign _00005e_00006094 = channel__a0_00003a141_00003a_00003areg__1;

   assign _00005e_00006095 = channel__a0_00003a141_00003a_00003areg__0;

   assign _00005e_00006096 = channel__a0_00003a141_00003a_00003areg__1;

   assign _00005e_00006097 = channel__a0_00003a141_00003a_00003arinc_00003a153_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a106 <= -32'd1;
      end

      _00003a105 <= 32'd0;

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
            _00003a106 <= ((_00003a106 + 32'd1) == 32'd2) == 1 ? (_00003a106 + 32'd1) : 32'd0;
            _00003a105 <= 32'd1;
            _00003a107 <= value__inputs;
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
         _00003a129 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a129)
               32'd0: value__outputs <= _00003a128;
            endcase
            flag__outputs <= 32'd1;
            _00003a129 <= ((_00003a129 + 32'd1) == 32'd1) == 1 ? (_00003a129 + 32'd1) : 32'd0;
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

      channel__inputs_00003a89_00003a_00003adbus__r <= channel__inputs_00003a89_00003a_00003amem[channel__inputs_00003a89_00003a_00003aabus__r];

      if (channel__inputs_00003a89_00003a_00003atrig__w) begin
         channel__inputs_00003a89_00003a_00003amem[channel__inputs_00003a89_00003a_00003aabus__w] <= channel__inputs_00003a89_00003a_00003adbus__w;
      end

   end

endmodule