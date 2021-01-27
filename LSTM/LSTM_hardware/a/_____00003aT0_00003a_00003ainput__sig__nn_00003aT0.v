`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__sig__nn_00003aT0( clk, rst, req, fill, _00003a190, ack__fill, ack__network, _00003a188, _00003a189, _00003a376, _00003a377, _00003a378, _00003a379, _00003a380, _00003a381, _00003a382, _00003a383, _00003a384 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a190;
   output ack__fill;
   output reg ack__network;
   output reg _00003a188;
   output reg [2:0] _00003a189;
   output reg signed[7:0] _00003a376;
   output reg signed[7:0] _00003a377;
   output reg signed[7:0] _00003a378;
   output reg signed[7:0] _00003a379;
   output reg signed[7:0] _00003a380;
   output reg signed[7:0] _00003a381;
   output reg signed[7:0] _00003a382;
   output reg signed[7:0] _00003a383;
   inout [2:0] _00003a384;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [3:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a1792;
   reg [2:0] _00003a1793;
   reg signed[7:0] _00003a1794;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [3:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a1836;
   wire signed[7:0] _00003a1837;
   wire signed[7:0] _00003a1838;
   wire signed[7:0] _00003a1839;
   wire signed[7:0] _00003a1840;
   wire signed[7:0] _00003a1841;
   wire signed[7:0] _00003a1842;
   wire signed[7:0] _00003a1843;
   reg [2:0] _00003a1844;
   wire channel__inputs_00003a1776_00003a_00003atrig__r;
   wire channel__inputs_00003a1776_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a1776_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a1776_00003a_00003adbus__w;
   wire [2:0] channel__inputs_00003a1776_00003a_00003aabus__r;
   wire [2:0] channel__inputs_00003a1776_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a1776_00003a_00003amem  :0[0:7];
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__0;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__1;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__2;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__3;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__4;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__5;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__6;
   wire signed[7:0] channel__outputs_00003a1805_00003a_00003areg__7;
   wire [2:0] channel__outputs_00003a1805_00003a_00003arinc_00003a1835_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a1805_00003a_00003awinc_00003a1845_00003a_00003aabus__w;
   wire [2:0] channel__outputs_00003a1805_00003a_00003ardec_00003a1855_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a1805_00003a_00003awdec_00003a1866_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a1877_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a1877_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a1877_00003a_00003arinc_00003a1889_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a1877_00003a_00003awinc_00003a1893_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a1877_00003a_00003ardec_00003a1897_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a1877_00003a_00003awdec_00003a1902_00003a_00003aabus__w;
   wire _00005e_0000601861;
   wire _00005e_0000601862;
   wire _00005e_0000601863;
   wire _00005e_0000601864;
   wire _00005e_0000601865;
   wire _00005e_0000601866;
   wire _00005e_0000601867;
   wire _00005e_0000601868;
   wire signed[7:0] _00005e_0000603771;
   wire _00005e_0000603772;
   wire [2:0] _00005e_0000603773;
   wire signed[7:0] _00005e_0000603774;
   wire signed[7:0] _00005e_0000603775;
   wire signed[7:0] _00005e_0000603776;
   wire signed[7:0] _00005e_0000603777;
   wire signed[7:0] _00005e_0000603778;
   wire signed[7:0] _00005e_0000603779;
   wire signed[7:0] _00005e_0000603780;
   wire signed[7:0] _00005e_0000603781;
   wire signed[7:0] _00005e_0000603782;
   wire signed[7:0] _00005e_0000603783;
   wire signed[7:0] _00005e_0000603784;
   wire signed[7:0] _00005e_0000603785;
   wire [0:0] _00005e_0000603786;

   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer0_00003aT00 layer0(.clk(_00005e_0000601861),.rst(_00005e_0000601862),.req(_00005e_0000601863),._00003a1790(_00005e_0000603771),.ack__layer(_00005e_0000601864),._00003a1788(_00005e_0000603772),._00003a1789(_00005e_0000603773),._00003a1879(_00005e_0000603782),._00003a1880(_00005e_0000603783));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00 layer1(.clk(_00005e_0000601865),.rst(_00005e_0000601866),.req(_00005e_0000601867),._00003a1890(_00005e_0000603784),._00003a1891(_00005e_0000603785),.ack__layer(_00005e_0000601868),._00003a1892(_00005e_0000603786),._00003a1807(_00005e_0000603774),._00003a1808(_00005e_0000603775),._00003a1809(_00005e_0000603776),._00003a1810(_00005e_0000603777),._00003a1811(_00005e_0000603778),._00003a1812(_00005e_0000603779),._00003a1813(_00005e_0000603780),._00003a1814(_00005e_0000603781));
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

   assign _00003a1792 = channel__inputs_00003a1776_00003a_00003atrig__w;

   assign _00003a1793 = channel__inputs_00003a1776_00003a_00003aabus__w;

   assign _00003a1794 = channel__inputs_00003a1776_00003a_00003adbus__w;

   assign _00005e_0000603771 = channel__inputs_00003a1776_00003a_00003adbus__r;

   assign _00005e_0000603772 = channel__inputs_00003a1776_00003a_00003atrig__r;

   assign _00005e_0000603773 = channel__inputs_00003a1776_00003a_00003aabus__r;

   assign _00003a1836 = channel__outputs_00003a1805_00003a_00003areg__0;

   assign _00003a1837 = channel__outputs_00003a1805_00003a_00003areg__1;

   assign _00003a1838 = channel__outputs_00003a1805_00003a_00003areg__2;

   assign _00003a1839 = channel__outputs_00003a1805_00003a_00003areg__3;

   assign _00003a1840 = channel__outputs_00003a1805_00003a_00003areg__4;

   assign _00003a1841 = channel__outputs_00003a1805_00003a_00003areg__5;

   assign _00003a1842 = channel__outputs_00003a1805_00003a_00003areg__6;

   assign _00003a1843 = channel__outputs_00003a1805_00003a_00003areg__7;

   assign _00005e_0000603774 = channel__outputs_00003a1805_00003a_00003areg__0;

   assign _00005e_0000603775 = channel__outputs_00003a1805_00003a_00003areg__1;

   assign _00005e_0000603776 = channel__outputs_00003a1805_00003a_00003areg__2;

   assign _00005e_0000603777 = channel__outputs_00003a1805_00003a_00003areg__3;

   assign _00005e_0000603778 = channel__outputs_00003a1805_00003a_00003areg__4;

   assign _00005e_0000603779 = channel__outputs_00003a1805_00003a_00003areg__5;

   assign _00005e_0000603780 = channel__outputs_00003a1805_00003a_00003areg__6;

   assign _00005e_0000603781 = channel__outputs_00003a1805_00003a_00003areg__7;

   assign _00003a1844 = channel__outputs_00003a1805_00003a_00003arinc_00003a1835_00003a_00003aabus__r;

   assign _00005e_0000603782 = channel__a0_00003a1877_00003a_00003areg__0;

   assign _00005e_0000603783 = channel__a0_00003a1877_00003a_00003areg__1;

   assign _00005e_0000603784 = channel__a0_00003a1877_00003a_00003areg__0;

   assign _00005e_0000603785 = channel__a0_00003a1877_00003a_00003areg__1;

   assign _00005e_0000603786 = channel__a0_00003a1877_00003a_00003arinc_00003a1889_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a1793 <= -32'd1;
      end

      _00003a1792 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a189 <= -32'd1;
      end

      _00003a188 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a188 == 32'd1)) begin
               value__inputs <= _00003a190;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a189 <= ((_00003a189 + 32'd1) == 32'd8) == 1 ? (_00003a189 + 32'd1) : 32'd0;
               _00003a188 <= 32'd1;
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
            _00003a1793 <= ((_00003a1793 + 32'd1) == 32'd8) == 1 ? (_00003a1793 + 32'd1) : 32'd0;
            _00003a1792 <= 32'd1;
            _00003a1794 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a384 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1844 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a1844)
               32'd0: value__outputs <= _00003a1836;
               32'd1: value__outputs <= _00003a1837;
               32'd2: value__outputs <= _00003a1838;
               32'd3: value__outputs <= _00003a1839;
               32'd4: value__outputs <= _00003a1840;
               32'd5: value__outputs <= _00003a1841;
               32'd6: value__outputs <= _00003a1842;
               32'd7: value__outputs <= _00003a1843;
            endcase
            flag__outputs <= 32'd1;
            _00003a1844 <= ((_00003a1844 + 32'd1) == 32'd8) == 1 ? (_00003a1844 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd8)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            case(_00003a384)
               32'd0: _00003a376 <= value__outputs;
               32'd1: _00003a377 <= value__outputs;
               32'd2: _00003a378 <= value__outputs;
               32'd3: _00003a379 <= value__outputs;
               32'd4: _00003a380 <= value__outputs;
               32'd5: _00003a381 <= value__outputs;
               32'd6: _00003a382 <= value__outputs;
               32'd7: _00003a383 <= value__outputs;
            endcase
            _00003a384 <= ((_00003a384 + 32'd1) == 32'd8) == 1 ? (_00003a384 + 32'd1) : 32'd0;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a1776_00003a_00003adbus__r <= channel__inputs_00003a1776_00003a_00003amem[channel__inputs_00003a1776_00003a_00003aabus__r];

      if (channel__inputs_00003a1776_00003a_00003atrig__w) begin
         channel__inputs_00003a1776_00003a_00003amem[channel__inputs_00003a1776_00003a_00003aabus__w] <= channel__inputs_00003a1776_00003a_00003adbus__w;
      end

   end

endmodule