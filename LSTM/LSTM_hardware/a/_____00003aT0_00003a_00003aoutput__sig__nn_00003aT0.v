`timescale 1ps/1ps

module _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0( clk, rst, req, fill, _00003a248, ack__fill, ack__network, _00003a246, _00003a247, _00003a520, _00003a521, _00003a522, _00003a523, _00003a524, _00003a525, _00003a526, _00003a527, _00003a528 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a248;
   output ack__fill;
   output reg ack__network;
   output reg _00003a246;
   output reg [2:0] _00003a247;
   output reg signed[7:0] _00003a520;
   output reg signed[7:0] _00003a521;
   output reg signed[7:0] _00003a522;
   output reg signed[7:0] _00003a523;
   output reg signed[7:0] _00003a524;
   output reg signed[7:0] _00003a525;
   output reg signed[7:0] _00003a526;
   output reg signed[7:0] _00003a527;
   inout [2:0] _00003a528;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [3:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a3222;
   reg [2:0] _00003a3223;
   reg signed[7:0] _00003a3224;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [3:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a3266;
   wire signed[7:0] _00003a3267;
   wire signed[7:0] _00003a3268;
   wire signed[7:0] _00003a3269;
   wire signed[7:0] _00003a3270;
   wire signed[7:0] _00003a3271;
   wire signed[7:0] _00003a3272;
   wire signed[7:0] _00003a3273;
   reg [2:0] _00003a3274;
   wire channel__inputs_00003a3206_00003a_00003atrig__r;
   wire channel__inputs_00003a3206_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a3206_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a3206_00003a_00003adbus__w;
   wire [2:0] channel__inputs_00003a3206_00003a_00003aabus__r;
   wire [2:0] channel__inputs_00003a3206_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a3206_00003a_00003amem  :0[0:7];
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__0;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__1;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__2;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__3;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__4;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__5;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__6;
   wire signed[7:0] channel__outputs_00003a3235_00003a_00003areg__7;
   wire [2:0] channel__outputs_00003a3235_00003a_00003arinc_00003a3265_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a3235_00003a_00003awinc_00003a3275_00003a_00003aabus__w;
   wire [2:0] channel__outputs_00003a3235_00003a_00003ardec_00003a3285_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a3235_00003a_00003awdec_00003a3296_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a3307_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a3307_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a3307_00003a_00003arinc_00003a3319_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a3307_00003a_00003awinc_00003a3323_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a3307_00003a_00003ardec_00003a3327_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a3307_00003a_00003awdec_00003a3332_00003a_00003aabus__w;
   wire _00005e_0000601861;
   wire _00005e_0000601862;
   wire _00005e_0000601863;
   wire _00005e_0000601864;
   wire _00005e_0000601865;
   wire _00005e_0000601866;
   wire _00005e_0000601867;
   wire _00005e_0000601868;
   wire signed[7:0] _00005e_0000607032;
   wire _00005e_0000607033;
   wire [2:0] _00005e_0000607034;
   wire signed[7:0] _00005e_0000607035;
   wire signed[7:0] _00005e_0000607036;
   wire signed[7:0] _00005e_0000607037;
   wire signed[7:0] _00005e_0000607038;
   wire signed[7:0] _00005e_0000607039;
   wire signed[7:0] _00005e_0000607040;
   wire signed[7:0] _00005e_0000607041;
   wire signed[7:0] _00005e_0000607042;
   wire signed[7:0] _00005e_0000607043;
   wire signed[7:0] _00005e_0000607044;
   wire signed[7:0] _00005e_0000607045;
   wire signed[7:0] _00005e_0000607046;
   wire [0:0] _00005e_0000607047;

   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer0_00003aT20 layer0(.clk(_00005e_0000601861),.rst(_00005e_0000601862),.req(_00005e_0000601863),._00003a3220(_00005e_0000607032),.ack__layer(_00005e_0000601864),._00003a3218(_00005e_0000607033),._00003a3219(_00005e_0000607034),._00003a3309(_00005e_0000607043),._00003a3310(_00005e_0000607044));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20 layer1(.clk(_00005e_0000601865),.rst(_00005e_0000601866),.req(_00005e_0000601867),._00003a3320(_00005e_0000607045),._00003a3321(_00005e_0000607046),.ack__layer(_00005e_0000601868),._00003a3322(_00005e_0000607047),._00003a3237(_00005e_0000607035),._00003a3238(_00005e_0000607036),._00003a3239(_00005e_0000607037),._00003a3240(_00005e_0000607038),._00003a3241(_00005e_0000607039),._00003a3242(_00005e_0000607040),._00003a3243(_00005e_0000607041),._00003a3244(_00005e_0000607042));
   assign _00005e_0000601861 = clk;

   assign _00005e_0000601862 = rst;

   assign _00005e_0000601863 = req;

   assign ack__0 = _00005e_0000601864;

   assign _00005e_0000601865 = clk;

   assign _00005e_0000601866 = rst;

   assign _00005e_0000601867 = ack__0;

   assign ack__1 = _00005e_0000601868;

   assign ack__fill = ack__inputs;

   assign fill__inputs = ((fill & ~ack__inputs) & ~flag__inputs);

   assign fill__outputs = ((ack__1 & ~ack__network) & ~flag__outputs);

   assign _00003a3222 = channel__inputs_00003a3206_00003a_00003atrig__w;

   assign _00003a3223 = channel__inputs_00003a3206_00003a_00003aabus__w;

   assign _00003a3224 = channel__inputs_00003a3206_00003a_00003adbus__w;

   assign _00005e_0000607032 = channel__inputs_00003a3206_00003a_00003adbus__r;

   assign _00005e_0000607033 = channel__inputs_00003a3206_00003a_00003atrig__r;

   assign _00005e_0000607034 = channel__inputs_00003a3206_00003a_00003aabus__r;

   assign _00003a3266 = channel__outputs_00003a3235_00003a_00003areg__0;

   assign _00003a3267 = channel__outputs_00003a3235_00003a_00003areg__1;

   assign _00003a3268 = channel__outputs_00003a3235_00003a_00003areg__2;

   assign _00003a3269 = channel__outputs_00003a3235_00003a_00003areg__3;

   assign _00003a3270 = channel__outputs_00003a3235_00003a_00003areg__4;

   assign _00003a3271 = channel__outputs_00003a3235_00003a_00003areg__5;

   assign _00003a3272 = channel__outputs_00003a3235_00003a_00003areg__6;

   assign _00003a3273 = channel__outputs_00003a3235_00003a_00003areg__7;

   assign _00005e_0000607035 = channel__outputs_00003a3235_00003a_00003areg__0;

   assign _00005e_0000607036 = channel__outputs_00003a3235_00003a_00003areg__1;

   assign _00005e_0000607037 = channel__outputs_00003a3235_00003a_00003areg__2;

   assign _00005e_0000607038 = channel__outputs_00003a3235_00003a_00003areg__3;

   assign _00005e_0000607039 = channel__outputs_00003a3235_00003a_00003areg__4;

   assign _00005e_0000607040 = channel__outputs_00003a3235_00003a_00003areg__5;

   assign _00005e_0000607041 = channel__outputs_00003a3235_00003a_00003areg__6;

   assign _00005e_0000607042 = channel__outputs_00003a3235_00003a_00003areg__7;

   assign _00003a3274 = channel__outputs_00003a3235_00003a_00003arinc_00003a3265_00003a_00003aabus__r;

   assign _00005e_0000607043 = channel__a0_00003a3307_00003a_00003areg__0;

   assign _00005e_0000607044 = channel__a0_00003a3307_00003a_00003areg__1;

   assign _00005e_0000607045 = channel__a0_00003a3307_00003a_00003areg__0;

   assign _00005e_0000607046 = channel__a0_00003a3307_00003a_00003areg__1;

   assign _00005e_0000607047 = channel__a0_00003a3307_00003a_00003arinc_00003a3319_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a3223 <= -32'd1;
      end

      _00003a3222 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a247 <= -32'd1;
      end

      _00003a246 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a246 == 32'd1)) begin
               value__inputs <= _00003a248;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a247 <= ((_00003a247 + 32'd1) == 32'd8) == 1 ? (_00003a247 + 32'd1) : 32'd0;
               _00003a246 <= 32'd1;
            end
         end
      end
      else if (flag__inputs) begin
         address__inputs <= (address__inputs + 32'd1);
         flag__inputs <= 32'd0;
         if ((address__inputs == 32'd8)) begin
            ack__inputs <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            _00003a3223 <= ((_00003a3223 + 32'd1) == 32'd8) == 1 ? (_00003a3223 + 32'd1) : 32'd0;
            _00003a3222 <= 32'd1;
            _00003a3224 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a528 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3274 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a3274)
               32'd0: value__outputs <= _00003a3266;
               32'd1: value__outputs <= _00003a3267;
               32'd2: value__outputs <= _00003a3268;
               32'd3: value__outputs <= _00003a3269;
               32'd4: value__outputs <= _00003a3270;
               32'd5: value__outputs <= _00003a3271;
               32'd6: value__outputs <= _00003a3272;
               32'd7: value__outputs <= _00003a3273;
            endcase
            flag__outputs <= 32'd1;
            _00003a3274 <= ((_00003a3274 + 32'd1) == 32'd8) == 1 ? (_00003a3274 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd8)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            case(_00003a528)
               32'd0: _00003a520 <= value__outputs;
               32'd1: _00003a521 <= value__outputs;
               32'd2: _00003a522 <= value__outputs;
               32'd3: _00003a523 <= value__outputs;
               32'd4: _00003a524 <= value__outputs;
               32'd5: _00003a525 <= value__outputs;
               32'd6: _00003a526 <= value__outputs;
               32'd7: _00003a527 <= value__outputs;
            endcase
            _00003a528 <= ((_00003a528 + 32'd1) == 32'd8) == 1 ? (_00003a528 + 32'd1) : 32'd0;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a3206_00003a_00003adbus__r <= channel__inputs_00003a3206_00003a_00003amem[channel__inputs_00003a3206_00003a_00003aabus__r];

      if (channel__inputs_00003a3206_00003a_00003atrig__w) begin
         channel__inputs_00003a3206_00003a_00003amem[channel__inputs_00003a3206_00003a_00003aabus__w] <= channel__inputs_00003a3206_00003a_00003adbus__w;
      end

   end

endmodule