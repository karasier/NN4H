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
   wire req__mul;
   reg ack__mul;
   wire signed[7:0] _00003a18;
   wire signed[7:0] _00003a56;
   reg signed[7:0] _00003a79;
   wire rom__inputs__sig_00003a1_00003a_00003atrig__r;
   reg signed[7:0] rom__inputs__sig_00003a1_00003a_00003adbus__r;
   wire [0:0] rom__inputs__sig_00003a1_00003a_00003aabus__r;
   wire signed[7:0] rom__inputs__sig_00003a1_00003a_00003amem  :0[0:1];
   wire signed[7:0] ram__outputs__sig_00003a16_00003a_00003areg__0;
   wire [0:0] ram__outputs__sig_00003a16_00003a_00003arinc_00003a25_00003a_00003aabus__r;
   wire [0:0] ram__outputs__sig_00003a16_00003a_00003awinc_00003a28_00003a_00003aabus__w;
   wire [0:0] ram__outputs__sig_00003a16_00003a_00003ardec_00003a31_00003a_00003aabus__r;
   wire [0:0] ram__outputs__sig_00003a16_00003a_00003awdec_00003a35_00003a_00003aabus__w;
   wire rom__inputs__tanh_00003a39_00003a_00003atrig__r;
   reg signed[7:0] rom__inputs__tanh_00003a39_00003a_00003adbus__r;
   wire [0:0] rom__inputs__tanh_00003a39_00003a_00003aabus__r;
   wire signed[7:0] rom__inputs__tanh_00003a39_00003a_00003amem  :0[0:1];
   wire signed[7:0] ram__outputs__tanh_00003a54_00003a_00003areg__0;
   wire [0:0] ram__outputs__tanh_00003a54_00003a_00003arinc_00003a63_00003a_00003aabus__r;
   wire [0:0] ram__outputs__tanh_00003a54_00003a_00003awinc_00003a66_00003a_00003aabus__w;
   wire [0:0] ram__outputs__tanh_00003a54_00003a_00003ardec_00003a69_00003a_00003aabus__r;
   wire [0:0] ram__outputs__tanh_00003a54_00003a_00003awdec_00003a73_00003a_00003aabus__w;
   wire signed[7:0] ram__outputs__mul_00003a77_00003a_00003areg__0;
   wire [0:0] ram__outputs__mul_00003a77_00003a_00003arinc_00003a86_00003a_00003aabus__r;
   wire [0:0] ram__outputs__mul_00003a77_00003a_00003awinc_00003a89_00003a_00003aabus__w;
   wire [0:0] ram__outputs__mul_00003a77_00003a_00003ardec_00003a92_00003a_00003aabus__r;
   wire [0:0] ram__outputs__mul_00003a77_00003a_00003awdec_00003a96_00003a_00003aabus__w;
   reg signed[7:0] mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alv0;
   reg signed[7:0] mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arv0;
   reg mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alvok0;
   reg mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arvok0;
   reg mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arun;
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
   wire signed[7:0] _00005e_00006012;
   wire _00005e_00006013;
   wire [0:0] _00005e_00006014;
   wire signed[7:0] _00005e_00006015;
   wire [0:0] _00005e_00006016;
   wire signed[7:0] _00005e_00006017;
   wire _00005e_00006018;
   wire [0:0] _00005e_00006019;
   wire signed[7:0] _00005e_00006020;
   wire [0:0] _00005e_00006021;

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0 sigmoid__neural__network(.clk(_00005e_0000600),.rst(_00005e_0000601),.req(_00005e_0000602),.fill(_00005e_0000603),._00003a10(_00005e_00006012),.ack__fill(_00005e_0000604),.ack__network(_00005e_0000605),._00003a8(_00005e_00006013),._00003a9(_00005e_00006014),._00003a29(_00005e_00006015),._00003a30(_00005e_00006016));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0 tanh__neural__network(.clk(_00005e_0000606),.rst(_00005e_0000607),.req(_00005e_0000608),.fill(_00005e_0000609),._00003a48(_00005e_00006017),.ack__fill(_00005e_00006010),.ack__network(_00005e_00006011),._00003a46(_00005e_00006018),._00003a47(_00005e_00006019),._00003a67(_00005e_00006020),._00003a68(_00005e_00006021));
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

   assign req__mul = (ack__network__sig & ack__network__tanh);

   assign _00005e_00006012 = rom__inputs__sig_00003a1_00003a_00003adbus__r;

   assign _00005e_00006013 = rom__inputs__sig_00003a1_00003a_00003atrig__r;

   assign _00005e_00006014 = rom__inputs__sig_00003a1_00003a_00003aabus__r;

   assign _00003a18 = ram__outputs__sig_00003a16_00003a_00003areg__0;

   assign _00005e_00006015 = ram__outputs__sig_00003a16_00003a_00003areg__0;

   assign _00005e_00006016 = ram__outputs__sig_00003a16_00003a_00003awinc_00003a28_00003a_00003aabus__w;

   assign _00005e_00006017 = rom__inputs__tanh_00003a39_00003a_00003adbus__r;

   assign _00005e_00006018 = rom__inputs__tanh_00003a39_00003a_00003atrig__r;

   assign _00005e_00006019 = rom__inputs__tanh_00003a39_00003a_00003aabus__r;

   assign _00003a56 = ram__outputs__tanh_00003a54_00003a_00003areg__0;

   assign _00005e_00006020 = ram__outputs__tanh_00003a54_00003a_00003areg__0;

   assign _00005e_00006021 = ram__outputs__tanh_00003a54_00003a_00003awinc_00003a66_00003a_00003aabus__w;

   assign _00003a79 = ram__outputs__mul_00003a77_00003a_00003areg__0;

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

      rom__inputs__tanh_00003a39_00003a_00003adbus__r <= rom__inputs__tanh_00003a39_00003a_00003amem[rom__inputs__tanh_00003a39_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      ack__mul <= 32'd0;

      mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arun <= 32'd0;

      if ((req__mul | mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arun)) begin
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arun <= 32'd1;
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alv0 <= _00003a18;
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alvok0 <= 32'd1;
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arv0 <= _00003a56;
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arvok0 <= 32'd1;
         if ((mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alvok0 & mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arvok0)) begin
            mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arun <= 32'd0;
            ack__mul <= 32'd1;
            _00003a79 <= (($signed(mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alv0) * mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arv0) >> 32'd4);
         end
      end
      else begin
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003alvok0 <= 32'd0;
         mul__n_00003a732_00003a_00003aadd__n_00003a733_00003a_00003arvok0 <= 32'd0;
      end

   end

   initial begin

      rom__inputs__sig_00003a1_00003a_00003amem[32'd0] = $signed(32'd16);

      rom__inputs__sig_00003a1_00003a_00003amem[32'd1] = $signed(32'd0);

      rom__inputs__tanh_00003a39_00003a_00003amem[32'd0] = $signed(32'd0);

      rom__inputs__tanh_00003a39_00003a_00003amem[32'd1] = $signed(32'd16);

   end

endmodule