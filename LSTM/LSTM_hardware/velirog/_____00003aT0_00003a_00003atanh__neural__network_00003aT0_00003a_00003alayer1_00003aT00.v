`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00( clk, rst, req, _00003a470, _00003a471, ack__layer, _00003a472, _00003a436 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a470;
   input signed[7:0] _00003a471;
   output ack__layer;
   inout [0:0] _00003a472;
   inout signed[7:0] _00003a436;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a636;
   reg _00003a634;
   reg [0:0] _00003a635;
   reg signed[7:0] _00003a644;
   wire signed[7:0] _00003a676;
   wire _00003a677;
   reg _00003a674;
   reg [0:0] _00003a675;
   reg signed[7:0] _00003a689;
   reg signed[7:0] value__z0;
   wire signed[7:0] value__a0;
   reg flag__z0;
   reg ack__a0;
   wire channel__w0_00003a627_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a627_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a627_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a627_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a642_00003a_00003areg__0;
   wire [0:-1] channel__accum_00003a642_00003a_00003arinc_00003a651_00003a_00003aabus__r;
   wire [0:-1] channel__accum_00003a642_00003a_00003awinc_00003a655_00003a_00003aabus__w;
   wire [0:-1] channel__accum_00003a642_00003a_00003ardec_00003a659_00003a_00003aabus__r;
   wire [0:-1] channel__accum_00003a642_00003a_00003awdec_00003a663_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a667_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a667_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a667_00003a_00003arv;
   reg mac__n1_00003a667_00003a_00003alvok0;
   reg mac__n1_00003a667_00003a_00003arvok;
   reg mac__n1_00003a667_00003a_00003awok0;
   reg mac__n1_00003a667_00003a_00003arun;
   wire channel__b0_00003a672_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a672_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a672_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a672_00003a_00003amem  :0[0:0] = $signed(-32'd9);
   wire signed[7:0] channel__z_00003a687_00003a_00003areg__0;
   wire [0:-1] channel__z_00003a687_00003a_00003arinc_00003a696_00003a_00003aabus__r;
   wire [0:-1] channel__z_00003a687_00003a_00003awinc_00003a699_00003a_00003aabus__w;
   wire [0:-1] channel__z_00003a687_00003a_00003ardec_00003a702_00003a_00003aabus__r;
   wire [0:-1] channel__z_00003a687_00003a_00003awdec_00003a706_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a710_00003a_00003alv0;
   reg signed[7:0] add__n_00003a710_00003a_00003arv0;
   reg add__n_00003a710_00003a_00003alvok0;
   reg add__n_00003a710_00003a_00003arvok0;
   reg add__n_00003a710_00003a_00003arun;
   wire _00005e_000060250;
   wire _00005e_000060251;
   wire _00005e_000060252;
   wire _00005e_000060253;
   wire signed[7:0] _00005e_000060254;
   wire signed[7:0] _00005e_000060255;

   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003acounter_00003aT20 counter(.clk(_00005e_000060250),.ack(_00005e_000060251),.rst(_00005e_000060252),.ack__mac(_00005e_000060253));
   _____00003aT0_00003a_00003atanh__neural__network_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc0_00003aT20 func0(.z__value(_00005e_000060254),.a(_00005e_000060255));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060250 = clk;

   assign _00005e_000060251 = ack;

   assign _00005e_000060252 = rst;

   assign ack__mac = _00005e_000060253;

   assign _00003a677 = rst;

   assign _00005e_000060254 = value__z0;

   assign value__a0 = _00005e_000060255;

   assign ack__layer = ack__a0;

   assign _00003a636 = channel__w0_00003a627_00003a_00003adbus__r;

   assign _00003a634 = channel__w0_00003a627_00003a_00003atrig__r;

   assign _00003a635 = channel__w0_00003a627_00003a_00003aabus__r;

   assign _00003a644 = channel__accum_00003a642_00003a_00003areg__0;

   assign _00003a676 = channel__b0_00003a672_00003a_00003adbus__r;

   assign _00003a674 = channel__b0_00003a672_00003a_00003atrig__r;

   assign _00003a675 = channel__b0_00003a672_00003a_00003aabus__r;

   assign _00003a689 = channel__z_00003a687_00003a_00003areg__0;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a689;
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
         _00003a436 <= value__a0;
         ack__a0 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a627_00003a_00003adbus__r <= channel__w0_00003a627_00003a_00003amem[channel__w0_00003a627_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a635 <= -32'd1;
      end

      _00003a634 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a472 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a667_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a667_00003a_00003arun) begin
         mac__n1_00003a667_00003a_00003arvok <= 32'd0;
         mac__n1_00003a667_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a667_00003a_00003awok0 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a667_00003a_00003arun)) begin
         mac__n1_00003a667_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a667_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a472)
                  32'd0: mac__n1_00003a667_00003a_00003arv <= _00003a470;
                  32'd1: mac__n1_00003a667_00003a_00003arv <= _00003a471;
               endcase
               mac__n1_00003a667_00003a_00003arvok <= 32'd1;
               _00003a472 <= ((_00003a472 + 32'd1) == 32'd2) == 1 ? (_00003a472 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a667_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a634 == 32'd1)) begin
                  mac__n1_00003a667_00003a_00003alv0 <= _00003a636;
                  mac__n1_00003a667_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a635 <= ((_00003a635 + 32'd1) == 32'd2) == 1 ? (_00003a635 + 32'd1) : 32'd0;
                  _00003a634 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a667_00003a_00003alvok0 & mac__n1_00003a667_00003a_00003arvok) & ~mac__n1_00003a667_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a667_00003a_00003arun <= 32'd0;
            mac__n1_00003a667_00003a_00003aav0 <= (mac__n1_00003a667_00003a_00003aav0 + (($signed(mac__n1_00003a667_00003a_00003alv0) * mac__n1_00003a667_00003a_00003arv) >> 32'd4));
            _00003a644 <= ((mac__n1_00003a667_00003a_00003aav0 + (($signed(mac__n1_00003a667_00003a_00003alv0) * mac__n1_00003a667_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a667_00003a_00003alv0) * mac__n1_00003a667_00003a_00003arv) >> 32'd4));
            mac__n1_00003a667_00003a_00003awok0 <= 32'd1;
         end
         if (mac__n1_00003a667_00003a_00003awok0) begin
            mac__n1_00003a667_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a667_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a667_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a667_00003a_00003aav0 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a672_00003a_00003adbus__r <= channel__b0_00003a672_00003a_00003amem[channel__b0_00003a672_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a674 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a710_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a710_00003a_00003arun)) begin
         add__n_00003a710_00003a_00003arun <= 32'd1;
         add__n_00003a710_00003a_00003alv0 <= _00003a644;
         add__n_00003a710_00003a_00003alvok0 <= 32'd1;
         if ((_00003a677 == 32'd0)) begin
            if ((_00003a674 == 32'd1)) begin
               add__n_00003a710_00003a_00003arv0 <= _00003a676;
               _00003a674 <= 32'd0;
               add__n_00003a710_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a675 <= 32'd0;
               _00003a674 <= 32'd1;
            end
         end
         if ((add__n_00003a710_00003a_00003alvok0 & add__n_00003a710_00003a_00003arvok0)) begin
            add__n_00003a710_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a689 <= (add__n_00003a710_00003a_00003alv0 + add__n_00003a710_00003a_00003arv0);
         end
      end
      else begin
         add__n_00003a710_00003a_00003alvok0 <= 32'd0;
         add__n_00003a710_00003a_00003arvok0 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a627_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w0_00003a627_00003a_00003amem[32'd1] = $signed(32'd23);

   end

endmodule