`timescale 1ps/1ps

module _____00003aT0_00003a_00003alayer__hidden_00003aT0( clk, rst, fill, req, _00003a15, ack__layer, _00003a13, _00003a14, _00003a32, _00003a33 ); 
   input clk;
   input rst;
   input fill;
   input req;
   input signed[7:0] _00003a15;
   output ack__layer;
   output reg _00003a13;
   output reg [0:0] _00003a14;
   inout signed[7:0] _00003a32;
   inout signed[7:0] _00003a33;
   wire req__mac;
   reg ack;
   wire ack__mac;
   reg ack__add;
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
   reg signed[7:0] _00003a197;
   reg signed[7:0] _00003a198;
   reg [0:0] _00003a199;
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
   wire _00005e_00006075;
   wire _00005e_00006076;
   wire _00005e_00006077;
   wire _00005e_00006078;
   wire signed[7:0] _00005e_00006079;
   wire signed[7:0] _00005e_00006080;
   wire signed[7:0] _00005e_00006081;
   wire signed[7:0] _00005e_00006082;

   _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003acounter_00003aT0 counter(.clk(_00005e_00006075),.ack(_00005e_00006076),.rst(_00005e_00006077),.ack__mac(_00005e_00006078));
   _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003afunc0_00003aT0 func0(.z__value(_00005e_00006079),.a(_00005e_00006080));
   _____00003aT0_00003a_00003alayer__hidden_00003aT0_00003a_00003afunc1_00003aT0 func1(.z__value(_00005e_00006081),.a(_00005e_00006082));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_00006075 = clk;

   assign _00005e_00006076 = ack;

   assign _00005e_00006077 = rst;

   assign ack__mac = _00005e_00006078;

   assign _00005e_00006079 = value__z0;

   assign value__a0 = _00005e_00006080;

   assign _00005e_00006081 = value__z1;

   assign value__a1 = _00005e_00006082;

   assign ack__layer = (ack__a0 & ack__a1);

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

      if ((flag__z0 & flag__z1)) begin
         _00003a32 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a33 <= value__a1;
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

      if (fill) begin
         if ((rst == 32'd0)) begin
            _00003a100 <= (_00003a100 + 32'd1);
            _00003a99 <= 32'd1;
            _00003a101 <= 8'b00010000;
         end
         if ((rst == 32'd0)) begin
            _00003a129 <= (_00003a129 + 32'd1);
            _00003a128 <= 32'd1;
            _00003a130 <= 8'b00010000;
         end
         if ((rst == 32'd0)) begin
            case(_00003a199)
               32'd0: _00003a197 <= 8'b00010000;
               32'd1: _00003a198 <= 8'b00010000;
            endcase
            _00003a199 <= (_00003a199 + 32'd1);
         end
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

      if ((req__mac | mac__n1_00003a173_00003a_00003arun)) begin
         mac__n1_00003a173_00003a_00003arun <= 32'd1;
         if ((rst == 32'd0)) begin
            if ((_00003a13 == 32'd1)) begin
               mac__n1_00003a173_00003a_00003arv <= _00003a15;
               mac__n1_00003a173_00003a_00003arvok <= 32'd1;
            end
            _00003a14 <= (_00003a14 + 32'd1);
            _00003a13 <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            if ((_00003a95 == 32'd1)) begin
               mac__n1_00003a173_00003a_00003alv0 <= _00003a97;
               mac__n1_00003a173_00003a_00003alvok0 <= 32'd1;
            end
            _00003a96 <= (_00003a96 + 32'd1);
            _00003a95 <= 32'd1;
         end
         if ((mac__n1_00003a173_00003a_00003alvok0 & mac__n1_00003a173_00003a_00003arvok)) begin
            ack <= 32'd1;
            mac__n1_00003a173_00003a_00003arun <= 32'd0;
            mac__n1_00003a173_00003a_00003aav0 <= (mac__n1_00003a173_00003a_00003aav0 + (($unsigned(mac__n1_00003a173_00003a_00003alv0) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
            _00003a143 <= ((mac__n1_00003a173_00003a_00003aav0 + (($unsigned(mac__n1_00003a173_00003a_00003alv0) * mac__n1_00003a173_00003a_00003arv) >> 32'd4)) + (($unsigned(mac__n1_00003a173_00003a_00003alv0) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
         end
         if ((rst == 32'd0)) begin
            if ((_00003a124 == 32'd1)) begin
               mac__n1_00003a173_00003a_00003alv1 <= _00003a126;
               mac__n1_00003a173_00003a_00003alvok1 <= 32'd1;
            end
            _00003a125 <= (_00003a125 + 32'd1);
            _00003a124 <= 32'd1;
         end
         if ((mac__n1_00003a173_00003a_00003alvok1 & mac__n1_00003a173_00003a_00003arvok)) begin
            ack <= 32'd1;
            mac__n1_00003a173_00003a_00003arun <= 32'd0;
            mac__n1_00003a173_00003a_00003aav1 <= (mac__n1_00003a173_00003a_00003aav1 + (($unsigned(mac__n1_00003a173_00003a_00003alv1) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
            _00003a144 <= ((mac__n1_00003a173_00003a_00003aav1 + (($unsigned(mac__n1_00003a173_00003a_00003alv1) * mac__n1_00003a173_00003a_00003arv) >> 32'd4)) + (($unsigned(mac__n1_00003a173_00003a_00003alv1) * mac__n1_00003a173_00003a_00003arv) >> 32'd4));
         end
      end
      else begin
         mac__n1_00003a173_00003a_00003arvok <= 32'd0;
         mac__n1_00003a173_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a173_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a173_00003a_00003alvok1 <= 32'd0;
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

endmodule