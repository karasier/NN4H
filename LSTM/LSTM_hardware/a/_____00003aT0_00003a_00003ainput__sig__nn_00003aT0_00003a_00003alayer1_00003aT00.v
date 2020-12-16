`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00( clk, rst, req, _00003a1890, _00003a1891, ack__layer, _00003a1892, _00003a1807, _00003a1808, _00003a1809, _00003a1810, _00003a1811, _00003a1812, _00003a1813, _00003a1814 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a1890;
   input signed[7:0] _00003a1891;
   output ack__layer;
   inout [0:0] _00003a1892;
   inout signed[7:0] _00003a1807;
   inout signed[7:0] _00003a1808;
   inout signed[7:0] _00003a1809;
   inout signed[7:0] _00003a1810;
   inout signed[7:0] _00003a1811;
   inout signed[7:0] _00003a1812;
   inout signed[7:0] _00003a1813;
   inout signed[7:0] _00003a1814;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a2056;
   reg _00003a2054;
   reg [0:0] _00003a2055;
   reg signed[7:0] _00003a2169;
   reg signed[7:0] _00003a2170;
   reg signed[7:0] _00003a2171;
   reg signed[7:0] _00003a2172;
   reg signed[7:0] _00003a2173;
   reg signed[7:0] _00003a2174;
   reg signed[7:0] _00003a2175;
   reg signed[7:0] _00003a2176;
   wire signed[7:0] _00003a2071;
   reg _00003a2069;
   reg [0:0] _00003a2070;
   wire signed[7:0] _00003a2086;
   reg _00003a2084;
   reg [0:0] _00003a2085;
   wire signed[7:0] _00003a2101;
   reg _00003a2099;
   reg [0:0] _00003a2100;
   wire signed[7:0] _00003a2116;
   reg _00003a2114;
   reg [0:0] _00003a2115;
   wire signed[7:0] _00003a2131;
   reg _00003a2129;
   reg [0:0] _00003a2130;
   wire signed[7:0] _00003a2146;
   reg _00003a2144;
   reg [0:0] _00003a2145;
   wire signed[7:0] _00003a2161;
   reg _00003a2159;
   reg [0:0] _00003a2160;
   wire signed[7:0] _00003a2264;
   wire _00003a2265;
   reg _00003a2262;
   reg [0:0] _00003a2263;
   reg signed[7:0] _00003a2382;
   reg signed[7:0] _00003a2383;
   reg signed[7:0] _00003a2384;
   reg signed[7:0] _00003a2385;
   reg signed[7:0] _00003a2386;
   reg signed[7:0] _00003a2387;
   reg signed[7:0] _00003a2388;
   reg signed[7:0] _00003a2389;
   wire signed[7:0] _00003a2279;
   wire _00003a2280;
   reg _00003a2277;
   reg [0:0] _00003a2278;
   wire signed[7:0] _00003a2294;
   wire _00003a2295;
   reg _00003a2292;
   reg [0:0] _00003a2293;
   wire signed[7:0] _00003a2309;
   wire _00003a2310;
   reg _00003a2307;
   reg [0:0] _00003a2308;
   wire signed[7:0] _00003a2324;
   wire _00003a2325;
   reg _00003a2322;
   reg [0:0] _00003a2323;
   wire signed[7:0] _00003a2339;
   wire _00003a2340;
   reg _00003a2337;
   reg [0:0] _00003a2338;
   wire signed[7:0] _00003a2354;
   wire _00003a2355;
   reg _00003a2352;
   reg [0:0] _00003a2353;
   wire signed[7:0] _00003a2369;
   wire _00003a2370;
   reg _00003a2367;
   reg [0:0] _00003a2368;
   reg signed[7:0] value__z0;
   reg signed[7:0] value__z1;
   reg signed[7:0] value__z2;
   reg signed[7:0] value__z3;
   reg signed[7:0] value__z4;
   reg signed[7:0] value__z5;
   reg signed[7:0] value__z6;
   reg signed[7:0] value__z7;
   wire signed[7:0] value__a0;
   wire signed[7:0] value__a1;
   wire signed[7:0] value__a2;
   wire signed[7:0] value__a3;
   wire signed[7:0] value__a4;
   wire signed[7:0] value__a5;
   wire signed[7:0] value__a6;
   wire signed[7:0] value__a7;
   reg flag__z0;
   reg flag__z1;
   reg flag__z2;
   reg flag__z3;
   reg flag__z4;
   reg flag__z5;
   reg flag__z6;
   reg flag__z7;
   reg ack__a0;
   reg ack__a1;
   reg ack__a2;
   reg ack__a3;
   reg ack__a4;
   reg ack__a5;
   reg ack__a6;
   reg ack__a7;
   wire channel__w0_00003a2047_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a2047_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a2047_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a2047_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a2062_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a2062_00003a_00003adbus__r;
   wire [0:0] channel__w1_00003a2062_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a2062_00003a_00003amem  :0[0:1];
   wire channel__w2_00003a2077_00003a_00003atrig__r;
   reg signed[7:0] channel__w2_00003a2077_00003a_00003adbus__r;
   wire [0:0] channel__w2_00003a2077_00003a_00003aabus__r;
   wire signed[7:0] channel__w2_00003a2077_00003a_00003amem  :0[0:1];
   wire channel__w3_00003a2092_00003a_00003atrig__r;
   reg signed[7:0] channel__w3_00003a2092_00003a_00003adbus__r;
   wire [0:0] channel__w3_00003a2092_00003a_00003aabus__r;
   wire signed[7:0] channel__w3_00003a2092_00003a_00003amem  :0[0:1];
   wire channel__w4_00003a2107_00003a_00003atrig__r;
   reg signed[7:0] channel__w4_00003a2107_00003a_00003adbus__r;
   wire [0:0] channel__w4_00003a2107_00003a_00003aabus__r;
   wire signed[7:0] channel__w4_00003a2107_00003a_00003amem  :0[0:1];
   wire channel__w5_00003a2122_00003a_00003atrig__r;
   reg signed[7:0] channel__w5_00003a2122_00003a_00003adbus__r;
   wire [0:0] channel__w5_00003a2122_00003a_00003aabus__r;
   wire signed[7:0] channel__w5_00003a2122_00003a_00003amem  :0[0:1];
   wire channel__w6_00003a2137_00003a_00003atrig__r;
   reg signed[7:0] channel__w6_00003a2137_00003a_00003adbus__r;
   wire [0:0] channel__w6_00003a2137_00003a_00003aabus__r;
   wire signed[7:0] channel__w6_00003a2137_00003a_00003amem  :0[0:1];
   wire channel__w7_00003a2152_00003a_00003atrig__r;
   reg signed[7:0] channel__w7_00003a2152_00003a_00003adbus__r;
   wire [0:0] channel__w7_00003a2152_00003a_00003aabus__r;
   wire signed[7:0] channel__w7_00003a2152_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__1;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__2;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__3;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__4;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__5;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__6;
   wire signed[7:0] channel__accum_00003a2167_00003a_00003areg__7;
   wire [2:0] channel__accum_00003a2167_00003a_00003arinc_00003a2197_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a2167_00003a_00003awinc_00003a2208_00003a_00003aabus__w;
   wire [2:0] channel__accum_00003a2167_00003a_00003ardec_00003a2219_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a2167_00003a_00003awdec_00003a2230_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv2;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv3;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv4;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv5;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv6;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003alv7;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav2;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav3;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav4;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav5;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav6;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003aav7;
   reg signed[7:0] mac__n1_00003a2241_00003a_00003arv;
   reg mac__n1_00003a2241_00003a_00003alvok0;
   reg mac__n1_00003a2241_00003a_00003alvok1;
   reg mac__n1_00003a2241_00003a_00003alvok2;
   reg mac__n1_00003a2241_00003a_00003alvok3;
   reg mac__n1_00003a2241_00003a_00003alvok4;
   reg mac__n1_00003a2241_00003a_00003alvok5;
   reg mac__n1_00003a2241_00003a_00003alvok6;
   reg mac__n1_00003a2241_00003a_00003alvok7;
   reg mac__n1_00003a2241_00003a_00003arvok;
   reg mac__n1_00003a2241_00003a_00003awok0;
   reg mac__n1_00003a2241_00003a_00003awok1;
   reg mac__n1_00003a2241_00003a_00003awok2;
   reg mac__n1_00003a2241_00003a_00003awok3;
   reg mac__n1_00003a2241_00003a_00003awok4;
   reg mac__n1_00003a2241_00003a_00003awok5;
   reg mac__n1_00003a2241_00003a_00003awok6;
   reg mac__n1_00003a2241_00003a_00003awok7;
   reg mac__n1_00003a2241_00003a_00003arun;
   wire channel__b0_00003a2260_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a2260_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a2260_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a2260_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b1_00003a2275_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a2275_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a2275_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a2275_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b2_00003a2290_00003a_00003atrig__r;
   reg signed[7:0] channel__b2_00003a2290_00003a_00003adbus__r;
   wire [0:0] channel__b2_00003a2290_00003a_00003aabus__r;
   reg signed[7:0] channel__b2_00003a2290_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b3_00003a2305_00003a_00003atrig__r;
   reg signed[7:0] channel__b3_00003a2305_00003a_00003adbus__r;
   wire [0:0] channel__b3_00003a2305_00003a_00003aabus__r;
   reg signed[7:0] channel__b3_00003a2305_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b4_00003a2320_00003a_00003atrig__r;
   reg signed[7:0] channel__b4_00003a2320_00003a_00003adbus__r;
   wire [0:0] channel__b4_00003a2320_00003a_00003aabus__r;
   reg signed[7:0] channel__b4_00003a2320_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b5_00003a2335_00003a_00003atrig__r;
   reg signed[7:0] channel__b5_00003a2335_00003a_00003adbus__r;
   wire [0:0] channel__b5_00003a2335_00003a_00003aabus__r;
   reg signed[7:0] channel__b5_00003a2335_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b6_00003a2350_00003a_00003atrig__r;
   reg signed[7:0] channel__b6_00003a2350_00003a_00003adbus__r;
   wire [0:0] channel__b6_00003a2350_00003a_00003aabus__r;
   reg signed[7:0] channel__b6_00003a2350_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b7_00003a2365_00003a_00003atrig__r;
   reg signed[7:0] channel__b7_00003a2365_00003a_00003adbus__r;
   wire [0:0] channel__b7_00003a2365_00003a_00003aabus__r;
   reg signed[7:0] channel__b7_00003a2365_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__1;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__2;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__3;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__4;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__5;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__6;
   wire signed[7:0] channel__z_00003a2380_00003a_00003areg__7;
   wire [2:0] channel__z_00003a2380_00003a_00003arinc_00003a2410_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a2380_00003a_00003awinc_00003a2420_00003a_00003aabus__w;
   wire [2:0] channel__z_00003a2380_00003a_00003ardec_00003a2430_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a2380_00003a_00003awdec_00003a2441_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv0;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv1;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv2;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv3;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv4;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv5;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv6;
   reg signed[7:0] add__n_00003a2452_00003a_00003alv7;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv0;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv1;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv2;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv3;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv4;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv5;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv6;
   reg signed[7:0] add__n_00003a2452_00003a_00003arv7;
   reg add__n_00003a2452_00003a_00003alvok0;
   reg add__n_00003a2452_00003a_00003alvok1;
   reg add__n_00003a2452_00003a_00003alvok2;
   reg add__n_00003a2452_00003a_00003alvok3;
   reg add__n_00003a2452_00003a_00003alvok4;
   reg add__n_00003a2452_00003a_00003alvok5;
   reg add__n_00003a2452_00003a_00003alvok6;
   reg add__n_00003a2452_00003a_00003alvok7;
   reg add__n_00003a2452_00003a_00003arvok0;
   reg add__n_00003a2452_00003a_00003arvok1;
   reg add__n_00003a2452_00003a_00003arvok2;
   reg add__n_00003a2452_00003a_00003arvok3;
   reg add__n_00003a2452_00003a_00003arvok4;
   reg add__n_00003a2452_00003a_00003arvok5;
   reg add__n_00003a2452_00003a_00003arvok6;
   reg add__n_00003a2452_00003a_00003arvok7;
   reg add__n_00003a2452_00003a_00003arun;
   wire _00005e_0000602096;
   wire _00005e_0000602097;
   wire _00005e_0000602098;
   wire _00005e_0000602099;
   wire signed[7:0] _00005e_0000602100;
   wire signed[7:0] _00005e_0000602101;
   wire signed[7:0] _00005e_0000602102;
   wire signed[7:0] _00005e_0000602103;
   wire signed[7:0] _00005e_0000602558;
   wire signed[7:0] _00005e_0000602559;
   wire signed[7:0] _00005e_0000602560;
   wire signed[7:0] _00005e_0000602561;
   wire signed[7:0] _00005e_0000602562;
   wire signed[7:0] _00005e_0000602563;
   wire signed[7:0] _00005e_0000602564;
   wire signed[7:0] _00005e_0000602565;
   wire signed[7:0] _00005e_0000602566;
   wire signed[7:0] _00005e_0000602567;
   wire signed[7:0] _00005e_0000602568;
   wire signed[7:0] _00005e_0000602569;

   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003acounter_00003aT20 counter(.clk(_00005e_0000602096),.ack(_00005e_0000602097),.rst(_00005e_0000602098),.ack__mac(_00005e_0000602099));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc0_00003aT20 func0(.z__value(_00005e_0000602100),.a(_00005e_0000602101));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc1_00003aT20 func1(.z__value(_00005e_0000602102),.a(_00005e_0000602103));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc2_00003aT00 func2(.z__value(_00005e_0000602558),.a(_00005e_0000602559));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc3_00003aT00 func3(.z__value(_00005e_0000602560),.a(_00005e_0000602561));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc4_00003aT00 func4(.z__value(_00005e_0000602562),.a(_00005e_0000602563));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc5_00003aT00 func5(.z__value(_00005e_0000602564),.a(_00005e_0000602565));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc6_00003aT00 func6(.z__value(_00005e_0000602566),.a(_00005e_0000602567));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0_00003a_00003alayer1_00003aT00_00003a_00003afunc7_00003aT00 func7(.z__value(_00005e_0000602568),.a(_00005e_0000602569));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_0000602096 = clk;

   assign _00005e_0000602097 = ack;

   assign _00005e_0000602098 = rst;

   assign ack__mac = _00005e_0000602099;

   assign _00003a2265 = rst;

   assign _00003a2280 = rst;

   assign _00003a2295 = rst;

   assign _00003a2310 = rst;

   assign _00003a2325 = rst;

   assign _00003a2340 = rst;

   assign _00003a2355 = rst;

   assign _00003a2370 = rst;

   assign _00005e_0000602100 = value__z0;

   assign value__a0 = _00005e_0000602101;

   assign _00005e_0000602102 = value__z1;

   assign value__a1 = _00005e_0000602103;

   assign _00005e_0000602558 = value__z2;

   assign value__a2 = _00005e_0000602559;

   assign _00005e_0000602560 = value__z3;

   assign value__a3 = _00005e_0000602561;

   assign _00005e_0000602562 = value__z4;

   assign value__a4 = _00005e_0000602563;

   assign _00005e_0000602564 = value__z5;

   assign value__a5 = _00005e_0000602565;

   assign _00005e_0000602566 = value__z6;

   assign value__a6 = _00005e_0000602567;

   assign _00005e_0000602568 = value__z7;

   assign value__a7 = _00005e_0000602569;

   assign ack__layer = (((((((ack__a0 & ack__a1) & ack__a2) & ack__a3) & ack__a4) & ack__a5) & ack__a6) & ack__a7);

   assign _00003a2056 = channel__w0_00003a2047_00003a_00003adbus__r;

   assign _00003a2054 = channel__w0_00003a2047_00003a_00003atrig__r;

   assign _00003a2055 = channel__w0_00003a2047_00003a_00003aabus__r;

   assign _00003a2071 = channel__w1_00003a2062_00003a_00003adbus__r;

   assign _00003a2069 = channel__w1_00003a2062_00003a_00003atrig__r;

   assign _00003a2070 = channel__w1_00003a2062_00003a_00003aabus__r;

   assign _00003a2086 = channel__w2_00003a2077_00003a_00003adbus__r;

   assign _00003a2084 = channel__w2_00003a2077_00003a_00003atrig__r;

   assign _00003a2085 = channel__w2_00003a2077_00003a_00003aabus__r;

   assign _00003a2101 = channel__w3_00003a2092_00003a_00003adbus__r;

   assign _00003a2099 = channel__w3_00003a2092_00003a_00003atrig__r;

   assign _00003a2100 = channel__w3_00003a2092_00003a_00003aabus__r;

   assign _00003a2116 = channel__w4_00003a2107_00003a_00003adbus__r;

   assign _00003a2114 = channel__w4_00003a2107_00003a_00003atrig__r;

   assign _00003a2115 = channel__w4_00003a2107_00003a_00003aabus__r;

   assign _00003a2131 = channel__w5_00003a2122_00003a_00003adbus__r;

   assign _00003a2129 = channel__w5_00003a2122_00003a_00003atrig__r;

   assign _00003a2130 = channel__w5_00003a2122_00003a_00003aabus__r;

   assign _00003a2146 = channel__w6_00003a2137_00003a_00003adbus__r;

   assign _00003a2144 = channel__w6_00003a2137_00003a_00003atrig__r;

   assign _00003a2145 = channel__w6_00003a2137_00003a_00003aabus__r;

   assign _00003a2161 = channel__w7_00003a2152_00003a_00003adbus__r;

   assign _00003a2159 = channel__w7_00003a2152_00003a_00003atrig__r;

   assign _00003a2160 = channel__w7_00003a2152_00003a_00003aabus__r;

   assign _00003a2169 = channel__accum_00003a2167_00003a_00003areg__0;

   assign _00003a2170 = channel__accum_00003a2167_00003a_00003areg__1;

   assign _00003a2171 = channel__accum_00003a2167_00003a_00003areg__2;

   assign _00003a2172 = channel__accum_00003a2167_00003a_00003areg__3;

   assign _00003a2173 = channel__accum_00003a2167_00003a_00003areg__4;

   assign _00003a2174 = channel__accum_00003a2167_00003a_00003areg__5;

   assign _00003a2175 = channel__accum_00003a2167_00003a_00003areg__6;

   assign _00003a2176 = channel__accum_00003a2167_00003a_00003areg__7;

   assign _00003a2264 = channel__b0_00003a2260_00003a_00003adbus__r;

   assign _00003a2262 = channel__b0_00003a2260_00003a_00003atrig__r;

   assign _00003a2263 = channel__b0_00003a2260_00003a_00003aabus__r;

   assign _00003a2279 = channel__b1_00003a2275_00003a_00003adbus__r;

   assign _00003a2277 = channel__b1_00003a2275_00003a_00003atrig__r;

   assign _00003a2278 = channel__b1_00003a2275_00003a_00003aabus__r;

   assign _00003a2294 = channel__b2_00003a2290_00003a_00003adbus__r;

   assign _00003a2292 = channel__b2_00003a2290_00003a_00003atrig__r;

   assign _00003a2293 = channel__b2_00003a2290_00003a_00003aabus__r;

   assign _00003a2309 = channel__b3_00003a2305_00003a_00003adbus__r;

   assign _00003a2307 = channel__b3_00003a2305_00003a_00003atrig__r;

   assign _00003a2308 = channel__b3_00003a2305_00003a_00003aabus__r;

   assign _00003a2324 = channel__b4_00003a2320_00003a_00003adbus__r;

   assign _00003a2322 = channel__b4_00003a2320_00003a_00003atrig__r;

   assign _00003a2323 = channel__b4_00003a2320_00003a_00003aabus__r;

   assign _00003a2339 = channel__b5_00003a2335_00003a_00003adbus__r;

   assign _00003a2337 = channel__b5_00003a2335_00003a_00003atrig__r;

   assign _00003a2338 = channel__b5_00003a2335_00003a_00003aabus__r;

   assign _00003a2354 = channel__b6_00003a2350_00003a_00003adbus__r;

   assign _00003a2352 = channel__b6_00003a2350_00003a_00003atrig__r;

   assign _00003a2353 = channel__b6_00003a2350_00003a_00003aabus__r;

   assign _00003a2369 = channel__b7_00003a2365_00003a_00003adbus__r;

   assign _00003a2367 = channel__b7_00003a2365_00003a_00003atrig__r;

   assign _00003a2368 = channel__b7_00003a2365_00003a_00003aabus__r;

   assign _00003a2382 = channel__z_00003a2380_00003a_00003areg__0;

   assign _00003a2383 = channel__z_00003a2380_00003a_00003areg__1;

   assign _00003a2384 = channel__z_00003a2380_00003a_00003areg__2;

   assign _00003a2385 = channel__z_00003a2380_00003a_00003areg__3;

   assign _00003a2386 = channel__z_00003a2380_00003a_00003areg__4;

   assign _00003a2387 = channel__z_00003a2380_00003a_00003areg__5;

   assign _00003a2388 = channel__z_00003a2380_00003a_00003areg__6;

   assign _00003a2389 = channel__z_00003a2380_00003a_00003areg__7;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a2382;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a2383;
         flag__z1 <= 32'd1;
         value__z2 <= _00003a2384;
         flag__z2 <= 32'd1;
         value__z3 <= _00003a2385;
         flag__z3 <= 32'd1;
         value__z4 <= _00003a2386;
         flag__z4 <= 32'd1;
         value__z5 <= _00003a2387;
         flag__z5 <= 32'd1;
         value__z6 <= _00003a2388;
         flag__z6 <= 32'd1;
         value__z7 <= _00003a2389;
         flag__z7 <= 32'd1;
      end
      else begin
         flag__z0 <= 32'd0;
         flag__z1 <= 32'd0;
         flag__z2 <= 32'd0;
         flag__z3 <= 32'd0;
         flag__z4 <= 32'd0;
         flag__z5 <= 32'd0;
         flag__z6 <= 32'd0;
         flag__z7 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (rst) begin
         ack__a0 <= 32'd0;
         ack__a1 <= 32'd0;
         ack__a2 <= 32'd0;
         ack__a3 <= 32'd0;
         ack__a4 <= 32'd0;
         ack__a5 <= 32'd0;
         ack__a6 <= 32'd0;
         ack__a7 <= 32'd0;
      end
      else if ((((((((flag__z0 & flag__z1) & flag__z2) & flag__z3) & flag__z4) & flag__z5) & flag__z6) & flag__z7)) begin
         _00003a1807 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a1808 <= value__a1;
         ack__a1 <= 32'd1;
         _00003a1809 <= value__a2;
         ack__a2 <= 32'd1;
         _00003a1810 <= value__a3;
         ack__a3 <= 32'd1;
         _00003a1811 <= value__a4;
         ack__a4 <= 32'd1;
         _00003a1812 <= value__a5;
         ack__a5 <= 32'd1;
         _00003a1813 <= value__a6;
         ack__a6 <= 32'd1;
         _00003a1814 <= value__a7;
         ack__a7 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a2047_00003a_00003adbus__r <= channel__w0_00003a2047_00003a_00003amem[channel__w0_00003a2047_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a2062_00003a_00003adbus__r <= channel__w1_00003a2062_00003a_00003amem[channel__w1_00003a2062_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w2_00003a2077_00003a_00003adbus__r <= channel__w2_00003a2077_00003a_00003amem[channel__w2_00003a2077_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w3_00003a2092_00003a_00003adbus__r <= channel__w3_00003a2092_00003a_00003amem[channel__w3_00003a2092_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w4_00003a2107_00003a_00003adbus__r <= channel__w4_00003a2107_00003a_00003amem[channel__w4_00003a2107_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w5_00003a2122_00003a_00003adbus__r <= channel__w5_00003a2122_00003a_00003amem[channel__w5_00003a2122_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w6_00003a2137_00003a_00003adbus__r <= channel__w6_00003a2137_00003a_00003amem[channel__w6_00003a2137_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w7_00003a2152_00003a_00003adbus__r <= channel__w7_00003a2152_00003a_00003amem[channel__w7_00003a2152_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a2160 <= -32'd1;
      end

      _00003a2159 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2145 <= -32'd1;
      end

      _00003a2144 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2130 <= -32'd1;
      end

      _00003a2129 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2115 <= -32'd1;
      end

      _00003a2114 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2100 <= -32'd1;
      end

      _00003a2099 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2085 <= -32'd1;
      end

      _00003a2084 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2070 <= -32'd1;
      end

      _00003a2069 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a2055 <= -32'd1;
      end

      _00003a2054 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a1892 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a2241_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a2241_00003a_00003arun) begin
         mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
         mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
         mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a2241_00003a_00003arun)) begin
         mac__n1_00003a2241_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a2241_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a1892)
                  32'd0: mac__n1_00003a2241_00003a_00003arv <= _00003a1890;
                  32'd1: mac__n1_00003a2241_00003a_00003arv <= _00003a1891;
               endcase
               mac__n1_00003a2241_00003a_00003arvok <= 32'd1;
               _00003a1892 <= ((_00003a1892 + 32'd1) == 32'd2) == 1 ? (_00003a1892 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a2241_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2054 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv0 <= _00003a2056;
                  mac__n1_00003a2241_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a2055 <= ((_00003a2055 + 32'd1) == 32'd2) == 1 ? (_00003a2055 + 32'd1) : 32'd0;
                  _00003a2054 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok0 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav0 <= (mac__n1_00003a2241_00003a_00003aav0 + (($signed(mac__n1_00003a2241_00003a_00003alv0) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2169 <= ((mac__n1_00003a2241_00003a_00003aav0 + (($signed(mac__n1_00003a2241_00003a_00003alv0) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv0) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2069 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv1 <= _00003a2071;
                  mac__n1_00003a2241_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a2070 <= ((_00003a2070 + 32'd1) == 32'd2) == 1 ? (_00003a2070 + 32'd1) : 32'd0;
                  _00003a2069 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok1 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav1 <= (mac__n1_00003a2241_00003a_00003aav1 + (($signed(mac__n1_00003a2241_00003a_00003alv1) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2170 <= ((mac__n1_00003a2241_00003a_00003aav1 + (($signed(mac__n1_00003a2241_00003a_00003alv1) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv1) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok2) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2084 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv2 <= _00003a2086;
                  mac__n1_00003a2241_00003a_00003alvok2 <= 32'd1;
               end
               else begin
                  _00003a2085 <= ((_00003a2085 + 32'd1) == 32'd2) == 1 ? (_00003a2085 + 32'd1) : 32'd0;
                  _00003a2084 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok2 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok2)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav2 <= (mac__n1_00003a2241_00003a_00003aav2 + (($signed(mac__n1_00003a2241_00003a_00003alv2) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2171 <= ((mac__n1_00003a2241_00003a_00003aav2 + (($signed(mac__n1_00003a2241_00003a_00003alv2) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv2) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok3) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2099 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv3 <= _00003a2101;
                  mac__n1_00003a2241_00003a_00003alvok3 <= 32'd1;
               end
               else begin
                  _00003a2100 <= ((_00003a2100 + 32'd1) == 32'd2) == 1 ? (_00003a2100 + 32'd1) : 32'd0;
                  _00003a2099 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok3 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok3)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav3 <= (mac__n1_00003a2241_00003a_00003aav3 + (($signed(mac__n1_00003a2241_00003a_00003alv3) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2172 <= ((mac__n1_00003a2241_00003a_00003aav3 + (($signed(mac__n1_00003a2241_00003a_00003alv3) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv3) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok4) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2114 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv4 <= _00003a2116;
                  mac__n1_00003a2241_00003a_00003alvok4 <= 32'd1;
               end
               else begin
                  _00003a2115 <= ((_00003a2115 + 32'd1) == 32'd2) == 1 ? (_00003a2115 + 32'd1) : 32'd0;
                  _00003a2114 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok4 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok4)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav4 <= (mac__n1_00003a2241_00003a_00003aav4 + (($signed(mac__n1_00003a2241_00003a_00003alv4) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2173 <= ((mac__n1_00003a2241_00003a_00003aav4 + (($signed(mac__n1_00003a2241_00003a_00003alv4) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv4) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok5) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2129 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv5 <= _00003a2131;
                  mac__n1_00003a2241_00003a_00003alvok5 <= 32'd1;
               end
               else begin
                  _00003a2130 <= ((_00003a2130 + 32'd1) == 32'd2) == 1 ? (_00003a2130 + 32'd1) : 32'd0;
                  _00003a2129 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok5 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok5)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav5 <= (mac__n1_00003a2241_00003a_00003aav5 + (($signed(mac__n1_00003a2241_00003a_00003alv5) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2174 <= ((mac__n1_00003a2241_00003a_00003aav5 + (($signed(mac__n1_00003a2241_00003a_00003alv5) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv5) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok6) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2144 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv6 <= _00003a2146;
                  mac__n1_00003a2241_00003a_00003alvok6 <= 32'd1;
               end
               else begin
                  _00003a2145 <= ((_00003a2145 + 32'd1) == 32'd2) == 1 ? (_00003a2145 + 32'd1) : 32'd0;
                  _00003a2144 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok6 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok6)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav6 <= (mac__n1_00003a2241_00003a_00003aav6 + (($signed(mac__n1_00003a2241_00003a_00003alv6) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2175 <= ((mac__n1_00003a2241_00003a_00003aav6 + (($signed(mac__n1_00003a2241_00003a_00003alv6) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv6) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2241_00003a_00003alvok7) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2159 == 32'd1)) begin
                  mac__n1_00003a2241_00003a_00003alv7 <= _00003a2161;
                  mac__n1_00003a2241_00003a_00003alvok7 <= 32'd1;
               end
               else begin
                  _00003a2160 <= ((_00003a2160 + 32'd1) == 32'd2) == 1 ? (_00003a2160 + 32'd1) : 32'd0;
                  _00003a2159 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2241_00003a_00003alvok7 & mac__n1_00003a2241_00003a_00003arvok) & ~mac__n1_00003a2241_00003a_00003awok7)) begin
            ack <= 32'd1;
            mac__n1_00003a2241_00003a_00003arun <= 32'd0;
            mac__n1_00003a2241_00003a_00003aav7 <= (mac__n1_00003a2241_00003a_00003aav7 + (($signed(mac__n1_00003a2241_00003a_00003alv7) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            _00003a2176 <= ((mac__n1_00003a2241_00003a_00003aav7 + (($signed(mac__n1_00003a2241_00003a_00003alv7) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2241_00003a_00003alv7) * mac__n1_00003a2241_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2241_00003a_00003awok0 & mac__n1_00003a2241_00003a_00003awok1) & mac__n1_00003a2241_00003a_00003awok2) & mac__n1_00003a2241_00003a_00003awok3) & mac__n1_00003a2241_00003a_00003awok4) & mac__n1_00003a2241_00003a_00003awok5) & mac__n1_00003a2241_00003a_00003awok6) & mac__n1_00003a2241_00003a_00003awok7)) begin
            mac__n1_00003a2241_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2241_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2241_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a2241_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav1 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav2 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav3 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav4 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav5 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav6 <= 32'd0;
         mac__n1_00003a2241_00003a_00003aav7 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a2260_00003a_00003adbus__r <= channel__b0_00003a2260_00003a_00003amem[channel__b0_00003a2260_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a2275_00003a_00003adbus__r <= channel__b1_00003a2275_00003a_00003amem[channel__b1_00003a2275_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b2_00003a2290_00003a_00003adbus__r <= channel__b2_00003a2290_00003a_00003amem[channel__b2_00003a2290_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b3_00003a2305_00003a_00003adbus__r <= channel__b3_00003a2305_00003a_00003amem[channel__b3_00003a2305_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b4_00003a2320_00003a_00003adbus__r <= channel__b4_00003a2320_00003a_00003amem[channel__b4_00003a2320_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b5_00003a2335_00003a_00003adbus__r <= channel__b5_00003a2335_00003a_00003amem[channel__b5_00003a2335_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b6_00003a2350_00003a_00003adbus__r <= channel__b6_00003a2350_00003a_00003amem[channel__b6_00003a2350_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b7_00003a2365_00003a_00003adbus__r <= channel__b7_00003a2365_00003a_00003amem[channel__b7_00003a2365_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a2367 <= 32'd0;

      _00003a2352 <= 32'd0;

      _00003a2337 <= 32'd0;

      _00003a2322 <= 32'd0;

      _00003a2307 <= 32'd0;

      _00003a2292 <= 32'd0;

      _00003a2277 <= 32'd0;

      _00003a2262 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a2452_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a2452_00003a_00003arun)) begin
         add__n_00003a2452_00003a_00003arun <= 32'd1;
         add__n_00003a2452_00003a_00003alv0 <= _00003a2169;
         add__n_00003a2452_00003a_00003alvok0 <= 32'd1;
         if ((_00003a2265 == 32'd0)) begin
            if ((_00003a2262 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv0 <= _00003a2264;
               _00003a2262 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a2263 <= 32'd0;
               _00003a2262 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok0 & add__n_00003a2452_00003a_00003arvok0)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2382 <= (add__n_00003a2452_00003a_00003alv0 + add__n_00003a2452_00003a_00003arv0);
         end
         add__n_00003a2452_00003a_00003alv1 <= _00003a2170;
         add__n_00003a2452_00003a_00003alvok1 <= 32'd1;
         if ((_00003a2280 == 32'd0)) begin
            if ((_00003a2277 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv1 <= _00003a2279;
               _00003a2277 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a2278 <= 32'd0;
               _00003a2277 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok1 & add__n_00003a2452_00003a_00003arvok1)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2383 <= (add__n_00003a2452_00003a_00003alv1 + add__n_00003a2452_00003a_00003arv1);
         end
         add__n_00003a2452_00003a_00003alv2 <= _00003a2171;
         add__n_00003a2452_00003a_00003alvok2 <= 32'd1;
         if ((_00003a2295 == 32'd0)) begin
            if ((_00003a2292 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv2 <= _00003a2294;
               _00003a2292 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok2 <= 32'd1;
            end
            else begin
               _00003a2293 <= 32'd0;
               _00003a2292 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok2 & add__n_00003a2452_00003a_00003arvok2)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2384 <= (add__n_00003a2452_00003a_00003alv2 + add__n_00003a2452_00003a_00003arv2);
         end
         add__n_00003a2452_00003a_00003alv3 <= _00003a2172;
         add__n_00003a2452_00003a_00003alvok3 <= 32'd1;
         if ((_00003a2310 == 32'd0)) begin
            if ((_00003a2307 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv3 <= _00003a2309;
               _00003a2307 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok3 <= 32'd1;
            end
            else begin
               _00003a2308 <= 32'd0;
               _00003a2307 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok3 & add__n_00003a2452_00003a_00003arvok3)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2385 <= (add__n_00003a2452_00003a_00003alv3 + add__n_00003a2452_00003a_00003arv3);
         end
         add__n_00003a2452_00003a_00003alv4 <= _00003a2173;
         add__n_00003a2452_00003a_00003alvok4 <= 32'd1;
         if ((_00003a2325 == 32'd0)) begin
            if ((_00003a2322 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv4 <= _00003a2324;
               _00003a2322 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok4 <= 32'd1;
            end
            else begin
               _00003a2323 <= 32'd0;
               _00003a2322 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok4 & add__n_00003a2452_00003a_00003arvok4)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2386 <= (add__n_00003a2452_00003a_00003alv4 + add__n_00003a2452_00003a_00003arv4);
         end
         add__n_00003a2452_00003a_00003alv5 <= _00003a2174;
         add__n_00003a2452_00003a_00003alvok5 <= 32'd1;
         if ((_00003a2340 == 32'd0)) begin
            if ((_00003a2337 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv5 <= _00003a2339;
               _00003a2337 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok5 <= 32'd1;
            end
            else begin
               _00003a2338 <= 32'd0;
               _00003a2337 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok5 & add__n_00003a2452_00003a_00003arvok5)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2387 <= (add__n_00003a2452_00003a_00003alv5 + add__n_00003a2452_00003a_00003arv5);
         end
         add__n_00003a2452_00003a_00003alv6 <= _00003a2175;
         add__n_00003a2452_00003a_00003alvok6 <= 32'd1;
         if ((_00003a2355 == 32'd0)) begin
            if ((_00003a2352 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv6 <= _00003a2354;
               _00003a2352 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok6 <= 32'd1;
            end
            else begin
               _00003a2353 <= 32'd0;
               _00003a2352 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok6 & add__n_00003a2452_00003a_00003arvok6)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2388 <= (add__n_00003a2452_00003a_00003alv6 + add__n_00003a2452_00003a_00003arv6);
         end
         add__n_00003a2452_00003a_00003alv7 <= _00003a2176;
         add__n_00003a2452_00003a_00003alvok7 <= 32'd1;
         if ((_00003a2370 == 32'd0)) begin
            if ((_00003a2367 == 32'd1)) begin
               add__n_00003a2452_00003a_00003arv7 <= _00003a2369;
               _00003a2367 <= 32'd0;
               add__n_00003a2452_00003a_00003arvok7 <= 32'd1;
            end
            else begin
               _00003a2368 <= 32'd0;
               _00003a2367 <= 32'd1;
            end
         end
         if ((add__n_00003a2452_00003a_00003alvok7 & add__n_00003a2452_00003a_00003arvok7)) begin
            add__n_00003a2452_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a2389 <= (add__n_00003a2452_00003a_00003alv7 + add__n_00003a2452_00003a_00003arv7);
         end
      end
      else begin
         add__n_00003a2452_00003a_00003alvok0 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok0 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok1 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok1 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok2 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok2 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok3 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok3 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok4 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok4 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok5 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok5 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok6 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok6 <= 32'd0;
         add__n_00003a2452_00003a_00003alvok7 <= 32'd0;
         add__n_00003a2452_00003a_00003arvok7 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a2047_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w0_00003a2047_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w1_00003a2062_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w1_00003a2062_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w2_00003a2077_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w2_00003a2077_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w3_00003a2092_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w3_00003a2092_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w4_00003a2107_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w4_00003a2107_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w5_00003a2122_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w5_00003a2122_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w6_00003a2137_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w6_00003a2137_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w7_00003a2152_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w7_00003a2152_00003a_00003amem[32'd1] = $signed(32'd48);

   end

endmodule