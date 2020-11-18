`timescale 1ps/1ps

module _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1( clk, rst, req, _00003a154, _00003a155, ack__layer, _00003a156, _00003a120 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a154;
   input signed[7:0] _00003a155;
   output ack__layer;
   inout [0:0] _00003a156;
   inout signed[7:0] _00003a120;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a320;
   reg _00003a318;
   reg [0:0] _00003a319;
   reg signed[7:0] _00003a328;
   wire signed[7:0] _00003a360;
   wire _00003a361;
   reg _00003a358;
   reg [0:0] _00003a359;
   reg signed[7:0] _00003a373;
   reg signed[7:0] value__z0;
   wire signed[7:0] value__a0;
   reg flag__z0;
   reg ack__a0;
   wire channel__w0_00003a311_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a311_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a311_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a311_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a326_00003a_00003areg__0;
   wire [0:0] channel__accum_00003a326_00003a_00003arinc_00003a335_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a326_00003a_00003awinc_00003a339_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a326_00003a_00003ardec_00003a343_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a326_00003a_00003awdec_00003a347_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a351_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a351_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a351_00003a_00003arv;
   reg mac__n1_00003a351_00003a_00003alvok0;
   reg mac__n1_00003a351_00003a_00003arvok;
   reg mac__n1_00003a351_00003a_00003awok0;
   reg mac__n1_00003a351_00003a_00003arun;
   wire channel__b0_00003a356_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a356_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a356_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a356_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire signed[7:0] channel__z_00003a371_00003a_00003areg__0;
   wire [0:0] channel__z_00003a371_00003a_00003arinc_00003a380_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a371_00003a_00003awinc_00003a383_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a371_00003a_00003ardec_00003a386_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a371_00003a_00003awdec_00003a390_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a394_00003a_00003alv0;
   reg signed[7:0] add__n_00003a394_00003a_00003arv0;
   reg add__n_00003a394_00003a_00003alvok0;
   reg add__n_00003a394_00003a_00003arvok0;
   reg add__n_00003a394_00003a_00003arun;
   wire _00005e_000060259;
   wire _00005e_000060260;
   wire _00005e_000060261;
   wire _00005e_000060262;
   wire signed[7:0] _00005e_000060263;
   wire signed[7:0] _00005e_000060264;

   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1_00003a_00003acounter_00003aT00 counter(.clk(_00005e_000060259),.ack(_00005e_000060260),.rst(_00005e_000060261),.ack__mac(_00005e_000060262));
   _____00003aT0_00003a_00003asigmoid__neural__network_00003aT0_00003a_00003alayer1_00003aT1_00003a_00003afunc0_00003aT00 func0(.z__value(_00005e_000060263),.a(_00005e_000060264));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060259 = clk;

   assign _00005e_000060260 = ack;

   assign _00005e_000060261 = rst;

   assign ack__mac = _00005e_000060262;

   assign _00003a361 = rst;

   assign _00005e_000060263 = value__z0;

   assign value__a0 = _00005e_000060264;

   assign ack__layer = ack__a0;

   assign _00003a320 = channel__w0_00003a311_00003a_00003adbus__r;

   assign _00003a318 = channel__w0_00003a311_00003a_00003atrig__r;

   assign _00003a319 = channel__w0_00003a311_00003a_00003aabus__r;

   assign _00003a328 = channel__accum_00003a326_00003a_00003areg__0;

   assign _00003a360 = channel__b0_00003a356_00003a_00003adbus__r;

   assign _00003a358 = channel__b0_00003a356_00003a_00003atrig__r;

   assign _00003a359 = channel__b0_00003a356_00003a_00003aabus__r;

   assign _00003a373 = channel__z_00003a371_00003a_00003areg__0;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a373;
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
         _00003a120 <= value__a0;
         ack__a0 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a311_00003a_00003adbus__r <= channel__w0_00003a311_00003a_00003amem[channel__w0_00003a311_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a319 <= -32'd1;
      end

      _00003a318 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a156 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a351_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a351_00003a_00003arun) begin
         mac__n1_00003a351_00003a_00003arvok <= 32'd0;
         mac__n1_00003a351_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a351_00003a_00003awok0 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a351_00003a_00003arun)) begin
         mac__n1_00003a351_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a351_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a156)
                  32'd0: mac__n1_00003a351_00003a_00003arv <= _00003a154;
                  32'd1: mac__n1_00003a351_00003a_00003arv <= _00003a155;
               endcase
               mac__n1_00003a351_00003a_00003arvok <= 32'd1;
               _00003a156 <= ((_00003a156 + 32'd1) == 32'd2) == 1 ? (_00003a156 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a351_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a318 == 32'd1)) begin
                  mac__n1_00003a351_00003a_00003alv0 <= _00003a320;
                  mac__n1_00003a351_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a319 <= ((_00003a319 + 32'd1) == 32'd2) == 1 ? (_00003a319 + 32'd1) : 32'd0;
                  _00003a318 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a351_00003a_00003alvok0 & mac__n1_00003a351_00003a_00003arvok) & ~mac__n1_00003a351_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a351_00003a_00003arun <= 32'd0;
            mac__n1_00003a351_00003a_00003aav0 <= (mac__n1_00003a351_00003a_00003aav0 + (($signed(mac__n1_00003a351_00003a_00003alv0) * mac__n1_00003a351_00003a_00003arv) >> 32'd4));
            _00003a328 <= ((mac__n1_00003a351_00003a_00003aav0 + (($signed(mac__n1_00003a351_00003a_00003alv0) * mac__n1_00003a351_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a351_00003a_00003alv0) * mac__n1_00003a351_00003a_00003arv) >> 32'd4));
            mac__n1_00003a351_00003a_00003awok0 <= 32'd1;
         end
         if (mac__n1_00003a351_00003a_00003awok0) begin
            mac__n1_00003a351_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a351_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a351_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a351_00003a_00003aav0 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a356_00003a_00003adbus__r <= channel__b0_00003a356_00003a_00003amem[channel__b0_00003a356_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a358 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a394_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a394_00003a_00003arun)) begin
         add__n_00003a394_00003a_00003arun <= 32'd1;
         add__n_00003a394_00003a_00003alv0 <= _00003a328;
         add__n_00003a394_00003a_00003alvok0 <= 32'd1;
         if ((_00003a361 == 32'd0)) begin
            if ((_00003a358 == 32'd1)) begin
               add__n_00003a394_00003a_00003arv0 <= _00003a360;
               _00003a358 <= 32'd0;
               add__n_00003a394_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a359 <= 32'd0;
               _00003a358 <= 32'd1;
            end
         end
         if ((add__n_00003a394_00003a_00003alvok0 & add__n_00003a394_00003a_00003arvok0)) begin
            add__n_00003a394_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a373 <= (add__n_00003a394_00003a_00003alv0 + add__n_00003a394_00003a_00003arv0);
         end
      end
      else begin
         add__n_00003a394_00003a_00003alvok0 <= 32'd0;
         add__n_00003a394_00003a_00003arvok0 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a311_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w0_00003a311_00003a_00003amem[32'd1] = $signed(32'd48);

   end

endmodule