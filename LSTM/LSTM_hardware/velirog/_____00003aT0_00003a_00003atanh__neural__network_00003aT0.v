`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh__neural__network_00003aT0( clk, rst, req, fill, _00003a54, ack__fill, ack__network, _00003a52, _00003a53, _00003a76, _00003a77, _00003a78 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input :0[0:-1] _00003a54;
   output ack__fill;
   output reg ack__network;
   output reg _00003a52;
   output reg [0:0] _00003a53;
   output reg _00003a76;
   output reg [0:0] _00003a77;
   output reg :0[0:0] _00003a78;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [1:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a421;
   reg [0:0] _00003a422;
   reg signed[7:0] _00003a423;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [0:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a444;
   reg [0:-1] _00003a445;
   wire channel__inputs_00003a405_00003a_00003atrig__r;
   wire channel__inputs_00003a405_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a405_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a405_00003a_00003adbus__w;
   wire [0:0] channel__inputs_00003a405_00003a_00003aabus__r;
   wire [0:0] channel__inputs_00003a405_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a405_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__outputs_00003a434_00003a_00003areg__0;
   wire [0:-1] channel__outputs_00003a434_00003a_00003arinc_00003a443_00003a_00003aabus__r;
   wire [0:-1] channel__outputs_00003a434_00003a_00003awinc_00003a446_00003a_00003aabus__w;
   wire [0:-1] channel__outputs_00003a434_00003a_00003ardec_00003a449_00003a_00003aabus__r;
   wire [0:-1] channel__outputs_00003a434_00003a_00003awdec_00003a453_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a457_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a457_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a457_00003a_00003arinc_00003a469_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a457_00003a_00003awinc_00003a473_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a457_00003a_00003ardec_00003a477_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a457_00003a_00003awdec_00003a482_00003a_00003aabus__w;
   wire _00005e_00006081;
   wire _00005e_00006082;
   wire _00005e_00006083;
   wire _00005e_00006084;
   wire _00005e_00006085;
   wire _00005e_00006086;
   wire _00005e_00006087;
   wire _00005e_00006088;
   wire signed[7:0] _00005e_000060936;
   wire _00005e_000060937;
   wire [0:0] _00005e_000060938;
   wire signed[7:0] _00005e_000060939;
   wire signed[7:0] _00005e_000060940;
   wire signed[7:0] _00005e_000060941;
   wire signed[7:0] _00005e_000060942;
   wire signed[7:0] _00005e_000060943;
   wire [0:0] _00005e_000060944;

   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer0_00003aT00 layer0(.clk(_00005e_00006081),.rst(_00005e_00006082),.req(_00005e_00006083),._00003a419(_00005e_000060936),.ack__layer(_00005e_00006084),._00003a417(_00005e_000060937),._00003a418(_00005e_000060938),._00003a459(_00005e_000060940),._00003a460(_00005e_000060941));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00 layer1(.clk(_00005e_00006085),.rst(_00005e_00006086),.req(_00005e_00006087),._00003a470(_00005e_000060942),._00003a471(_00005e_000060943),.ack__layer(_00005e_00006088),._00003a472(_00005e_000060944),._00003a436(_00005e_000060939));
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

   assign _00003a421 = channel__inputs_00003a405_00003a_00003atrig__w;

   assign _00003a422 = channel__inputs_00003a405_00003a_00003aabus__w;

   assign _00003a423 = channel__inputs_00003a405_00003a_00003adbus__w;

   assign _00005e_000060936 = channel__inputs_00003a405_00003a_00003adbus__r;

   assign _00005e_000060937 = channel__inputs_00003a405_00003a_00003atrig__r;

   assign _00005e_000060938 = channel__inputs_00003a405_00003a_00003aabus__r;

   assign _00003a444 = channel__outputs_00003a434_00003a_00003areg__0;

   assign _00005e_000060939 = channel__outputs_00003a434_00003a_00003areg__0;

   assign _00003a445 = channel__outputs_00003a434_00003a_00003arinc_00003a443_00003a_00003aabus__r;

   assign _00005e_000060940 = channel__a0_00003a457_00003a_00003areg__0;

   assign _00005e_000060941 = channel__a0_00003a457_00003a_00003areg__1;

   assign _00005e_000060942 = channel__a0_00003a457_00003a_00003areg__0;

   assign _00005e_000060943 = channel__a0_00003a457_00003a_00003areg__1;

   assign _00005e_000060944 = channel__a0_00003a457_00003a_00003arinc_00003a469_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a422 <= -32'd1;
      end

      _00003a421 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a53 <= -32'd1;
      end

      _00003a52 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a52 == 32'd1)) begin
               value__inputs <= _00003a54;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a53 <= ((_00003a53 + 32'd1) == 32'd2) == 1 ? (_00003a53 + 32'd1) : 32'd0;
               _00003a52 <= 32'd1;
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
            _00003a422 <= ((_00003a422 + 32'd1) == 32'd2) == 1 ? (_00003a422 + 32'd1) : 32'd0;
            _00003a421 <= 32'd1;
            _00003a423 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a77 <= -32'd1;
      end

      _00003a76 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a445 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a445)
               32'd0: value__outputs <= _00003a444;
            endcase
            flag__outputs <= 32'd1;
            _00003a445 <= ((_00003a445 + 32'd1) == 32'd1) == 1 ? (_00003a445 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd1)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            _00003a77 <= ((_00003a77 + 32'd1) == 32'd1) == 1 ? (_00003a77 + 32'd1) : 32'd0;
            _00003a76 <= 32'd1;
            _00003a78 <= value__outputs;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a405_00003a_00003adbus__r <= channel__inputs_00003a405_00003a_00003amem[channel__inputs_00003a405_00003a_00003aabus__r];

      if (channel__inputs_00003a405_00003a_00003atrig__w) begin
         channel__inputs_00003a405_00003a_00003amem[channel__inputs_00003a405_00003a_00003aabus__w] <= channel__inputs_00003a405_00003a_00003adbus__w;
      end

   end

endmodule