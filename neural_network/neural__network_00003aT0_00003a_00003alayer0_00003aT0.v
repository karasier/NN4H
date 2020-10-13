`timescale 1ps/1ps

module neural__network_00003aT0_00003a_00003alayer0_00003aT0( clk, rst, fill, req, _00003a15, ack__layer, _00003a13, _00003a14, _00003a55, _00003a56 ); 
   input clk;
   input rst;
   input fill;
   input req;
   input signed[7:0] _00003a15;
   output ack__layer;
   output reg _00003a13;
   output reg [0:0] _00003a14;
   inout signed[7:0] _00003a55;
   inout signed[7:0] _00003a56;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire fill__channel;
   wire signed[7:0] _00003a97;
   reg _00003a95;
   reg [0:0] _00003a96;
   reg signed[7:0] _00003a143;
   reg signed[7:0] _00003a144;
   wire signed[7:0] _00003a126;
   reg _00003a124;
   reg [0:0] _00003a125;
   wire signed[7:0] _00003a182;
   wire signed[7:0] _00003a183;
   reg signed[7:0] _00003a212;
   reg signed[7:0] _00003a213;
   reg signed[7:0] value__z0;
   reg signed[7:0] value__z1;
   wire signed[7:0] value__a0;
   wire signed[7:0] value__a1;
   reg flag__z0;
   reg flag__z1;
   reg ack__a0;
   reg ack__a1;
   reg [1:0] address__weights0;
   reg [1:0] address__weights1;
   reg [1:0] address__bias;
   reg ack__weights0;
   reg ack__weights1;
   reg ack__bias;
   reg signed[7:0] _00003a197;
   reg signed[7:0] _00003a198;
   reg [0:0] _00003a199;
   wire signed[7:0] w0  :0[0:1];
   wire signed[7:0] w1  :0[0:1];
   wire signed[7:0] b  :0[0:1];
   reg _00003a99;
   reg [0:0] _00003a100;
   reg signed[7:0] _00003a101;
   reg _00003a128;
   reg [0:0] _00003a129;
   reg signed[7:0] _00003a130;
   wire channel__w0_00003a83_00003a_00003atrig__r;
   wire channel__w0_00003a83_00003a_00003atrig__w;
   reg signed[7:0] channel__w0_00003a83_00003a_00003adbus__r;
   wire signed[7:0] channel__w0_00003a83_00003a_00003adbus__w;
   wire [0:0] channel__w0_00003a83_00003a_00003aabus__r;
   wire [0:0] channel__w0_00003a83_00003a_00003aabus__w;
   wire signed[7:0] channel__w0_00003a83_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a112_00003a_00003atrig__r;
   wire channel__w1_00003a112_00003a_00003atrig__w;
   reg signed[7:0] channel__w1_00003a112_00003a_00003adbus__r;
   wire signed[7:0] channel__w1_00003a112_00003a_00003adbus__w;
   wire [0:0] channel__w1_00003a112_00003a_00003aabus__r;
   wire [0:0] channel__w1_00003a112_00003a_00003aabus__w;
   wire signed[7:0] channel__w1_00003a112_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a141_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a141_00003a_00003areg__1;
   wire [0:0] channel__accum_00003a141_00003a_00003arinc_00003a153_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a141_00003a_00003awinc_00003a158_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a141_00003a_00003ardec_00003a163_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a141_00003a_00003awdec_00003a168_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a173_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a173_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a173_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a173_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a173_00003a_00003arv;
   reg mac__n1_00003a173_00003a_00003alvok0;
   reg mac__n1_00003a173_00003a_00003alvok1;
   reg mac__n1_00003a173_00003a_00003arvok;
   reg mac__n1_00003a173_00003a_00003awok0;
   reg mac__n1_00003a173_00003a_00003awok1;
   reg mac__n1_00003a173_00003a_00003arun;
   wire signed[7:0] channel__bias_00003a180_00003a_00003areg__0;
   wire signed[7:0] channel__bias_00003a180_00003a_00003areg__1;
   wire [0:0] channel__bias_00003a180_00003a_00003arinc_00003a192_00003a_00003aabus__r;
   wire [0:0] channel__bias_00003a180_00003a_00003awinc_00003a196_00003a_00003aabus__w;
   wire [0:0] channel__bias_00003a180_00003a_00003ardec_00003a200_00003a_00003aabus__r;
   wire [0:0] channel__bias_00003a180_00003a_00003awdec_00003a205_00003a_00003aabus__w;
   wire signed[7:0] channel__z_00003a210_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a210_00003a_00003areg__1;
   wire [0:0] channel__z_00003a210_00003a_00003arinc_00003a222_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a210_00003a_00003awinc_00003a226_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a210_00003a_00003ardec_00003a230_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a210_00003a_00003awdec_00003a235_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a240_00003a_00003alv0;
   reg signed[7:0] add__n_00003a240_00003a_00003alv1;
   reg signed[7:0] add__n_00003a240_00003a_00003arv0;
   reg signed[7:0] add__n_00003a240_00003a_00003arv1;
   reg add__n_00003a240_00003a_00003alvok0;
   reg add__n_00003a240_00003a_00003alvok1;
   reg add__n_00003a240_00003a_00003arvok0;
   reg add__n_00003a240_00003a_00003arvok1;
   reg add__n_00003a240_00003a_00003arun;
   wire _00005e_00006093;
   wire _00005e_00006094;
   wire _00005e_00006095;
   wire _00005e_00006096;
   wire signed[7:0] _00005e_00006097;
   wire signed[7:0] _00005e_00006098;
   wire signed[7:0] _00005e_00006099;
   wire signed[7:0] _00005e_000060100;

   neural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003acounter_00003aT1 counter(.clk(_00005e_00006093),.ack(_00005e_00006094),.rst(_00005e_00006095),.ack__mac(_00005e_00006096));
   neural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1 func0(.z__value(_00005e_00006097),.a(_00005e_00006098));
   neural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0 func1(.z__value(_00005e_00006099),.a(_00005e_000060100));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_00006093 = clk;

   assign _00005e_00006094 = ack;

   assign _00005e_00006095 = rst;

   assign ack__mac = _00005e_00006096;

   assign _00005e_00006097 = value__z0;

   assign value__a0 = _00005e_00006098;

   assign _00005e_00006099 = value__z1;

   assign value__a1 = _00005e_000060100;

   assign ack__layer = (ack__a0 & ack__a1);

   assign fill__channel = (fill & ~((ack__weights0 & ack__weights1) & ack__bias));

   assign _00003a97 = channel__w0_00003a83_00003a_00003adbus__r;

   assign _00003a95 = channel__w0_00003a83_00003a_00003atrig__r;

   assign _00003a96 = channel__w0_00003a83_00003a_00003aabus__r;

   assign _00003a99 = channel__w0_00003a83_00003a_00003atrig__w;

   assign _00003a100 = channel__w0_00003a83_00003a_00003aabus__w;

   assign _00003a101 = channel__w0_00003a83_00003a_00003adbus__w;

   assign _00003a126 = channel__w1_00003a112_00003a_00003adbus__r;

   assign _00003a124 = channel__w1_00003a112_00003a_00003atrig__r;

   assign _00003a125 = channel__w1_00003a112_00003a_00003aabus__r;

   assign _00003a128 = channel__w1_00003a112_00003a_00003atrig__w;

   assign _00003a129 = channel__w1_00003a112_00003a_00003aabus__w;

   assign _00003a130 = channel__w1_00003a112_00003a_00003adbus__w;

   assign _00003a143 = channel__accum_00003a141_00003a_00003areg__0;

   assign _00003a144 = channel__accum_00003a141_00003a_00003areg__1;

   assign _00003a182 = channel__bias_00003a180_00003a_00003areg__0;

   assign _00003a183 = channel__bias_00003a180_00003a_00003areg__1;

   assign _00003a197 = channel__bias_00003a180_00003a_00003areg__0;

   assign _00003a198 = channel__bias_00003a180_00003a_00003areg__1;

   assign _00003a199 = channel__bias_00003a180_00003a_00003awinc_00003a196_00003a_00003aabus__w;

   assign _00003a212 = channel__z_00003a210_00003a_00003areg__0;

   assign _00003a213 = channel__z_00003a210_00003a_00003areg__1;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a212;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a213;
         flag__z1 <= 32'd1;
      end
      else begin
         flag__z0 <= 32'd0;
         flag__z1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (rst) begin
         ack__a0 <= 32'd0;
         ack__a1 <= 32'd0;
      end
      else if ((flag__z0 & flag__z1)) begin
         _00003a55 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a56 <= value__a1;
         ack__a1 <= 32'd1;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a199 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a129 <= -32'd1;
      end

      _00003a128 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a100 <= -32'd1;
      end

      _00003a99 <= 32'd0;

      if (rst) begin
         address__weights0 <= 32'd0;
         ack__weights0 <= 32'd0;
         address__weights1 <= 32'd0;
         ack__weights1 <= 32'd0;
         address__bias <= 32'd0;
         ack__bias <= 32'd0;
      end

      if (fill__channel) begin
         if (~ack__weights0) begin
            if ((rst == 32'd0)) begin
               _00003a100 <= (_00003a100 + 32'd1);
               _00003a99 <= 32'd1;
               _00003a101 <= w0[address__weights0];
            end
            address__weights0 <= (address__weights0 + 32'd1);
         end
         if (~ack__weights1) begin
            if ((rst == 32'd0)) begin
               _00003a129 <= (_00003a129 + 32'd1);
               _00003a128 <= 32'd1;
               _00003a130 <= w1[address__weights1];
            end
            address__weights1 <= (address__weights1 + 32'd1);
         end
         if (~ack__bias) begin
            if ((rst == 32'd0)) begin
               case(_00003a199)
                  32'd0: _00003a197 <= b[address__bias];
                  32'd1: _00003a198 <= b[address__bias];
               endcase
               _00003a199 <= (_00003a199 + 32'd1);
            end
            address__bias <= (address__bias + 32'd1);
         end
      end

      if ((address__weights0 == 32'd1)) begin
         ack__weights0 <= 32'd1;
      end

      if ((address__weights1 == 32'd1)) begin
         ack__weights1 <= 32'd1;
      end

      if ((address__bias == 32'd1)) begin
         ack__bias <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a83_00003a_00003adbus__r <= channel__w0_00003a83_00003a_00003amem[channel__w0_00003a83_00003a_00003aabus__r];

      if (channel__w0_00003a83_00003a_00003atrig__w) begin
         channel__w0_00003a83_00003a_00003amem[channel__w0_00003a83_00003a_00003aabus__w] <= channel__w0_00003a83_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      channel__w1_00003a112_00003a_00003adbus__r <= channel__w1_00003a112_00003a_00003amem[channel__w1_00003a112_00003a_00003aabus__r];

      if (channel__w1_00003a112_00003a_00003atrig__w) begin
         channel__w1_00003a112_00003a_00003amem[channel__w1_00003a112_00003a_00003aabus__w] <= channel__w1_00003a112_00003a_00003adbus__w;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a125 <= -32'd1;
      end

      _00003a124 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a96 <= -32'd1;
      end

      _00003a95 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a14 <= -32'd1;
      end

      _00003a13 <= 32'd0;

      ack <= 32'd0;

      mac__n1_00003a173_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a173_00003a_00003arun) begin
         mac__n1_00003a173_00003a_00003arvok <= 32'd0;
         mac__n1_00003a173_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a173_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a173_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a173_00003a_00003awok1 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a173_00003a_00003arun)) begin
         mac__n1_00003a173_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a173_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               if ((_00003a13 == 32'd1)) begin
                  mac__n1_00003a173_00003a_00003arv <= _00003a15;
                  mac__n1_00003a173_00003a_00003arvok <= 32'd1;
               end
               else begin
                  _00003a14 <= (_00003a14 + 32'd1);
                  _00003a13 <= 32'd1;
               end
            end
         end
         if (~mac__n1_00003a173_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a95 == 32'd1)) begin
                  mac__n1_00003a173_00003a_00003alv0 <= _00003a97;
                  mac__n1_00003a173_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a96 <= (_00003a96 + 32'd1);
                  _00003a95 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a173_00003a_00003alvok0 & mac__n1_00003a173_00003a_00003arvok) & ~mac__n1_00003a173_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a173_00003a_00003arun <= 32'd0;
            mac__n1_00003a173_00003a_00003aav0 <= (mac__n1_00003a173_00003a_00003aav0 + (($signed(mac__n1_00003a173_00003a_00003alv0) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
            _00003a143 <= ((mac__n1_00003a173_00003a_00003aav0 + (($signed(mac__n1_00003a173_00003a_00003alv0) * mac__n1_00003a173_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a173_00003a_00003alv0) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
            mac__n1_00003a173_00003a_00003awok0 <= 32'd1;
         end
         if ((mac__n1_00003a173_00003a_00003awok0 & mac__n1_00003a173_00003a_00003awok1)) begin
            mac__n1_00003a173_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a173_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a173_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a173_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a173_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a173_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a124 == 32'd1)) begin
                  mac__n1_00003a173_00003a_00003alv1 <= _00003a126;
                  mac__n1_00003a173_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a125 <= (_00003a125 + 32'd1);
                  _00003a124 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a173_00003a_00003alvok1 & mac__n1_00003a173_00003a_00003arvok) & ~mac__n1_00003a173_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a173_00003a_00003arun <= 32'd0;
            mac__n1_00003a173_00003a_00003aav1 <= (mac__n1_00003a173_00003a_00003aav1 + (($signed(mac__n1_00003a173_00003a_00003alv1) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
            _00003a144 <= ((mac__n1_00003a173_00003a_00003aav1 + (($signed(mac__n1_00003a173_00003a_00003alv1) * mac__n1_00003a173_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a173_00003a_00003alv1) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
            mac__n1_00003a173_00003a_00003awok1 <= 32'd1;
         end
         if ((mac__n1_00003a173_00003a_00003awok0 & mac__n1_00003a173_00003a_00003awok1)) begin
            mac__n1_00003a173_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a173_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a173_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a173_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a173_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a173_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a173_00003a_00003aav1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      ack__add <= 32'd0;

      add__n_00003a240_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a240_00003a_00003arun)) begin
         add__n_00003a240_00003a_00003arun <= 32'd1;
         add__n_00003a240_00003a_00003alv0 <= _00003a143;
         add__n_00003a240_00003a_00003alvok0 <= 32'd1;
         add__n_00003a240_00003a_00003arv0 <= _00003a182;
         add__n_00003a240_00003a_00003arvok0 <= 32'd1;
         if ((add__n_00003a240_00003a_00003alvok0 & add__n_00003a240_00003a_00003arvok0)) begin
            add__n_00003a240_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a212 <= (add__n_00003a240_00003a_00003alv0 + add__n_00003a240_00003a_00003arv0);
         end
         add__n_00003a240_00003a_00003alv1 <= _00003a144;
         add__n_00003a240_00003a_00003alvok1 <= 32'd1;
         add__n_00003a240_00003a_00003arv1 <= _00003a183;
         add__n_00003a240_00003a_00003arvok1 <= 32'd1;
         if ((add__n_00003a240_00003a_00003alvok1 & add__n_00003a240_00003a_00003arvok1)) begin
            add__n_00003a240_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a213 <= (add__n_00003a240_00003a_00003alv1 + add__n_00003a240_00003a_00003arv1);
         end
      end
      else begin
         add__n_00003a240_00003a_00003alvok0 <= 32'd0;
         add__n_00003a240_00003a_00003arvok0 <= 32'd0;
         add__n_00003a240_00003a_00003alvok1 <= 32'd0;
         add__n_00003a240_00003a_00003arvok1 <= 32'd0;
      end

   end

   initial begin

      w0[32'd0] = $signed(-32'd1);

      w0[32'd1] = $signed(32'd0);

      w1[32'd0] = $signed(-32'd1);

      w1[32'd1] = $signed(32'd0);

      b[32'd0] = $signed(32'd0);

      b[32'd1] = $signed(32'd14);

   end

endmodule