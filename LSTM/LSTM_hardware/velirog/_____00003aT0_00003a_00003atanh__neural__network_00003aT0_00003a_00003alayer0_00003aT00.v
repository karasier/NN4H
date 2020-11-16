`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer0_00003aT00( clk, rst, req, _00003a419, ack__layer, _00003a417, _00003a418, _00003a459, _00003a460 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a419;
   output ack__layer;
   output reg _00003a417;
   output reg [0:0] _00003a418;
   inout signed[7:0] _00003a459;
   inout signed[7:0] _00003a460;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a496;
   reg _00003a494;
   reg [0:0] _00003a495;
   reg signed[7:0] _00003a519;
   reg signed[7:0] _00003a520;
   wire signed[7:0] _00003a511;
   reg _00003a509;
   reg [0:0] _00003a510;
   wire signed[7:0] _00003a560;
   wire _00003a561;
   reg _00003a558;
   reg [0:0] _00003a559;
   reg signed[7:0] _00003a588;
   reg signed[7:0] _00003a589;
   wire signed[7:0] _00003a575;
   wire _00003a576;
   reg _00003a573;
   reg [0:0] _00003a574;
   reg signed[7:0] value__z0;
   reg signed[7:0] value__z1;
   wire signed[7:0] value__a0;
   wire signed[7:0] value__a1;
   reg flag__z0;
   reg flag__z1;
   reg ack__a0;
   reg ack__a1;
   wire channel__w0_00003a487_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a487_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a487_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a487_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a502_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a502_00003a_00003adbus__r;
   wire [0:0] channel__w1_00003a502_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a502_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a517_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a517_00003a_00003areg__1;
   wire [0:0] channel__accum_00003a517_00003a_00003arinc_00003a529_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a517_00003a_00003awinc_00003a534_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a517_00003a_00003ardec_00003a539_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a517_00003a_00003awdec_00003a544_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a549_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a549_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a549_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a549_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a549_00003a_00003arv;
   reg mac__n1_00003a549_00003a_00003alvok0;
   reg mac__n1_00003a549_00003a_00003alvok1;
   reg mac__n1_00003a549_00003a_00003arvok;
   reg mac__n1_00003a549_00003a_00003awok0;
   reg mac__n1_00003a549_00003a_00003awok1;
   reg mac__n1_00003a549_00003a_00003arun;
   wire channel__b0_00003a556_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a556_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a556_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a556_00003a_00003amem  :0[0:0] = $signed(32'd5);
   wire channel__b1_00003a571_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a571_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a571_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a571_00003a_00003amem  :0[0:0] = $signed(32'd14);
   wire signed[7:0] channel__z_00003a586_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a586_00003a_00003areg__1;
   wire [0:0] channel__z_00003a586_00003a_00003arinc_00003a598_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a586_00003a_00003awinc_00003a602_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a586_00003a_00003ardec_00003a606_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a586_00003a_00003awdec_00003a611_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a616_00003a_00003alv0;
   reg signed[7:0] add__n_00003a616_00003a_00003alv1;
   reg signed[7:0] add__n_00003a616_00003a_00003arv0;
   reg signed[7:0] add__n_00003a616_00003a_00003arv1;
   reg add__n_00003a616_00003a_00003alvok0;
   reg add__n_00003a616_00003a_00003alvok1;
   reg add__n_00003a616_00003a_00003arvok0;
   reg add__n_00003a616_00003a_00003arvok1;
   reg add__n_00003a616_00003a_00003arun;
   wire _00005e_000060250;
   wire _00005e_000060251;
   wire _00005e_000060252;
   wire _00005e_000060253;
   wire signed[7:0] _00005e_000060254;
   wire signed[7:0] _00005e_000060255;
   wire signed[7:0] _00005e_000060256;
   wire signed[7:0] _00005e_000060257;

   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer0_00003aT00_00003a_00003acounter_00003aT10 counter(.clk(_00005e_000060250),.ack(_00005e_000060251),.rst(_00005e_000060252),.ack__mac(_00005e_000060253));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer0_00003aT00_00003a_00003afunc0_00003aT10 func0(.z__value(_00005e_000060254),.a(_00005e_000060255));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer0_00003aT00_00003a_00003afunc1_00003aT00 func1(.z__value(_00005e_000060256),.a(_00005e_000060257));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060250 = clk;

   assign _00005e_000060251 = ack;

   assign _00005e_000060252 = rst;

   assign ack__mac = _00005e_000060253;

   assign _00003a561 = rst;

   assign _00003a576 = rst;

   assign _00005e_000060254 = value__z0;

   assign value__a0 = _00005e_000060255;

   assign _00005e_000060256 = value__z1;

   assign value__a1 = _00005e_000060257;

   assign ack__layer = (ack__a0 & ack__a1);

   assign _00003a496 = channel__w0_00003a487_00003a_00003adbus__r;

   assign _00003a494 = channel__w0_00003a487_00003a_00003atrig__r;

   assign _00003a495 = channel__w0_00003a487_00003a_00003aabus__r;

   assign _00003a511 = channel__w1_00003a502_00003a_00003adbus__r;

   assign _00003a509 = channel__w1_00003a502_00003a_00003atrig__r;

   assign _00003a510 = channel__w1_00003a502_00003a_00003aabus__r;

   assign _00003a519 = channel__accum_00003a517_00003a_00003areg__0;

   assign _00003a520 = channel__accum_00003a517_00003a_00003areg__1;

   assign _00003a560 = channel__b0_00003a556_00003a_00003adbus__r;

   assign _00003a558 = channel__b0_00003a556_00003a_00003atrig__r;

   assign _00003a559 = channel__b0_00003a556_00003a_00003aabus__r;

   assign _00003a575 = channel__b1_00003a571_00003a_00003adbus__r;

   assign _00003a573 = channel__b1_00003a571_00003a_00003atrig__r;

   assign _00003a574 = channel__b1_00003a571_00003a_00003aabus__r;

   assign _00003a588 = channel__z_00003a586_00003a_00003areg__0;

   assign _00003a589 = channel__z_00003a586_00003a_00003areg__1;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a588;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a589;
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
         _00003a459 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a460 <= value__a1;
         ack__a1 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a487_00003a_00003adbus__r <= channel__w0_00003a487_00003a_00003amem[channel__w0_00003a487_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a502_00003a_00003adbus__r <= channel__w1_00003a502_00003a_00003amem[channel__w1_00003a502_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a510 <= -32'd1;
      end

      _00003a509 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a495 <= -32'd1;
      end

      _00003a494 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a418 <= -32'd1;
      end

      _00003a417 <= 32'd0;

      ack <= 32'd0;

      mac__n1_00003a549_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a549_00003a_00003arun) begin
         mac__n1_00003a549_00003a_00003arvok <= 32'd0;
         mac__n1_00003a549_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a549_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a549_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a549_00003a_00003awok1 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a549_00003a_00003arun)) begin
         mac__n1_00003a549_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a549_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               if ((_00003a417 == 32'd1)) begin
                  mac__n1_00003a549_00003a_00003arv <= _00003a419;
                  mac__n1_00003a549_00003a_00003arvok <= 32'd1;
               end
               else begin
                  _00003a418 <= ((_00003a418 + 32'd1) == 32'd2) == 1 ? (_00003a418 + 32'd1) : 32'd0;
                  _00003a417 <= 32'd1;
               end
            end
         end
         if (~mac__n1_00003a549_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a494 == 32'd1)) begin
                  mac__n1_00003a549_00003a_00003alv0 <= _00003a496;
                  mac__n1_00003a549_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a495 <= ((_00003a495 + 32'd1) == 32'd2) == 1 ? (_00003a495 + 32'd1) : 32'd0;
                  _00003a494 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a549_00003a_00003alvok0 & mac__n1_00003a549_00003a_00003arvok) & ~mac__n1_00003a549_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a549_00003a_00003arun <= 32'd0;
            mac__n1_00003a549_00003a_00003aav0 <= (mac__n1_00003a549_00003a_00003aav0 + (($signed(mac__n1_00003a549_00003a_00003alv0) * mac__n1_00003a549_00003a_00003arv) >> 32'd4));
            _00003a519 <= ((mac__n1_00003a549_00003a_00003aav0 + (($signed(mac__n1_00003a549_00003a_00003alv0) * mac__n1_00003a549_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a549_00003a_00003alv0) * mac__n1_00003a549_00003a_00003arv) >> 32'd4));
            mac__n1_00003a549_00003a_00003awok0 <= 32'd1;
         end
         if ((mac__n1_00003a549_00003a_00003awok0 & mac__n1_00003a549_00003a_00003awok1)) begin
            mac__n1_00003a549_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a549_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a549_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a549_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a549_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a549_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a509 == 32'd1)) begin
                  mac__n1_00003a549_00003a_00003alv1 <= _00003a511;
                  mac__n1_00003a549_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a510 <= ((_00003a510 + 32'd1) == 32'd2) == 1 ? (_00003a510 + 32'd1) : 32'd0;
                  _00003a509 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a549_00003a_00003alvok1 & mac__n1_00003a549_00003a_00003arvok) & ~mac__n1_00003a549_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a549_00003a_00003arun <= 32'd0;
            mac__n1_00003a549_00003a_00003aav1 <= (mac__n1_00003a549_00003a_00003aav1 + (($signed(mac__n1_00003a549_00003a_00003alv1) * mac__n1_00003a549_00003a_00003arv) >> 32'd4));
            _00003a520 <= ((mac__n1_00003a549_00003a_00003aav1 + (($signed(mac__n1_00003a549_00003a_00003alv1) * mac__n1_00003a549_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a549_00003a_00003alv1) * mac__n1_00003a549_00003a_00003arv) >> 32'd4));
            mac__n1_00003a549_00003a_00003awok1 <= 32'd1;
         end
         if ((mac__n1_00003a549_00003a_00003awok0 & mac__n1_00003a549_00003a_00003awok1)) begin
            mac__n1_00003a549_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a549_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a549_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a549_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a549_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a549_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a549_00003a_00003aav1 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a556_00003a_00003adbus__r <= channel__b0_00003a556_00003a_00003amem[channel__b0_00003a556_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a571_00003a_00003adbus__r <= channel__b1_00003a571_00003a_00003amem[channel__b1_00003a571_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a573 <= 32'd0;

      _00003a558 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a616_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a616_00003a_00003arun)) begin
         add__n_00003a616_00003a_00003arun <= 32'd1;
         add__n_00003a616_00003a_00003alv0 <= _00003a519;
         add__n_00003a616_00003a_00003alvok0 <= 32'd1;
         if ((_00003a561 == 32'd0)) begin
            if ((_00003a558 == 32'd1)) begin
               add__n_00003a616_00003a_00003arv0 <= _00003a560;
               _00003a558 <= 32'd0;
               add__n_00003a616_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a559 <= 32'd0;
               _00003a558 <= 32'd1;
            end
         end
         if ((add__n_00003a616_00003a_00003alvok0 & add__n_00003a616_00003a_00003arvok0)) begin
            add__n_00003a616_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a588 <= (add__n_00003a616_00003a_00003alv0 + add__n_00003a616_00003a_00003arv0);
         end
         add__n_00003a616_00003a_00003alv1 <= _00003a520;
         add__n_00003a616_00003a_00003alvok1 <= 32'd1;
         if ((_00003a576 == 32'd0)) begin
            if ((_00003a573 == 32'd1)) begin
               add__n_00003a616_00003a_00003arv1 <= _00003a575;
               _00003a573 <= 32'd0;
               add__n_00003a616_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a574 <= 32'd0;
               _00003a573 <= 32'd1;
            end
         end
         if ((add__n_00003a616_00003a_00003alvok1 & add__n_00003a616_00003a_00003arvok1)) begin
            add__n_00003a616_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a589 <= (add__n_00003a616_00003a_00003alv1 + add__n_00003a616_00003a_00003arv1);
         end
      end
      else begin
         add__n_00003a616_00003a_00003alvok0 <= 32'd0;
         add__n_00003a616_00003a_00003arvok0 <= 32'd0;
         add__n_00003a616_00003a_00003alvok1 <= 32'd0;
         add__n_00003a616_00003a_00003arvok1 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a487_00003a_00003amem[32'd0] = $signed(-32'd29);

      channel__w0_00003a487_00003a_00003amem[32'd1] = $signed(-32'd26);

      channel__w1_00003a502_00003a_00003amem[32'd0] = $signed(-32'd12);

      channel__w1_00003a502_00003a_00003amem[32'd1] = $signed(-32'd11);

   end

endmodule