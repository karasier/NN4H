`timescale 1ps/1ps

module _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3( clk, rst, req, _00003a1175, _00003a1176, ack__layer, _00003a1177, _00003a1092, _00003a1093, _00003a1094, _00003a1095, _00003a1096, _00003a1097, _00003a1098, _00003a1099 ); 
   input clk;
   input rst;
   input req;
   input signed[7:0] _00003a1175;
   input signed[7:0] _00003a1176;
   output ack__layer;
   inout [0:0] _00003a1177;
   inout signed[7:0] _00003a1092;
   inout signed[7:0] _00003a1093;
   inout signed[7:0] _00003a1094;
   inout signed[7:0] _00003a1095;
   inout signed[7:0] _00003a1096;
   inout signed[7:0] _00003a1097;
   inout signed[7:0] _00003a1098;
   inout signed[7:0] _00003a1099;
   wire req__mac;
   reg ack;
   reg ack__mac;
   reg ack__add;
   wire signed[7:0] _00003a1341;
   reg _00003a1339;
   reg [0:0] _00003a1340;
   reg signed[7:0] _00003a1454;
   reg signed[7:0] _00003a1455;
   reg signed[7:0] _00003a1456;
   reg signed[7:0] _00003a1457;
   reg signed[7:0] _00003a1458;
   reg signed[7:0] _00003a1459;
   reg signed[7:0] _00003a1460;
   reg signed[7:0] _00003a1461;
   wire signed[7:0] _00003a1356;
   reg _00003a1354;
   reg [0:0] _00003a1355;
   wire signed[7:0] _00003a1371;
   reg _00003a1369;
   reg [0:0] _00003a1370;
   wire signed[7:0] _00003a1386;
   reg _00003a1384;
   reg [0:0] _00003a1385;
   wire signed[7:0] _00003a1401;
   reg _00003a1399;
   reg [0:0] _00003a1400;
   wire signed[7:0] _00003a1416;
   reg _00003a1414;
   reg [0:0] _00003a1415;
   wire signed[7:0] _00003a1431;
   reg _00003a1429;
   reg [0:0] _00003a1430;
   wire signed[7:0] _00003a1446;
   reg _00003a1444;
   reg [0:0] _00003a1445;
   wire signed[7:0] _00003a1549;
   wire _00003a1550;
   reg _00003a1547;
   reg [0:0] _00003a1548;
   reg signed[7:0] _00003a1667;
   reg signed[7:0] _00003a1668;
   reg signed[7:0] _00003a1669;
   reg signed[7:0] _00003a1670;
   reg signed[7:0] _00003a1671;
   reg signed[7:0] _00003a1672;
   reg signed[7:0] _00003a1673;
   reg signed[7:0] _00003a1674;
   wire signed[7:0] _00003a1564;
   wire _00003a1565;
   reg _00003a1562;
   reg [0:0] _00003a1563;
   wire signed[7:0] _00003a1579;
   wire _00003a1580;
   reg _00003a1577;
   reg [0:0] _00003a1578;
   wire signed[7:0] _00003a1594;
   wire _00003a1595;
   reg _00003a1592;
   reg [0:0] _00003a1593;
   wire signed[7:0] _00003a1609;
   wire _00003a1610;
   reg _00003a1607;
   reg [0:0] _00003a1608;
   wire signed[7:0] _00003a1624;
   wire _00003a1625;
   reg _00003a1622;
   reg [0:0] _00003a1623;
   wire signed[7:0] _00003a1639;
   wire _00003a1640;
   reg _00003a1637;
   reg [0:0] _00003a1638;
   wire signed[7:0] _00003a1654;
   wire _00003a1655;
   reg _00003a1652;
   reg [0:0] _00003a1653;
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
   wire channel__w0_00003a1332_00003a_00003atrig__r;
   reg signed[7:0] channel__w0_00003a1332_00003a_00003adbus__r;
   wire [0:0] channel__w0_00003a1332_00003a_00003aabus__r;
   wire signed[7:0] channel__w0_00003a1332_00003a_00003amem  :0[0:1];
   wire channel__w1_00003a1347_00003a_00003atrig__r;
   reg signed[7:0] channel__w1_00003a1347_00003a_00003adbus__r;
   wire [0:0] channel__w1_00003a1347_00003a_00003aabus__r;
   wire signed[7:0] channel__w1_00003a1347_00003a_00003amem  :0[0:1];
   wire channel__w2_00003a1362_00003a_00003atrig__r;
   reg signed[7:0] channel__w2_00003a1362_00003a_00003adbus__r;
   wire [0:0] channel__w2_00003a1362_00003a_00003aabus__r;
   wire signed[7:0] channel__w2_00003a1362_00003a_00003amem  :0[0:1];
   wire channel__w3_00003a1377_00003a_00003atrig__r;
   reg signed[7:0] channel__w3_00003a1377_00003a_00003adbus__r;
   wire [0:0] channel__w3_00003a1377_00003a_00003aabus__r;
   wire signed[7:0] channel__w3_00003a1377_00003a_00003amem  :0[0:1];
   wire channel__w4_00003a1392_00003a_00003atrig__r;
   reg signed[7:0] channel__w4_00003a1392_00003a_00003adbus__r;
   wire [0:0] channel__w4_00003a1392_00003a_00003aabus__r;
   wire signed[7:0] channel__w4_00003a1392_00003a_00003amem  :0[0:1];
   wire channel__w5_00003a1407_00003a_00003atrig__r;
   reg signed[7:0] channel__w5_00003a1407_00003a_00003adbus__r;
   wire [0:0] channel__w5_00003a1407_00003a_00003aabus__r;
   wire signed[7:0] channel__w5_00003a1407_00003a_00003amem  :0[0:1];
   wire channel__w6_00003a1422_00003a_00003atrig__r;
   reg signed[7:0] channel__w6_00003a1422_00003a_00003adbus__r;
   wire [0:0] channel__w6_00003a1422_00003a_00003aabus__r;
   wire signed[7:0] channel__w6_00003a1422_00003a_00003amem  :0[0:1];
   wire channel__w7_00003a1437_00003a_00003atrig__r;
   reg signed[7:0] channel__w7_00003a1437_00003a_00003adbus__r;
   wire [0:0] channel__w7_00003a1437_00003a_00003aabus__r;
   wire signed[7:0] channel__w7_00003a1437_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__0;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__1;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__2;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__3;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__4;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__5;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__6;
   wire signed[7:0] channel__accum_00003a1452_00003a_00003areg__7;
   wire [2:0] channel__accum_00003a1452_00003a_00003arinc_00003a1482_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a1452_00003a_00003awinc_00003a1493_00003a_00003aabus__w;
   wire [2:0] channel__accum_00003a1452_00003a_00003ardec_00003a1504_00003a_00003aabus__r;
   wire [2:0] channel__accum_00003a1452_00003a_00003awdec_00003a1515_00003a_00003aabus__w;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv0;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv1;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv2;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv3;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv4;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv5;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv6;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003alv7;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav0;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav1;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav2;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav3;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav4;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav5;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav6;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003aav7;
   reg signed[7:0] mac__n1_00003a1526_00003a_00003arv;
   reg mac__n1_00003a1526_00003a_00003alvok0;
   reg mac__n1_00003a1526_00003a_00003alvok1;
   reg mac__n1_00003a1526_00003a_00003alvok2;
   reg mac__n1_00003a1526_00003a_00003alvok3;
   reg mac__n1_00003a1526_00003a_00003alvok4;
   reg mac__n1_00003a1526_00003a_00003alvok5;
   reg mac__n1_00003a1526_00003a_00003alvok6;
   reg mac__n1_00003a1526_00003a_00003alvok7;
   reg mac__n1_00003a1526_00003a_00003arvok;
   reg mac__n1_00003a1526_00003a_00003awok0;
   reg mac__n1_00003a1526_00003a_00003awok1;
   reg mac__n1_00003a1526_00003a_00003awok2;
   reg mac__n1_00003a1526_00003a_00003awok3;
   reg mac__n1_00003a1526_00003a_00003awok4;
   reg mac__n1_00003a1526_00003a_00003awok5;
   reg mac__n1_00003a1526_00003a_00003awok6;
   reg mac__n1_00003a1526_00003a_00003awok7;
   reg mac__n1_00003a1526_00003a_00003arun;
   wire channel__b0_00003a1545_00003a_00003atrig__r;
   reg signed[7:0] channel__b0_00003a1545_00003a_00003adbus__r;
   wire [0:0] channel__b0_00003a1545_00003a_00003aabus__r;
   reg signed[7:0] channel__b0_00003a1545_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b1_00003a1560_00003a_00003atrig__r;
   reg signed[7:0] channel__b1_00003a1560_00003a_00003adbus__r;
   wire [0:0] channel__b1_00003a1560_00003a_00003aabus__r;
   reg signed[7:0] channel__b1_00003a1560_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b2_00003a1575_00003a_00003atrig__r;
   reg signed[7:0] channel__b2_00003a1575_00003a_00003adbus__r;
   wire [0:0] channel__b2_00003a1575_00003a_00003aabus__r;
   reg signed[7:0] channel__b2_00003a1575_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b3_00003a1590_00003a_00003atrig__r;
   reg signed[7:0] channel__b3_00003a1590_00003a_00003adbus__r;
   wire [0:0] channel__b3_00003a1590_00003a_00003aabus__r;
   reg signed[7:0] channel__b3_00003a1590_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b4_00003a1605_00003a_00003atrig__r;
   reg signed[7:0] channel__b4_00003a1605_00003a_00003adbus__r;
   wire [0:0] channel__b4_00003a1605_00003a_00003aabus__r;
   reg signed[7:0] channel__b4_00003a1605_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b5_00003a1620_00003a_00003atrig__r;
   reg signed[7:0] channel__b5_00003a1620_00003a_00003adbus__r;
   wire [0:0] channel__b5_00003a1620_00003a_00003aabus__r;
   reg signed[7:0] channel__b5_00003a1620_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b6_00003a1635_00003a_00003atrig__r;
   reg signed[7:0] channel__b6_00003a1635_00003a_00003adbus__r;
   wire [0:0] channel__b6_00003a1635_00003a_00003aabus__r;
   reg signed[7:0] channel__b6_00003a1635_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire channel__b7_00003a1650_00003a_00003atrig__r;
   reg signed[7:0] channel__b7_00003a1650_00003a_00003adbus__r;
   wire [0:0] channel__b7_00003a1650_00003a_00003aabus__r;
   reg signed[7:0] channel__b7_00003a1650_00003a_00003amem  :0[0:0] = $signed(-32'd11);
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__0;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__1;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__2;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__3;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__4;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__5;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__6;
   wire signed[7:0] channel__z_00003a1665_00003a_00003areg__7;
   wire [2:0] channel__z_00003a1665_00003a_00003arinc_00003a1695_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a1665_00003a_00003awinc_00003a1705_00003a_00003aabus__w;
   wire [2:0] channel__z_00003a1665_00003a_00003ardec_00003a1715_00003a_00003aabus__r;
   wire [2:0] channel__z_00003a1665_00003a_00003awdec_00003a1726_00003a_00003aabus__w;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv0;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv1;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv2;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv3;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv4;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv5;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv6;
   reg signed[7:0] add__n_00003a1737_00003a_00003alv7;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv0;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv1;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv2;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv3;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv4;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv5;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv6;
   reg signed[7:0] add__n_00003a1737_00003a_00003arv7;
   reg add__n_00003a1737_00003a_00003alvok0;
   reg add__n_00003a1737_00003a_00003alvok1;
   reg add__n_00003a1737_00003a_00003alvok2;
   reg add__n_00003a1737_00003a_00003alvok3;
   reg add__n_00003a1737_00003a_00003alvok4;
   reg add__n_00003a1737_00003a_00003alvok5;
   reg add__n_00003a1737_00003a_00003alvok6;
   reg add__n_00003a1737_00003a_00003alvok7;
   reg add__n_00003a1737_00003a_00003arvok0;
   reg add__n_00003a1737_00003a_00003arvok1;
   reg add__n_00003a1737_00003a_00003arvok2;
   reg add__n_00003a1737_00003a_00003arvok3;
   reg add__n_00003a1737_00003a_00003arvok4;
   reg add__n_00003a1737_00003a_00003arvok5;
   reg add__n_00003a1737_00003a_00003arvok6;
   reg add__n_00003a1737_00003a_00003arvok7;
   reg add__n_00003a1737_00003a_00003arun;
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

   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003acounter_00003aT00 counter(.clk(_00005e_0000602096),.ack(_00005e_0000602097),.rst(_00005e_0000602098),.ack__mac(_00005e_0000602099));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc0_00003aT00 func0(.z__value(_00005e_0000602100),.a(_00005e_0000602101));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc1_00003aT00 func1(.z__value(_00005e_0000602102),.a(_00005e_0000602103));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc2_00003aT3 func2(.z__value(_00005e_0000602558),.a(_00005e_0000602559));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc3_00003aT3 func3(.z__value(_00005e_0000602560),.a(_00005e_0000602561));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc4_00003aT3 func4(.z__value(_00005e_0000602562),.a(_00005e_0000602563));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc5_00003aT3 func5(.z__value(_00005e_0000602564),.a(_00005e_0000602565));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc6_00003aT3 func6(.z__value(_00005e_0000602566),.a(_00005e_0000602567));
   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0_00003a_00003alayer1_00003aT3_00003a_00003afunc7_00003aT3 func7(.z__value(_00005e_0000602568),.a(_00005e_0000602569));
   assign req__mac = (req & ~ack__mac);

   assign _00005e_0000602096 = clk;

   assign _00005e_0000602097 = ack;

   assign _00005e_0000602098 = rst;

   assign ack__mac = _00005e_0000602099;

   assign _00003a1550 = rst;

   assign _00003a1565 = rst;

   assign _00003a1580 = rst;

   assign _00003a1595 = rst;

   assign _00003a1610 = rst;

   assign _00003a1625 = rst;

   assign _00003a1640 = rst;

   assign _00003a1655 = rst;

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

   assign _00003a1341 = channel__w0_00003a1332_00003a_00003adbus__r;

   assign _00003a1339 = channel__w0_00003a1332_00003a_00003atrig__r;

   assign _00003a1340 = channel__w0_00003a1332_00003a_00003aabus__r;

   assign _00003a1356 = channel__w1_00003a1347_00003a_00003adbus__r;

   assign _00003a1354 = channel__w1_00003a1347_00003a_00003atrig__r;

   assign _00003a1355 = channel__w1_00003a1347_00003a_00003aabus__r;

   assign _00003a1371 = channel__w2_00003a1362_00003a_00003adbus__r;

   assign _00003a1369 = channel__w2_00003a1362_00003a_00003atrig__r;

   assign _00003a1370 = channel__w2_00003a1362_00003a_00003aabus__r;

   assign _00003a1386 = channel__w3_00003a1377_00003a_00003adbus__r;

   assign _00003a1384 = channel__w3_00003a1377_00003a_00003atrig__r;

   assign _00003a1385 = channel__w3_00003a1377_00003a_00003aabus__r;

   assign _00003a1401 = channel__w4_00003a1392_00003a_00003adbus__r;

   assign _00003a1399 = channel__w4_00003a1392_00003a_00003atrig__r;

   assign _00003a1400 = channel__w4_00003a1392_00003a_00003aabus__r;

   assign _00003a1416 = channel__w5_00003a1407_00003a_00003adbus__r;

   assign _00003a1414 = channel__w5_00003a1407_00003a_00003atrig__r;

   assign _00003a1415 = channel__w5_00003a1407_00003a_00003aabus__r;

   assign _00003a1431 = channel__w6_00003a1422_00003a_00003adbus__r;

   assign _00003a1429 = channel__w6_00003a1422_00003a_00003atrig__r;

   assign _00003a1430 = channel__w6_00003a1422_00003a_00003aabus__r;

   assign _00003a1446 = channel__w7_00003a1437_00003a_00003adbus__r;

   assign _00003a1444 = channel__w7_00003a1437_00003a_00003atrig__r;

   assign _00003a1445 = channel__w7_00003a1437_00003a_00003aabus__r;

   assign _00003a1454 = channel__accum_00003a1452_00003a_00003areg__0;

   assign _00003a1455 = channel__accum_00003a1452_00003a_00003areg__1;

   assign _00003a1456 = channel__accum_00003a1452_00003a_00003areg__2;

   assign _00003a1457 = channel__accum_00003a1452_00003a_00003areg__3;

   assign _00003a1458 = channel__accum_00003a1452_00003a_00003areg__4;

   assign _00003a1459 = channel__accum_00003a1452_00003a_00003areg__5;

   assign _00003a1460 = channel__accum_00003a1452_00003a_00003areg__6;

   assign _00003a1461 = channel__accum_00003a1452_00003a_00003areg__7;

   assign _00003a1549 = channel__b0_00003a1545_00003a_00003adbus__r;

   assign _00003a1547 = channel__b0_00003a1545_00003a_00003atrig__r;

   assign _00003a1548 = channel__b0_00003a1545_00003a_00003aabus__r;

   assign _00003a1564 = channel__b1_00003a1560_00003a_00003adbus__r;

   assign _00003a1562 = channel__b1_00003a1560_00003a_00003atrig__r;

   assign _00003a1563 = channel__b1_00003a1560_00003a_00003aabus__r;

   assign _00003a1579 = channel__b2_00003a1575_00003a_00003adbus__r;

   assign _00003a1577 = channel__b2_00003a1575_00003a_00003atrig__r;

   assign _00003a1578 = channel__b2_00003a1575_00003a_00003aabus__r;

   assign _00003a1594 = channel__b3_00003a1590_00003a_00003adbus__r;

   assign _00003a1592 = channel__b3_00003a1590_00003a_00003atrig__r;

   assign _00003a1593 = channel__b3_00003a1590_00003a_00003aabus__r;

   assign _00003a1609 = channel__b4_00003a1605_00003a_00003adbus__r;

   assign _00003a1607 = channel__b4_00003a1605_00003a_00003atrig__r;

   assign _00003a1608 = channel__b4_00003a1605_00003a_00003aabus__r;

   assign _00003a1624 = channel__b5_00003a1620_00003a_00003adbus__r;

   assign _00003a1622 = channel__b5_00003a1620_00003a_00003atrig__r;

   assign _00003a1623 = channel__b5_00003a1620_00003a_00003aabus__r;

   assign _00003a1639 = channel__b6_00003a1635_00003a_00003adbus__r;

   assign _00003a1637 = channel__b6_00003a1635_00003a_00003atrig__r;

   assign _00003a1638 = channel__b6_00003a1635_00003a_00003aabus__r;

   assign _00003a1654 = channel__b7_00003a1650_00003a_00003adbus__r;

   assign _00003a1652 = channel__b7_00003a1650_00003a_00003atrig__r;

   assign _00003a1653 = channel__b7_00003a1650_00003a_00003aabus__r;

   assign _00003a1667 = channel__z_00003a1665_00003a_00003areg__0;

   assign _00003a1668 = channel__z_00003a1665_00003a_00003areg__1;

   assign _00003a1669 = channel__z_00003a1665_00003a_00003areg__2;

   assign _00003a1670 = channel__z_00003a1665_00003a_00003areg__3;

   assign _00003a1671 = channel__z_00003a1665_00003a_00003areg__4;

   assign _00003a1672 = channel__z_00003a1665_00003a_00003areg__5;

   assign _00003a1673 = channel__z_00003a1665_00003a_00003areg__6;

   assign _00003a1674 = channel__z_00003a1665_00003a_00003areg__7;

   always @( posedge clk ) begin

      if (rst) begin
         ack <= 32'd0;
         ack__mac <= 32'd0;
         ack__add <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      if (ack__add) begin
         value__z0 <= _00003a1667;
         flag__z0 <= 32'd1;
         value__z1 <= _00003a1668;
         flag__z1 <= 32'd1;
         value__z2 <= _00003a1669;
         flag__z2 <= 32'd1;
         value__z3 <= _00003a1670;
         flag__z3 <= 32'd1;
         value__z4 <= _00003a1671;
         flag__z4 <= 32'd1;
         value__z5 <= _00003a1672;
         flag__z5 <= 32'd1;
         value__z6 <= _00003a1673;
         flag__z6 <= 32'd1;
         value__z7 <= _00003a1674;
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
         _00003a1092 <= value__a0;
         ack__a0 <= 32'd1;
         _00003a1093 <= value__a1;
         ack__a1 <= 32'd1;
         _00003a1094 <= value__a2;
         ack__a2 <= 32'd1;
         _00003a1095 <= value__a3;
         ack__a3 <= 32'd1;
         _00003a1096 <= value__a4;
         ack__a4 <= 32'd1;
         _00003a1097 <= value__a5;
         ack__a5 <= 32'd1;
         _00003a1098 <= value__a6;
         ack__a6 <= 32'd1;
         _00003a1099 <= value__a7;
         ack__a7 <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__w0_00003a1332_00003a_00003adbus__r <= channel__w0_00003a1332_00003a_00003amem[channel__w0_00003a1332_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w1_00003a1347_00003a_00003adbus__r <= channel__w1_00003a1347_00003a_00003amem[channel__w1_00003a1347_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w2_00003a1362_00003a_00003adbus__r <= channel__w2_00003a1362_00003a_00003amem[channel__w2_00003a1362_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w3_00003a1377_00003a_00003adbus__r <= channel__w3_00003a1377_00003a_00003amem[channel__w3_00003a1377_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w4_00003a1392_00003a_00003adbus__r <= channel__w4_00003a1392_00003a_00003amem[channel__w4_00003a1392_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w5_00003a1407_00003a_00003adbus__r <= channel__w5_00003a1407_00003a_00003amem[channel__w5_00003a1407_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w6_00003a1422_00003a_00003adbus__r <= channel__w6_00003a1422_00003a_00003amem[channel__w6_00003a1422_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__w7_00003a1437_00003a_00003adbus__r <= channel__w7_00003a1437_00003a_00003amem[channel__w7_00003a1437_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a1445 <= -32'd1;
         _00003a1444 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1430 <= -32'd1;
         _00003a1429 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1415 <= -32'd1;
         _00003a1414 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1400 <= -32'd1;
         _00003a1399 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1385 <= -32'd1;
         _00003a1384 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1370 <= -32'd1;
         _00003a1369 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1355 <= -32'd1;
         _00003a1354 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1340 <= -32'd1;
         _00003a1339 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a1177 <= 32'd0;
      end

      ack <= 32'd0;

      mac__n1_00003a1526_00003a_00003arun <= 32'd0;

      if (~mac__n1_00003a1526_00003a_00003arun) begin
         mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
         mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
         mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
      end

      if ((req__mac | mac__n1_00003a1526_00003a_00003arun)) begin
         mac__n1_00003a1526_00003a_00003arun <= 32'd1;
         if (~mac__n1_00003a1526_00003a_00003arvok) begin
            if ((rst == 32'd0)) begin
               case(_00003a1177)
                  32'd0: mac__n1_00003a1526_00003a_00003arv <= _00003a1175;
                  32'd1: mac__n1_00003a1526_00003a_00003arv <= _00003a1176;
               endcase
               mac__n1_00003a1526_00003a_00003arvok <= 32'd1;
               _00003a1177 <= ((_00003a1177 + 32'd1) == 32'd2) == 1 ? (_00003a1177 + 32'd1) : 32'd0;
            end
         end
         if (~mac__n1_00003a1526_00003a_00003alvok0) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1339 == 32'd1)) begin
                  _00003a1339 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv0 <= _00003a1341;
                  mac__n1_00003a1526_00003a_00003alvok0 <= 32'd1;
               end
               else begin
                  _00003a1340 <= ((_00003a1340 + 32'd1) == 32'd2) == 1 ? (_00003a1340 + 32'd1) : 32'd0;
                  _00003a1339 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok0 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok0)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav0 <= (mac__n1_00003a1526_00003a_00003aav0 + (($signed(mac__n1_00003a1526_00003a_00003alv0) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1454 <= ((mac__n1_00003a1526_00003a_00003aav0 + (($signed(mac__n1_00003a1526_00003a_00003alv0) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv0) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok1) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1354 == 32'd1)) begin
                  _00003a1354 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv1 <= _00003a1356;
                  mac__n1_00003a1526_00003a_00003alvok1 <= 32'd1;
               end
               else begin
                  _00003a1355 <= ((_00003a1355 + 32'd1) == 32'd2) == 1 ? (_00003a1355 + 32'd1) : 32'd0;
                  _00003a1354 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok1 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok1)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav1 <= (mac__n1_00003a1526_00003a_00003aav1 + (($signed(mac__n1_00003a1526_00003a_00003alv1) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1455 <= ((mac__n1_00003a1526_00003a_00003aav1 + (($signed(mac__n1_00003a1526_00003a_00003alv1) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv1) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok2) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1369 == 32'd1)) begin
                  _00003a1369 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv2 <= _00003a1371;
                  mac__n1_00003a1526_00003a_00003alvok2 <= 32'd1;
               end
               else begin
                  _00003a1370 <= ((_00003a1370 + 32'd1) == 32'd2) == 1 ? (_00003a1370 + 32'd1) : 32'd0;
                  _00003a1369 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok2 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok2)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav2 <= (mac__n1_00003a1526_00003a_00003aav2 + (($signed(mac__n1_00003a1526_00003a_00003alv2) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1456 <= ((mac__n1_00003a1526_00003a_00003aav2 + (($signed(mac__n1_00003a1526_00003a_00003alv2) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv2) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok3) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1384 == 32'd1)) begin
                  _00003a1384 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv3 <= _00003a1386;
                  mac__n1_00003a1526_00003a_00003alvok3 <= 32'd1;
               end
               else begin
                  _00003a1385 <= ((_00003a1385 + 32'd1) == 32'd2) == 1 ? (_00003a1385 + 32'd1) : 32'd0;
                  _00003a1384 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok3 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok3)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav3 <= (mac__n1_00003a1526_00003a_00003aav3 + (($signed(mac__n1_00003a1526_00003a_00003alv3) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1457 <= ((mac__n1_00003a1526_00003a_00003aav3 + (($signed(mac__n1_00003a1526_00003a_00003alv3) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv3) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok4) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1399 == 32'd1)) begin
                  _00003a1399 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv4 <= _00003a1401;
                  mac__n1_00003a1526_00003a_00003alvok4 <= 32'd1;
               end
               else begin
                  _00003a1400 <= ((_00003a1400 + 32'd1) == 32'd2) == 1 ? (_00003a1400 + 32'd1) : 32'd0;
                  _00003a1399 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok4 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok4)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav4 <= (mac__n1_00003a1526_00003a_00003aav4 + (($signed(mac__n1_00003a1526_00003a_00003alv4) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1458 <= ((mac__n1_00003a1526_00003a_00003aav4 + (($signed(mac__n1_00003a1526_00003a_00003alv4) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv4) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok5) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1414 == 32'd1)) begin
                  _00003a1414 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv5 <= _00003a1416;
                  mac__n1_00003a1526_00003a_00003alvok5 <= 32'd1;
               end
               else begin
                  _00003a1415 <= ((_00003a1415 + 32'd1) == 32'd2) == 1 ? (_00003a1415 + 32'd1) : 32'd0;
                  _00003a1414 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok5 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok5)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav5 <= (mac__n1_00003a1526_00003a_00003aav5 + (($signed(mac__n1_00003a1526_00003a_00003alv5) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1459 <= ((mac__n1_00003a1526_00003a_00003aav5 + (($signed(mac__n1_00003a1526_00003a_00003alv5) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv5) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok6) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1429 == 32'd1)) begin
                  _00003a1429 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv6 <= _00003a1431;
                  mac__n1_00003a1526_00003a_00003alvok6 <= 32'd1;
               end
               else begin
                  _00003a1430 <= ((_00003a1430 + 32'd1) == 32'd2) == 1 ? (_00003a1430 + 32'd1) : 32'd0;
                  _00003a1429 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok6 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok6)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav6 <= (mac__n1_00003a1526_00003a_00003aav6 + (($signed(mac__n1_00003a1526_00003a_00003alv6) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1460 <= ((mac__n1_00003a1526_00003a_00003aav6 + (($signed(mac__n1_00003a1526_00003a_00003alv6) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv6) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
         if (~mac__n1_00003a1526_00003a_00003alvok7) begin
            if ((rst == 32'd0)) begin
               if ((_00003a1444 == 32'd1)) begin
                  _00003a1444 <= 32'd0;
                  mac__n1_00003a1526_00003a_00003alv7 <= _00003a1446;
                  mac__n1_00003a1526_00003a_00003alvok7 <= 32'd1;
               end
               else begin
                  _00003a1445 <= ((_00003a1445 + 32'd1) == 32'd2) == 1 ? (_00003a1445 + 32'd1) : 32'd0;
                  _00003a1444 <= 32'd1;
               end
            end
         end
         if (((mac__n1_00003a1526_00003a_00003alvok7 & mac__n1_00003a1526_00003a_00003arvok) & ~mac__n1_00003a1526_00003a_00003awok7)) begin
            ack <= 32'd1;
            mac__n1_00003a1526_00003a_00003arun <= 32'd0;
            mac__n1_00003a1526_00003a_00003aav7 <= (mac__n1_00003a1526_00003a_00003aav7 + (($signed(mac__n1_00003a1526_00003a_00003alv7) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            _00003a1461 <= ((mac__n1_00003a1526_00003a_00003aav7 + (($signed(mac__n1_00003a1526_00003a_00003alv7) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4)) + (($signed(mac__n1_00003a1526_00003a_00003alv7) * mac__n1_00003a1526_00003a_00003arv) >> 32'd4));
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd1;
         end
         if ((((((((mac__n1_00003a1526_00003a_00003awok0 & mac__n1_00003a1526_00003a_00003awok1) & mac__n1_00003a1526_00003a_00003awok2) & mac__n1_00003a1526_00003a_00003awok3) & mac__n1_00003a1526_00003a_00003awok4) & mac__n1_00003a1526_00003a_00003awok5) & mac__n1_00003a1526_00003a_00003awok6) & mac__n1_00003a1526_00003a_00003awok7)) begin
            mac__n1_00003a1526_00003a_00003awok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003awok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok0 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok1 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok2 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok3 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok4 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok5 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok6 <= 32'd0;
            mac__n1_00003a1526_00003a_00003alvok7 <= 32'd0;
            mac__n1_00003a1526_00003a_00003arvok <= 32'd0;
         end
      end
      else begin
         mac__n1_00003a1526_00003a_00003aav0 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav1 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav2 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav3 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav4 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav5 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav6 <= 32'd0;
         mac__n1_00003a1526_00003a_00003aav7 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      channel__b0_00003a1545_00003a_00003adbus__r <= channel__b0_00003a1545_00003a_00003amem[channel__b0_00003a1545_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b1_00003a1560_00003a_00003adbus__r <= channel__b1_00003a1560_00003a_00003amem[channel__b1_00003a1560_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b2_00003a1575_00003a_00003adbus__r <= channel__b2_00003a1575_00003a_00003amem[channel__b2_00003a1575_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b3_00003a1590_00003a_00003adbus__r <= channel__b3_00003a1590_00003a_00003amem[channel__b3_00003a1590_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b4_00003a1605_00003a_00003adbus__r <= channel__b4_00003a1605_00003a_00003amem[channel__b4_00003a1605_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b5_00003a1620_00003a_00003adbus__r <= channel__b5_00003a1620_00003a_00003amem[channel__b5_00003a1620_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b6_00003a1635_00003a_00003adbus__r <= channel__b6_00003a1635_00003a_00003amem[channel__b6_00003a1635_00003a_00003aabus__r];

   end

   always @( negedge clk ) begin

      channel__b7_00003a1650_00003a_00003adbus__r <= channel__b7_00003a1650_00003a_00003amem[channel__b7_00003a1650_00003a_00003aabus__r];

   end

   always @( posedge clk ) begin

      _00003a1652 <= 32'd0;

      _00003a1637 <= 32'd0;

      _00003a1622 <= 32'd0;

      _00003a1607 <= 32'd0;

      _00003a1592 <= 32'd0;

      _00003a1577 <= 32'd0;

      _00003a1562 <= 32'd0;

      _00003a1547 <= 32'd0;

      ack__add <= 32'd0;

      add__n_00003a1737_00003a_00003arun <= 32'd0;

      if ((ack__mac | add__n_00003a1737_00003a_00003arun)) begin
         add__n_00003a1737_00003a_00003arun <= 32'd1;
         add__n_00003a1737_00003a_00003alv0 <= _00003a1454;
         add__n_00003a1737_00003a_00003alvok0 <= 32'd1;
         if ((_00003a1550 == 32'd0)) begin
            if ((_00003a1547 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv0 <= _00003a1549;
               _00003a1547 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok0 <= 32'd1;
            end
            else begin
               _00003a1548 <= 32'd0;
               _00003a1547 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok0 & add__n_00003a1737_00003a_00003arvok0)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1667 <= (add__n_00003a1737_00003a_00003alv0 + add__n_00003a1737_00003a_00003arv0);
         end
         add__n_00003a1737_00003a_00003alv1 <= _00003a1455;
         add__n_00003a1737_00003a_00003alvok1 <= 32'd1;
         if ((_00003a1565 == 32'd0)) begin
            if ((_00003a1562 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv1 <= _00003a1564;
               _00003a1562 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok1 <= 32'd1;
            end
            else begin
               _00003a1563 <= 32'd0;
               _00003a1562 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok1 & add__n_00003a1737_00003a_00003arvok1)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1668 <= (add__n_00003a1737_00003a_00003alv1 + add__n_00003a1737_00003a_00003arv1);
         end
         add__n_00003a1737_00003a_00003alv2 <= _00003a1456;
         add__n_00003a1737_00003a_00003alvok2 <= 32'd1;
         if ((_00003a1580 == 32'd0)) begin
            if ((_00003a1577 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv2 <= _00003a1579;
               _00003a1577 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok2 <= 32'd1;
            end
            else begin
               _00003a1578 <= 32'd0;
               _00003a1577 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok2 & add__n_00003a1737_00003a_00003arvok2)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1669 <= (add__n_00003a1737_00003a_00003alv2 + add__n_00003a1737_00003a_00003arv2);
         end
         add__n_00003a1737_00003a_00003alv3 <= _00003a1457;
         add__n_00003a1737_00003a_00003alvok3 <= 32'd1;
         if ((_00003a1595 == 32'd0)) begin
            if ((_00003a1592 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv3 <= _00003a1594;
               _00003a1592 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok3 <= 32'd1;
            end
            else begin
               _00003a1593 <= 32'd0;
               _00003a1592 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok3 & add__n_00003a1737_00003a_00003arvok3)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1670 <= (add__n_00003a1737_00003a_00003alv3 + add__n_00003a1737_00003a_00003arv3);
         end
         add__n_00003a1737_00003a_00003alv4 <= _00003a1458;
         add__n_00003a1737_00003a_00003alvok4 <= 32'd1;
         if ((_00003a1610 == 32'd0)) begin
            if ((_00003a1607 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv4 <= _00003a1609;
               _00003a1607 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok4 <= 32'd1;
            end
            else begin
               _00003a1608 <= 32'd0;
               _00003a1607 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok4 & add__n_00003a1737_00003a_00003arvok4)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1671 <= (add__n_00003a1737_00003a_00003alv4 + add__n_00003a1737_00003a_00003arv4);
         end
         add__n_00003a1737_00003a_00003alv5 <= _00003a1459;
         add__n_00003a1737_00003a_00003alvok5 <= 32'd1;
         if ((_00003a1625 == 32'd0)) begin
            if ((_00003a1622 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv5 <= _00003a1624;
               _00003a1622 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok5 <= 32'd1;
            end
            else begin
               _00003a1623 <= 32'd0;
               _00003a1622 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok5 & add__n_00003a1737_00003a_00003arvok5)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1672 <= (add__n_00003a1737_00003a_00003alv5 + add__n_00003a1737_00003a_00003arv5);
         end
         add__n_00003a1737_00003a_00003alv6 <= _00003a1460;
         add__n_00003a1737_00003a_00003alvok6 <= 32'd1;
         if ((_00003a1640 == 32'd0)) begin
            if ((_00003a1637 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv6 <= _00003a1639;
               _00003a1637 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok6 <= 32'd1;
            end
            else begin
               _00003a1638 <= 32'd0;
               _00003a1637 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok6 & add__n_00003a1737_00003a_00003arvok6)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1673 <= (add__n_00003a1737_00003a_00003alv6 + add__n_00003a1737_00003a_00003arv6);
         end
         add__n_00003a1737_00003a_00003alv7 <= _00003a1461;
         add__n_00003a1737_00003a_00003alvok7 <= 32'd1;
         if ((_00003a1655 == 32'd0)) begin
            if ((_00003a1652 == 32'd1)) begin
               add__n_00003a1737_00003a_00003arv7 <= _00003a1654;
               _00003a1652 <= 32'd0;
               add__n_00003a1737_00003a_00003arvok7 <= 32'd1;
            end
            else begin
               _00003a1653 <= 32'd0;
               _00003a1652 <= 32'd1;
            end
         end
         if ((add__n_00003a1737_00003a_00003alvok7 & add__n_00003a1737_00003a_00003arvok7)) begin
            add__n_00003a1737_00003a_00003arun <= 32'd0;
            ack__add <= 32'd1;
            _00003a1674 <= (add__n_00003a1737_00003a_00003alv7 + add__n_00003a1737_00003a_00003arv7);
         end
      end
      else begin
         add__n_00003a1737_00003a_00003alvok0 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok0 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok1 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok1 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok2 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok2 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok3 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok3 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok4 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok4 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok5 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok5 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok6 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok6 <= 32'd0;
         add__n_00003a1737_00003a_00003alvok7 <= 32'd0;
         add__n_00003a1737_00003a_00003arvok7 <= 32'd0;
      end

   end

   initial begin

      channel__w0_00003a1332_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w0_00003a1332_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w1_00003a1347_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w1_00003a1347_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w2_00003a1362_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w2_00003a1362_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w3_00003a1377_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w3_00003a1377_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w4_00003a1392_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w4_00003a1392_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w5_00003a1407_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w5_00003a1407_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w6_00003a1422_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w6_00003a1422_00003a_00003amem[32'd1] = $signed(32'd48);

      channel__w7_00003a1437_00003a_00003amem[32'd0] = $signed(-32'd52);

      channel__w7_00003a1437_00003a_00003amem[32'd1] = $signed(32'd48);

   end

endmodule