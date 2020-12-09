`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00( clk, rst, req, _00003a481, _00003a482, ack__layer, _00003a483, _00003a447 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a481;
   input signed[7:0] _00003a482;
   output ack__layer;
   inout [0:0] _00003a483;
   inout signed[7:0] _00003a447;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a647;
   reg _00003a645;
   reg [0:0] _00003a646;
   reg signed[7:0] _00003a655;
   wire signed[7:0] _00003a687;
   wire _00003a688;
   reg _00003a685;
   reg [0:0] _00003a686;
   reg signed[7:0] _00003a700;
   reg signed[7:0] value__z0;
   wire signed[7:0] value__a0;
   reg flag__z0;
   reg ack__a0;
   wire channel__w0_00003a638_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a638_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a638_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a638_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a653_00003a_00003areg__0;
   wire [0:0] channel__accum_00003a653_00003a_00003arinc_00003a662_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a653_00003a_00003awinc_00003a666_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a653_00003a_00003ardec_00003a670_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a653_00003a_00003awdec_00003a674_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a678_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a678_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a678_00003a_00003arv;
   reg mac__n1_00003a678_00003a_00003alvok0;
   reg mac__n1_00003a678_00003a_00003arvok;
   reg mac__n1_00003a678_00003a_00003awok0;
   reg mac__n1_00003a678_00003a_00003arun;
   wire channel__b0_00003a683_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a683_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a683_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a683_00003a_00003amem  :0[0:0] = $signed(-32'd9);
   wire signed[7:0] channel__z_00003a698_00003a_00003areg__0;
   wire [0:0] channel__z_00003a698_00003a_00003arinc_00003a707_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a698_00003a_00003awinc_00003a710_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a698_00003a_00003ardec_00003a713_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a698_00003a_00003awdec_00003a717_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a721_00003a_00003alv0;
   reg signed[7:0] add__n_00003a721_00003a_00003arv0;
   reg add__n_00003a721_00003a_00003alvok0;
   reg add__n_00003a721_00003a_00003arvok0;
   reg add__n_00003a721_00003a_00003arun;
   wire _00005e_000060276;
   wire _00005e_000060277;
   wire _00005e_000060278;
   wire _00005e_000060279;
   wire signed[7:0] _00005e_000060280;
   wire signed[7:0] _00005e_000060281;

   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003acounter_00003aT20 counter(.clk(_00005e_000060276),.ack(_00005e_000060277),.rst(_00005e_000060278),.ack__mac(_00005e_000060279));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc0_00003aT20 func0(.z__value(_00005e_000060280),.a(_00005e_000060281));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060276 = clk;

   assign _00005e_000060277 = ack;

   assign _00005e_000060278 = rst;

   assign ack__mac = _00005e_000060279;

   assign _00003a688 = rst;

   assign _00005e_000060280 = value__z0;

   assign value__a0 = _00005e_000060281;

   assign ack__layer = ack__a0;

   assign _00003a647 = channel__w0_00003a638_00003a_00003adbus__r;

   assign _00003a645 = channel__w0_00003a638_00003a_00003atrig__r;

   assign _00003a646 = channel__w0_00003a638_00003a_00003aabus__r;

   assign _00003a655 = channel__accum_00003a653_00003a_00003areg__0;

   assign _00003a687 = channel__b0_00003a683_00003a_00003adbus__r;

   assign _00003a685 = channel__b0_00003a683_00003a_00003atrig__r;

   assign _00003a686 = channel__b0_00003a683_00003a_00003aabus__r;

   assign _00003a700 = channel__z_00003a698_00003a_00003areg__0;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a700;
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
         _00003a447 <= value__a0;
         ack__a0 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a638_00003a_00003adbus__r <= channel__w0_00003a638_00003a_00003amem[channel__w0_00003a638_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a646 <= -32'd1;
      end

      _00003a645 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a483 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a678_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a678_00003a_00003arun) begin
         mac__n1_00003a678_00003a_00003arvok <= 32'd0;
         mac__n1_00003a678_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a678_00003a_00003awok0 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a678_00003a_00003arun)) begin
         mac__n1_00003a678_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a678_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a483)
                  32'd0: mac__n1_00003a678_00003a_00003arv <= _00003a481;
                  32'd1: mac__n1_00003a678_00003a_00003arv <= _00003a482;
               endcase
               mac__n1_00003a678_00003a_00003arvok <= 32'd1;
               _00003a483 <= ((_00003a483 + 32'd1) == 32'd2) == 1 ? (_00003a483 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a678_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a645 == 32'd1)) begin
                  mac__n1_00003a678_00003a_00003alv0 <= _00003a647;
                  mac__n1_00003a678_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a646 <= ((_00003a646 + 32'd1) == 32'd2) == 1 ? (_00003a646 + 32'd1) : 32'd0;
                  _00003a645 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a678_00003a_00003alvok0 & mac__n1_00003a678_00003a_00003arvok) & ~mac__n1_00003a678_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a678_00003a_00003arun <= 32'd0;
            mac__n1_00003a678_00003a_00003aav0 <= (mac__n1_00003a678_00003a_00003aav0 + (($signed(mac__n1_00003a678_00003a_00003alv0) * mac__n1_00003a678_00003a_00003arv) >> 32'd4));
            _00003a655 <= ((mac__n1_00003a678_00003a_00003aav0 + (($signed(mac__n1_00003a678_00003a_00003alv0) * mac__n1_00003a678_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a678_00003a_00003alv0) * mac__n1_00003a678_00003a_00003arv) >> 32'd4));
            mac__n1_00003a678_00003a_00003awok0 <= 32'd1;
         end
         if (mac__n1_00003a678_00003a_00003awok0) begin
            mac__n1_00003a678_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a678_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a678_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a678_00003a_00003aav0 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a683_00003a_00003adbus__r <= channel__b0_00003a683_00003a_00003amem[channel__b0_00003a683_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a685 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a721_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a721_00003a_00003arun)) begin
         add__n_00003a721_00003a_00003arun <= 32'd1;
         add__n_00003a721_00003a_00003alv0 <= _00003a655;
         add__n_00003a721_00003a_00003alvok0 <= 32'd1;
         if ((_00003a688 == 32'd0)) begin
            if ((_00003a685 == 32'd1)) begin
               add__n_00003a721_00003a_00003arv0 <= _00003a687;
               _00003a685 <= 32'd0;
               add__n_00003a721_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a686 <= 32'd0;
               _00003a685 <= 32'd1;
            end
         end
         if ((add__n_00003a721_00003a_00003alvok0 & add__n_00003a721_00003a_00003arvok0)) begin
            add__n_00003a721_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a700 <= (add__n_00003a721_00003a_00003alv0 + add__n_00003a721_00003a_00003arv0);
         end
      end
      else begin
         add__n_00003a721_00003a_00003alvok0 <= 32'd0;
         add__n_00003a721_00003a_00003arvok0 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a638_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w0_00003a638_00003a_00003amem[32'd1] = $signed(32'd23);

   end

endmodule