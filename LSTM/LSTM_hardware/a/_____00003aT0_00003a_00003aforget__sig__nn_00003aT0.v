`timescale 1ps/1ps

module _____00003aT0_00003a_00003aforget__sig__nn_00003aT0( clk, rst, req, fill, _00003a161, ack__fill, ack__network, _00003a159, _00003a160, _00003a304, _00003a305, _00003a306, _00003a307, _00003a308, _00003a309, _00003a310, _00003a311, _00003a312 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a161;
   output ack__fill;
   output reg ack__network;
   output reg _00003a159;
   output reg [2:0] _00003a160;
   output reg signed[7:0] _00003a304;
   output reg signed[7:0] _00003a305;
   output reg signed[7:0] _00003a306;
   output reg signed[7:0] _00003a307;
   output reg signed[7:0] _00003a308;
   output reg signed[7:0] _00003a309;
   output reg signed[7:0] _00003a310;
   output reg signed[7:0] _00003a311;
   inout [2:0] _00003a312;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [3:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a1077;
   reg [2:0] _00003a1078;
   reg signed[7:0] _00003a1079;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [3:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a1121;
   wire signed[7:0] _00003a1122;
   wire signed[7:0] _00003a1123;
   wire signed[7:0] _00003a1124;
   wire signed[7:0] _00003a1125;
   wire signed[7:0] _00003a1126;
   wire signed[7:0] _00003a1127;
   wire signed[7:0] _00003a1128;
   reg [2:0] _00003a1129;
   wire channel__inputs_00003a1061_00003a_00003atrig__r;
   wire channel__inputs_00003a1061_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a1061_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a1061_00003a_00003adbus__w;
   wire [2:0] channel__inputs_00003a1061_00003a_00003aabus__r;
   wire [2:0] channel__inputs_00003a1061_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a1061_00003a_00003amem  :0[0:7];
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__0;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__1;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__2;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__3;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__4;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__5;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__6;
   wire signed[7:0] channel__outputs_00003a1090_00003a_00003areg__7;
   wire [2:0] channel__outputs_00003a1090_00003a_00003arinc_00003a1120_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a1090_00003a_00003awinc_00003a1130_00003a_00003aabus__w;
   wire [2:0] channel__outputs_00003a1090_00003a_00003ardec_00003a1140_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a1090_00003a_00003awdec_00003a1151_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a1162_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a1162_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a1162_00003a_00003arinc_00003a1174_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a1162_00003a_00003awinc_00003a1178_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a1162_00003a_00003ardec_00003a1182_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a1162_00003a_00003awdec_00003a1187_00003a_00003aabus__w;
   wire _00005e_0000601861;
   wire _00005e_0000601862;
   wire _00005e_0000601863;
   wire _00005e_0000601864;
   wire _00005e_0000601865;
   wire _00005e_0000601866;
   wire _00005e_0000601867;
   wire _00005e_0000601868;
   wire signed[7:0] _00005e_0000601869;
   wire _00005e_0000601870;
   wire [2:0] _00005e_0000601871;
   wire signed[7:0] _00005e_0000601872;
   wire signed[7:0] _00005e_0000601873;
   wire signed[7:0] _00005e_0000601874;
   wire signed[7:0] _00005e_0000601875;
   wire signed[7:0] _00005e_0000601876;
   wire signed[7:0] _00005e_0000601877;
   wire signed[7:0] _00005e_0000601878;
   wire signed[7:0] _00005e_0000601879;
   wire signed[7:0] _00005e_0000601880;
   wire signed[7:0] _00005e_0000601881;
   wire signed[7:0] _00005e_0000601882;
   wire signed[7:0] _00005e_0000601883;
   wire [0:0] _00005e_0000601884;

   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer0_00003aT3 layer0(.clk(_00005e_0000601861),.rst(_00005e_0000601862),.req(_00005e_0000601863),._00003a1075(_00005e_0000601869),.ack__layer(_00005e_0000601864),._00003a1073(_00005e_0000601870),._00003a1074(_00005e_0000601871),._00003a1164(_00005e_0000601880),._00003a1165(_00005e_0000601881));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3 layer1(.clk(_00005e_0000601865),.rst(_00005e_0000601866),.req(_00005e_0000601867),._00003a1175(_00005e_0000601882),._00003a1176(_00005e_0000601883),.ack__layer(_00005e_0000601868),._00003a1177(_00005e_0000601884),._00003a1092(_00005e_0000601872),._00003a1093(_00005e_0000601873),._00003a1094(_00005e_0000601874),._00003a1095(_00005e_0000601875),._00003a1096(_00005e_0000601876),._00003a1097(_00005e_0000601877),._00003a1098(_00005e_0000601878),._00003a1099(_00005e_0000601879));
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

   assign _00003a1077 = channel__inputs_00003a1061_00003a_00003atrig__w;

   assign _00003a1078 = channel__inputs_00003a1061_00003a_00003aabus__w;

   assign _00003a1079 = channel__inputs_00003a1061_00003a_00003adbus__w;

   assign _00005e_0000601869 = channel__inputs_00003a1061_00003a_00003adbus__r;

   assign _00005e_0000601870 = channel__inputs_00003a1061_00003a_00003atrig__r;

   assign _00005e_0000601871 = channel__inputs_00003a1061_00003a_00003aabus__r;

   assign _00003a1121 = channel__outputs_00003a1090_00003a_00003areg__0;

   assign _00003a1122 = channel__outputs_00003a1090_00003a_00003areg__1;

   assign _00003a1123 = channel__outputs_00003a1090_00003a_00003areg__2;

   assign _00003a1124 = channel__outputs_00003a1090_00003a_00003areg__3;

   assign _00003a1125 = channel__outputs_00003a1090_00003a_00003areg__4;

   assign _00003a1126 = channel__outputs_00003a1090_00003a_00003areg__5;

   assign _00003a1127 = channel__outputs_00003a1090_00003a_00003areg__6;

   assign _00003a1128 = channel__outputs_00003a1090_00003a_00003areg__7;

   assign _00005e_0000601872 = channel__outputs_00003a1090_00003a_00003areg__0;

   assign _00005e_0000601873 = channel__outputs_00003a1090_00003a_00003areg__1;

   assign _00005e_0000601874 = channel__outputs_00003a1090_00003a_00003areg__2;

   assign _00005e_0000601875 = channel__outputs_00003a1090_00003a_00003areg__3;

   assign _00005e_0000601876 = channel__outputs_00003a1090_00003a_00003areg__4;

   assign _00005e_0000601877 = channel__outputs_00003a1090_00003a_00003areg__5;

   assign _00005e_0000601878 = channel__outputs_00003a1090_00003a_00003areg__6;

   assign _00005e_0000601879 = channel__outputs_00003a1090_00003a_00003areg__7;

   assign _00003a1129 = channel__outputs_00003a1090_00003a_00003arinc_00003a1120_00003a_00003aabus__r;

   assign _00005e_0000601880 = channel__a0_00003a1162_00003a_00003areg__0;

   assign _00005e_0000601881 = channel__a0_00003a1162_00003a_00003areg__1;

   assign _00005e_0000601882 = channel__a0_00003a1162_00003a_00003areg__0;

   assign _00005e_0000601883 = channel__a0_00003a1162_00003a_00003areg__1;

   assign _00005e_0000601884 = channel__a0_00003a1162_00003a_00003arinc_00003a1174_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a1078 <= -32'd1;
      end

      _00003a1077 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a160 <= -32'd1;
      end

      _00003a159 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a159 == 32'd1)) begin
               value__inputs <= _00003a161;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a160 <= ((_00003a160 + 32'd1) == 32'd8) == 1 ? (_00003a160 + 32'd1) : 32'd0;
               _00003a159 <= 32'd1;
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
            _00003a1078 <= ((_00003a1078 + 32'd1) == 32'd8) == 1 ? (_00003a1078 + 32'd1) : 32'd0;
            _00003a1077 <= 32'd1;
            _00003a1079 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a312 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1129 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a1129)
               32'd0: value__outputs <= _00003a1121;
               32'd1: value__outputs <= _00003a1122;
               32'd2: value__outputs <= _00003a1123;
               32'd3: value__outputs <= _00003a1124;
               32'd4: value__outputs <= _00003a1125;
               32'd5: value__outputs <= _00003a1126;
               32'd6: value__outputs <= _00003a1127;
               32'd7: value__outputs <= _00003a1128;
            endcase
            flag__outputs <= 32'd1;
            _00003a1129 <= ((_00003a1129 + 32'd1) == 32'd8) == 1 ? (_00003a1129 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd8)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            case(_00003a312)
               32'd0: _00003a304 <= value__outputs;
               32'd1: _00003a305 <= value__outputs;
               32'd2: _00003a306 <= value__outputs;
               32'd3: _00003a307 <= value__outputs;
               32'd4: _00003a308 <= value__outputs;
               32'd5: _00003a309 <= value__outputs;
               32'd6: _00003a310 <= value__outputs;
               32'd7: _00003a311 <= value__outputs;
            endcase
            _00003a312 <= ((_00003a312 + 32'd1) == 32'd8) == 1 ? (_00003a312 + 32'd1) : 32'd0;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a1061_00003a_00003adbus__r <= channel__inputs_00003a1061_00003a_00003amem[channel__inputs_00003a1061_00003a_00003aabus__r];

      if (channel__inputs_00003a1061_00003a_00003atrig__w) begin
         channel__inputs_00003a1061_00003a_00003amem[channel__inputs_00003a1061_00003a_00003aabus__w] <= channel__inputs_00003a1061_00003a_00003adbus__w;
      end

   end

endmodule