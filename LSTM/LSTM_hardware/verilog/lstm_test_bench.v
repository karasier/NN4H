`timescale 1ps/1ps

module _____00003aT0( ); 
   reg clk;
   reg rst;
   reg req;
   reg fill;
   wire ack__fill__sig;
   wire ack__network__sig;
   wire ack__fill__tanh;
   wire ack__network__tanh;
   wire rom__inputs__sig_00003a1_00003a_00003atrig__r;
   reg signed[7:0] rom__inputs__sig_00003a1_00003a_00003adbus__r  :0[0:-1];
   wire [0:0] rom__inputs__sig_00003a1_00003a_00003aabus__r;
   reg :0[0:-1] rom__inputs__sig_00003a1_00003a_00003amem  [0:1];
   wire ram__outputs__sig_00003a16_00003a_00003atrig__r;
   wire ram__outputs__sig_00003a16_00003a_00003atrig__w;
   reg signed[7:0] ram__outputs__sig_00003a16_00003a_00003adbus__r  :0[0:0];
   wire signed[7:0] ram__outputs__sig_00003a16_00003a_00003adbus__w  :0[0:0];
   wire [0:0] ram__outputs__sig_00003a16_00003a_00003aabus__r;
   wire [0:0] ram__outputs__sig_00003a16_00003a_00003aabus__w;
   reg :0[0:0] ram__outputs__sig_00003a16_00003a_00003amem  [0:0];
   wire rom__inputs__tanh_00003a45_00003a_00003atrig__r;
   reg signed[7:0] rom__inputs__tanh_00003a45_00003a_00003adbus__r  :0[0:-1];
   wire [0:0] rom__inputs__tanh_00003a45_00003a_00003aabus__r;
   reg :0[0:-1] rom__inputs__tanh_00003a45_00003a_00003amem  [0:1];
   wire ram__outputs__tanh_00003a60_00003a_00003atrig__r;
   wire ram__outputs__tanh_00003a60_00003a_00003atrig__w;
   reg signed[7:0] ram__outputs__tanh_00003a60_00003a_00003adbus__r  :0[0:0];
   wire signed[7:0] ram__outputs__tanh_00003a60_00003a_00003adbus__w  :0[0:0];
   wire [0:0] ram__outputs__tanh_00003a60_00003a_00003aabus__r;
   wire [0:0] ram__outputs__tanh_00003a60_00003a_00003aabus__w;
   reg :0[0:0] ram__outputs__tanh_00003a60_00003a_00003amem  [0:0];
   wire _00005e_0000600;
   wire _00005e_0000601;
   wire _00005e_0000602;
   wire _00005e_0000603;
   wire _00005e_0000604;
   wire _00005e_0000605;
   wire _00005e_0000606;
   wire _00005e_0000607;
   wire _00005e_0000608;
   wire _00005e_0000609;
   wire _00005e_00006010;
   wire _00005e_00006011;
   wire signed[7:0] _00005e_00006012  :0[0:-1];
   wire _00005e_00006013;
   wire [0:0] _00005e_00006014;
   wire _00005e_00006015;
   wire [0:0] _00005e_00006016;
   wire signed[7:0] _00005e_00006017  :0[0:0];
   wire signed[7:0] _00005e_00006018  :0[0:-1];
   wire _00005e_00006019;
   wire [0:0] _00005e_00006020;
   wire _00005e_00006021;
   wire [0:0] _00005e_00006022;
   wire signed[7:0] _00005e_00006023  :0[0:0];

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0 sigmoid__neural__network(.clk(_00005e_0000600),.rst(_00005e_0000601),.req(_00005e_0000602),.fill(_00005e_0000603),._00003a10(_00005e_00006012),.ack__fill(_00005e_0000604),.ack__network(_00005e_0000605),._00003a8(_00005e_00006013),._00003a9(_00005e_00006014),._00003a32(_00005e_00006015),._00003a33(_00005e_00006016),._00003a34(_00005e_00006017));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0 tanh__neural__network(.clk(_00005e_0000606),.rst(_00005e_0000607),.req(_00005e_0000608),.fill(_00005e_0000609),._00003a54(_00005e_00006018),.ack__fill(_00005e_00006010),.ack__network(_00005e_00006011),._00003a52(_00005e_00006019),._00003a53(_00005e_00006020),._00003a76(_00005e_00006021),._00003a77(_00005e_00006022),._00003a78(_00005e_00006023));
   assign _00005e_0000600 = clk;

   assign _00005e_0000601 = rst;

   assign _00005e_0000602 = req;

   assign _00005e_0000603 = fill;

   assign ack__fill__sig = _00005e_0000604;

   assign ack__network__sig = _00005e_0000605;

   assign _00005e_0000606 = clk;

   assign _00005e_0000607 = rst;

   assign _00005e_0000608 = req;

   assign _00005e_0000609 = fill;

   assign ack__fill__tanh = _00005e_00006010;

   assign ack__network__tanh = _00005e_00006011;

   assign _00005e_00006012 = rom__inputs__sig_00003a1_00003a_00003adbus__r;

   assign _00005e_00006013 = rom__inputs__sig_00003a1_00003a_00003atrig__r;

   assign _00005e_00006014 = rom__inputs__sig_00003a1_00003a_00003aabus__r;

   assign _00005e_00006015 = ram__outputs__sig_00003a16_00003a_00003atrig__w;

   assign _00005e_00006016 = ram__outputs__sig_00003a16_00003a_00003aabus__w;

   assign _00005e_00006017 = ram__outputs__sig_00003a16_00003a_00003adbus__w;

   assign _00005e_00006018 = rom__inputs__tanh_00003a45_00003a_00003adbus__r;

   assign _00005e_00006019 = rom__inputs__tanh_00003a45_00003a_00003atrig__r;

   assign _00005e_00006020 = rom__inputs__tanh_00003a45_00003a_00003aabus__r;

   assign _00005e_00006021 = ram__outputs__tanh_00003a60_00003a_00003atrig__w;

   assign _00005e_00006022 = ram__outputs__tanh_00003a60_00003a_00003aabus__w;

   assign _00005e_00006023 = ram__outputs__tanh_00003a60_00003a_00003adbus__w;

   initial begin

      clk = 32'd0;

      rst = 32'd0;

      req = 32'd0;

      fill = 32'd0;

      #10

      rst = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      rst = 32'd0;

      fill = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      fill = 32'd0;

      clk = 32'd1;

      #10

      clk = 32'd0;

      req = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

   end

   always @( negedge clk ) begin

      rom__inputs__sig_00003a1_00003a_00003adbus__r <= rom__inputs__sig_00003a1_00003a_00003amem[rom__inputs__sig_00003a1_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      ram__outputs__sig_00003a16_00003a_00003adbus__r <= ram__outputs__sig_00003a16_00003a_00003amem[ram__outputs__sig_00003a16_00003a_00003aabus__r];

      if (ram__outputs__sig_00003a16_00003a_00003atrig__w) begin
         ram__outputs__sig_00003a16_00003a_00003amem[ram__outputs__sig_00003a16_00003a_00003aabus__w] <= ram__outputs__sig_00003a16_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      rom__inputs__tanh_00003a45_00003a_00003adbus__r <= rom__inputs__tanh_00003a45_00003a_00003amem[rom__inputs__tanh_00003a45_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      ram__outputs__tanh_00003a60_00003a_00003adbus__r <= ram__outputs__tanh_00003a60_00003a_00003amem[ram__outputs__tanh_00003a60_00003a_00003aabus__r];

      if (ram__outputs__tanh_00003a60_00003a_00003atrig__w) begin
         ram__outputs__tanh_00003a60_00003a_00003amem[ram__outputs__tanh_00003a60_00003a_00003aabus__w] <= ram__outputs__tanh_00003a60_00003a_00003adbus__w;
      end

   end

   initial begin

      rom__inputs__sig_00003a1_00003a_00003amem[32'd0] = $signed(32'd16);

      rom__inputs__sig_00003a1_00003a_00003amem[32'd1] = $signed(32'd16);

      rom__inputs__tanh_00003a45_00003a_00003amem[32'd0] = $signed(32'd16);

      rom__inputs__tanh_00003a45_00003a_00003amem[32'd1] = $signed(32'd16);

   end

endmodule