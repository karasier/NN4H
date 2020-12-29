`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0( clk, rst, req, fill, _00003a219, ack__fill, ack__network, _00003a217, _00003a218, _00003a448, _00003a449, _00003a450, _00003a451, _00003a452, _00003a453, _00003a454, _00003a455, _00003a456 ); 
   input clk;
   input rst;
   input req;
   input fill;
   input signed[7:0] _00003a219;
   output ack__fill;
   output reg ack__network;
   output reg _00003a217;
   output reg [2:0] _00003a218;
   output reg signed[7:0] _00003a448;
   output reg signed[7:0] _00003a449;
   output reg signed[7:0] _00003a450;
   output reg signed[7:0] _00003a451;
   output reg signed[7:0] _00003a452;
   output reg signed[7:0] _00003a453;
   output reg signed[7:0] _00003a454;
   output reg signed[7:0] _00003a455;
   inout [2:0] _00003a456;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg signed[7:0] value__inputs;
   reg [3:0] address__inputs;
   reg flag__inputs;
   reg ack__inputs;
   reg _00003a2507;
   reg [2:0] _00003a2508;
   reg signed[7:0] _00003a2509;
   wire fill__outputs;
   reg signed[7:0] value__outputs;
   reg [3:0] address__outputs;
   reg flag__outputs;
   wire signed[7:0] _00003a2551;
   wire signed[7:0] _00003a2552;
   wire signed[7:0] _00003a2553;
   wire signed[7:0] _00003a2554;
   wire signed[7:0] _00003a2555;
   wire signed[7:0] _00003a2556;
   wire signed[7:0] _00003a2557;
   wire signed[7:0] _00003a2558;
   reg [2:0] _00003a2559;
   wire channel__inputs_00003a2491_00003a_00003atrig__r;
   wire channel__inputs_00003a2491_00003a_00003atrig__w;
   reg signed[7:0] channel__inputs_00003a2491_00003a_00003adbus__r;
   wire signed[7:0] channel__inputs_00003a2491_00003a_00003adbus__w;
   wire [2:0] channel__inputs_00003a2491_00003a_00003aabus__r;
   wire [2:0] channel__inputs_00003a2491_00003a_00003aabus__w;
   wire signed[7:0] channel__inputs_00003a2491_00003a_00003amem  :0[0:7];
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__0;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__1;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__2;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__3;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__4;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__5;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__6;
   wire signed[7:0] channel__outputs_00003a2520_00003a_00003areg__7;
   wire [2:0] channel__outputs_00003a2520_00003a_00003arinc_00003a2550_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a2520_00003a_00003awinc_00003a2560_00003a_00003aabus__w;
   wire [2:0] channel__outputs_00003a2520_00003a_00003ardec_00003a2570_00003a_00003aabus__r;
   wire [2:0] channel__outputs_00003a2520_00003a_00003awdec_00003a2581_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a2592_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a2592_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a2592_00003a_00003arinc_00003a2604_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a2592_00003a_00003awinc_00003a2608_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a2592_00003a_00003ardec_00003a2612_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a2592_00003a_00003awdec_00003a2617_00003a_00003aabus__w;
   wire _00005e_0000601861;
   wire _00005e_0000601862;
   wire _00005e_0000601863;
   wire _00005e_0000601864;
   wire _00005e_0000601865;
   wire _00005e_0000601866;
   wire _00005e_0000601867;
   wire _00005e_0000601868;
   wire signed[7:0] _00005e_0000605390;
   wire _00005e_0000605391;
   wire [2:0] _00005e_0000605392;
   wire signed[7:0] _00005e_0000605393;
   wire signed[7:0] _00005e_0000605394;
   wire signed[7:0] _00005e_0000605395;
   wire signed[7:0] _00005e_0000605396;
   wire signed[7:0] _00005e_0000605397;
   wire signed[7:0] _00005e_0000605398;
   wire signed[7:0] _00005e_0000605399;
   wire signed[7:0] _00005e_0000605400;
   wire signed[7:0] _00005e_0000605401;
   wire signed[7:0] _00005e_0000605402;
   wire signed[7:0] _00005e_0000605403;
   wire signed[7:0] _00005e_0000605404;
   wire [0:0] _00005e_0000605405;

   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer0_00003aT10 layer0(.clk(_00005e_0000601861),.rst(_00005e_0000601862),.req(_00005e_0000601863),._00003a2505(_00005e_0000605390),.ack__layer(_00005e_0000601864),._00003a2503(_00005e_0000605391),._00003a2504(_00005e_0000605392),._00003a2594(_00005e_0000605401),._00003a2595(_00005e_0000605402));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10 layer1(.clk(_00005e_0000601865),.rst(_00005e_0000601866),.req(_00005e_0000601867),._00003a2605(_00005e_0000605403),._00003a2606(_00005e_0000605404),.ack__layer(_00005e_0000601868),._00003a2607(_00005e_0000605405),._00003a2522(_00005e_0000605393),._00003a2523(_00005e_0000605394),._00003a2524(_00005e_0000605395),._00003a2525(_00005e_0000605396),._00003a2526(_00005e_0000605397),._00003a2527(_00005e_0000605398),._00003a2528(_00005e_0000605399),._00003a2529(_00005e_0000605400));
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

   assign _00003a2507 = channel__inputs_00003a2491_00003a_00003atrig__w;

   assign _00003a2508 = channel__inputs_00003a2491_00003a_00003aabus__w;

   assign _00003a2509 = channel__inputs_00003a2491_00003a_00003adbus__w;

   assign _00005e_0000605390 = channel__inputs_00003a2491_00003a_00003adbus__r;

   assign _00005e_0000605391 = channel__inputs_00003a2491_00003a_00003atrig__r;

   assign _00005e_0000605392 = channel__inputs_00003a2491_00003a_00003aabus__r;

   assign _00003a2551 = channel__outputs_00003a2520_00003a_00003areg__0;

   assign _00003a2552 = channel__outputs_00003a2520_00003a_00003areg__1;

   assign _00003a2553 = channel__outputs_00003a2520_00003a_00003areg__2;

   assign _00003a2554 = channel__outputs_00003a2520_00003a_00003areg__3;

   assign _00003a2555 = channel__outputs_00003a2520_00003a_00003areg__4;

   assign _00003a2556 = channel__outputs_00003a2520_00003a_00003areg__5;

   assign _00003a2557 = channel__outputs_00003a2520_00003a_00003areg__6;

   assign _00003a2558 = channel__outputs_00003a2520_00003a_00003areg__7;

   assign _00005e_0000605393 = channel__outputs_00003a2520_00003a_00003areg__0;

   assign _00005e_0000605394 = channel__outputs_00003a2520_00003a_00003areg__1;

   assign _00005e_0000605395 = channel__outputs_00003a2520_00003a_00003areg__2;

   assign _00005e_0000605396 = channel__outputs_00003a2520_00003a_00003areg__3;

   assign _00005e_0000605397 = channel__outputs_00003a2520_00003a_00003areg__4;

   assign _00005e_0000605398 = channel__outputs_00003a2520_00003a_00003areg__5;

   assign _00005e_0000605399 = channel__outputs_00003a2520_00003a_00003areg__6;

   assign _00005e_0000605400 = channel__outputs_00003a2520_00003a_00003areg__7;

   assign _00003a2559 = channel__outputs_00003a2520_00003a_00003arinc_00003a2550_00003a_00003aabus__r;

   assign _00005e_0000605401 = channel__a0_00003a2592_00003a_00003areg__0;

   assign _00005e_0000605402 = channel__a0_00003a2592_00003a_00003areg__1;

   assign _00005e_0000605403 = channel__a0_00003a2592_00003a_00003areg__0;

   assign _00005e_0000605404 = channel__a0_00003a2592_00003a_00003areg__1;

   assign _00005e_0000605405 = channel__a0_00003a2592_00003a_00003arinc_00003a2604_00003a_00003aabus__r;

   always @( posedge clk ) begin

      if (rst) begin
         ack__0 <= 32'd0;
         ack__1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a2508 <= -32'd1;
      end

      _00003a2507 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a218 <= -32'd1;
      end

      _00003a217 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         flag__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end
      else if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            if ((_00003a217 == 32'd1)) begin
               value__inputs <= _00003a219;
               flag__inputs <= 32'd1;
            end
            else begin
               _00003a218 <= ((_00003a218 + 32'd1) == 32'd8) == 1 ? (_00003a218 + 32'd1) : 32'd0;
               _00003a217 <= 32'd1;
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
            _00003a2508 <= ((_00003a2508 + 32'd1) == 32'd8) == 1 ? (_00003a2508 + 32'd1) : 32'd0;
            _00003a2507 <= 32'd1;
            _00003a2509 <= value__inputs;
         end
      end
      else begin
         flag__inputs <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a456 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2559 <= 32'd0;
      end

      if (rst) begin
         address__outputs <= 32'd0;
         flag__outputs <= 32'd0;
         ack__network <= 32'd0;
      end
      else if (fill__outputs) begin
         if ((rst == 32'd0)) begin
            case(_00003a2559)
               32'd0: value__outputs <= _00003a2551;
               32'd1: value__outputs <= _00003a2552;
               32'd2: value__outputs <= _00003a2553;
               32'd3: value__outputs <= _00003a2554;
               32'd4: value__outputs <= _00003a2555;
               32'd5: value__outputs <= _00003a2556;
               32'd6: value__outputs <= _00003a2557;
               32'd7: value__outputs <= _00003a2558;
            endcase
            flag__outputs <= 32'd1;
            _00003a2559 <= ((_00003a2559 + 32'd1) == 32'd8) == 1 ? (_00003a2559 + 32'd1) : 32'd0;
         end
      end
      else if (flag__outputs) begin
         address__outputs <= (address__outputs + 32'd1);
         flag__outputs <= 32'd0;
         if ((address__outputs == 32'd8)) begin
            ack__network <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            case(_00003a456)
               32'd0: _00003a448 <= value__outputs;
               32'd1: _00003a449 <= value__outputs;
               32'd2: _00003a450 <= value__outputs;
               32'd3: _00003a451 <= value__outputs;
               32'd4: _00003a452 <= value__outputs;
               32'd5: _00003a453 <= value__outputs;
               32'd6: _00003a454 <= value__outputs;
               32'd7: _00003a455 <= value__outputs;
            endcase
            _00003a456 <= ((_00003a456 + 32'd1) == 32'd8) == 1 ? (_00003a456 + 32'd1) : 32'd0;
         end
      end
      else begin
         flag__outputs <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__inputs_00003a2491_00003a_00003adbus__r <= channel__inputs_00003a2491_00003a_00003amem[channel__inputs_00003a2491_00003a_00003aabus__r];

      if (channel__inputs_00003a2491_00003a_00003atrig__w) begin
         channel__inputs_00003a2491_00003a_00003amem[channel__inputs_00003a2491_00003a_00003aabus__w] <= channel__inputs_00003a2491_00003a_00003adbus__w;
      end

   end

endmodule