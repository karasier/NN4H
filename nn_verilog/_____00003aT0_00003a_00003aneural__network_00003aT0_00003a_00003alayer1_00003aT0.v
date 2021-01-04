`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0( clk, rst, req, _00003a123, _00003a124, ack__layer, _00003a125, _00003a77 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a123;
   input signed[7:0] _00003a124;
   output ack__layer;
   output reg [0:0] _00003a125;
   output reg signed[7:0] _00003a77;
   wire req__mac;
   reg ack;
   wire ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a311;
   reg _00003a309;
   reg [0:0] _00003a310;
   reg signed[7:0] _00003a320;
   wire signed[7:0] _00003a319;
   wire signed[7:0] _00003a356;
   wire _00003a357;
   reg _00003a354;
   reg [0:0] _00003a355;
   reg signed[7:0] _00003a370;
   reg signed[7:0] value__z0;
   wire signed[7:0] value__a0;
   reg flag__z0;
   reg ack__a0;
   wire signed[7:0] _00003a369;
   wire channel__w0_00003a302_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a302_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a302_00003a_00003aabus__r;
   reg signed[7:0] channel__w0_00003a302_00003a_00003amem  [0:1];
   wire signed[7:0] channel__accum_00003a317_00003a_00003areg__0;
   wire [0:0] channel__accum_00003a317_00003a_00003arinc_00003a331_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a317_00003a_00003awinc_00003a335_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a317_00003a_00003ardec_00003a339_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a317_00003a_00003awdec_00003a343_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a347_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a347_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a347_00003a_00003arv;
   reg mac__n1_00003a347_00003a_00003alvok0;
   reg mac__n1_00003a347_00003a_00003arvok;
   reg mac__n1_00003a347_00003a_00003awok0;
   reg mac__n1_00003a347_00003a_00003arun;
   wire channel__b0_00003a352_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a352_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a352_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a352_00003a_00003amem  [0:0];
   wire signed[7:0] channel__z_00003a367_00003a_00003areg__0;
   wire [0:0] channel__z_00003a367_00003a_00003arinc_00003a381_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a367_00003a_00003awinc_00003a384_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a367_00003a_00003ardec_00003a387_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a367_00003a_00003awdec_00003a391_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a395_00003a_00003alv0;
   reg signed[7:0] add__n_00003a395_00003a_00003arv0;
   reg add__n_00003a395_00003a_00003alvok0;
   reg add__n_00003a395_00003a_00003arvok0;
   reg add__n_00003a395_00003a_00003arun;
   wire _00005e_000060212;
   wire _00005e_000060213;
   wire _00005e_000060214;
   wire _00005e_000060215;
   wire signed[7:0] _00005e_000060216;
   wire signed[7:0] _00005e_000060217;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003acounter_00003aT00 counter(.clk(_00005e_000060212),.ack(_00005e_000060213),.rst(_00005e_000060214),.ack__mac(_00005e_000060215));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0_00003a_00003afunc0_00003aT00 func0(.z__value(_00005e_000060216),.a(_00005e_000060217));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060212 = clk;

   assign _00005e_000060213 = ack;

   assign _00005e_000060214 = rst;

   assign ack__mac = _00005e_000060215;

   assign _00003a357 = rst;

   assign _00005e_000060216 = value__z0;

   assign value__a0 = _00005e_000060217;

   assign ack__layer = ack__a0;

   assign _00003a311 = channel__w0_00003a302_00003a_00003adbus__r;

   assign channel__w0_00003a302_00003a_00003atrig__r = _00003a309;

   assign channel__w0_00003a302_00003a_00003aabus__r = _00003a310;

   assign channel__accum_00003a317_00003a_00003areg__0 = _00003a320;

   assign _00003a319 = channel__accum_00003a317_00003a_00003areg__0;

   assign _00003a356 = channel__b0_00003a352_00003a_00003adbus__r;

   assign channel__b0_00003a352_00003a_00003atrig__r = _00003a354;

   assign channel__b0_00003a352_00003a_00003aabus__r = _00003a355;

   assign channel__z_00003a367_00003a_00003areg__0 = _00003a370;

   assign _00003a369 = channel__z_00003a367_00003a_00003areg__0;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a369;
         flag__z0 <= 32'd1;
      end
      else begin
         flag__z0 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (rst) begin
         ack__a0 <= 32'd0;
      end
      else if (flag__z0) begin
         _00003a77 <= value__a0;
         ack__a0 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a302_00003a_00003adbus__r <= channel__w0_00003a302_00003a_00003amem[channel__w0_00003a302_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a310 <= -32'd1;
         _00003a309 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a125 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a347_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a347_00003a_00003arun) begin
         mac__n1_00003a347_00003a_00003arvok <= 32'd0;
         mac__n1_00003a347_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a347_00003a_00003awok0 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a347_00003a_00003arun)) begin
         mac__n1_00003a347_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a347_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a125)
                  32'd0: mac__n1_00003a347_00003a_00003arv <= _00003a123;
                  32'd1: mac__n1_00003a347_00003a_00003arv <= _00003a124;
               endcase
               mac__n1_00003a347_00003a_00003arvok <= 32'd1;
               _00003a125 <= (_00003a125 + 32'd1);
            end
         end
         if (~mac__n1_00003a347_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a309 == 32'd1)) begin
                  _00003a309 <= 32'd0;
                  mac__n1_00003a347_00003a_00003alv0 <= _00003a311;
                  mac__n1_00003a347_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a310 <= (_00003a310 + 32'd1);
                  _00003a309 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a347_00003a_00003alvok0 & mac__n1_00003a347_00003a_00003arvok) & ~mac__n1_00003a347_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a347_00003a_00003arun <= 32'd0;
            mac__n1_00003a347_00003a_00003aav0 <= (mac__n1_00003a347_00003a_00003aav0 + (($signed({{4{mac__n1_00003a347_00003a_00003alv0[7]}},mac__n1_00003a347_00003a_00003alv0}) * mac__n1_00003a347_00003a_00003arv) >> 32'd4));
            _00003a320 <= mac__n1_00003a347_00003a_00003aav0;
            mac__n1_00003a347_00003a_00003awok0 <= 32'd1;
         end
         if (mac__n1_00003a347_00003a_00003awok0) begin
            mac__n1_00003a347_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a347_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a347_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a347_00003a_00003aav0 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a352_00003a_00003adbus__r <= channel__b0_00003a352_00003a_00003amem[channel__b0_00003a352_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a354 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a395_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a395_00003a_00003arun)) begin
         add__n_00003a395_00003a_00003arun <= 32'd1;
         add__n_00003a395_00003a_00003alv0 <= _00003a319;
         add__n_00003a395_00003a_00003alvok0 <= 32'd1;
         if ((_00003a357 == 32'd0)) begin
            if ((_00003a354 == 32'd1)) begin
               add__n_00003a395_00003a_00003arv0 <= _00003a356;
               _00003a354 <= 32'd0;
               add__n_00003a395_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a355 <= 32'd0;
               _00003a354 <= 32'd1;
            end
         end
         if ((add__n_00003a395_00003a_00003alvok0 & add__n_00003a395_00003a_00003arvok0)) begin
            add__n_00003a395_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a370 <= (add__n_00003a395_00003a_00003alv0 + add__n_00003a395_00003a_00003arv0);
         end
      end
      else begin
         add__n_00003a395_00003a_00003alvok0 <= 32'd0;
         add__n_00003a395_00003a_00003arvok0 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a302_00003a_00003amem[32'd0] = 32'd20;

      channel__w0_00003a302_00003a_00003amem[32'd1] = 32'd13;

      channel__b0_00003a352_00003a_00003amem[32'd0] = -32'd2;

   end

endmodule