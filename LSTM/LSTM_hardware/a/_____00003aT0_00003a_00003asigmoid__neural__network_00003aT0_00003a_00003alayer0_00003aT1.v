`timescale 1ps/1ps

module _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer0_00003aT1( clk, rst, req, _00003a114, ack__layer, _00003a112, _00003a113, _00003a154, _00003a155 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a114;
   output ack__layer;
   output reg _00003a112;
   output reg [0:0] _00003a113;
   inout signed[7:0] _00003a154;
   inout signed[7:0] _00003a155;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a191;
   reg _00003a189;
   reg [0:0] _00003a190;
   reg signed[7:0] _00003a214;
   reg signed[7:0] _00003a215;
   wire signed[7:0] _00003a206;
   reg _00003a204;
   reg [0:0] _00003a205;
   wire signed[7:0] _00003a255;
   wire _00003a256;
   reg _00003a253;
   reg [0:0] _00003a254;
   reg signed[7:0] _00003a283;
   reg signed[7:0] _00003a284;
   wire signed[7:0] _00003a270;
   wire _00003a271;
   reg _00003a268;
   reg [0:0] _00003a269;
   reg signed[7:0] value__z0;
   reg signed[7:0] value__z1;
   wire signed[7:0] value__a0;
   wire signed[7:0] value__a1;
   reg flag__z0;
   reg flag__z1;
   reg ack__a0;
   reg ack__a1;
   wire channel__w0_00003a182_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a182_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a182_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a182_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a197_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a197_00003a_00003adbus__r;
   wire [0:0] channel__w1_00003a197_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a197_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a212_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a212_00003a_00003areg__1;
   wire [0:0] channel__accum_00003a212_00003a_00003arinc_00003a224_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a212_00003a_00003awinc_00003a229_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a212_00003a_00003ardec_00003a234_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a212_00003a_00003awdec_00003a239_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a244_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a244_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a244_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a244_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a244_00003a_00003arv;
   reg mac__n1_00003a244_00003a_00003alvok0;
   reg mac__n1_00003a244_00003a_00003alvok1;
   reg mac__n1_00003a244_00003a_00003arvok;
   reg mac__n1_00003a244_00003a_00003awok0;
   reg mac__n1_00003a244_00003a_00003awok1;
   reg mac__n1_00003a244_00003a_00003arun;
   wire channel__b0_00003a251_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a251_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a251_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a251_00003a_00003amem  :0[0:0] = $signed(32'd7);
   wire channel__b1_00003a266_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a266_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a266_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a266_00003a_00003amem  :0[0:0] = $signed(32'd33);
   wire signed[7:0] channel__z_00003a281_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a281_00003a_00003areg__1;
   wire [0:0] channel__z_00003a281_00003a_00003arinc_00003a293_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a281_00003a_00003awinc_00003a297_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a281_00003a_00003ardec_00003a301_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a281_00003a_00003awdec_00003a306_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a311_00003a_00003alv0;
   reg signed[7:0] add__n_00003a311_00003a_00003alv1;
   reg signed[7:0] add__n_00003a311_00003a_00003arv0;
   reg signed[7:0] add__n_00003a311_00003a_00003arv1;
   reg add__n_00003a311_00003a_00003alvok0;
   reg add__n_00003a311_00003a_00003alvok1;
   reg add__n_00003a311_00003a_00003arvok0;
   reg add__n_00003a311_00003a_00003arvok1;
   reg add__n_00003a311_00003a_00003arun;
   wire _00005e_000060276;
   wire _00005e_000060277;
   wire _00005e_000060278;
   wire _00005e_000060279;
   wire signed[7:0] _00005e_000060280;
   wire signed[7:0] _00005e_000060281;
   wire signed[7:0] _00005e_000060282;
   wire signed[7:0] _00005e_000060283;

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer0_00003aT1_00003a_00003acounter_00003aT3 counter(.clk(_00005e_000060276),.ack(_00005e_000060277),.rst(_00005e_000060278),.ack__mac(_00005e_000060279));
   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer0_00003aT1_00003a_00003afunc0_00003aT3 func0(.z__value(_00005e_000060280),.a(_00005e_000060281));
   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer0_00003aT1_00003a_00003afunc1_00003aT1 func1(.z__value(_00005e_000060282),.a(_00005e_000060283));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060276 = clk;

   assign _00005e_000060277 = ack;

   assign _00005e_000060278 = rst;

   assign ack__mac = _00005e_000060279;

   assign _00003a256 = rst;

   assign _00003a271 = rst;

   assign _00005e_000060280 = value__z0;

   assign value__a0 = _00005e_000060281;

   assign _00005e_000060282 = value__z1;

   assign value__a1 = _00005e_000060283;

   assign ack__layer = (ack__a0 & ack__a1);

   assign _00003a191 = channel__w0_00003a182_00003a_00003adbus__r;

   assign _00003a189 = channel__w0_00003a182_00003a_00003atrig__r;

   assign _00003a190 = channel__w0_00003a182_00003a_00003aabus__r;

   assign _00003a206 = channel__w1_00003a197_00003a_00003adbus__r;

   assign _00003a204 = channel__w1_00003a197_00003a_00003atrig__r;

   assign _00003a205 = channel__w1_00003a197_00003a_00003aabus__r;

   assign _00003a214 = channel__accum_00003a212_00003a_00003areg__0;

   assign _00003a215 = channel__accum_00003a212_00003a_00003areg__1;

   assign _00003a255 = channel__b0_00003a251_00003a_00003adbus__r;

   assign _00003a253 = channel__b0_00003a251_00003a_00003atrig__r;

   assign _00003a254 = channel__b0_00003a251_00003a_00003aabus__r;

   assign _00003a270 = channel__b1_00003a266_00003a_00003adbus__r;

   assign _00003a268 = channel__b1_00003a266_00003a_00003atrig__r;

   assign _00003a269 = channel__b1_00003a266_00003a_00003aabus__r;

   assign _00003a283 = channel__z_00003a281_00003a_00003areg__0;

   assign _00003a284 = channel__z_00003a281_00003a_00003areg__1;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a283;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a284;
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
         _00003a154 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a155 <= value__a1;
         ack__a1 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a182_00003a_00003adbus__r <= channel__w0_00003a182_00003a_00003amem[channel__w0_00003a182_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a197_00003a_00003adbus__r <= channel__w1_00003a197_00003a_00003amem[channel__w1_00003a197_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a205 <= -32'd1;
      end

      _00003a204 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a190 <= -32'd1;
      end

      _00003a189 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a113 <= -32'd1;
      end

      _00003a112 <= 32'd0;

      ack <= 32'd0;

      mac__n1_00003a244_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a244_00003a_00003arun) begin
         mac__n1_00003a244_00003a_00003arvok <= 32'd0;
         mac__n1_00003a244_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a244_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a244_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a244_00003a_00003awok1 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a244_00003a_00003arun)) begin
         mac__n1_00003a244_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a244_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               if ((_00003a112 == 32'd1)) begin
                  mac__n1_00003a244_00003a_00003arv <= _00003a114;
                  mac__n1_00003a244_00003a_00003arvok <= 32'd1;
               end
               else begin
                  _00003a113 <= ((_00003a113 + 32'd1) == 32'd2) == 1 ? (_00003a113 + 32'd1) : 32'd0;
                  _00003a112 <= 32'd1;
               end
            end
         end
         if (~mac__n1_00003a244_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a189 == 32'd1)) begin
                  mac__n1_00003a244_00003a_00003alv0 <= _00003a191;
                  mac__n1_00003a244_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a190 <= ((_00003a190 + 32'd1) == 32'd2) == 1 ? (_00003a190 + 32'd1) : 32'd0;
                  _00003a189 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a244_00003a_00003alvok0 & mac__n1_00003a244_00003a_00003arvok) & ~mac__n1_00003a244_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a244_00003a_00003arun <= 32'd0;
            mac__n1_00003a244_00003a_00003aav0 <= (mac__n1_00003a244_00003a_00003aav0 + (($signed(mac__n1_00003a244_00003a_00003alv0) * mac__n1_00003a244_00003a_00003arv) >> 32'd4));
            _00003a214 <= ((mac__n1_00003a244_00003a_00003aav0 + (($signed(mac__n1_00003a244_00003a_00003alv0) * mac__n1_00003a244_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a244_00003a_00003alv0) * mac__n1_00003a244_00003a_00003arv) >> 32'd4));
            mac__n1_00003a244_00003a_00003awok0 <= 32'd1;
         end
         if ((mac__n1_00003a244_00003a_00003awok0 & mac__n1_00003a244_00003a_00003awok1)) begin
            mac__n1_00003a244_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a244_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a244_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a244_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a244_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a244_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a204 == 32'd1)) begin
                  mac__n1_00003a244_00003a_00003alv1 <= _00003a206;
                  mac__n1_00003a244_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a205 <= ((_00003a205 + 32'd1) == 32'd2) == 1 ? (_00003a205 + 32'd1) : 32'd0;
                  _00003a204 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a244_00003a_00003alvok1 & mac__n1_00003a244_00003a_00003arvok) & ~mac__n1_00003a244_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a244_00003a_00003arun <= 32'd0;
            mac__n1_00003a244_00003a_00003aav1 <= (mac__n1_00003a244_00003a_00003aav1 + (($signed(mac__n1_00003a244_00003a_00003alv1) * mac__n1_00003a244_00003a_00003arv) >> 32'd4));
            _00003a215 <= ((mac__n1_00003a244_00003a_00003aav1 + (($signed(mac__n1_00003a244_00003a_00003alv1) * mac__n1_00003a244_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a244_00003a_00003alv1) * mac__n1_00003a244_00003a_00003arv) >> 32'd4));
            mac__n1_00003a244_00003a_00003awok1 <= 32'd1;
         end
         if ((mac__n1_00003a244_00003a_00003awok0 & mac__n1_00003a244_00003a_00003awok1)) begin
            mac__n1_00003a244_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a244_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a244_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a244_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a244_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a244_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a244_00003a_00003aav1 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a251_00003a_00003adbus__r <= channel__b0_00003a251_00003a_00003amem[channel__b0_00003a251_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a266_00003a_00003adbus__r <= channel__b1_00003a266_00003a_00003amem[channel__b1_00003a266_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a268 <= 32'd0;

      _00003a253 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a311_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a311_00003a_00003arun)) begin
         add__n_00003a311_00003a_00003arun <= 32'd1;
         add__n_00003a311_00003a_00003alv0 <= _00003a214;
         add__n_00003a311_00003a_00003alvok0 <= 32'd1;
         if ((_00003a256 == 32'd0)) begin
            if ((_00003a253 == 32'd1)) begin
               add__n_00003a311_00003a_00003arv0 <= _00003a255;
               _00003a253 <= 32'd0;
               add__n_00003a311_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a254 <= 32'd0;
               _00003a253 <= 32'd1;
            end
         end
         if ((add__n_00003a311_00003a_00003alvok0 & add__n_00003a311_00003a_00003arvok0)) begin
            add__n_00003a311_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a283 <= (add__n_00003a311_00003a_00003alv0 + add__n_00003a311_00003a_00003arv0);
         end
         add__n_00003a311_00003a_00003alv1 <= _00003a215;
         add__n_00003a311_00003a_00003alvok1 <= 32'd1;
         if ((_00003a271 == 32'd0)) begin
            if ((_00003a268 == 32'd1)) begin
               add__n_00003a311_00003a_00003arv1 <= _00003a270;
               _00003a268 <= 32'd0;
               add__n_00003a311_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a269 <= 32'd0;
               _00003a268 <= 32'd1;
            end
         end
         if ((add__n_00003a311_00003a_00003alvok1 & add__n_00003a311_00003a_00003arvok1)) begin
            add__n_00003a311_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a284 <= (add__n_00003a311_00003a_00003alv1 + add__n_00003a311_00003a_00003arv1);
         end
      end
      else begin
         add__n_00003a311_00003a_00003alvok0 <= 32'd0;
         add__n_00003a311_00003a_00003arvok0 <= 32'd0;
         add__n_00003a311_00003a_00003alvok1 <= 32'd0;
         add__n_00003a311_00003a_00003arvok1 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a182_00003a_00003amem[32'd0] = $signed(-32'd58);

      channel__w0_00003a182_00003a_00003amem[32'd1] = $signed(-32'd54);

      channel__w1_00003a197_00003a_00003amem[32'd0] = $signed(-32'd26);

      channel__w1_00003a197_00003a_00003amem[32'd1] = $signed(-32'd25);

   end

endmodule