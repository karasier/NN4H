`timescale 1ps/1ps

module _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10( clk, rst, req, _00003a2605, _00003a2606, ack__layer, _00003a2607, _00003a2522, _00003a2523, _00003a2524, _00003a2525, _00003a2526, _00003a2527, _00003a2528, _00003a2529 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a2605;
   input signed[7:0] _00003a2606;
   output ack__layer;
   inout [0:0] _00003a2607;
   inout signed[7:0] _00003a2522;
   inout signed[7:0] _00003a2523;
   inout signed[7:0] _00003a2524;
   inout signed[7:0] _00003a2525;
   inout signed[7:0] _00003a2526;
   inout signed[7:0] _00003a2527;
   inout signed[7:0] _00003a2528;
   inout signed[7:0] _00003a2529;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a2771;
   reg _00003a2769;
   reg [0:0] _00003a2770;
   reg signed[7:0] _00003a2884;
   reg signed[7:0] _00003a2885;
   reg signed[7:0] _00003a2886;
   reg signed[7:0] _00003a2887;
   reg signed[7:0] _00003a2888;
   reg signed[7:0] _00003a2889;
   reg signed[7:0] _00003a2890;
   reg signed[7:0] _00003a2891;
   wire signed[7:0] _00003a2786;
   reg _00003a2784;
   reg [0:0] _00003a2785;
   wire signed[7:0] _00003a2801;
   reg _00003a2799;
   reg [0:0] _00003a2800;
   wire signed[7:0] _00003a2816;
   reg _00003a2814;
   reg [0:0] _00003a2815;
   wire signed[7:0] _00003a2831;
   reg _00003a2829;
   reg [0:0] _00003a2830;
   wire signed[7:0] _00003a2846;
   reg _00003a2844;
   reg [0:0] _00003a2845;
   wire signed[7:0] _00003a2861;
   reg _00003a2859;
   reg [0:0] _00003a2860;
   wire signed[7:0] _00003a2876;
   reg _00003a2874;
   reg [0:0] _00003a2875;
   wire signed[7:0] _00003a2979;
   wire _00003a2980;
   reg _00003a2977;
   reg [0:0] _00003a2978;
   reg signed[7:0] _00003a3097;
   reg signed[7:0] _00003a3098;
   reg signed[7:0] _00003a3099;
   reg signed[7:0] _00003a3100;
   reg signed[7:0] _00003a3101;
   reg signed[7:0] _00003a3102;
   reg signed[7:0] _00003a3103;
   reg signed[7:0] _00003a3104;
   wire signed[7:0] _00003a2994;
   wire _00003a2995;
   reg _00003a2992;
   reg [0:0] _00003a2993;
   wire signed[7:0] _00003a3009;
   wire _00003a3010;
   reg _00003a3007;
   reg [0:0] _00003a3008;
   wire signed[7:0] _00003a3024;
   wire _00003a3025;
   reg _00003a3022;
   reg [0:0] _00003a3023;
   wire signed[7:0] _00003a3039;
   wire _00003a3040;
   reg _00003a3037;
   reg [0:0] _00003a3038;
   wire signed[7:0] _00003a3054;
   wire _00003a3055;
   reg _00003a3052;
   reg [0:0] _00003a3053;
   wire signed[7:0] _00003a3069;
   wire _00003a3070;
   reg _00003a3067;
   reg [0:0] _00003a3068;
   wire signed[7:0] _00003a3084;
   wire _00003a3085;
   reg _00003a3082;
   reg [0:0] _00003a3083;
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
   wire channel__w0_00003a2762_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a2762_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a2762_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a2762_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a2777_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a2777_00003a_00003adbus__r;
   wire [0:0] channel__w1_00003a2777_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a2777_00003a_00003amem  :0[0:1];
   wire channel__w2_00003a2792_00003a_00003atrig__r;
   reg signed[7:0] channel__w2_00003a2792_00003a_00003adbus__r;
   wire [0:0] channel__w2_00003a2792_00003a_00003aabus__r;
   wire signed[7:0] channel__w2_00003a2792_00003a_00003amem  :0[0:1];
   wire channel__w3_00003a2807_00003a_00003atrig__r;
   reg signed[7:0] channel__w3_00003a2807_00003a_00003adbus__r;
   wire [0:0] channel__w3_00003a2807_00003a_00003aabus__r;
   wire signed[7:0] channel__w3_00003a2807_00003a_00003amem  :0[0:1];
   wire channel__w4_00003a2822_00003a_00003atrig__r;
   reg signed[7:0] channel__w4_00003a2822_00003a_00003adbus__r;
   wire [0:0] channel__w4_00003a2822_00003a_00003aabus__r;
   wire signed[7:0] channel__w4_00003a2822_00003a_00003amem  :0[0:1];
   wire channel__w5_00003a2837_00003a_00003atrig__r;
   reg signed[7:0] channel__w5_00003a2837_00003a_00003adbus__r;
   wire [0:0] channel__w5_00003a2837_00003a_00003aabus__r;
   wire signed[7:0] channel__w5_00003a2837_00003a_00003amem  :0[0:1];
   wire channel__w6_00003a2852_00003a_00003atrig__r;
   reg signed[7:0] channel__w6_00003a2852_00003a_00003adbus__r;
   wire [0:0] channel__w6_00003a2852_00003a_00003aabus__r;
   wire signed[7:0] channel__w6_00003a2852_00003a_00003amem  :0[0:1];
   wire channel__w7_00003a2867_00003a_00003atrig__r;
   reg signed[7:0] channel__w7_00003a2867_00003a_00003adbus__r;
   wire [0:0] channel__w7_00003a2867_00003a_00003aabus__r;
   wire signed[7:0] channel__w7_00003a2867_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__1;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__2;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__3;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__4;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__5;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__6;
   wire signed[7:0] channel__accum_00003a2882_00003a_00003areg__7;
   wire [2:0] channel__accum_00003a2882_00003a_00003arinc_00003a2912_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a2882_00003a_00003awinc_00003a2923_00003a_00003aabus__w;
   wire [2:0] channel__accum_00003a2882_00003a_00003ardec_00003a2934_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a2882_00003a_00003awdec_00003a2945_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv2;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv3;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv4;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv5;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv6;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003alv7;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav2;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav3;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav4;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav5;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav6;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003aav7;
   reg signed[7:0] mac__n1_00003a2956_00003a_00003arv;
   reg mac__n1_00003a2956_00003a_00003alvok0;
   reg mac__n1_00003a2956_00003a_00003alvok1;
   reg mac__n1_00003a2956_00003a_00003alvok2;
   reg mac__n1_00003a2956_00003a_00003alvok3;
   reg mac__n1_00003a2956_00003a_00003alvok4;
   reg mac__n1_00003a2956_00003a_00003alvok5;
   reg mac__n1_00003a2956_00003a_00003alvok6;
   reg mac__n1_00003a2956_00003a_00003alvok7;
   reg mac__n1_00003a2956_00003a_00003arvok;
   reg mac__n1_00003a2956_00003a_00003awok0;
   reg mac__n1_00003a2956_00003a_00003awok1;
   reg mac__n1_00003a2956_00003a_00003awok2;
   reg mac__n1_00003a2956_00003a_00003awok3;
   reg mac__n1_00003a2956_00003a_00003awok4;
   reg mac__n1_00003a2956_00003a_00003awok5;
   reg mac__n1_00003a2956_00003a_00003awok6;
   reg mac__n1_00003a2956_00003a_00003awok7;
   reg mac__n1_00003a2956_00003a_00003arun;
   wire channel__b0_00003a2975_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a2975_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a2975_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a2975_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b1_00003a2990_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a2990_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a2990_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a2990_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b2_00003a3005_00003a_00003atrig__r;
   reg signed[7:0] channel__b2_00003a3005_00003a_00003adbus__r;
   wire [0:0] channel__b2_00003a3005_00003a_00003aabus__r;
   reg signed[7:0] channel__b2_00003a3005_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b3_00003a3020_00003a_00003atrig__r;
   reg signed[7:0] channel__b3_00003a3020_00003a_00003adbus__r;
   wire [0:0] channel__b3_00003a3020_00003a_00003aabus__r;
   reg signed[7:0] channel__b3_00003a3020_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b4_00003a3035_00003a_00003atrig__r;
   reg signed[7:0] channel__b4_00003a3035_00003a_00003adbus__r;
   wire [0:0] channel__b4_00003a3035_00003a_00003aabus__r;
   reg signed[7:0] channel__b4_00003a3035_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b5_00003a3050_00003a_00003atrig__r;
   reg signed[7:0] channel__b5_00003a3050_00003a_00003adbus__r;
   wire [0:0] channel__b5_00003a3050_00003a_00003aabus__r;
   reg signed[7:0] channel__b5_00003a3050_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b6_00003a3065_00003a_00003atrig__r;
   reg signed[7:0] channel__b6_00003a3065_00003a_00003adbus__r;
   wire [0:0] channel__b6_00003a3065_00003a_00003aabus__r;
   reg signed[7:0] channel__b6_00003a3065_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b7_00003a3080_00003a_00003atrig__r;
   reg signed[7:0] channel__b7_00003a3080_00003a_00003adbus__r;
   wire [0:0] channel__b7_00003a3080_00003a_00003aabus__r;
   reg signed[7:0] channel__b7_00003a3080_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__1;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__2;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__3;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__4;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__5;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__6;
   wire signed[7:0] channel__z_00003a3095_00003a_00003areg__7;
   wire [2:0] channel__z_00003a3095_00003a_00003arinc_00003a3125_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a3095_00003a_00003awinc_00003a3135_00003a_00003aabus__w;
   wire [2:0] channel__z_00003a3095_00003a_00003ardec_00003a3145_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a3095_00003a_00003awdec_00003a3156_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv0;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv1;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv2;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv3;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv4;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv5;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv6;
   reg signed[7:0] add__n_00003a3167_00003a_00003alv7;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv0;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv1;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv2;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv3;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv4;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv5;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv6;
   reg signed[7:0] add__n_00003a3167_00003a_00003arv7;
   reg add__n_00003a3167_00003a_00003alvok0;
   reg add__n_00003a3167_00003a_00003alvok1;
   reg add__n_00003a3167_00003a_00003alvok2;
   reg add__n_00003a3167_00003a_00003alvok3;
   reg add__n_00003a3167_00003a_00003alvok4;
   reg add__n_00003a3167_00003a_00003alvok5;
   reg add__n_00003a3167_00003a_00003alvok6;
   reg add__n_00003a3167_00003a_00003alvok7;
   reg add__n_00003a3167_00003a_00003arvok0;
   reg add__n_00003a3167_00003a_00003arvok1;
   reg add__n_00003a3167_00003a_00003arvok2;
   reg add__n_00003a3167_00003a_00003arvok3;
   reg add__n_00003a3167_00003a_00003arvok4;
   reg add__n_00003a3167_00003a_00003arvok5;
   reg add__n_00003a3167_00003a_00003arvok6;
   reg add__n_00003a3167_00003a_00003arvok7;
   reg add__n_00003a3167_00003a_00003arun;
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

   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003acounter_00003aT40 counter(.clk(_00005e_0000602096),.ack(_00005e_0000602097),.rst(_00005e_0000602098),.ack__mac(_00005e_0000602099));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc0_00003aT40 func0(.z__value(_00005e_0000602100),.a(_00005e_0000602101));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc1_00003aT40 func1(.z__value(_00005e_0000602102),.a(_00005e_0000602103));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc2_00003aT10 func2(.z__value(_00005e_0000602558),.a(_00005e_0000602559));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc3_00003aT10 func3(.z__value(_00005e_0000602560),.a(_00005e_0000602561));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc4_00003aT10 func4(.z__value(_00005e_0000602562),.a(_00005e_0000602563));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc5_00003aT10 func5(.z__value(_00005e_0000602564),.a(_00005e_0000602565));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc6_00003aT10 func6(.z__value(_00005e_0000602566),.a(_00005e_0000602567));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0_00003a_00003alayer1_00003aT10_00003a_00003afunc7_00003aT10 func7(.z__value(_00005e_0000602568),.a(_00005e_0000602569));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_0000602096 = clk;

   assign _00005e_0000602097 = ack;

   assign _00005e_0000602098 = rst;

   assign ack__mac = _00005e_0000602099;

   assign _00003a2980 = rst;

   assign _00003a2995 = rst;

   assign _00003a3010 = rst;

   assign _00003a3025 = rst;

   assign _00003a3040 = rst;

   assign _00003a3055 = rst;

   assign _00003a3070 = rst;

   assign _00003a3085 = rst;

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

   assign _00003a2771 = channel__w0_00003a2762_00003a_00003adbus__r;

   assign _00003a2769 = channel__w0_00003a2762_00003a_00003atrig__r;

   assign _00003a2770 = channel__w0_00003a2762_00003a_00003aabus__r;

   assign _00003a2786 = channel__w1_00003a2777_00003a_00003adbus__r;

   assign _00003a2784 = channel__w1_00003a2777_00003a_00003atrig__r;

   assign _00003a2785 = channel__w1_00003a2777_00003a_00003aabus__r;

   assign _00003a2801 = channel__w2_00003a2792_00003a_00003adbus__r;

   assign _00003a2799 = channel__w2_00003a2792_00003a_00003atrig__r;

   assign _00003a2800 = channel__w2_00003a2792_00003a_00003aabus__r;

   assign _00003a2816 = channel__w3_00003a2807_00003a_00003adbus__r;

   assign _00003a2814 = channel__w3_00003a2807_00003a_00003atrig__r;

   assign _00003a2815 = channel__w3_00003a2807_00003a_00003aabus__r;

   assign _00003a2831 = channel__w4_00003a2822_00003a_00003adbus__r;

   assign _00003a2829 = channel__w4_00003a2822_00003a_00003atrig__r;

   assign _00003a2830 = channel__w4_00003a2822_00003a_00003aabus__r;

   assign _00003a2846 = channel__w5_00003a2837_00003a_00003adbus__r;

   assign _00003a2844 = channel__w5_00003a2837_00003a_00003atrig__r;

   assign _00003a2845 = channel__w5_00003a2837_00003a_00003aabus__r;

   assign _00003a2861 = channel__w6_00003a2852_00003a_00003adbus__r;

   assign _00003a2859 = channel__w6_00003a2852_00003a_00003atrig__r;

   assign _00003a2860 = channel__w6_00003a2852_00003a_00003aabus__r;

   assign _00003a2876 = channel__w7_00003a2867_00003a_00003adbus__r;

   assign _00003a2874 = channel__w7_00003a2867_00003a_00003atrig__r;

   assign _00003a2875 = channel__w7_00003a2867_00003a_00003aabus__r;

   assign _00003a2884 = channel__accum_00003a2882_00003a_00003areg__0;

   assign _00003a2885 = channel__accum_00003a2882_00003a_00003areg__1;

   assign _00003a2886 = channel__accum_00003a2882_00003a_00003areg__2;

   assign _00003a2887 = channel__accum_00003a2882_00003a_00003areg__3;

   assign _00003a2888 = channel__accum_00003a2882_00003a_00003areg__4;

   assign _00003a2889 = channel__accum_00003a2882_00003a_00003areg__5;

   assign _00003a2890 = channel__accum_00003a2882_00003a_00003areg__6;

   assign _00003a2891 = channel__accum_00003a2882_00003a_00003areg__7;

   assign _00003a2979 = channel__b0_00003a2975_00003a_00003adbus__r;

   assign _00003a2977 = channel__b0_00003a2975_00003a_00003atrig__r;

   assign _00003a2978 = channel__b0_00003a2975_00003a_00003aabus__r;

   assign _00003a2994 = channel__b1_00003a2990_00003a_00003adbus__r;

   assign _00003a2992 = channel__b1_00003a2990_00003a_00003atrig__r;

   assign _00003a2993 = channel__b1_00003a2990_00003a_00003aabus__r;

   assign _00003a3009 = channel__b2_00003a3005_00003a_00003adbus__r;

   assign _00003a3007 = channel__b2_00003a3005_00003a_00003atrig__r;

   assign _00003a3008 = channel__b2_00003a3005_00003a_00003aabus__r;

   assign _00003a3024 = channel__b3_00003a3020_00003a_00003adbus__r;

   assign _00003a3022 = channel__b3_00003a3020_00003a_00003atrig__r;

   assign _00003a3023 = channel__b3_00003a3020_00003a_00003aabus__r;

   assign _00003a3039 = channel__b4_00003a3035_00003a_00003adbus__r;

   assign _00003a3037 = channel__b4_00003a3035_00003a_00003atrig__r;

   assign _00003a3038 = channel__b4_00003a3035_00003a_00003aabus__r;

   assign _00003a3054 = channel__b5_00003a3050_00003a_00003adbus__r;

   assign _00003a3052 = channel__b5_00003a3050_00003a_00003atrig__r;

   assign _00003a3053 = channel__b5_00003a3050_00003a_00003aabus__r;

   assign _00003a3069 = channel__b6_00003a3065_00003a_00003adbus__r;

   assign _00003a3067 = channel__b6_00003a3065_00003a_00003atrig__r;

   assign _00003a3068 = channel__b6_00003a3065_00003a_00003aabus__r;

   assign _00003a3084 = channel__b7_00003a3080_00003a_00003adbus__r;

   assign _00003a3082 = channel__b7_00003a3080_00003a_00003atrig__r;

   assign _00003a3083 = channel__b7_00003a3080_00003a_00003aabus__r;

   assign _00003a3097 = channel__z_00003a3095_00003a_00003areg__0;

   assign _00003a3098 = channel__z_00003a3095_00003a_00003areg__1;

   assign _00003a3099 = channel__z_00003a3095_00003a_00003areg__2;

   assign _00003a3100 = channel__z_00003a3095_00003a_00003areg__3;

   assign _00003a3101 = channel__z_00003a3095_00003a_00003areg__4;

   assign _00003a3102 = channel__z_00003a3095_00003a_00003areg__5;

   assign _00003a3103 = channel__z_00003a3095_00003a_00003areg__6;

   assign _00003a3104 = channel__z_00003a3095_00003a_00003areg__7;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a3097;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a3098;
         flag__z1 <= 32'd1;
         value__z2 <= _00003a3099;
         flag__z2 <= 32'd1;
         value__z3 <= _00003a3100;
         flag__z3 <= 32'd1;
         value__z4 <= _00003a3101;
         flag__z4 <= 32'd1;
         value__z5 <= _00003a3102;
         flag__z5 <= 32'd1;
         value__z6 <= _00003a3103;
         flag__z6 <= 32'd1;
         value__z7 <= _00003a3104;
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
         _00003a2522 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a2523 <= value__a1;
         ack__a1 <= 32'd1;
         _00003a2524 <= value__a2;
         ack__a2 <= 32'd1;
         _00003a2525 <= value__a3;
         ack__a3 <= 32'd1;
         _00003a2526 <= value__a4;
         ack__a4 <= 32'd1;
         _00003a2527 <= value__a5;
         ack__a5 <= 32'd1;
         _00003a2528 <= value__a6;
         ack__a6 <= 32'd1;
         _00003a2529 <= value__a7;
         ack__a7 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a2762_00003a_00003adbus__r <= channel__w0_00003a2762_00003a_00003amem[channel__w0_00003a2762_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a2777_00003a_00003adbus__r <= channel__w1_00003a2777_00003a_00003amem[channel__w1_00003a2777_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w2_00003a2792_00003a_00003adbus__r <= channel__w2_00003a2792_00003a_00003amem[channel__w2_00003a2792_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w3_00003a2807_00003a_00003adbus__r <= channel__w3_00003a2807_00003a_00003amem[channel__w3_00003a2807_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w4_00003a2822_00003a_00003adbus__r <= channel__w4_00003a2822_00003a_00003amem[channel__w4_00003a2822_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w5_00003a2837_00003a_00003adbus__r <= channel__w5_00003a2837_00003a_00003amem[channel__w5_00003a2837_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w6_00003a2852_00003a_00003adbus__r <= channel__w6_00003a2852_00003a_00003amem[channel__w6_00003a2852_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w7_00003a2867_00003a_00003adbus__r <= channel__w7_00003a2867_00003a_00003amem[channel__w7_00003a2867_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a2875 <= -32'd1;
         _00003a2874 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2860 <= -32'd1;
         _00003a2859 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2845 <= -32'd1;
         _00003a2844 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2830 <= -32'd1;
         _00003a2829 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2815 <= -32'd1;
         _00003a2814 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2800 <= -32'd1;
         _00003a2799 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2785 <= -32'd1;
         _00003a2784 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2770 <= -32'd1;
         _00003a2769 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a2607 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a2956_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a2956_00003a_00003arun) begin
         mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
         mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
         mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a2956_00003a_00003arun)) begin
         mac__n1_00003a2956_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a2956_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a2607)
                  32'd0: mac__n1_00003a2956_00003a_00003arv <= _00003a2605;
                  32'd1: mac__n1_00003a2956_00003a_00003arv <= _00003a2606;
               endcase
               mac__n1_00003a2956_00003a_00003arvok <= 32'd1;
               _00003a2607 <= ((_00003a2607 + 32'd1) == 32'd2) == 1 ? (_00003a2607 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a2956_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2769 == 32'd1)) begin
                  _00003a2769 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv0 <= _00003a2771;
                  mac__n1_00003a2956_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a2770 <= ((_00003a2770 + 32'd1) == 32'd2) == 1 ? (_00003a2770 + 32'd1) : 32'd0;
                  _00003a2769 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok0 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav0 <= (mac__n1_00003a2956_00003a_00003aav0 + (($signed(mac__n1_00003a2956_00003a_00003alv0) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2884 <= ((mac__n1_00003a2956_00003a_00003aav0 + (($signed(mac__n1_00003a2956_00003a_00003alv0) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv0) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2784 == 32'd1)) begin
                  _00003a2784 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv1 <= _00003a2786;
                  mac__n1_00003a2956_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a2785 <= ((_00003a2785 + 32'd1) == 32'd2) == 1 ? (_00003a2785 + 32'd1) : 32'd0;
                  _00003a2784 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok1 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav1 <= (mac__n1_00003a2956_00003a_00003aav1 + (($signed(mac__n1_00003a2956_00003a_00003alv1) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2885 <= ((mac__n1_00003a2956_00003a_00003aav1 + (($signed(mac__n1_00003a2956_00003a_00003alv1) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv1) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok2) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2799 == 32'd1)) begin
                  _00003a2799 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv2 <= _00003a2801;
                  mac__n1_00003a2956_00003a_00003alvok2 <= 32'd1;
               end
               else begin
                  _00003a2800 <= ((_00003a2800 + 32'd1) == 32'd2) == 1 ? (_00003a2800 + 32'd1) : 32'd0;
                  _00003a2799 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok2 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok2)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav2 <= (mac__n1_00003a2956_00003a_00003aav2 + (($signed(mac__n1_00003a2956_00003a_00003alv2) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2886 <= ((mac__n1_00003a2956_00003a_00003aav2 + (($signed(mac__n1_00003a2956_00003a_00003alv2) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv2) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok3) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2814 == 32'd1)) begin
                  _00003a2814 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv3 <= _00003a2816;
                  mac__n1_00003a2956_00003a_00003alvok3 <= 32'd1;
               end
               else begin
                  _00003a2815 <= ((_00003a2815 + 32'd1) == 32'd2) == 1 ? (_00003a2815 + 32'd1) : 32'd0;
                  _00003a2814 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok3 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok3)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav3 <= (mac__n1_00003a2956_00003a_00003aav3 + (($signed(mac__n1_00003a2956_00003a_00003alv3) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2887 <= ((mac__n1_00003a2956_00003a_00003aav3 + (($signed(mac__n1_00003a2956_00003a_00003alv3) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv3) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok4) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2829 == 32'd1)) begin
                  _00003a2829 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv4 <= _00003a2831;
                  mac__n1_00003a2956_00003a_00003alvok4 <= 32'd1;
               end
               else begin
                  _00003a2830 <= ((_00003a2830 + 32'd1) == 32'd2) == 1 ? (_00003a2830 + 32'd1) : 32'd0;
                  _00003a2829 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok4 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok4)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav4 <= (mac__n1_00003a2956_00003a_00003aav4 + (($signed(mac__n1_00003a2956_00003a_00003alv4) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2888 <= ((mac__n1_00003a2956_00003a_00003aav4 + (($signed(mac__n1_00003a2956_00003a_00003alv4) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv4) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok5) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2844 == 32'd1)) begin
                  _00003a2844 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv5 <= _00003a2846;
                  mac__n1_00003a2956_00003a_00003alvok5 <= 32'd1;
               end
               else begin
                  _00003a2845 <= ((_00003a2845 + 32'd1) == 32'd2) == 1 ? (_00003a2845 + 32'd1) : 32'd0;
                  _00003a2844 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok5 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok5)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav5 <= (mac__n1_00003a2956_00003a_00003aav5 + (($signed(mac__n1_00003a2956_00003a_00003alv5) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2889 <= ((mac__n1_00003a2956_00003a_00003aav5 + (($signed(mac__n1_00003a2956_00003a_00003alv5) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv5) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok6) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2859 == 32'd1)) begin
                  _00003a2859 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv6 <= _00003a2861;
                  mac__n1_00003a2956_00003a_00003alvok6 <= 32'd1;
               end
               else begin
                  _00003a2860 <= ((_00003a2860 + 32'd1) == 32'd2) == 1 ? (_00003a2860 + 32'd1) : 32'd0;
                  _00003a2859 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok6 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok6)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav6 <= (mac__n1_00003a2956_00003a_00003aav6 + (($signed(mac__n1_00003a2956_00003a_00003alv6) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2890 <= ((mac__n1_00003a2956_00003a_00003aav6 + (($signed(mac__n1_00003a2956_00003a_00003alv6) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv6) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a2956_00003a_00003alvok7) begin
            if ((rst == 32'd0)) begin
               if ((_00003a2874 == 32'd1)) begin
                  _00003a2874 <= 32'd0;
                  mac__n1_00003a2956_00003a_00003alv7 <= _00003a2876;
                  mac__n1_00003a2956_00003a_00003alvok7 <= 32'd1;
               end
               else begin
                  _00003a2875 <= ((_00003a2875 + 32'd1) == 32'd2) == 1 ? (_00003a2875 + 32'd1) : 32'd0;
                  _00003a2874 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a2956_00003a_00003alvok7 & mac__n1_00003a2956_00003a_00003arvok) & ~mac__n1_00003a2956_00003a_00003awok7)) begin
            ack <= 32'd1;
            mac__n1_00003a2956_00003a_00003arun <= 32'd0;
            mac__n1_00003a2956_00003a_00003aav7 <= (mac__n1_00003a2956_00003a_00003aav7 + (($signed(mac__n1_00003a2956_00003a_00003alv7) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            _00003a2891 <= ((mac__n1_00003a2956_00003a_00003aav7 + (($signed(mac__n1_00003a2956_00003a_00003alv7) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a2956_00003a_00003alv7) * mac__n1_00003a2956_00003a_00003arv) >> 32'd4));
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd1;
         end
         if ((((((((mac__n1_00003a2956_00003a_00003awok0 & mac__n1_00003a2956_00003a_00003awok1) & mac__n1_00003a2956_00003a_00003awok2) & mac__n1_00003a2956_00003a_00003awok3) & mac__n1_00003a2956_00003a_00003awok4) & mac__n1_00003a2956_00003a_00003awok5) & mac__n1_00003a2956_00003a_00003awok6) & mac__n1_00003a2956_00003a_00003awok7)) begin
            mac__n1_00003a2956_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a2956_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a2956_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a2956_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav1 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav2 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav3 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav4 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav5 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav6 <= 32'd0;
         mac__n1_00003a2956_00003a_00003aav7 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a2975_00003a_00003adbus__r <= channel__b0_00003a2975_00003a_00003amem[channel__b0_00003a2975_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a2990_00003a_00003adbus__r <= channel__b1_00003a2990_00003a_00003amem[channel__b1_00003a2990_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b2_00003a3005_00003a_00003adbus__r <= channel__b2_00003a3005_00003a_00003amem[channel__b2_00003a3005_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b3_00003a3020_00003a_00003adbus__r <= channel__b3_00003a3020_00003a_00003amem[channel__b3_00003a3020_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b4_00003a3035_00003a_00003adbus__r <= channel__b4_00003a3035_00003a_00003amem[channel__b4_00003a3035_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b5_00003a3050_00003a_00003adbus__r <= channel__b5_00003a3050_00003a_00003amem[channel__b5_00003a3050_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b6_00003a3065_00003a_00003adbus__r <= channel__b6_00003a3065_00003a_00003amem[channel__b6_00003a3065_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b7_00003a3080_00003a_00003adbus__r <= channel__b7_00003a3080_00003a_00003amem[channel__b7_00003a3080_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a3082 <= 32'd0;

      _00003a3067 <= 32'd0;

      _00003a3052 <= 32'd0;

      _00003a3037 <= 32'd0;

      _00003a3022 <= 32'd0;

      _00003a3007 <= 32'd0;

      _00003a2992 <= 32'd0;

      _00003a2977 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a3167_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a3167_00003a_00003arun)) begin
         add__n_00003a3167_00003a_00003arun <= 32'd1;
         add__n_00003a3167_00003a_00003alv0 <= _00003a2884;
         add__n_00003a3167_00003a_00003alvok0 <= 32'd1;
         if ((_00003a2980 == 32'd0)) begin
            if ((_00003a2977 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv0 <= _00003a2979;
               _00003a2977 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a2978 <= 32'd0;
               _00003a2977 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok0 & add__n_00003a3167_00003a_00003arvok0)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3097 <= (add__n_00003a3167_00003a_00003alv0 + add__n_00003a3167_00003a_00003arv0);
         end
         add__n_00003a3167_00003a_00003alv1 <= _00003a2885;
         add__n_00003a3167_00003a_00003alvok1 <= 32'd1;
         if ((_00003a2995 == 32'd0)) begin
            if ((_00003a2992 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv1 <= _00003a2994;
               _00003a2992 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a2993 <= 32'd0;
               _00003a2992 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok1 & add__n_00003a3167_00003a_00003arvok1)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3098 <= (add__n_00003a3167_00003a_00003alv1 + add__n_00003a3167_00003a_00003arv1);
         end
         add__n_00003a3167_00003a_00003alv2 <= _00003a2886;
         add__n_00003a3167_00003a_00003alvok2 <= 32'd1;
         if ((_00003a3010 == 32'd0)) begin
            if ((_00003a3007 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv2 <= _00003a3009;
               _00003a3007 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok2 <= 32'd1;
            end
            else begin
               _00003a3008 <= 32'd0;
               _00003a3007 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok2 & add__n_00003a3167_00003a_00003arvok2)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3099 <= (add__n_00003a3167_00003a_00003alv2 + add__n_00003a3167_00003a_00003arv2);
         end
         add__n_00003a3167_00003a_00003alv3 <= _00003a2887;
         add__n_00003a3167_00003a_00003alvok3 <= 32'd1;
         if ((_00003a3025 == 32'd0)) begin
            if ((_00003a3022 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv3 <= _00003a3024;
               _00003a3022 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok3 <= 32'd1;
            end
            else begin
               _00003a3023 <= 32'd0;
               _00003a3022 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok3 & add__n_00003a3167_00003a_00003arvok3)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3100 <= (add__n_00003a3167_00003a_00003alv3 + add__n_00003a3167_00003a_00003arv3);
         end
         add__n_00003a3167_00003a_00003alv4 <= _00003a2888;
         add__n_00003a3167_00003a_00003alvok4 <= 32'd1;
         if ((_00003a3040 == 32'd0)) begin
            if ((_00003a3037 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv4 <= _00003a3039;
               _00003a3037 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok4 <= 32'd1;
            end
            else begin
               _00003a3038 <= 32'd0;
               _00003a3037 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok4 & add__n_00003a3167_00003a_00003arvok4)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3101 <= (add__n_00003a3167_00003a_00003alv4 + add__n_00003a3167_00003a_00003arv4);
         end
         add__n_00003a3167_00003a_00003alv5 <= _00003a2889;
         add__n_00003a3167_00003a_00003alvok5 <= 32'd1;
         if ((_00003a3055 == 32'd0)) begin
            if ((_00003a3052 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv5 <= _00003a3054;
               _00003a3052 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok5 <= 32'd1;
            end
            else begin
               _00003a3053 <= 32'd0;
               _00003a3052 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok5 & add__n_00003a3167_00003a_00003arvok5)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3102 <= (add__n_00003a3167_00003a_00003alv5 + add__n_00003a3167_00003a_00003arv5);
         end
         add__n_00003a3167_00003a_00003alv6 <= _00003a2890;
         add__n_00003a3167_00003a_00003alvok6 <= 32'd1;
         if ((_00003a3070 == 32'd0)) begin
            if ((_00003a3067 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv6 <= _00003a3069;
               _00003a3067 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok6 <= 32'd1;
            end
            else begin
               _00003a3068 <= 32'd0;
               _00003a3067 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok6 & add__n_00003a3167_00003a_00003arvok6)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3103 <= (add__n_00003a3167_00003a_00003alv6 + add__n_00003a3167_00003a_00003arv6);
         end
         add__n_00003a3167_00003a_00003alv7 <= _00003a2891;
         add__n_00003a3167_00003a_00003alvok7 <= 32'd1;
         if ((_00003a3085 == 32'd0)) begin
            if ((_00003a3082 == 32'd1)) begin
               add__n_00003a3167_00003a_00003arv7 <= _00003a3084;
               _00003a3082 <= 32'd0;
               add__n_00003a3167_00003a_00003arvok7 <= 32'd1;
            end
            else begin
               _00003a3083 <= 32'd0;
               _00003a3082 <= 32'd1;
            end
         end
         if ((add__n_00003a3167_00003a_00003alvok7 & add__n_00003a3167_00003a_00003arvok7)) begin
            add__n_00003a3167_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3104 <= (add__n_00003a3167_00003a_00003alv7 + add__n_00003a3167_00003a_00003arv7);
         end
      end
      else begin
         add__n_00003a3167_00003a_00003alvok0 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok0 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok1 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok1 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok2 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok2 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok3 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok3 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok4 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok4 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok5 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok5 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok6 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok6 <= 32'd0;
         add__n_00003a3167_00003a_00003alvok7 <= 32'd0;
         add__n_00003a3167_00003a_00003arvok7 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a2762_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w0_00003a2762_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w1_00003a2777_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w1_00003a2777_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w2_00003a2792_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w2_00003a2792_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w3_00003a2807_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w3_00003a2807_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w4_00003a2822_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w4_00003a2822_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w5_00003a2837_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w5_00003a2837_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w6_00003a2852_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w6_00003a2852_00003a_00003amem[32'd1] = $signed(32'd23);

      channel__w7_00003a2867_00003a_00003amem[32'd0] = $signed(-32'd23);

      channel__w7_00003a2867_00003a_00003amem[32'd1] = $signed(32'd23);

   end

endmodule