`timescale 1ps/1ps

module _____00003aT0( ); 
   reg clk;
   reg rst;
   reg req;
   reg ackA;
   reg ackB;
   reg ack;
   reg fill;
   wire signed[7:0] _00003a15;
   reg _00003a13;
   reg [0:0] _00003a14;
   wire signed[7:0] _00003a44;
   reg _00003a42;
   reg [0:0] _00003a43;
   wire signed[7:0] _00003a73;
   reg _00003a71;
   reg [0:0] _00003a72;
   reg signed[7:0] _00003a90;
   reg signed[7:0] _00003a91;
   wire signed[7:0] _00003a121;
   wire signed[7:0] _00003a122;
   reg signed[7:0] _00003a151;
   reg signed[7:0] _00003a152;
   reg signed[7:0] _00003a182;
   reg signed[7:0] _00003a183;
   reg signed[7:0] z0__val;
   reg signed[7:0] z1__val;
   wire signed[7:0] a0__val;
   wire signed[7:0] a1__val;
   reg _00003a17;
   reg [0:0] _00003a18;
   reg signed[7:0] _00003a19;
   reg _00003a46;
   reg [0:0] _00003a47;
   reg signed[7:0] _00003a48;
   reg _00003a75;
   reg [0:0] _00003a76;
   reg signed[7:0] _00003a77;
   reg signed[7:0] _00003a136;
   reg signed[7:0] _00003a137;
   reg [0:0] _00003a138;
   reg signed[7:0] val;
   wire _00003a334_00003a_00003atrig__r;
   wire _00003a334_00003a_00003atrig__w;
   reg signed[7:0] _00003a334_00003a_00003adbus__r;
   wire signed[7:0] _00003a334_00003a_00003adbus__w;
   wire [0:0] _00003a334_00003a_00003aabus__r;
   wire [0:0] _00003a334_00003a_00003aabus__w;
   wire signed[7:0] _00003a334_00003a_00003amem  [0:1];
   wire _00003a335_00003a_00003atrig__r;
   wire _00003a335_00003a_00003atrig__w;
   reg signed[7:0] _00003a335_00003a_00003adbus__r;
   wire signed[7:0] _00003a335_00003a_00003adbus__w;
   wire [0:0] _00003a335_00003a_00003aabus__r;
   wire [0:0] _00003a335_00003a_00003aabus__w;
   wire signed[7:0] _00003a335_00003a_00003amem  [0:1];
   wire _00003a336_00003a_00003atrig__r;
   wire _00003a336_00003a_00003atrig__w;
   reg signed[7:0] _00003a336_00003a_00003adbus__r;
   wire signed[7:0] _00003a336_00003a_00003adbus__w;
   wire [0:0] _00003a336_00003a_00003aabus__r;
   wire [0:0] _00003a336_00003a_00003aabus__w;
   wire signed[7:0] _00003a336_00003a_00003amem  [0:1];
   wire signed[7:0] _00003a337_00003a_00003areg__0;
   wire signed[7:0] _00003a337_00003a_00003areg__1;
   wire [0:0] _00003a337_00003a_00003a_00003a238_00003a_00003aabus__r;
   wire [0:0] _00003a337_00003a_00003a_00003a239_00003a_00003aabus__w;
   wire [0:0] _00003a337_00003a_00003a_00003a240_00003a_00003aabus__r;
   wire [0:0] _00003a337_00003a_00003a_00003a241_00003a_00003aabus__w;
   reg signed[7:0] _00003a338_00003a_00003alv0;
   reg signed[7:0] _00003a338_00003a_00003alv1;
   reg signed[7:0] _00003a338_00003a_00003aav0;
   reg signed[7:0] _00003a338_00003a_00003aav1;
   reg signed[7:0] _00003a338_00003a_00003arv;
   reg _00003a338_00003a_00003alvok0;
   reg _00003a338_00003a_00003alvok1;
   reg _00003a338_00003a_00003arvok;
   reg _00003a338_00003a_00003arun;
   wire signed[7:0] _00003a339_00003a_00003areg__0;
   wire signed[7:0] _00003a339_00003a_00003areg__1;
   wire [0:0] _00003a339_00003a_00003a_00003a271_00003a_00003aabus__r;
   wire [0:0] _00003a339_00003a_00003a_00003a272_00003a_00003aabus__w;
   wire [0:0] _00003a339_00003a_00003a_00003a273_00003a_00003aabus__r;
   wire [0:0] _00003a339_00003a_00003a_00003a274_00003a_00003aabus__w;
   wire signed[7:0] _00003a340_00003a_00003areg__0;
   wire signed[7:0] _00003a340_00003a_00003areg__1;
   wire [0:0] _00003a340_00003a_00003a_00003a278_00003a_00003aabus__r;
   wire [0:0] _00003a340_00003a_00003a_00003a279_00003a_00003aabus__w;
   wire [0:0] _00003a340_00003a_00003a_00003a280_00003a_00003aabus__r;
   wire [0:0] _00003a340_00003a_00003a_00003a281_00003a_00003aabus__w;
   reg signed[7:0] _00003a341_00003a_00003alv0;
   reg signed[7:0] _00003a341_00003a_00003alv1;
   reg signed[7:0] _00003a341_00003a_00003arv0;
   reg signed[7:0] _00003a341_00003a_00003arv1;
   reg _00003a341_00003a_00003alvok0;
   reg _00003a341_00003a_00003alvok1;
   reg _00003a341_00003a_00003arvok0;
   reg _00003a341_00003a_00003arvok1;
   reg _00003a341_00003a_00003arun;
   wire signed[7:0] _00003a342_00003a_00003areg__0;
   wire signed[7:0] _00003a342_00003a_00003areg__1;
   wire [0:0] _00003a342_00003a_00003a_00003a296_00003a_00003aabus__r;
   wire [0:0] _00003a342_00003a_00003a_00003a297_00003a_00003aabus__w;
   wire [0:0] _00003a342_00003a_00003a_00003a298_00003a_00003aabus__r;
   wire [0:0] _00003a342_00003a_00003a_00003a299_00003a_00003aabus__w;
   wire signed[7:0] _00005e_0000600;
   wire signed[7:0] _00005e_0000601;
   wire signed[7:0] _00005e_0000602;
   wire signed[7:0] _00005e_0000603;

   _____00003aT0_00003a_00003afunc0_00003aT0 func0(.z__value(_00005e_0000600),.a(_00005e_0000601));
   _____00003aT0_00003a_00003afunc1_00003aT0 func1(.z__value(_00005e_0000602),.a(_00005e_0000603));
   assign _00005e_0000600 = z0__val;

   assign a0__val = _00005e_0000601;

   assign _00005e_0000602 = z1__val;

   assign a1__val = _00005e_0000603;

   assign _00003a15 = _00003a334_00003a_00003adbus__r;

   assign _00003a13 = _00003a334_00003a_00003atrig__r;

   assign _00003a14 = _00003a334_00003a_00003aabus__r;

   assign _00003a17 = _00003a334_00003a_00003atrig__w;

   assign _00003a18 = _00003a334_00003a_00003aabus__w;

   assign _00003a19 = _00003a334_00003a_00003adbus__w;

   assign _00003a44 = _00003a335_00003a_00003adbus__r;

   assign _00003a42 = _00003a335_00003a_00003atrig__r;

   assign _00003a43 = _00003a335_00003a_00003aabus__r;

   assign _00003a46 = _00003a335_00003a_00003atrig__w;

   assign _00003a47 = _00003a335_00003a_00003aabus__w;

   assign _00003a48 = _00003a335_00003a_00003adbus__w;

   assign _00003a73 = _00003a336_00003a_00003adbus__r;

   assign _00003a71 = _00003a336_00003a_00003atrig__r;

   assign _00003a72 = _00003a336_00003a_00003aabus__r;

   assign _00003a75 = _00003a336_00003a_00003atrig__w;

   assign _00003a76 = _00003a336_00003a_00003aabus__w;

   assign _00003a77 = _00003a336_00003a_00003adbus__w;

   assign _00003a90 = _00003a337_00003a_00003areg__0;

   assign _00003a91 = _00003a337_00003a_00003areg__1;

   assign _00003a121 = _00003a339_00003a_00003areg__0;

   assign _00003a122 = _00003a339_00003a_00003areg__1;

   assign _00003a136 = _00003a339_00003a_00003areg__0;

   assign _00003a137 = _00003a339_00003a_00003areg__1;

   assign _00003a138 = _00003a339_00003a_00003a_00003a272_00003a_00003aabus__w;

   assign _00003a151 = _00003a340_00003a_00003areg__0;

   assign _00003a152 = _00003a340_00003a_00003areg__1;

   assign _00003a182 = _00003a342_00003a_00003areg__0;

   assign _00003a183 = _00003a342_00003a_00003areg__1;

   always @( posedge clk ) begin

      if (ackB) begin
         z0__val <= _00003a151;
         z1__val <= _00003a152;
         _00003a182 <= a0__val;
         _00003a183 <= a1__val;
         ack <= 32'd1;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a138 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a76 <= -32'd1;
      end

      _00003a75 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a47 <= -32'd1;
      end

      _00003a46 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a18 <= -32'd1;
      end

      _00003a17 <= 32'd0;

      if (fill) begin
         if ((rst == 32'd0)) begin
            _00003a18 <= (_00003a18 + 32'd1);
            _00003a17 <= 32'd1;
            _00003a19 <= val;
         end
         if ((rst == 32'd0)) begin
            _00003a47 <= (_00003a47 + 32'd1);
            _00003a46 <= 32'd1;
            _00003a48 <= val;
         end
         if ((rst == 32'd0)) begin
            _00003a76 <= (_00003a76 + 32'd1);
            _00003a75 <= 32'd1;
            _00003a77 <= val;
         end
         if ((rst == 32'd0)) begin
            case(_00003a138)
               32'd0: _00003a136 <= val;
               32'd1: _00003a137 <= val;
            endcase
            _00003a138 <= (_00003a138 + 32'd1);
         end
      end

   end

   initial begin

      clk = 32'd0;

      rst = 32'd0;

      req = 32'd0;

      val = 8'b00000000;

      fill = 32'd0;

      #10000

      rst = 32'd1;

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      rst = 32'd0;

      fill = 32'd1;

      val = 8'b00010000;

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      #10000

      fill = 32'd0;

      clk = 32'd1;

      clk = 32'd0;

      req = 32'd1;

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      clk = 32'd1;

      #10000

      clk = 32'd0;

      if ((ackB == 32'd1)) begin
         req = 32'd0;
      end

      #10000

      $finish;
   end

   initial begin
      $dumpfile("nn.vcd");
      $dumpvars(0, _____00003aT0);
   end

   always @( negedge clk ) begin

      _00003a334_00003a_00003adbus__r <= _00003a334_00003a_00003amem[_00003a334_00003a_00003aabus__r];

      if (_00003a334_00003a_00003atrig__w) begin
         _00003a334_00003a_00003amem[_00003a334_00003a_00003aabus__w] <= _00003a334_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      _00003a335_00003a_00003adbus__r <= _00003a335_00003a_00003amem[_00003a335_00003a_00003aabus__r];

      if (_00003a335_00003a_00003atrig__w) begin
         _00003a335_00003a_00003amem[_00003a335_00003a_00003aabus__w] <= _00003a335_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      _00003a336_00003a_00003adbus__r <= _00003a336_00003a_00003amem[_00003a336_00003a_00003aabus__r];

      if (_00003a336_00003a_00003atrig__w) begin
         _00003a336_00003a_00003amem[_00003a336_00003a_00003aabus__w] <= _00003a336_00003a_00003adbus__w;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a43 <= -32'd1;
      end

      _00003a42 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a14 <= -32'd1;
      end

      _00003a13 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a72 <= -32'd1;
      end

      _00003a71 <= 32'd0;

      ackA <= 32'd0;

      _00003a338_00003a_00003arun <= 32'd0;

      if ((req | _00003a338_00003a_00003arun)) begin
         _00003a338_00003a_00003arun <= 32'd1;
         if ((rst == 32'd0)) begin
            if ((_00003a71 == 32'd1)) begin
               _00003a338_00003a_00003arv <= _00003a73;
               _00003a338_00003a_00003arvok <= 32'd1;
            end
            _00003a72 <= (_00003a72 + 32'd1);
            _00003a71 <= 32'd1;
         end
         if ((rst == 32'd0)) begin
            if ((_00003a13 == 32'd1)) begin
               _00003a338_00003a_00003alv0 <= _00003a15;
               _00003a338_00003a_00003alvok0 <= 32'd1;
            end
            _00003a14 <= (_00003a14 + 32'd1);
            _00003a13 <= 32'd1;
         end
         if ((_00003a338_00003a_00003alvok0 & _00003a338_00003a_00003arvok)) begin
            ackA <= 32'd1;
            _00003a338_00003a_00003arun <= 32'd0;
            _00003a338_00003a_00003aav0 <= (_00003a338_00003a_00003aav0 + (($unsigned(_00003a338_00003a_00003alv0) * _00003a338_00003a_00003arv) >> 32'd4));
            _00003a90 <= ((_00003a338_00003a_00003aav0 + (($unsigned(_00003a338_00003a_00003alv0) * _00003a338_00003a_00003arv) >> 32'd4)) + (($unsigned(_00003a338_00003a_00003alv0) * _00003a338_00003a_00003arv) >> 32'd4));
         end
         if ((rst == 32'd0)) begin
            if ((_00003a42 == 32'd1)) begin
               _00003a338_00003a_00003alv1 <= _00003a44;
               _00003a338_00003a_00003alvok1 <= 32'd1;
            end
            _00003a43 <= (_00003a43 + 32'd1);
            _00003a42 <= 32'd1;
         end
         if ((_00003a338_00003a_00003alvok1 & _00003a338_00003a_00003arvok)) begin
            ackA <= 32'd1;
            _00003a338_00003a_00003arun <= 32'd0;
            _00003a338_00003a_00003aav1 <= (_00003a338_00003a_00003aav1 + (($unsigned(_00003a338_00003a_00003alv1) * _00003a338_00003a_00003arv) >> 32'd4));
            _00003a91 <= ((_00003a338_00003a_00003aav1 + (($unsigned(_00003a338_00003a_00003alv1) * _00003a338_00003a_00003arv) >> 32'd4)) + (($unsigned(_00003a338_00003a_00003alv1) * _00003a338_00003a_00003arv) >> 32'd4));
         end
      end
      else begin
         _00003a338_00003a_00003arvok <= 32'd0;
         _00003a338_00003a_00003alvok0 <= 32'd0;
         _00003a338_00003a_00003aav0 <= 32'd0;
         _00003a338_00003a_00003alvok1 <= 32'd0;
         _00003a338_00003a_00003aav1 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      ackB <= 32'd0;

      _00003a341_00003a_00003arun <= 32'd0;

      if ((ackA | _00003a341_00003a_00003arun)) begin
         _00003a341_00003a_00003arun <= 32'd1;
         _00003a341_00003a_00003alv0 <= _00003a90;
         _00003a341_00003a_00003alvok0 <= 32'd1;
         _00003a341_00003a_00003arv0 <= _00003a121;
         _00003a341_00003a_00003arvok0 <= 32'd1;
         if ((_00003a341_00003a_00003alvok0 & _00003a341_00003a_00003arvok0)) begin
            _00003a341_00003a_00003arun <= 32'd0;
            ackB <= 32'd1;
            _00003a151 <= (_00003a341_00003a_00003alv0 + _00003a341_00003a_00003arv0);
         end
         _00003a341_00003a_00003alv1 <= _00003a91;
         _00003a341_00003a_00003alvok1 <= 32'd1;
         _00003a341_00003a_00003arv1 <= _00003a122;
         _00003a341_00003a_00003arvok1 <= 32'd1;
         if ((_00003a341_00003a_00003alvok1 & _00003a341_00003a_00003arvok1)) begin
            _00003a341_00003a_00003arun <= 32'd0;
            ackB <= 32'd1;
            _00003a152 <= (_00003a341_00003a_00003alv1 + _00003a341_00003a_00003arv1);
         end
      end
      else begin
         _00003a341_00003a_00003alvok0 <= 32'd0;
         _00003a341_00003a_00003arvok0 <= 32'd0;
         _00003a341_00003a_00003alvok1 <= 32'd0;
         _00003a341_00003a_00003arvok1 <= 32'd0;
      end

   end

endmodule