`timescale 1ps/1ps

module _____00003aT0_00003a_00003alayer__output_00003aT0( clk, rst, fill, req, _00003a43, _00003a44, ack__1, _00003a45, _00003a62 ); 
   input clk;
   input rst;
   input fill;
   input req;
   input signed[7:0] _00003a43;
   input signed[7:0] _00003a44;
   output ack__1;
   inout [0:0] _00003a45;
   inout signed[7:0] _00003a62;
   wire req__mac;
   reg ack;
   wire ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a266;
   reg _00003a264;
   reg [0:0] _00003a265;
   reg signed[7:0] _00003a283;
   wire signed[7:0] _00003a310;
   reg signed[7:0] _00003a333;
   reg signed[7:0] value__z0;
   wire signed[7:0] value__a10;
   reg flag__z0;
   reg ack__a10;
   reg _00003a268;
   reg [0:0] _00003a269;
   reg signed[7:0] _00003a270;
   reg signed[7:0] _00003a321;
   reg [0:-1] _00003a322;
   wire channel__w0_00003a252_00003a_00003atrig__r;
   wire channel__w0_00003a252_00003a_00003atrig__w;
   reg signed[7:0] channel__w0_00003a252_00003a_00003adbus__r;
   wire signed[7:0] channel__w0_00003a252_00003a_00003adbus__w;
   wire [0:0] channel__w0_00003a252_00003a_00003aabus__r;
   wire [0:0] channel__w0_00003a252_00003a_00003aabus__w;
   wire signed[7:0] channel__w0_00003a252_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a281_00003a_00003areg__0;
   wire [0:-1] channel__accum_00003a281_00003a_00003arinc_00003a290_00003a_00003aabus__r;
   wire [0:-1] channel__accum_00003a281_00003a_00003awinc_00003a294_00003a_00003aabus__w;
   wire [0:-1] channel__accum_00003a281_00003a_00003ardec_00003a298_00003a_00003aabus__r;
   wire [0:-1] channel__accum_00003a281_00003a_00003awdec_00003a302_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a306_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a306_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a306_00003a_00003arv;
   reg mac__n1_00003a306_00003a_00003alvok0;
   reg mac__n1_00003a306_00003a_00003arvok;
   reg mac__n1_00003a306_00003a_00003arun;
   wire signed[7:0] channel__bias_00003a308_00003a_00003areg__0;
   wire [0:-1] channel__bias_00003a308_00003a_00003arinc_00003a317_00003a_00003aabus__r;
   wire [0:-1] channel__bias_00003a308_00003a_00003awinc_00003a320_00003a_00003aabus__w;
   wire [0:-1] channel__bias_00003a308_00003a_00003ardec_00003a323_00003a_00003aabus__r;
   wire [0:-1] channel__bias_00003a308_00003a_00003awdec_00003a327_00003a_00003aabus__w;
   wire signed[7:0] channel__z_00003a331_00003a_00003areg__0;
   wire [0:-1] channel__z_00003a331_00003a_00003arinc_00003a340_00003a_00003aabus__r;
   wire [0:-1] channel__z_00003a331_00003a_00003awinc_00003a343_00003a_00003aabus__w;
   wire [0:-1] channel__z_00003a331_00003a_00003ardec_00003a346_00003a_00003aabus__r;
   wire [0:-1] channel__z_00003a331_00003a_00003awdec_00003a350_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a354_00003a_00003alv0;
   reg signed[7:0] add__n_00003a354_00003a_00003arv0;
   reg add__n_00003a354_00003a_00003alvok0;
   reg add__n_00003a354_00003a_00003arvok0;
   reg add__n_00003a354_00003a_00003arun;
   wire _00005e_000060486;
   wire _00005e_000060487;
   wire _00005e_000060488;
   wire _00005e_000060489;
   wire signed[7:0] _00005e_000060490;
   wire signed[7:0] _00005e_000060491;

   _____00003aT0_00003a_00003alayer__output_00003aT0_00003a_00003acounter1_00003aT0 counter1(.clk(_00005e_000060486),.ack(_00005e_000060487),.rst(_00005e_000060488),.ack__mac(_00005e_000060489));
   _____00003aT0_00003a_00003alayer__output_00003aT0_00003a_00003afunc10_00003aT0 func10(.z__value(_00005e_000060490),.a(_00005e_000060491));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_000060486 = clk;

   assign _00005e_000060487 = ack;

   assign _00005e_000060488 = rst;

   assign ack__mac = _00005e_000060489;

   assign _00005e_000060490 = value__z0;

   assign value__a10 = _00005e_000060491;

   assign ack__1 = ack__a10;

   assign _00003a266 = channel__w0_00003a252_00003a_00003adbus__r;

   assign _00003a264 = channel__w0_00003a252_00003a_00003atrig__r;

   assign _00003a265 = channel__w0_00003a252_00003a_00003aabus__r;

   assign _00003a268 = channel__w0_00003a252_00003a_00003atrig__w;

   assign _00003a269 = channel__w0_00003a252_00003a_00003aabus__w;

   assign _00003a270 = channel__w0_00003a252_00003a_00003adbus__w;

   assign _00003a283 = channel__accum_00003a281_00003a_00003areg__0;

   assign _00003a310 = channel__bias_00003a308_00003a_00003areg__0;

   assign _00003a321 = channel__bias_00003a308_00003a_00003areg__0;

   assign _00003a322 = channel__bias_00003a308_00003a_00003awinc_00003a320_00003a_00003aabus__w;

   assign _00003a333 = channel__z_00003a331_00003a_00003areg__0;

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a333;
         flag__z0 <= 32'd1;
      end
      else begin
         flag__z0 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (flag__z0) begin
         _00003a62 <= value__a10;
         ack__a10 <= 32'd1;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a322 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a269 <= -32'd1;
      end

      _00003a268 <= 32'd0;

      if (fill) begin
         if ((rst == 32'd0)) begin
            _00003a269 <= (_00003a269 + 32'd1);
            _00003a268 <= 32'd1;
            _00003a270 <= 8'b00010000;
         end
         if ((rst == 32'd0)) begin
            case(_00003a322)
               32'd0: _00003a321 <= 8'b00010000;
            endcase
            _00003a322 <= (_00003a322 + 32'd1);
         end
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a252_00003a_00003adbus__r <= channel__w0_00003a252_00003a_00003amem[channel__w0_00003a252_00003a_00003aabus__r];

      if (channel__w0_00003a252_00003a_00003atrig__w) begin
         channel__w0_00003a252_00003a_00003amem[channel__w0_00003a252_00003a_00003aabus__w] <= channel__w0_00003a252_00003a_00003adbus__w;
      end

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a265 <= -32'd1;
      end

      _00003a264 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a45 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a306_00003a_00003arun <= 32'd0;

      if ((req__mac | mac__n1_00003a306_00003a_00003arun)) begin
         mac__n1_00003a306_00003a_00003arun <= 32'd1;
         if ((rst == 32'd0)) begin
            case(_00003a45)
               32'd0: mac__n1_00003a306_00003a_00003arv <= _00003a43;
               32'd1: mac__n1_00003a306_00003a_00003arv <= _00003a44;
            endcase
            mac__n1_00003a306_00003a_00003arvok <= 32'd1;
            _00003a45 <= (_00003a45 + 32'd1);
         end
         if ((rst == 32'd0)) begin
            if ((_00003a264 == 32'd1)) begin
               mac__n1_00003a306_00003a_00003alv0 <= _00003a266;
               mac__n1_00003a306_00003a_00003alvok0 <= 32'd1;
            end
            _00003a265 <= (_00003a265 + 32'd1);
            _00003a264 <= 32'd1;
         end
         if ((mac__n1_00003a306_00003a_00003alvok0 & mac__n1_00003a306_00003a_00003arvok)) begin
            ack <= 32'd1;
            mac__n1_00003a306_00003a_00003arun <= 32'd0;
            mac__n1_00003a306_00003a_00003aav0 <= (mac__n1_00003a306_00003a_00003aav0 + (($unsigned(mac__n1_00003a306_00003a_00003alv0) * mac__n1_00003a306_00003a_00003arv) >> 32'd4));
            _00003a283 <= ((mac__n1_00003a306_00003a_00003aav0 + (($unsigned(mac__n1_00003a306_00003a_00003alv0) * mac__n1_00003a306_00003a_00003arv) >> 32'd4)) + (($unsigned(mac__n1_00003a306_00003a_00003alv0) * mac__n1_00003a306_00003a_00003arv) >> 32'd4));
         end
      end
      else begin
         mac__n1_00003a306_00003a_00003arvok <= 32'd0;
         mac__n1_00003a306_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a306_00003a_00003aav0 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      ack__add <= 32'd0;

      add__n_00003a354_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a354_00003a_00003arun)) begin
         add__n_00003a354_00003a_00003arun <= 32'd1;
         add__n_00003a354_00003a_00003alv0 <= _00003a283;
         add__n_00003a354_00003a_00003alvok0 <= 32'd1;
         add__n_00003a354_00003a_00003arv0 <= _00003a310;
         add__n_00003a354_00003a_00003arvok0 <= 32'd1;
         if ((add__n_00003a354_00003a_00003alvok0 & add__n_00003a354_00003a_00003arvok0)) begin
            add__n_00003a354_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a333 <= (add__n_00003a354_00003a_00003alv0 + add__n_00003a354_00003a_00003arv0);
         end
      end
      else begin
         add__n_00003a354_00003a_00003alvok0 <= 32'd0;
         add__n_00003a354_00003a_00003arvok0 <= 32'd0;
      end

   end

endmodule