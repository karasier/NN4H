`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer0_00003aT00( clk, rst, req, _00003a1790, ack__layer, _00003a1788, _00003a1789, _00003a1879, _00003a1880 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a1790;
   output ack__layer;
   output reg _00003a1788;
   output reg [2:0] _00003a1789;
   inout signed[7:0] _00003a1879;
   inout signed[7:0] _00003a1880;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a1916;
   reg _00003a1914;
   reg [2:0] _00003a1915;
   reg signed[7:0] _00003a1939;
   reg signed[7:0] _00003a1940;
   wire signed[7:0] _00003a1931;
   reg _00003a1929;
   reg [2:0] _00003a1930;
   wire signed[7:0] _00003a1980;
   wire _00003a1981;
   reg _00003a1978;
   reg [0:0] _00003a1979;
   reg signed[7:0] _00003a2008;
   reg signed[7:0] _00003a2009;
   wire signed[7:0] _00003a1995;
   wire _00003a1996;
   reg _00003a1993;
   reg [0:0] _00003a1994;
   reg signed[7:0] value__z0;
   reg signed[7:0] value__z1;
   wire signed[7:0] value__a0;
   wire signed[7:0] value__a1;
   reg flag__z0;
   reg flag__z1;
   reg ack__a0;
   reg ack__a1;
   wire channel__w0_00003a1907_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a1907_00003a_00003adbus__r;
   wire [2:0] channel__w0_00003a1907_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a1907_00003a_00003amem  :0[0:7];
   wire channel__w1_00003a1922_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a1922_00003a_00003adbus__r;
   wire [2:0] channel__w1_00003a1922_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a1922_00003a_00003amem  :0[0:7];
   wire signed[7:0] channel__accum_00003a1937_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a1937_00003a_00003areg__1;
   wire [0:0] channel__accum_00003a1937_00003a_00003arinc_00003a1949_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a1937_00003a_00003awinc_00003a1954_00003a_00003aabus__w;
   wire [0:0] channel__accum_00003a1937_00003a_00003ardec_00003a1959_00003a_00003aabus__r;
   wire [0:0] channel__accum_00003a1937_00003a_00003awdec_00003a1964_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a1969_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a1969_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a1969_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a1969_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a1969_00003a_00003arv;
   reg mac__n1_00003a1969_00003a_00003alvok0;
   reg mac__n1_00003a1969_00003a_00003alvok1;
   reg mac__n1_00003a1969_00003a_00003arvok;
   reg mac__n1_00003a1969_00003a_00003awok0;
   reg mac__n1_00003a1969_00003a_00003awok1;
   reg mac__n1_00003a1969_00003a_00003arun;
   wire channel__b0_00003a1976_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a1976_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a1976_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a1976_00003a_00003amem  :0[0:0] = $signed(32'd7);
   wire channel__b1_00003a1991_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a1991_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a1991_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a1991_00003a_00003amem  :0[0:0] = $signed(32'd33);
   wire signed[7:0] channel__z_00003a2006_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a2006_00003a_00003areg__1;
   wire [0:0] channel__z_00003a2006_00003a_00003arinc_00003a2018_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a2006_00003a_00003awinc_00003a2022_00003a_00003aabus__w;
   wire [0:0] channel__z_00003a2006_00003a_00003ardec_00003a2026_00003a_00003aabus__r;
   wire [0:0] channel__z_00003a2006_00003a_00003awdec_00003a2031_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a2036_00003a_00003alv0;
   reg signed[7:0] add__n_00003a2036_00003a_00003alv1;
   reg signed[7:0] add__n_00003a2036_00003a_00003arv0;
   reg signed[7:0] add__n_00003a2036_00003a_00003arv1;
   reg add__n_00003a2036_00003a_00003alvok0;
   reg add__n_00003a2036_00003a_00003alvok1;
   reg add__n_00003a2036_00003a_00003arvok0;
   reg add__n_00003a2036_00003a_00003arvok1;
   reg add__n_00003a2036_00003a_00003arun;
   wire _00005e_0000602096;
   wire _00005e_0000602097;
   wire _00005e_0000602098;
   wire _00005e_0000602099;
   wire signed[7:0] _00005e_0000602100;
   wire signed[7:0] _00005e_0000602101;
   wire signed[7:0] _00005e_0000602102;
   wire signed[7:0] _00005e_0000602103;

   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer0_00003aT00_00003a_00003acounter_00003aT10 counter(.clk(_00005e_0000602096),.ack(_00005e_0000602097),.rst(_00005e_0000602098),.ack__mac(_00005e_0000602099));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer0_00003aT00_00003a_00003afunc0_00003aT10 func0(.z__value(_00005e_0000602100),.a(_00005e_0000602101));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer0_00003aT00_00003a_00003afunc1_00003aT10 func1(.z__value(_00005e_0000602102),.a(_00005e_0000602103));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_0000602096 = clk;

   assign _00005e_0000602097 = ack;

   assign _00005e_0000602098 = rst;

   assign ack__mac = _00005e_0000602099;

   assign _00003a1981 = rst;

   assign _00003a1996 = rst;

   assign _00005e_0000602100 = value__z0;

   assign value__a0 = _00005e_0000602101;

   assign _00005e_0000602102 = value__z1;

   assign value__a1 = _00005e_0000602103;

   assign ack__layer = (ack__a0 & ack__a1);

   assign _00003a1916 = channel__w0_00003a1907_00003a_00003adbus__r;

   assign _00003a1914 = channel__w0_00003a1907_00003a_00003atrig__r;

   assign _00003a1915 = channel__w0_00003a1907_00003a_00003aabus__r;

   assign _00003a1931 = channel__w1_00003a1922_00003a_00003adbus__r;

   assign _00003a1929 = channel__w1_00003a1922_00003a_00003atrig__r;

   assign _00003a1930 = channel__w1_00003a1922_00003a_00003aabus__r;

   assign _00003a1939 = channel__accum_00003a1937_00003a_00003areg__0;

   assign _00003a1940 = channel__accum_00003a1937_00003a_00003areg__1;

   assign _00003a1980 = channel__b0_00003a1976_00003a_00003adbus__r;

   assign _00003a1978 = channel__b0_00003a1976_00003a_00003atrig__r;

   assign _00003a1979 = channel__b0_00003a1976_00003a_00003aabus__r;

   assign _00003a1995 = channel__b1_00003a1991_00003a_00003adbus__r;

   assign _00003a1993 = channel__b1_00003a1991_00003a_00003atrig__r;

   assign _00003a1994 = channel__b1_00003a1991_00003a_00003aabus__r;

   assign _00003a2008 = channel__z_00003a2006_00003a_00003areg__0;

   assign _00003a2009 = channel__z_00003a2006_00003a_00003areg__1;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a2008;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a2009;
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
         _00003a1879 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a1880 <= value__a1;
         ack__a1 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a1907_00003a_00003adbus__r <= channel__w0_00003a1907_00003a_00003amem[channel__w0_00003a1907_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a1922_00003a_00003adbus__r <= channel__w1_00003a1922_00003a_00003amem[channel__w1_00003a1922_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a1930 <= -32'd1;
         _00003a1929 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1915 <= -32'd1;
         _00003a1914 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1789 <= -32'd1;
      end

      _00003a1788 <= 32'd0;

      ack <= 32'd0;

      mac__n1_00003a1969_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a1969_00003a_00003arun) begin
         mac__n1_00003a1969_00003a_00003arvok <= 32'd0;
         mac__n1_00003a1969_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a1969_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a1969_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a1969_00003a_00003awok1 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a1969_00003a_00003arun)) begin
         mac__n1_00003a1969_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a1969_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1788 == 32'd1)) begin
                  mac__n1_00003a1969_00003a_00003arv <= _00003a1790;
                  mac__n1_00003a1969_00003a_00003arvok <= 32'd1;
               end
               else begin
                  _00003a1789 <= ((_00003a1789 + 32'd1) == 32'd8) == 1 ? (_00003a1789 + 32'd1) : 32'd0;
                  _00003a1788 <= 32'd1;
               end
            end
         end
         if (~mac__n1_00003a1969_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1914 == 32'd1)) begin
                  _00003a1914 <= 32'd0;
                  mac__n1_00003a1969_00003a_00003alv0 <= _00003a1916;
                  mac__n1_00003a1969_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a1915 <= ((_00003a1915 + 32'd1) == 32'd8) == 1 ? (_00003a1915 + 32'd1) : 32'd0;
                  _00003a1914 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1969_00003a_00003alvok0 & mac__n1_00003a1969_00003a_00003arvok) & ~mac__n1_00003a1969_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a1969_00003a_00003arun <= 32'd0;
            mac__n1_00003a1969_00003a_00003aav0 <= (mac__n1_00003a1969_00003a_00003aav0 + (($signed(mac__n1_00003a1969_00003a_00003alv0) * mac__n1_00003a1969_00003a_00003arv) >> 32'd4));
            _00003a1939 <= ((mac__n1_00003a1969_00003a_00003aav0 + (($signed(mac__n1_00003a1969_00003a_00003alv0) * mac__n1_00003a1969_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1969_00003a_00003alv0) * mac__n1_00003a1969_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1969_00003a_00003awok0 <= 32'd1;
         end
         if ((mac__n1_00003a1969_00003a_00003awok0 & mac__n1_00003a1969_00003a_00003awok1)) begin
            mac__n1_00003a1969_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1969_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1969_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1969_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1969_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1969_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1929 == 32'd1)) begin
                  _00003a1929 <= 32'd0;
                  mac__n1_00003a1969_00003a_00003alv1 <= _00003a1931;
                  mac__n1_00003a1969_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a1930 <= ((_00003a1930 + 32'd1) == 32'd8) == 1 ? (_00003a1930 + 32'd1) : 32'd0;
                  _00003a1929 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1969_00003a_00003alvok1 & mac__n1_00003a1969_00003a_00003arvok) & ~mac__n1_00003a1969_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a1969_00003a_00003arun <= 32'd0;
            mac__n1_00003a1969_00003a_00003aav1 <= (mac__n1_00003a1969_00003a_00003aav1 + (($signed(mac__n1_00003a1969_00003a_00003alv1) * mac__n1_00003a1969_00003a_00003arv) >> 32'd4));
            _00003a1940 <= ((mac__n1_00003a1969_00003a_00003aav1 + (($signed(mac__n1_00003a1969_00003a_00003alv1) * mac__n1_00003a1969_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1969_00003a_00003alv1) * mac__n1_00003a1969_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1969_00003a_00003awok1 <= 32'd1;
         end
         if ((mac__n1_00003a1969_00003a_00003awok0 & mac__n1_00003a1969_00003a_00003awok1)) begin
            mac__n1_00003a1969_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1969_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1969_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1969_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1969_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a1969_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a1969_00003a_00003aav1 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a1976_00003a_00003adbus__r <= channel__b0_00003a1976_00003a_00003amem[channel__b0_00003a1976_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a1991_00003a_00003adbus__r <= channel__b1_00003a1991_00003a_00003amem[channel__b1_00003a1991_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a1993 <= 32'd0;

      _00003a1978 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a2036_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a2036_00003a_00003arun)) begin
         add__n_00003a2036_00003a_00003arun <= 32'd1;
         add__n_00003a2036_00003a_00003alv0 <= _00003a1939;
         add__n_00003a2036_00003a_00003alvok0 <= 32'd1;
         if ((_00003a1981 == 32'd0)) begin
            if ((_00003a1978 == 32'd1)) begin
               add__n_00003a2036_00003a_00003arv0 <= _00003a1980;
               _00003a1978 <= 32'd0;
               add__n_00003a2036_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a1979 <= 32'd0;
               _00003a1978 <= 32'd1;
            end
         end
         if ((add__n_00003a2036_00003a_00003alvok0 & add__n_00003a2036_00003a_00003arvok0)) begin
            add__n_00003a2036_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2008 <= (add__n_00003a2036_00003a_00003alv0 + add__n_00003a2036_00003a_00003arv0);
         end
         add__n_00003a2036_00003a_00003alv1 <= _00003a1940;
         add__n_00003a2036_00003a_00003alvok1 <= 32'd1;
         if ((_00003a1996 == 32'd0)) begin
            if ((_00003a1993 == 32'd1)) begin
               add__n_00003a2036_00003a_00003arv1 <= _00003a1995;
               _00003a1993 <= 32'd0;
               add__n_00003a2036_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a1994 <= 32'd0;
               _00003a1993 <= 32'd1;
            end
         end
         if ((add__n_00003a2036_00003a_00003alvok1 & add__n_00003a2036_00003a_00003arvok1)) begin
            add__n_00003a2036_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2009 <= (add__n_00003a2036_00003a_00003alv1 + add__n_00003a2036_00003a_00003arv1);
         end
      end
      else begin
         add__n_00003a2036_00003a_00003alvok0 <= 32'd0;
         add__n_00003a2036_00003a_00003arvok0 <= 32'd0;
         add__n_00003a2036_00003a_00003alvok1 <= 32'd0;
         add__n_00003a2036_00003a_00003arvok1 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a1907_00003a_00003amem[32'd0] = $signed(-32'd58);

      channel__w0_00003a1907_00003a_00003amem[32'd1] = $signed(-32'd54);

      channel__w0_00003a1907_00003a_00003amem[32'd2] = $signed(-32'd26);

      channel__w0_00003a1907_00003a_00003amem[32'd3] = $signed(-32'd25);

      channel__w0_00003a1907_00003a_00003amem[32'd4] = $signed(-32'd58);

      channel__w0_00003a1907_00003a_00003amem[32'd5] = $signed(-32'd54);

      channel__w0_00003a1907_00003a_00003amem[32'd6] = $signed(-32'd26);

      channel__w0_00003a1907_00003a_00003amem[32'd7] = $signed(-32'd25);

      channel__w1_00003a1922_00003a_00003amem[32'd0] = $signed(-32'd58);

      channel__w1_00003a1922_00003a_00003amem[32'd1] = $signed(-32'd54);

      channel__w1_00003a1922_00003a_00003amem[32'd2] = $signed(-32'd26);

      channel__w1_00003a1922_00003a_00003amem[32'd3] = $signed(-32'd25);

      channel__w1_00003a1922_00003a_00003amem[32'd4] = $signed(-32'd58);

      channel__w1_00003a1922_00003a_00003amem[32'd5] = $signed(-32'd54);

      channel__w1_00003a1922_00003a_00003amem[32'd6] = $signed(-32'd26);

      channel__w1_00003a1922_00003a_00003amem[32'd7] = $signed(-32'd25);

   end

endmodule