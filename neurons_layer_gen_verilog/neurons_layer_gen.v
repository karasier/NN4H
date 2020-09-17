`timescale 1ps/1ps

module _____00003aT0( ); 
   reg clk;
   reg rst;
   reg req;
   reg fill;
   wire ack__0;
   wire ack__1;
   reg _00003a17;
   reg [0:0] _00003a18;
   reg signed[7:0] _00003a19;
   wire channel__x_00003a1_00003a_00003atrig__r;
   wire channel__x_00003a1_00003a_00003atrig__w;
   reg signed[7:0] channel__x_00003a1_00003a_00003adbus__r;
   wire signed[7:0] channel__x_00003a1_00003a_00003adbus__w;
   wire [0:0] channel__x_00003a1_00003a_00003aabus__r;
   wire [0:0] channel__x_00003a1_00003a_00003aabus__w;
   wire signed[7:0] channel__x_00003a1_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__a0_00003a30_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a30_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a30_00003a_00003arinc_00003a42_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a30_00003a_00003awinc_00003a46_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a30_00003a_00003ardec_00003a50_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a30_00003a_00003awdec_00003a55_00003a_00003aabus__w;
   wire signed[7:0] channel__a1_00003a60_00003a_00003areg__0;
   wire [0:-1] channel__a1_00003a60_00003a_00003arinc_00003a69_00003a_00003aabus__r;
   wire [0:-1] channel__a1_00003a60_00003a_00003awinc_00003a72_00003a_00003aabus__w;
   wire [0:-1] channel__a1_00003a60_00003a_00003ardec_00003a75_00003a_00003aabus__r;
   wire [0:-1] channel__a1_00003a60_00003a_00003awdec_00003a79_00003a_00003aabus__w;
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
   wire signed[7:0] _00005e_00006010;
   wire _00005e_00006011;
   wire [0:0] _00005e_00006012;
   wire signed[7:0] _00005e_00006013;
   wire signed[7:0] _00005e_00006014;
   wire signed[7:0] _00005e_00006015;
   wire signed[7:0] _00005e_00006016;
   wire [0:0] _00005e_00006017;
   wire signed[7:0] _00005e_00006018;

   _____00003aT0_00003a_00003alayer__hidden_00003aT0 layer__hidden(.clk(_00005e_0000600),.rst(_00005e_0000601),.fill(_00005e_0000602),.req(_00005e_0000603),._00003a15(_00005e_00006010),.ack__layer(_00005e_0000604),._00003a13(_00005e_00006011),._00003a14(_00005e_00006012),._00003a32(_00005e_00006013),._00003a33(_00005e_00006014));
   _____00003aT0_00003a_00003alayer__output_00003aT0 layer__output(.clk(_00005e_0000605),.rst(_00005e_0000606),.fill(_00005e_0000607),.req(_00005e_0000608),._00003a43(_00005e_00006015),._00003a44(_00005e_00006016),.ack__1(_00005e_0000609),._00003a45(_00005e_00006017),._00003a62(_00005e_00006018));
   assign _00005e_0000600 = clk;

   assign _00005e_0000601 = rst;

   assign _00005e_0000602 = fill;

   assign _00005e_0000603 = req;

   assign ack__0 = _00005e_0000604;

   assign _00005e_0000605 = clk;

   assign _00005e_0000606 = rst;

   assign _00005e_0000607 = fill;

   assign _00005e_0000608 = ack__0;

   assign ack__1 = _00005e_0000609;

   assign _00003a17 = channel__x_00003a1_00003a_00003atrig__w;

   assign _00003a18 = channel__x_00003a1_00003a_00003aabus__w;

   assign _00003a19 = channel__x_00003a1_00003a_00003adbus__w;

   assign _00005e_00006010 = channel__x_00003a1_00003a_00003adbus__r;

   assign _00005e_00006011 = channel__x_00003a1_00003a_00003atrig__r;

   assign _00005e_00006012 = channel__x_00003a1_00003a_00003aabus__r;

   assign _00005e_00006013 = channel__a0_00003a30_00003a_00003areg__0;

   assign _00005e_00006014 = channel__a0_00003a30_00003a_00003areg__1;

   assign _00005e_00006015 = channel__a0_00003a30_00003a_00003areg__0;

   assign _00005e_00006016 = channel__a0_00003a30_00003a_00003areg__1;

   assign _00005e_00006017 = channel__a0_00003a30_00003a_00003arinc_00003a42_00003a_00003aabus__r;

   assign _00005e_00006018 = channel__a1_00003a60_00003a_00003areg__0;

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a18 <= -32'd1;
      end

      _00003a17 <= 32'd0;

      if (fill) begin
         if ((rst == 32'd0)) begin
            _00003a18 <= (_00003a18 + 32'd1);
            _00003a17 <= 32'd1;
            _00003a19 <= 8'b00010000;
         end
      end

   end

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

      clk = 32'd0;

      req = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

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

      channel__x_00003a1_00003a_00003adbus__r <= channel__x_00003a1_00003a_00003amem[channel__x_00003a1_00003a_00003aabus__r];

      if (channel__x_00003a1_00003a_00003atrig__w) begin
         channel__x_00003a1_00003a_00003amem[channel__x_00003a1_00003a_00003aabus__w] <= channel__x_00003a1_00003a_00003adbus__w;
      end

   end

endmodule