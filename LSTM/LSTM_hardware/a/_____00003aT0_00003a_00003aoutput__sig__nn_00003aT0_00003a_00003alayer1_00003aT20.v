`timescale 1ps/1ps

module _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20( clk, rst, req, _00003a3320, _00003a3321, ack__layer, _00003a3322, _00003a3237, _00003a3238, _00003a3239, _00003a3240, _00003a3241, _00003a3242, _00003a3243, _00003a3244 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a3320;
   input signed[7:0] _00003a3321;
   output ack__layer;
   inout [0:0] _00003a3322;
   inout signed[7:0] _00003a3237;
   inout signed[7:0] _00003a3238;
   inout signed[7:0] _00003a3239;
   inout signed[7:0] _00003a3240;
   inout signed[7:0] _00003a3241;
   inout signed[7:0] _00003a3242;
   inout signed[7:0] _00003a3243;
   inout signed[7:0] _00003a3244;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a3486;
   reg _00003a3484;
   reg [0:0] _00003a3485;
   reg signed[7:0] _00003a3599;
   reg signed[7:0] _00003a3600;
   reg signed[7:0] _00003a3601;
   reg signed[7:0] _00003a3602;
   reg signed[7:0] _00003a3603;
   reg signed[7:0] _00003a3604;
   reg signed[7:0] _00003a3605;
   reg signed[7:0] _00003a3606;
   wire signed[7:0] _00003a3501;
   reg _00003a3499;
   reg [0:0] _00003a3500;
   wire signed[7:0] _00003a3516;
   reg _00003a3514;
   reg [0:0] _00003a3515;
   wire signed[7:0] _00003a3531;
   reg _00003a3529;
   reg [0:0] _00003a3530;
   wire signed[7:0] _00003a3546;
   reg _00003a3544;
   reg [0:0] _00003a3545;
   wire signed[7:0] _00003a3561;
   reg _00003a3559;
   reg [0:0] _00003a3560;
   wire signed[7:0] _00003a3576;
   reg _00003a3574;
   reg [0:0] _00003a3575;
   wire signed[7:0] _00003a3591;
   reg _00003a3589;
   reg [0:0] _00003a3590;
   wire signed[7:0] _00003a3694;
   wire _00003a3695;
   reg _00003a3692;
   reg [0:0] _00003a3693;
   reg signed[7:0] _00003a3812;
   reg signed[7:0] _00003a3813;
   reg signed[7:0] _00003a3814;
   reg signed[7:0] _00003a3815;
   reg signed[7:0] _00003a3816;
   reg signed[7:0] _00003a3817;
   reg signed[7:0] _00003a3818;
   reg signed[7:0] _00003a3819;
   wire signed[7:0] _00003a3709;
   wire _00003a3710;
   reg _00003a3707;
   reg [0:0] _00003a3708;
   wire signed[7:0] _00003a3724;
   wire _00003a3725;
   reg _00003a3722;
   reg [0:0] _00003a3723;
   wire signed[7:0] _00003a3739;
   wire _00003a3740;
   reg _00003a3737;
   reg [0:0] _00003a3738;
   wire signed[7:0] _00003a3754;
   wire _00003a3755;
   reg _00003a3752;
   reg [0:0] _00003a3753;
   wire signed[7:0] _00003a3769;
   wire _00003a3770;
   reg _00003a3767;
   reg [0:0] _00003a3768;
   wire signed[7:0] _00003a3784;
   wire _00003a3785;
   reg _00003a3782;
   reg [0:0] _00003a3783;
   wire signed[7:0] _00003a3799;
   wire _00003a3800;
   reg _00003a3797;
   reg [0:0] _00003a3798;
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
   wire channel__w0_00003a3477_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a3477_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a3477_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a3477_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a3492_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a3492_00003a_00003adbus__r;
   wire [0:0] channel__w1_00003a3492_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a3492_00003a_00003amem  :0[0:1];
   wire channel__w2_00003a3507_00003a_00003atrig__r;
   reg signed[7:0] channel__w2_00003a3507_00003a_00003adbus__r;
   wire [0:0] channel__w2_00003a3507_00003a_00003aabus__r;
   wire signed[7:0] channel__w2_00003a3507_00003a_00003amem  :0[0:1];
   wire channel__w3_00003a3522_00003a_00003atrig__r;
   reg signed[7:0] channel__w3_00003a3522_00003a_00003adbus__r;
   wire [0:0] channel__w3_00003a3522_00003a_00003aabus__r;
   wire signed[7:0] channel__w3_00003a3522_00003a_00003amem  :0[0:1];
   wire channel__w4_00003a3537_00003a_00003atrig__r;
   reg signed[7:0] channel__w4_00003a3537_00003a_00003adbus__r;
   wire [0:0] channel__w4_00003a3537_00003a_00003aabus__r;
   wire signed[7:0] channel__w4_00003a3537_00003a_00003amem  :0[0:1];
   wire channel__w5_00003a3552_00003a_00003atrig__r;
   reg signed[7:0] channel__w5_00003a3552_00003a_00003adbus__r;
   wire [0:0] channel__w5_00003a3552_00003a_00003aabus__r;
   wire signed[7:0] channel__w5_00003a3552_00003a_00003amem  :0[0:1];
   wire channel__w6_00003a3567_00003a_00003atrig__r;
   reg signed[7:0] channel__w6_00003a3567_00003a_00003adbus__r;
   wire [0:0] channel__w6_00003a3567_00003a_00003aabus__r;
   wire signed[7:0] channel__w6_00003a3567_00003a_00003amem  :0[0:1];
   wire channel__w7_00003a3582_00003a_00003atrig__r;
   reg signed[7:0] channel__w7_00003a3582_00003a_00003adbus__r;
   wire [0:0] channel__w7_00003a3582_00003a_00003aabus__r;
   wire signed[7:0] channel__w7_00003a3582_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__1;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__2;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__3;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__4;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__5;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__6;
   wire signed[7:0] channel__accum_00003a3597_00003a_00003areg__7;
   wire [2:0] channel__accum_00003a3597_00003a_00003arinc_00003a3627_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a3597_00003a_00003awinc_00003a3638_00003a_00003aabus__w;
   wire [2:0] channel__accum_00003a3597_00003a_00003ardec_00003a3649_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a3597_00003a_00003awdec_00003a3660_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv2;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv3;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv4;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv5;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv6;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003alv7;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav2;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav3;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav4;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav5;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav6;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003aav7;
   reg signed[7:0] mac__n1_00003a3671_00003a_00003arv;
   reg mac__n1_00003a3671_00003a_00003alvok0;
   reg mac__n1_00003a3671_00003a_00003alvok1;
   reg mac__n1_00003a3671_00003a_00003alvok2;
   reg mac__n1_00003a3671_00003a_00003alvok3;
   reg mac__n1_00003a3671_00003a_00003alvok4;
   reg mac__n1_00003a3671_00003a_00003alvok5;
   reg mac__n1_00003a3671_00003a_00003alvok6;
   reg mac__n1_00003a3671_00003a_00003alvok7;
   reg mac__n1_00003a3671_00003a_00003arvok;
   reg mac__n1_00003a3671_00003a_00003awok0;
   reg mac__n1_00003a3671_00003a_00003awok1;
   reg mac__n1_00003a3671_00003a_00003awok2;
   reg mac__n1_00003a3671_00003a_00003awok3;
   reg mac__n1_00003a3671_00003a_00003awok4;
   reg mac__n1_00003a3671_00003a_00003awok5;
   reg mac__n1_00003a3671_00003a_00003awok6;
   reg mac__n1_00003a3671_00003a_00003awok7;
   reg mac__n1_00003a3671_00003a_00003arun;
   wire channel__b0_00003a3690_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a3690_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a3690_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a3690_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b1_00003a3705_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a3705_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a3705_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a3705_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b2_00003a3720_00003a_00003atrig__r;
   reg signed[7:0] channel__b2_00003a3720_00003a_00003adbus__r;
   wire [0:0] channel__b2_00003a3720_00003a_00003aabus__r;
   reg signed[7:0] channel__b2_00003a3720_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b3_00003a3735_00003a_00003atrig__r;
   reg signed[7:0] channel__b3_00003a3735_00003a_00003adbus__r;
   wire [0:0] channel__b3_00003a3735_00003a_00003aabus__r;
   reg signed[7:0] channel__b3_00003a3735_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b4_00003a3750_00003a_00003atrig__r;
   reg signed[7:0] channel__b4_00003a3750_00003a_00003adbus__r;
   wire [0:0] channel__b4_00003a3750_00003a_00003aabus__r;
   reg signed[7:0] channel__b4_00003a3750_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b5_00003a3765_00003a_00003atrig__r;
   reg signed[7:0] channel__b5_00003a3765_00003a_00003adbus__r;
   wire [0:0] channel__b5_00003a3765_00003a_00003aabus__r;
   reg signed[7:0] channel__b5_00003a3765_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b6_00003a3780_00003a_00003atrig__r;
   reg signed[7:0] channel__b6_00003a3780_00003a_00003adbus__r;
   wire [0:0] channel__b6_00003a3780_00003a_00003aabus__r;
   reg signed[7:0] channel__b6_00003a3780_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b7_00003a3795_00003a_00003atrig__r;
   reg signed[7:0] channel__b7_00003a3795_00003a_00003adbus__r;
   wire [0:0] channel__b7_00003a3795_00003a_00003aabus__r;
   reg signed[7:0] channel__b7_00003a3795_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__1;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__2;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__3;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__4;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__5;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__6;
   wire signed[7:0] channel__z_00003a3810_00003a_00003areg__7;
   wire [2:0] channel__z_00003a3810_00003a_00003arinc_00003a3840_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a3810_00003a_00003awinc_00003a3850_00003a_00003aabus__w;
   wire [2:0] channel__z_00003a3810_00003a_00003ardec_00003a3860_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a3810_00003a_00003awdec_00003a3871_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv0;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv1;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv2;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv3;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv4;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv5;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv6;
   reg signed[7:0] add__n_00003a3882_00003a_00003alv7;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv0;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv1;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv2;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv3;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv4;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv5;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv6;
   reg signed[7:0] add__n_00003a3882_00003a_00003arv7;
   reg add__n_00003a3882_00003a_00003alvok0;
   reg add__n_00003a3882_00003a_00003alvok1;
   reg add__n_00003a3882_00003a_00003alvok2;
   reg add__n_00003a3882_00003a_00003alvok3;
   reg add__n_00003a3882_00003a_00003alvok4;
   reg add__n_00003a3882_00003a_00003alvok5;
   reg add__n_00003a3882_00003a_00003alvok6;
   reg add__n_00003a3882_00003a_00003alvok7;
   reg add__n_00003a3882_00003a_00003arvok0;
   reg add__n_00003a3882_00003a_00003arvok1;
   reg add__n_00003a3882_00003a_00003arvok2;
   reg add__n_00003a3882_00003a_00003arvok3;
   reg add__n_00003a3882_00003a_00003arvok4;
   reg add__n_00003a3882_00003a_00003arvok5;
   reg add__n_00003a3882_00003a_00003arvok6;
   reg add__n_00003a3882_00003a_00003arvok7;
   reg add__n_00003a3882_00003a_00003arun;
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

   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003acounter_00003aT60 counter(.clk(_00005e_0000602096),.ack(_00005e_0000602097),.rst(_00005e_0000602098),.ack__mac(_00005e_0000602099));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc0_00003aT60 func0(.z__value(_00005e_0000602100),.a(_00005e_0000602101));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc1_00003aT60 func1(.z__value(_00005e_0000602102),.a(_00005e_0000602103));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc2_00003aT20 func2(.z__value(_00005e_0000602558),.a(_00005e_0000602559));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc3_00003aT20 func3(.z__value(_00005e_0000602560),.a(_00005e_0000602561));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc4_00003aT20 func4(.z__value(_00005e_0000602562),.a(_00005e_0000602563));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc5_00003aT20 func5(.z__value(_00005e_0000602564),.a(_00005e_0000602565));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc6_00003aT20 func6(.z__value(_00005e_0000602566),.a(_00005e_0000602567));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0_00003a_00003alayer1_00003aT20_00003a_00003afunc7_00003aT20 func7(.z__value(_00005e_0000602568),.a(_00005e_0000602569));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_0000602096 = clk;

   assign _00005e_0000602097 = ack;

   assign _00005e_0000602098 = rst;

   assign ack__mac = _00005e_0000602099;

   assign _00003a3695 = rst;

   assign _00003a3710 = rst;

   assign _00003a3725 = rst;

   assign _00003a3740 = rst;

   assign _00003a3755 = rst;

   assign _00003a3770 = rst;

   assign _00003a3785 = rst;

   assign _00003a3800 = rst;

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

   assign _00003a3486 = channel__w0_00003a3477_00003a_00003adbus__r;

   assign _00003a3484 = channel__w0_00003a3477_00003a_00003atrig__r;

   assign _00003a3485 = channel__w0_00003a3477_00003a_00003aabus__r;

   assign _00003a3501 = channel__w1_00003a3492_00003a_00003adbus__r;

   assign _00003a3499 = channel__w1_00003a3492_00003a_00003atrig__r;

   assign _00003a3500 = channel__w1_00003a3492_00003a_00003aabus__r;

   assign _00003a3516 = channel__w2_00003a3507_00003a_00003adbus__r;

   assign _00003a3514 = channel__w2_00003a3507_00003a_00003atrig__r;

   assign _00003a3515 = channel__w2_00003a3507_00003a_00003aabus__r;

   assign _00003a3531 = channel__w3_00003a3522_00003a_00003adbus__r;

   assign _00003a3529 = channel__w3_00003a3522_00003a_00003atrig__r;

   assign _00003a3530 = channel__w3_00003a3522_00003a_00003aabus__r;

   assign _00003a3546 = channel__w4_00003a3537_00003a_00003adbus__r;

   assign _00003a3544 = channel__w4_00003a3537_00003a_00003atrig__r;

   assign _00003a3545 = channel__w4_00003a3537_00003a_00003aabus__r;

   assign _00003a3561 = channel__w5_00003a3552_00003a_00003adbus__r;

   assign _00003a3559 = channel__w5_00003a3552_00003a_00003atrig__r;

   assign _00003a3560 = channel__w5_00003a3552_00003a_00003aabus__r;

   assign _00003a3576 = channel__w6_00003a3567_00003a_00003adbus__r;

   assign _00003a3574 = channel__w6_00003a3567_00003a_00003atrig__r;

   assign _00003a3575 = channel__w6_00003a3567_00003a_00003aabus__r;

   assign _00003a3591 = channel__w7_00003a3582_00003a_00003adbus__r;

   assign _00003a3589 = channel__w7_00003a3582_00003a_00003atrig__r;

   assign _00003a3590 = channel__w7_00003a3582_00003a_00003aabus__r;

   assign _00003a3599 = channel__accum_00003a3597_00003a_00003areg__0;

   assign _00003a3600 = channel__accum_00003a3597_00003a_00003areg__1;

   assign _00003a3601 = channel__accum_00003a3597_00003a_00003areg__2;

   assign _00003a3602 = channel__accum_00003a3597_00003a_00003areg__3;

   assign _00003a3603 = channel__accum_00003a3597_00003a_00003areg__4;

   assign _00003a3604 = channel__accum_00003a3597_00003a_00003areg__5;

   assign _00003a3605 = channel__accum_00003a3597_00003a_00003areg__6;

   assign _00003a3606 = channel__accum_00003a3597_00003a_00003areg__7;

   assign _00003a3694 = channel__b0_00003a3690_00003a_00003adbus__r;

   assign _00003a3692 = channel__b0_00003a3690_00003a_00003atrig__r;

   assign _00003a3693 = channel__b0_00003a3690_00003a_00003aabus__r;

   assign _00003a3709 = channel__b1_00003a3705_00003a_00003adbus__r;

   assign _00003a3707 = channel__b1_00003a3705_00003a_00003atrig__r;

   assign _00003a3708 = channel__b1_00003a3705_00003a_00003aabus__r;

   assign _00003a3724 = channel__b2_00003a3720_00003a_00003adbus__r;

   assign _00003a3722 = channel__b2_00003a3720_00003a_00003atrig__r;

   assign _00003a3723 = channel__b2_00003a3720_00003a_00003aabus__r;

   assign _00003a3739 = channel__b3_00003a3735_00003a_00003adbus__r;

   assign _00003a3737 = channel__b3_00003a3735_00003a_00003atrig__r;

   assign _00003a3738 = channel__b3_00003a3735_00003a_00003aabus__r;

   assign _00003a3754 = channel__b4_00003a3750_00003a_00003adbus__r;

   assign _00003a3752 = channel__b4_00003a3750_00003a_00003atrig__r;

   assign _00003a3753 = channel__b4_00003a3750_00003a_00003aabus__r;

   assign _00003a3769 = channel__b5_00003a3765_00003a_00003adbus__r;

   assign _00003a3767 = channel__b5_00003a3765_00003a_00003atrig__r;

   assign _00003a3768 = channel__b5_00003a3765_00003a_00003aabus__r;

   assign _00003a3784 = channel__b6_00003a3780_00003a_00003adbus__r;

   assign _00003a3782 = channel__b6_00003a3780_00003a_00003atrig__r;

   assign _00003a3783 = channel__b6_00003a3780_00003a_00003aabus__r;

   assign _00003a3799 = channel__b7_00003a3795_00003a_00003adbus__r;

   assign _00003a3797 = channel__b7_00003a3795_00003a_00003atrig__r;

   assign _00003a3798 = channel__b7_00003a3795_00003a_00003aabus__r;

   assign _00003a3812 = channel__z_00003a3810_00003a_00003areg__0;

   assign _00003a3813 = channel__z_00003a3810_00003a_00003areg__1;

   assign _00003a3814 = channel__z_00003a3810_00003a_00003areg__2;

   assign _00003a3815 = channel__z_00003a3810_00003a_00003areg__3;

   assign _00003a3816 = channel__z_00003a3810_00003a_00003areg__4;

   assign _00003a3817 = channel__z_00003a3810_00003a_00003areg__5;

   assign _00003a3818 = channel__z_00003a3810_00003a_00003areg__6;

   assign _00003a3819 = channel__z_00003a3810_00003a_00003areg__7;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a3812;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a3813;
         flag__z1 <= 32'd1;
         value__z2 <= _00003a3814;
         flag__z2 <= 32'd1;
         value__z3 <= _00003a3815;
         flag__z3 <= 32'd1;
         value__z4 <= _00003a3816;
         flag__z4 <= 32'd1;
         value__z5 <= _00003a3817;
         flag__z5 <= 32'd1;
         value__z6 <= _00003a3818;
         flag__z6 <= 32'd1;
         value__z7 <= _00003a3819;
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
         _00003a3237 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a3238 <= value__a1;
         ack__a1 <= 32'd1;
         _00003a3239 <= value__a2;
         ack__a2 <= 32'd1;
         _00003a3240 <= value__a3;
         ack__a3 <= 32'd1;
         _00003a3241 <= value__a4;
         ack__a4 <= 32'd1;
         _00003a3242 <= value__a5;
         ack__a5 <= 32'd1;
         _00003a3243 <= value__a6;
         ack__a6 <= 32'd1;
         _00003a3244 <= value__a7;
         ack__a7 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a3477_00003a_00003adbus__r <= channel__w0_00003a3477_00003a_00003amem[channel__w0_00003a3477_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a3492_00003a_00003adbus__r <= channel__w1_00003a3492_00003a_00003amem[channel__w1_00003a3492_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w2_00003a3507_00003a_00003adbus__r <= channel__w2_00003a3507_00003a_00003amem[channel__w2_00003a3507_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w3_00003a3522_00003a_00003adbus__r <= channel__w3_00003a3522_00003a_00003amem[channel__w3_00003a3522_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w4_00003a3537_00003a_00003adbus__r <= channel__w4_00003a3537_00003a_00003amem[channel__w4_00003a3537_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w5_00003a3552_00003a_00003adbus__r <= channel__w5_00003a3552_00003a_00003amem[channel__w5_00003a3552_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w6_00003a3567_00003a_00003adbus__r <= channel__w6_00003a3567_00003a_00003amem[channel__w6_00003a3567_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w7_00003a3582_00003a_00003adbus__r <= channel__w7_00003a3582_00003a_00003amem[channel__w7_00003a3582_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a3590 <= -32'd1;
         _00003a3589 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3575 <= -32'd1;
         _00003a3574 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3560 <= -32'd1;
         _00003a3559 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3545 <= -32'd1;
         _00003a3544 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3530 <= -32'd1;
         _00003a3529 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3515 <= -32'd1;
         _00003a3514 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3500 <= -32'd1;
         _00003a3499 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3485 <= -32'd1;
         _00003a3484 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a3322 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a3671_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a3671_00003a_00003arun) begin
         mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
         mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
         mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a3671_00003a_00003arun)) begin
         mac__n1_00003a3671_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a3671_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a3322)
                  32'd0: mac__n1_00003a3671_00003a_00003arv <= _00003a3320;
                  32'd1: mac__n1_00003a3671_00003a_00003arv <= _00003a3321;
               endcase
               mac__n1_00003a3671_00003a_00003arvok <= 32'd1;
               _00003a3322 <= ((_00003a3322 + 32'd1) == 32'd2) == 1 ? (_00003a3322 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a3671_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3484 == 32'd1)) begin
                  _00003a3484 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv0 <= _00003a3486;
                  mac__n1_00003a3671_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a3485 <= ((_00003a3485 + 32'd1) == 32'd2) == 1 ? (_00003a3485 + 32'd1) : 32'd0;
                  _00003a3484 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok0 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav0 <= (mac__n1_00003a3671_00003a_00003aav0 + (($signed(mac__n1_00003a3671_00003a_00003alv0) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3599 <= ((mac__n1_00003a3671_00003a_00003aav0 + (($signed(mac__n1_00003a3671_00003a_00003alv0) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv0) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3499 == 32'd1)) begin
                  _00003a3499 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv1 <= _00003a3501;
                  mac__n1_00003a3671_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a3500 <= ((_00003a3500 + 32'd1) == 32'd2) == 1 ? (_00003a3500 + 32'd1) : 32'd0;
                  _00003a3499 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok1 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav1 <= (mac__n1_00003a3671_00003a_00003aav1 + (($signed(mac__n1_00003a3671_00003a_00003alv1) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3600 <= ((mac__n1_00003a3671_00003a_00003aav1 + (($signed(mac__n1_00003a3671_00003a_00003alv1) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv1) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok2) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3514 == 32'd1)) begin
                  _00003a3514 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv2 <= _00003a3516;
                  mac__n1_00003a3671_00003a_00003alvok2 <= 32'd1;
               end
               else begin
                  _00003a3515 <= ((_00003a3515 + 32'd1) == 32'd2) == 1 ? (_00003a3515 + 32'd1) : 32'd0;
                  _00003a3514 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok2 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok2)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav2 <= (mac__n1_00003a3671_00003a_00003aav2 + (($signed(mac__n1_00003a3671_00003a_00003alv2) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3601 <= ((mac__n1_00003a3671_00003a_00003aav2 + (($signed(mac__n1_00003a3671_00003a_00003alv2) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv2) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok3) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3529 == 32'd1)) begin
                  _00003a3529 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv3 <= _00003a3531;
                  mac__n1_00003a3671_00003a_00003alvok3 <= 32'd1;
               end
               else begin
                  _00003a3530 <= ((_00003a3530 + 32'd1) == 32'd2) == 1 ? (_00003a3530 + 32'd1) : 32'd0;
                  _00003a3529 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok3 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok3)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav3 <= (mac__n1_00003a3671_00003a_00003aav3 + (($signed(mac__n1_00003a3671_00003a_00003alv3) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3602 <= ((mac__n1_00003a3671_00003a_00003aav3 + (($signed(mac__n1_00003a3671_00003a_00003alv3) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv3) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok4) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3544 == 32'd1)) begin
                  _00003a3544 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv4 <= _00003a3546;
                  mac__n1_00003a3671_00003a_00003alvok4 <= 32'd1;
               end
               else begin
                  _00003a3545 <= ((_00003a3545 + 32'd1) == 32'd2) == 1 ? (_00003a3545 + 32'd1) : 32'd0;
                  _00003a3544 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok4 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok4)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav4 <= (mac__n1_00003a3671_00003a_00003aav4 + (($signed(mac__n1_00003a3671_00003a_00003alv4) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3603 <= ((mac__n1_00003a3671_00003a_00003aav4 + (($signed(mac__n1_00003a3671_00003a_00003alv4) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv4) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok5) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3559 == 32'd1)) begin
                  _00003a3559 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv5 <= _00003a3561;
                  mac__n1_00003a3671_00003a_00003alvok5 <= 32'd1;
               end
               else begin
                  _00003a3560 <= ((_00003a3560 + 32'd1) == 32'd2) == 1 ? (_00003a3560 + 32'd1) : 32'd0;
                  _00003a3559 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok5 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok5)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav5 <= (mac__n1_00003a3671_00003a_00003aav5 + (($signed(mac__n1_00003a3671_00003a_00003alv5) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3604 <= ((mac__n1_00003a3671_00003a_00003aav5 + (($signed(mac__n1_00003a3671_00003a_00003alv5) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv5) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok6) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3574 == 32'd1)) begin
                  _00003a3574 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv6 <= _00003a3576;
                  mac__n1_00003a3671_00003a_00003alvok6 <= 32'd1;
               end
               else begin
                  _00003a3575 <= ((_00003a3575 + 32'd1) == 32'd2) == 1 ? (_00003a3575 + 32'd1) : 32'd0;
                  _00003a3574 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok6 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok6)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav6 <= (mac__n1_00003a3671_00003a_00003aav6 + (($signed(mac__n1_00003a3671_00003a_00003alv6) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3605 <= ((mac__n1_00003a3671_00003a_00003aav6 + (($signed(mac__n1_00003a3671_00003a_00003alv6) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv6) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a3671_00003a_00003alvok7) begin
            if ((rst == 32'd0)) begin
               if ((_00003a3589 == 32'd1)) begin
                  _00003a3589 <= 32'd0;
                  mac__n1_00003a3671_00003a_00003alv7 <= _00003a3591;
                  mac__n1_00003a3671_00003a_00003alvok7 <= 32'd1;
               end
               else begin
                  _00003a3590 <= ((_00003a3590 + 32'd1) == 32'd2) == 1 ? (_00003a3590 + 32'd1) : 32'd0;
                  _00003a3589 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a3671_00003a_00003alvok7 & mac__n1_00003a3671_00003a_00003arvok) & ~mac__n1_00003a3671_00003a_00003awok7)) begin
            ack <= 32'd1;
            mac__n1_00003a3671_00003a_00003arun <= 32'd0;
            mac__n1_00003a3671_00003a_00003aav7 <= (mac__n1_00003a3671_00003a_00003aav7 + (($signed(mac__n1_00003a3671_00003a_00003alv7) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            _00003a3606 <= ((mac__n1_00003a3671_00003a_00003aav7 + (($signed(mac__n1_00003a3671_00003a_00003alv7) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a3671_00003a_00003alv7) * mac__n1_00003a3671_00003a_00003arv) >> 32'd4));
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd1;
         end
         if ((((((((mac__n1_00003a3671_00003a_00003awok0 & mac__n1_00003a3671_00003a_00003awok1) & mac__n1_00003a3671_00003a_00003awok2) & mac__n1_00003a3671_00003a_00003awok3) & mac__n1_00003a3671_00003a_00003awok4) & mac__n1_00003a3671_00003a_00003awok5) & mac__n1_00003a3671_00003a_00003awok6) & mac__n1_00003a3671_00003a_00003awok7)) begin
            mac__n1_00003a3671_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a3671_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a3671_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a3671_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav1 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav2 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav3 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav4 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav5 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav6 <= 32'd0;
         mac__n1_00003a3671_00003a_00003aav7 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a3690_00003a_00003adbus__r <= channel__b0_00003a3690_00003a_00003amem[channel__b0_00003a3690_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a3705_00003a_00003adbus__r <= channel__b1_00003a3705_00003a_00003amem[channel__b1_00003a3705_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b2_00003a3720_00003a_00003adbus__r <= channel__b2_00003a3720_00003a_00003amem[channel__b2_00003a3720_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b3_00003a3735_00003a_00003adbus__r <= channel__b3_00003a3735_00003a_00003amem[channel__b3_00003a3735_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b4_00003a3750_00003a_00003adbus__r <= channel__b4_00003a3750_00003a_00003amem[channel__b4_00003a3750_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b5_00003a3765_00003a_00003adbus__r <= channel__b5_00003a3765_00003a_00003amem[channel__b5_00003a3765_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b6_00003a3780_00003a_00003adbus__r <= channel__b6_00003a3780_00003a_00003amem[channel__b6_00003a3780_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b7_00003a3795_00003a_00003adbus__r <= channel__b7_00003a3795_00003a_00003amem[channel__b7_00003a3795_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a3797 <= 32'd0;

      _00003a3782 <= 32'd0;

      _00003a3767 <= 32'd0;

      _00003a3752 <= 32'd0;

      _00003a3737 <= 32'd0;

      _00003a3722 <= 32'd0;

      _00003a3707 <= 32'd0;

      _00003a3692 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a3882_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a3882_00003a_00003arun)) begin
         add__n_00003a3882_00003a_00003arun <= 32'd1;
         add__n_00003a3882_00003a_00003alv0 <= _00003a3599;
         add__n_00003a3882_00003a_00003alvok0 <= 32'd1;
         if ((_00003a3695 == 32'd0)) begin
            if ((_00003a3692 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv0 <= _00003a3694;
               _00003a3692 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a3693 <= 32'd0;
               _00003a3692 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok0 & add__n_00003a3882_00003a_00003arvok0)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3812 <= (add__n_00003a3882_00003a_00003alv0 + add__n_00003a3882_00003a_00003arv0);
         end
         add__n_00003a3882_00003a_00003alv1 <= _00003a3600;
         add__n_00003a3882_00003a_00003alvok1 <= 32'd1;
         if ((_00003a3710 == 32'd0)) begin
            if ((_00003a3707 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv1 <= _00003a3709;
               _00003a3707 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a3708 <= 32'd0;
               _00003a3707 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok1 & add__n_00003a3882_00003a_00003arvok1)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3813 <= (add__n_00003a3882_00003a_00003alv1 + add__n_00003a3882_00003a_00003arv1);
         end
         add__n_00003a3882_00003a_00003alv2 <= _00003a3601;
         add__n_00003a3882_00003a_00003alvok2 <= 32'd1;
         if ((_00003a3725 == 32'd0)) begin
            if ((_00003a3722 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv2 <= _00003a3724;
               _00003a3722 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok2 <= 32'd1;
            end
            else begin
               _00003a3723 <= 32'd0;
               _00003a3722 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok2 & add__n_00003a3882_00003a_00003arvok2)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3814 <= (add__n_00003a3882_00003a_00003alv2 + add__n_00003a3882_00003a_00003arv2);
         end
         add__n_00003a3882_00003a_00003alv3 <= _00003a3602;
         add__n_00003a3882_00003a_00003alvok3 <= 32'd1;
         if ((_00003a3740 == 32'd0)) begin
            if ((_00003a3737 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv3 <= _00003a3739;
               _00003a3737 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok3 <= 32'd1;
            end
            else begin
               _00003a3738 <= 32'd0;
               _00003a3737 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok3 & add__n_00003a3882_00003a_00003arvok3)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3815 <= (add__n_00003a3882_00003a_00003alv3 + add__n_00003a3882_00003a_00003arv3);
         end
         add__n_00003a3882_00003a_00003alv4 <= _00003a3603;
         add__n_00003a3882_00003a_00003alvok4 <= 32'd1;
         if ((_00003a3755 == 32'd0)) begin
            if ((_00003a3752 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv4 <= _00003a3754;
               _00003a3752 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok4 <= 32'd1;
            end
            else begin
               _00003a3753 <= 32'd0;
               _00003a3752 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok4 & add__n_00003a3882_00003a_00003arvok4)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3816 <= (add__n_00003a3882_00003a_00003alv4 + add__n_00003a3882_00003a_00003arv4);
         end
         add__n_00003a3882_00003a_00003alv5 <= _00003a3604;
         add__n_00003a3882_00003a_00003alvok5 <= 32'd1;
         if ((_00003a3770 == 32'd0)) begin
            if ((_00003a3767 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv5 <= _00003a3769;
               _00003a3767 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok5 <= 32'd1;
            end
            else begin
               _00003a3768 <= 32'd0;
               _00003a3767 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok5 & add__n_00003a3882_00003a_00003arvok5)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3817 <= (add__n_00003a3882_00003a_00003alv5 + add__n_00003a3882_00003a_00003arv5);
         end
         add__n_00003a3882_00003a_00003alv6 <= _00003a3605;
         add__n_00003a3882_00003a_00003alvok6 <= 32'd1;
         if ((_00003a3785 == 32'd0)) begin
            if ((_00003a3782 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv6 <= _00003a3784;
               _00003a3782 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok6 <= 32'd1;
            end
            else begin
               _00003a3783 <= 32'd0;
               _00003a3782 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok6 & add__n_00003a3882_00003a_00003arvok6)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3818 <= (add__n_00003a3882_00003a_00003alv6 + add__n_00003a3882_00003a_00003arv6);
         end
         add__n_00003a3882_00003a_00003alv7 <= _00003a3606;
         add__n_00003a3882_00003a_00003alvok7 <= 32'd1;
         if ((_00003a3800 == 32'd0)) begin
            if ((_00003a3797 == 32'd1)) begin
               add__n_00003a3882_00003a_00003arv7 <= _00003a3799;
               _00003a3797 <= 32'd0;
               add__n_00003a3882_00003a_00003arvok7 <= 32'd1;
            end
            else begin
               _00003a3798 <= 32'd0;
               _00003a3797 <= 32'd1;
            end
         end
         if ((add__n_00003a3882_00003a_00003alvok7 & add__n_00003a3882_00003a_00003arvok7)) begin
            add__n_00003a3882_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a3819 <= (add__n_00003a3882_00003a_00003alv7 + add__n_00003a3882_00003a_00003arv7);
         end
      end
      else begin
         add__n_00003a3882_00003a_00003alvok0 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok0 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok1 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok1 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok2 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok2 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok3 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok3 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok4 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok4 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok5 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok5 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok6 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok6 <= 32'd0;
         add__n_00003a3882_00003a_00003alvok7 <= 32'd0;
         add__n_00003a3882_00003a_00003arvok7 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a3477_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w0_00003a3477_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w1_00003a3492_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w1_00003a3492_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w2_00003a3507_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w2_00003a3507_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w3_00003a3522_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w3_00003a3522_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w4_00003a3537_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w4_00003a3537_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w5_00003a3552_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w5_00003a3552_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w6_00003a3567_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w6_00003a3567_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w7_00003a3582_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w7_00003a3582_00003a_00003amem[32'd1] = $signed(32'd48);

   end

endmodule