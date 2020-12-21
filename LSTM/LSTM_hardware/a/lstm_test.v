`timescale 1ps/1ps

module _____00003aT0( ); 
   reg clk;
   reg rst;
   reg req;
   reg fill;
   wire ack__fill__forget__sig;
   wire ack__network__forget__sig;
   wire ack__fill__input__sig;
   wire ack__network__input__sig;
   wire ack__fill__input__tanh;
   wire ack__network__input__tanh;
   wire ack__fill__output__sig;
   wire ack__network__output__sig;
   wire req__mul__forg;
   reg ack__mul__forg;
   wire req__mul__ing;
   reg ack__mul__ing;
   wire req__sum__ing;
   reg ack__sum__ing;
   wire req__mul__outg;
   reg ack__mul__outg;
   reg [7:0] init__idx;
   reg signed[7:0] _00003a42;
   reg signed[7:0] _00003a43;
   reg signed[7:0] _00003a44;
   reg signed[7:0] _00003a45;
   reg signed[7:0] _00003a46;
   reg signed[7:0] _00003a47;
   reg signed[7:0] _00003a48;
   reg signed[7:0] _00003a49;
   reg [2:0] _00003a50;
   reg signed[7:0] _00003a114;
   reg signed[7:0] _00003a115;
   reg signed[7:0] _00003a116;
   reg signed[7:0] _00003a117;
   reg signed[7:0] _00003a118;
   reg signed[7:0] _00003a119;
   reg signed[7:0] _00003a120;
   reg signed[7:0] _00003a121;
   reg [2:0] _00003a122;
   wire signed[7:0] _00003a104;
   wire signed[7:0] _00003a105;
   wire signed[7:0] _00003a106;
   wire signed[7:0] _00003a107;
   wire signed[7:0] _00003a108;
   wire signed[7:0] _00003a109;
   wire signed[7:0] _00003a110;
   wire signed[7:0] _00003a111;
   reg [2:0] _00003a112;
   reg _00003a163;
   reg [2:0] _00003a164;
   reg signed[7:0] _00003a165;
   reg _00003a192;
   reg [2:0] _00003a193;
   reg signed[7:0] _00003a194;
   reg _00003a221;
   reg [2:0] _00003a222;
   reg signed[7:0] _00003a223;
   reg _00003a250;
   reg [2:0] _00003a251;
   reg signed[7:0] _00003a252;
   wire signed[7:0] _00003a3;
   wire signed[7:0] _00003a4;
   wire signed[7:0] _00003a5;
   wire signed[7:0] _00003a6;
   wire signed[7:0] _00003a7;
   wire signed[7:0] _00003a8;
   wire signed[7:0] _00003a9;
   wire signed[7:0] _00003a10;
   wire signed[7:0] _00003a265;
   wire signed[7:0] _00003a266;
   wire signed[7:0] _00003a267;
   wire signed[7:0] _00003a268;
   wire signed[7:0] _00003a269;
   wire signed[7:0] _00003a270;
   wire signed[7:0] _00003a271;
   wire signed[7:0] _00003a272;
   reg signed[7:0] _00003a553;
   reg signed[7:0] _00003a554;
   reg signed[7:0] _00003a555;
   reg signed[7:0] _00003a556;
   reg signed[7:0] _00003a557;
   reg signed[7:0] _00003a558;
   reg signed[7:0] _00003a559;
   reg signed[7:0] _00003a560;
   wire signed[7:0] _00003a337;
   wire signed[7:0] _00003a338;
   wire signed[7:0] _00003a339;
   wire signed[7:0] _00003a340;
   wire signed[7:0] _00003a341;
   wire signed[7:0] _00003a342;
   wire signed[7:0] _00003a343;
   wire signed[7:0] _00003a344;
   wire signed[7:0] _00003a409;
   wire signed[7:0] _00003a410;
   wire signed[7:0] _00003a411;
   wire signed[7:0] _00003a412;
   wire signed[7:0] _00003a413;
   wire signed[7:0] _00003a414;
   wire signed[7:0] _00003a415;
   wire signed[7:0] _00003a416;
   reg signed[7:0] _00003a625;
   reg signed[7:0] _00003a626;
   reg signed[7:0] _00003a627;
   reg signed[7:0] _00003a628;
   reg signed[7:0] _00003a629;
   reg signed[7:0] _00003a630;
   reg signed[7:0] _00003a631;
   reg signed[7:0] _00003a632;
   reg signed[7:0] _00003a697;
   reg signed[7:0] _00003a698;
   reg signed[7:0] _00003a699;
   reg signed[7:0] _00003a700;
   reg signed[7:0] _00003a701;
   reg signed[7:0] _00003a702;
   reg signed[7:0] _00003a703;
   reg signed[7:0] _00003a704;
   wire signed[7:0] _00003a481;
   wire signed[7:0] _00003a482;
   wire signed[7:0] _00003a483;
   wire signed[7:0] _00003a484;
   wire signed[7:0] _00003a485;
   wire signed[7:0] _00003a486;
   wire signed[7:0] _00003a487;
   wire signed[7:0] _00003a488;
   wire signed[7:0] _00003a841;
   wire signed[7:0] _00003a842;
   wire signed[7:0] _00003a843;
   wire signed[7:0] _00003a844;
   wire signed[7:0] _00003a845;
   wire signed[7:0] _00003a846;
   wire signed[7:0] _00003a847;
   wire signed[7:0] _00003a848;
   reg signed[7:0] _00003a985;
   reg signed[7:0] _00003a986;
   reg signed[7:0] _00003a987;
   reg signed[7:0] _00003a988;
   reg signed[7:0] _00003a989;
   reg signed[7:0] _00003a990;
   reg signed[7:0] _00003a991;
   reg signed[7:0] _00003a992;
   wire signed[7:0] _00003a726;
   wire signed[7:0] _00003a727;
   wire signed[7:0] _00003a728;
   wire signed[7:0] _00003a729;
   wire signed[7:0] _00003a730;
   wire signed[7:0] _00003a731;
   wire signed[7:0] _00003a732;
   wire signed[7:0] _00003a733;
   reg [2:0] _00003a734;
   reg signed[7:0] _00003a952;
   reg signed[7:0] _00003a953;
   reg signed[7:0] _00003a954;
   reg signed[7:0] _00003a955;
   reg signed[7:0] _00003a956;
   reg signed[7:0] _00003a957;
   reg signed[7:0] _00003a958;
   reg signed[7:0] _00003a959;
   reg [2:0] _00003a960;
   reg signed[7:0] _00003a808;
   reg signed[7:0] _00003a809;
   reg signed[7:0] _00003a810;
   reg signed[7:0] _00003a811;
   reg signed[7:0] _00003a812;
   reg signed[7:0] _00003a813;
   reg signed[7:0] _00003a814;
   reg signed[7:0] _00003a815;
   reg [2:0] _00003a816;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__0;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__1;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__2;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__3;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__4;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__5;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__6;
   wire signed[7:0] ram__inputs__c_00003a1_00003a_00003areg__7;
   wire [2:0] ram__inputs__c_00003a1_00003a_00003arinc_00003a31_00003a_00003aabus__r;
   wire [2:0] ram__inputs__c_00003a1_00003a_00003awinc_00003a41_00003a_00003aabus__w;
   wire [2:0] ram__inputs__c_00003a1_00003a_00003ardec_00003a51_00003a_00003aabus__r;
   wire [2:0] ram__inputs__c_00003a1_00003a_00003awdec_00003a62_00003a_00003aabus__w;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__0;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__1;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__2;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__3;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__4;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__5;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__6;
   wire signed[7:0] ram__inputs_00003a73_00003a_00003areg__7;
   wire [2:0] ram__inputs_00003a73_00003a_00003arinc_00003a103_00003a_00003aabus__r;
   wire [2:0] ram__inputs_00003a73_00003a_00003awinc_00003a113_00003a_00003aabus__w;
   wire [2:0] ram__inputs_00003a73_00003a_00003ardec_00003a123_00003a_00003aabus__r;
   wire [2:0] ram__inputs_00003a73_00003a_00003awdec_00003a134_00003a_00003aabus__w;
   wire ram__input__forg_00003a147_00003a_00003atrig__r;
   wire ram__input__forg_00003a147_00003a_00003atrig__w;
   reg signed[7:0] ram__input__forg_00003a147_00003a_00003adbus__r;
   wire signed[7:0] ram__input__forg_00003a147_00003a_00003adbus__w;
   wire [2:0] ram__input__forg_00003a147_00003a_00003aabus__r;
   wire [2:0] ram__input__forg_00003a147_00003a_00003aabus__w;
   wire signed[7:0] ram__input__forg_00003a147_00003a_00003amem  :0[0:7];
   wire ram__input__ingsig_00003a176_00003a_00003atrig__r;
   wire ram__input__ingsig_00003a176_00003a_00003atrig__w;
   reg signed[7:0] ram__input__ingsig_00003a176_00003a_00003adbus__r;
   wire signed[7:0] ram__input__ingsig_00003a176_00003a_00003adbus__w;
   wire [2:0] ram__input__ingsig_00003a176_00003a_00003aabus__r;
   wire [2:0] ram__input__ingsig_00003a176_00003a_00003aabus__w;
   wire signed[7:0] ram__input__ingsig_00003a176_00003a_00003amem  :0[0:7];
   wire ram__input__ingtanh_00003a205_00003a_00003atrig__r;
   wire ram__input__ingtanh_00003a205_00003a_00003atrig__w;
   reg signed[7:0] ram__input__ingtanh_00003a205_00003a_00003adbus__r;
   wire signed[7:0] ram__input__ingtanh_00003a205_00003a_00003adbus__w;
   wire [2:0] ram__input__ingtanh_00003a205_00003a_00003aabus__r;
   wire [2:0] ram__input__ingtanh_00003a205_00003a_00003aabus__w;
   wire signed[7:0] ram__input__ingtanh_00003a205_00003a_00003amem  :0[0:7];
   wire ram__input__outg_00003a234_00003a_00003atrig__r;
   wire ram__input__outg_00003a234_00003a_00003atrig__w;
   reg signed[7:0] ram__input__outg_00003a234_00003a_00003adbus__r;
   wire signed[7:0] ram__input__outg_00003a234_00003a_00003adbus__w;
   wire [2:0] ram__input__outg_00003a234_00003a_00003aabus__r;
   wire [2:0] ram__input__outg_00003a234_00003a_00003aabus__w;
   wire signed[7:0] ram__input__outg_00003a234_00003a_00003amem  :0[0:7];
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__0;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__1;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__2;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__3;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__4;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__5;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__6;
   wire signed[7:0] ram__output__forg_00003a263_00003a_00003areg__7;
   wire [2:0] ram__output__forg_00003a263_00003a_00003arinc_00003a293_00003a_00003aabus__r;
   wire [2:0] ram__output__forg_00003a263_00003a_00003awinc_00003a303_00003a_00003aabus__w;
   wire [2:0] ram__output__forg_00003a263_00003a_00003ardec_00003a313_00003a_00003aabus__r;
   wire [2:0] ram__output__forg_00003a263_00003a_00003awdec_00003a324_00003a_00003aabus__w;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__0;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__1;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__2;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__3;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__4;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__5;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__6;
   wire signed[7:0] ram__output__ingsig_00003a335_00003a_00003areg__7;
   wire [2:0] ram__output__ingsig_00003a335_00003a_00003arinc_00003a365_00003a_00003aabus__r;
   wire [2:0] ram__output__ingsig_00003a335_00003a_00003awinc_00003a375_00003a_00003aabus__w;
   wire [2:0] ram__output__ingsig_00003a335_00003a_00003ardec_00003a385_00003a_00003aabus__r;
   wire [2:0] ram__output__ingsig_00003a335_00003a_00003awdec_00003a396_00003a_00003aabus__w;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__0;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__1;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__2;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__3;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__4;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__5;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__6;
   wire signed[7:0] ram__output__ingtanh_00003a407_00003a_00003areg__7;
   wire [2:0] ram__output__ingtanh_00003a407_00003a_00003arinc_00003a437_00003a_00003aabus__r;
   wire [2:0] ram__output__ingtanh_00003a407_00003a_00003awinc_00003a447_00003a_00003aabus__w;
   wire [2:0] ram__output__ingtanh_00003a407_00003a_00003ardec_00003a457_00003a_00003aabus__r;
   wire [2:0] ram__output__ingtanh_00003a407_00003a_00003awdec_00003a468_00003a_00003aabus__w;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__0;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__1;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__2;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__3;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__4;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__5;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__6;
   wire signed[7:0] ram__output__outg_00003a479_00003a_00003areg__7;
   wire [2:0] ram__output__outg_00003a479_00003a_00003arinc_00003a509_00003a_00003aabus__r;
   wire [2:0] ram__output__outg_00003a479_00003a_00003awinc_00003a519_00003a_00003aabus__w;
   wire [2:0] ram__output__outg_00003a479_00003a_00003ardec_00003a529_00003a_00003aabus__r;
   wire [2:0] ram__output__outg_00003a479_00003a_00003awdec_00003a540_00003a_00003aabus__w;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__0;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__1;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__2;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__3;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__4;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__5;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__6;
   wire signed[7:0] ram__output__mul__forg_00003a551_00003a_00003areg__7;
   wire [2:0] ram__output__mul__forg_00003a551_00003a_00003arinc_00003a581_00003a_00003aabus__r;
   wire [2:0] ram__output__mul__forg_00003a551_00003a_00003awinc_00003a591_00003a_00003aabus__w;
   wire [2:0] ram__output__mul__forg_00003a551_00003a_00003ardec_00003a601_00003a_00003aabus__r;
   wire [2:0] ram__output__mul__forg_00003a551_00003a_00003awdec_00003a612_00003a_00003aabus__w;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__0;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__1;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__2;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__3;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__4;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__5;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__6;
   wire signed[7:0] ram__output__mul__ing_00003a623_00003a_00003areg__7;
   wire [2:0] ram__output__mul__ing_00003a623_00003a_00003arinc_00003a653_00003a_00003aabus__r;
   wire [2:0] ram__output__mul__ing_00003a623_00003a_00003awinc_00003a663_00003a_00003aabus__w;
   wire [2:0] ram__output__mul__ing_00003a623_00003a_00003ardec_00003a673_00003a_00003aabus__r;
   wire [2:0] ram__output__mul__ing_00003a623_00003a_00003awdec_00003a684_00003a_00003aabus__w;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__0;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__1;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__2;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__3;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__4;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__5;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__6;
   wire signed[7:0] ram__output__sum__ing_00003a695_00003a_00003areg__7;
   wire [2:0] ram__output__sum__ing_00003a695_00003a_00003arinc_00003a725_00003a_00003aabus__r;
   wire [2:0] ram__output__sum__ing_00003a695_00003a_00003awinc_00003a735_00003a_00003aabus__w;
   wire [2:0] ram__output__sum__ing_00003a695_00003a_00003ardec_00003a745_00003a_00003aabus__r;
   wire [2:0] ram__output__sum__ing_00003a695_00003a_00003awdec_00003a756_00003a_00003aabus__w;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__0;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__1;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__2;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__3;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__4;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__5;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__6;
   wire signed[7:0] ram__input__tanh__outg_00003a767_00003a_00003areg__7;
   wire [2:0] ram__input__tanh__outg_00003a767_00003a_00003arinc_00003a797_00003a_00003aabus__r;
   wire [2:0] ram__input__tanh__outg_00003a767_00003a_00003awinc_00003a807_00003a_00003aabus__w;
   wire [2:0] ram__input__tanh__outg_00003a767_00003a_00003ardec_00003a817_00003a_00003aabus__r;
   wire [2:0] ram__input__tanh__outg_00003a767_00003a_00003awdec_00003a828_00003a_00003aabus__w;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__0;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__1;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__2;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__3;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__4;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__5;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__6;
   wire signed[7:0] ram__output__tanh__outg_00003a839_00003a_00003areg__7;
   wire [2:0] ram__output__tanh__outg_00003a839_00003a_00003arinc_00003a869_00003a_00003aabus__r;
   wire [2:0] ram__output__tanh__outg_00003a839_00003a_00003awinc_00003a879_00003a_00003aabus__w;
   wire [2:0] ram__output__tanh__outg_00003a839_00003a_00003ardec_00003a889_00003a_00003aabus__r;
   wire [2:0] ram__output__tanh__outg_00003a839_00003a_00003awdec_00003a900_00003a_00003aabus__w;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__0;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__1;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__2;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__3;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__4;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__5;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__6;
   wire signed[7:0] ram__outputs__c_00003a911_00003a_00003areg__7;
   wire [2:0] ram__outputs__c_00003a911_00003a_00003arinc_00003a941_00003a_00003aabus__r;
   wire [2:0] ram__outputs__c_00003a911_00003a_00003awinc_00003a951_00003a_00003aabus__w;
   wire [2:0] ram__outputs__c_00003a911_00003a_00003ardec_00003a961_00003a_00003aabus__r;
   wire [2:0] ram__outputs__c_00003a911_00003a_00003awdec_00003a972_00003a_00003aabus__w;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__0;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__1;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__2;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__3;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__4;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__5;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__6;
   wire signed[7:0] ram__outputs__h_00003a983_00003a_00003areg__7;
   wire [2:0] ram__outputs__h_00003a983_00003a_00003arinc_00003a1013_00003a_00003aabus__r;
   wire [2:0] ram__outputs__h_00003a983_00003a_00003awinc_00003a1023_00003a_00003aabus__w;
   wire [2:0] ram__outputs__h_00003a983_00003a_00003ardec_00003a1033_00003a_00003aabus__r;
   wire [2:0] ram__outputs__h_00003a983_00003a_00003awdec_00003a1044_00003a_00003aabus__w;
   reg duplicator_00003a1055_00003a_00003ain__ack;
   reg duplicator_00003a1055_00003a_00003ain__req;
   reg duplicator_00003a1055_00003a_00003aout__ack0;
   reg duplicator_00003a1055_00003a_00003aout__ack1;
   reg duplicator_00003a1055_00003a_00003aout__ack2;
   reg duplicator_00003a1055_00003a_00003aout__ack3;
   reg signed[7:0] duplicator_00003a1055_00003a_00003adata;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv0;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv1;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv2;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv3;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv4;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv5;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv6;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv7;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv0;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv1;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv2;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv3;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv4;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv5;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv6;
   reg signed[7:0] mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv7;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok0;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok1;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok2;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok3;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok4;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok5;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok6;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok7;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok0;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok1;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok2;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok3;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok4;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok5;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok6;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok7;
   reg mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv0;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv1;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv2;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv3;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv4;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv5;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv6;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv7;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv0;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv1;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv2;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv3;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv4;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv5;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv6;
   reg signed[7:0] mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv7;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok0;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok1;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok2;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok3;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok4;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok5;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok6;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok7;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok0;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok1;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok2;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok3;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok4;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok5;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok6;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok7;
   reg mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv0;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv1;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv2;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv3;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv4;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv5;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv6;
   reg signed[7:0] add__n_00003a3979_00003a_00003alv7;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv0;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv1;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv2;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv3;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv4;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv5;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv6;
   reg signed[7:0] add__n_00003a3979_00003a_00003arv7;
   reg add__n_00003a3979_00003a_00003alvok0;
   reg add__n_00003a3979_00003a_00003alvok1;
   reg add__n_00003a3979_00003a_00003alvok2;
   reg add__n_00003a3979_00003a_00003alvok3;
   reg add__n_00003a3979_00003a_00003alvok4;
   reg add__n_00003a3979_00003a_00003alvok5;
   reg add__n_00003a3979_00003a_00003alvok6;
   reg add__n_00003a3979_00003a_00003alvok7;
   reg add__n_00003a3979_00003a_00003arvok0;
   reg add__n_00003a3979_00003a_00003arvok1;
   reg add__n_00003a3979_00003a_00003arvok2;
   reg add__n_00003a3979_00003a_00003arvok3;
   reg add__n_00003a3979_00003a_00003arvok4;
   reg add__n_00003a3979_00003a_00003arvok5;
   reg add__n_00003a3979_00003a_00003arvok6;
   reg add__n_00003a3979_00003a_00003arvok7;
   reg add__n_00003a3979_00003a_00003arun;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv0;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv1;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv2;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv3;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv4;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv5;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv6;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv7;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv0;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv1;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv2;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv3;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv4;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv5;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv6;
   reg signed[7:0] mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv7;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok0;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok1;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok2;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok3;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok4;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok5;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok6;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok7;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok0;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok1;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok2;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok3;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok4;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok5;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok6;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok7;
   reg mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun;
   reg duplicator_00003a4018_00003a_00003ain__ack;
   reg duplicator_00003a4018_00003a_00003ain__req;
   reg duplicator_00003a4018_00003a_00003aout__ack0;
   reg duplicator_00003a4018_00003a_00003aout__ack1;
   reg signed[7:0] duplicator_00003a4018_00003a_00003adata;
   wire _00005e_0000600;
   wire _00005e_0000601;
   wire _00005e_0000602;
   wire _00005e_0000603;
   wire _00005e_0000604;
   wire _00005e_0000605;
   wire _00005e_0000606;
   wire _00005e_0000607;
   wire _00005e_0000608;
   wire _00005e_0000609;
   wire _00005e_00006010;
   wire _00005e_00006011;
   wire _00005e_00006012;
   wire _00005e_00006013;
   wire _00005e_00006014;
   wire _00005e_00006015;
   wire _00005e_00006016;
   wire _00005e_00006017;
   wire _00005e_00006018;
   wire _00005e_00006019;
   wire _00005e_00006020;
   wire _00005e_00006021;
   wire _00005e_00006022;
   wire _00005e_00006023;
   wire signed[7:0] _00005e_00006024;
   wire _00005e_00006025;
   wire [2:0] _00005e_00006026;
   wire signed[7:0] _00005e_00006027;
   wire _00005e_00006028;
   wire [2:0] _00005e_00006029;
   wire signed[7:0] _00005e_00006030;
   wire _00005e_00006031;
   wire [2:0] _00005e_00006032;
   wire signed[7:0] _00005e_00006033;
   wire _00005e_00006034;
   wire [2:0] _00005e_00006035;
   wire signed[7:0] _00005e_00006036;
   wire signed[7:0] _00005e_00006037;
   wire signed[7:0] _00005e_00006038;
   wire signed[7:0] _00005e_00006039;
   wire signed[7:0] _00005e_00006040;
   wire signed[7:0] _00005e_00006041;
   wire signed[7:0] _00005e_00006042;
   wire signed[7:0] _00005e_00006043;
   wire [2:0] _00005e_00006044;
   wire signed[7:0] _00005e_00006045;
   wire signed[7:0] _00005e_00006046;
   wire signed[7:0] _00005e_00006047;
   wire signed[7:0] _00005e_00006048;
   wire signed[7:0] _00005e_00006049;
   wire signed[7:0] _00005e_00006050;
   wire signed[7:0] _00005e_00006051;
   wire signed[7:0] _00005e_00006052;
   wire [2:0] _00005e_00006053;
   wire signed[7:0] _00005e_00006054;
   wire signed[7:0] _00005e_00006055;
   wire signed[7:0] _00005e_00006056;
   wire signed[7:0] _00005e_00006057;
   wire signed[7:0] _00005e_00006058;
   wire signed[7:0] _00005e_00006059;
   wire signed[7:0] _00005e_00006060;
   wire signed[7:0] _00005e_00006061;
   wire [2:0] _00005e_00006062;
   wire signed[7:0] _00005e_00006063;
   wire signed[7:0] _00005e_00006064;
   wire signed[7:0] _00005e_00006065;
   wire signed[7:0] _00005e_00006066;
   wire signed[7:0] _00005e_00006067;
   wire signed[7:0] _00005e_00006068;
   wire signed[7:0] _00005e_00006069;
   wire signed[7:0] _00005e_00006070;
   wire [2:0] _00005e_00006071;

   _____00003aT0_00003a_00003aforget__sig__nn_00003aT0 forget__sig__nn(.clk(_00005e_0000600),.rst(_00005e_0000601),.req(_00005e_0000602),.fill(_00005e_0000603),._00003a161(_00005e_00006024),.ack__fill(_00005e_0000604),.ack__network(_00005e_0000605),._00003a159(_00005e_00006025),._00003a160(_00005e_00006026),._00003a304(_00005e_00006036),._00003a305(_00005e_00006037),._00003a306(_00005e_00006038),._00003a307(_00005e_00006039),._00003a308(_00005e_00006040),._00003a309(_00005e_00006041),._00003a310(_00005e_00006042),._00003a311(_00005e_00006043),._00003a312(_00005e_00006044));
   _____00003aT0_00003a_00003ainput__sig__nn_00003aT0 input__sig__nn(.clk(_00005e_0000606),.rst(_00005e_0000607),.req(_00005e_0000608),.fill(_00005e_0000609),._00003a190(_00005e_00006027),.ack__fill(_00005e_00006010),.ack__network(_00005e_00006011),._00003a188(_00005e_00006028),._00003a189(_00005e_00006029),._00003a376(_00005e_00006045),._00003a377(_00005e_00006046),._00003a378(_00005e_00006047),._00003a379(_00005e_00006048),._00003a380(_00005e_00006049),._00003a381(_00005e_00006050),._00003a382(_00005e_00006051),._00003a383(_00005e_00006052),._00003a384(_00005e_00006053));
   _____00003aT0_00003a_00003ainput__tanh__nn_00003aT0 input__tanh__nn(.clk(_00005e_00006012),.rst(_00005e_00006013),.req(_00005e_00006014),.fill(_00005e_00006015),._00003a219(_00005e_00006030),.ack__fill(_00005e_00006016),.ack__network(_00005e_00006017),._00003a217(_00005e_00006031),._00003a218(_00005e_00006032),._00003a448(_00005e_00006054),._00003a449(_00005e_00006055),._00003a450(_00005e_00006056),._00003a451(_00005e_00006057),._00003a452(_00005e_00006058),._00003a453(_00005e_00006059),._00003a454(_00005e_00006060),._00003a455(_00005e_00006061),._00003a456(_00005e_00006062));
   _____00003aT0_00003a_00003aoutput__sig__nn_00003aT0 output__sig__nn(.clk(_00005e_00006018),.rst(_00005e_00006019),.req(_00005e_00006020),.fill(_00005e_00006021),._00003a248(_00005e_00006033),.ack__fill(_00005e_00006022),.ack__network(_00005e_00006023),._00003a246(_00005e_00006034),._00003a247(_00005e_00006035),._00003a520(_00005e_00006063),._00003a521(_00005e_00006064),._00003a522(_00005e_00006065),._00003a523(_00005e_00006066),._00003a524(_00005e_00006067),._00003a525(_00005e_00006068),._00003a526(_00005e_00006069),._00003a527(_00005e_00006070),._00003a528(_00005e_00006071));
   assign _00005e_0000600 = clk;

   assign _00005e_0000601 = rst;

   assign _00005e_0000602 = req;

   assign _00005e_0000603 = fill;

   assign ack__fill__forget__sig = _00005e_0000604;

   assign ack__network__forget__sig = _00005e_0000605;

   assign _00005e_0000606 = clk;

   assign _00005e_0000607 = rst;

   assign _00005e_0000608 = req;

   assign _00005e_0000609 = fill;

   assign ack__fill__input__sig = _00005e_00006010;

   assign ack__network__input__sig = _00005e_00006011;

   assign _00005e_00006012 = clk;

   assign _00005e_00006013 = rst;

   assign _00005e_00006014 = req;

   assign _00005e_00006015 = fill;

   assign ack__fill__input__tanh = _00005e_00006016;

   assign ack__network__input__tanh = _00005e_00006017;

   assign _00005e_00006018 = clk;

   assign _00005e_00006019 = rst;

   assign _00005e_00006020 = req;

   assign _00005e_00006021 = fill;

   assign ack__fill__output__sig = _00005e_00006022;

   assign ack__network__output__sig = _00005e_00006023;

   assign req__mul__forg = ack__network__forget__sig;

   assign req__mul__ing = (ack__network__input__sig & ack__network__input__tanh);

   assign req__sum__ing = (ack__mul__forg & ack__mul__ing);

   assign _00003a42 = ram__inputs__c_00003a1_00003a_00003areg__0;

   assign _00003a43 = ram__inputs__c_00003a1_00003a_00003areg__1;

   assign _00003a44 = ram__inputs__c_00003a1_00003a_00003areg__2;

   assign _00003a45 = ram__inputs__c_00003a1_00003a_00003areg__3;

   assign _00003a46 = ram__inputs__c_00003a1_00003a_00003areg__4;

   assign _00003a47 = ram__inputs__c_00003a1_00003a_00003areg__5;

   assign _00003a48 = ram__inputs__c_00003a1_00003a_00003areg__6;

   assign _00003a49 = ram__inputs__c_00003a1_00003a_00003areg__7;

   assign _00003a3 = ram__inputs__c_00003a1_00003a_00003areg__0;

   assign _00003a4 = ram__inputs__c_00003a1_00003a_00003areg__1;

   assign _00003a5 = ram__inputs__c_00003a1_00003a_00003areg__2;

   assign _00003a6 = ram__inputs__c_00003a1_00003a_00003areg__3;

   assign _00003a7 = ram__inputs__c_00003a1_00003a_00003areg__4;

   assign _00003a8 = ram__inputs__c_00003a1_00003a_00003areg__5;

   assign _00003a9 = ram__inputs__c_00003a1_00003a_00003areg__6;

   assign _00003a10 = ram__inputs__c_00003a1_00003a_00003areg__7;

   assign _00003a50 = ram__inputs__c_00003a1_00003a_00003awinc_00003a41_00003a_00003aabus__w;

   assign _00003a114 = ram__inputs_00003a73_00003a_00003areg__0;

   assign _00003a115 = ram__inputs_00003a73_00003a_00003areg__1;

   assign _00003a116 = ram__inputs_00003a73_00003a_00003areg__2;

   assign _00003a117 = ram__inputs_00003a73_00003a_00003areg__3;

   assign _00003a118 = ram__inputs_00003a73_00003a_00003areg__4;

   assign _00003a119 = ram__inputs_00003a73_00003a_00003areg__5;

   assign _00003a120 = ram__inputs_00003a73_00003a_00003areg__6;

   assign _00003a121 = ram__inputs_00003a73_00003a_00003areg__7;

   assign _00003a104 = ram__inputs_00003a73_00003a_00003areg__0;

   assign _00003a105 = ram__inputs_00003a73_00003a_00003areg__1;

   assign _00003a106 = ram__inputs_00003a73_00003a_00003areg__2;

   assign _00003a107 = ram__inputs_00003a73_00003a_00003areg__3;

   assign _00003a108 = ram__inputs_00003a73_00003a_00003areg__4;

   assign _00003a109 = ram__inputs_00003a73_00003a_00003areg__5;

   assign _00003a110 = ram__inputs_00003a73_00003a_00003areg__6;

   assign _00003a111 = ram__inputs_00003a73_00003a_00003areg__7;

   assign _00003a112 = ram__inputs_00003a73_00003a_00003arinc_00003a103_00003a_00003aabus__r;

   assign _00003a122 = ram__inputs_00003a73_00003a_00003awinc_00003a113_00003a_00003aabus__w;

   assign _00003a163 = ram__input__forg_00003a147_00003a_00003atrig__w;

   assign _00003a164 = ram__input__forg_00003a147_00003a_00003aabus__w;

   assign _00003a165 = ram__input__forg_00003a147_00003a_00003adbus__w;

   assign _00005e_00006024 = ram__input__forg_00003a147_00003a_00003adbus__r;

   assign _00005e_00006025 = ram__input__forg_00003a147_00003a_00003atrig__r;

   assign _00005e_00006026 = ram__input__forg_00003a147_00003a_00003aabus__r;

   assign _00003a192 = ram__input__ingsig_00003a176_00003a_00003atrig__w;

   assign _00003a193 = ram__input__ingsig_00003a176_00003a_00003aabus__w;

   assign _00003a194 = ram__input__ingsig_00003a176_00003a_00003adbus__w;

   assign _00005e_00006027 = ram__input__ingsig_00003a176_00003a_00003adbus__r;

   assign _00005e_00006028 = ram__input__ingsig_00003a176_00003a_00003atrig__r;

   assign _00005e_00006029 = ram__input__ingsig_00003a176_00003a_00003aabus__r;

   assign _00003a221 = ram__input__ingtanh_00003a205_00003a_00003atrig__w;

   assign _00003a222 = ram__input__ingtanh_00003a205_00003a_00003aabus__w;

   assign _00003a223 = ram__input__ingtanh_00003a205_00003a_00003adbus__w;

   assign _00005e_00006030 = ram__input__ingtanh_00003a205_00003a_00003adbus__r;

   assign _00005e_00006031 = ram__input__ingtanh_00003a205_00003a_00003atrig__r;

   assign _00005e_00006032 = ram__input__ingtanh_00003a205_00003a_00003aabus__r;

   assign _00003a250 = ram__input__outg_00003a234_00003a_00003atrig__w;

   assign _00003a251 = ram__input__outg_00003a234_00003a_00003aabus__w;

   assign _00003a252 = ram__input__outg_00003a234_00003a_00003adbus__w;

   assign _00005e_00006033 = ram__input__outg_00003a234_00003a_00003adbus__r;

   assign _00005e_00006034 = ram__input__outg_00003a234_00003a_00003atrig__r;

   assign _00005e_00006035 = ram__input__outg_00003a234_00003a_00003aabus__r;

   assign _00003a265 = ram__output__forg_00003a263_00003a_00003areg__0;

   assign _00003a266 = ram__output__forg_00003a263_00003a_00003areg__1;

   assign _00003a267 = ram__output__forg_00003a263_00003a_00003areg__2;

   assign _00003a268 = ram__output__forg_00003a263_00003a_00003areg__3;

   assign _00003a269 = ram__output__forg_00003a263_00003a_00003areg__4;

   assign _00003a270 = ram__output__forg_00003a263_00003a_00003areg__5;

   assign _00003a271 = ram__output__forg_00003a263_00003a_00003areg__6;

   assign _00003a272 = ram__output__forg_00003a263_00003a_00003areg__7;

   assign _00005e_00006036 = ram__output__forg_00003a263_00003a_00003areg__0;

   assign _00005e_00006037 = ram__output__forg_00003a263_00003a_00003areg__1;

   assign _00005e_00006038 = ram__output__forg_00003a263_00003a_00003areg__2;

   assign _00005e_00006039 = ram__output__forg_00003a263_00003a_00003areg__3;

   assign _00005e_00006040 = ram__output__forg_00003a263_00003a_00003areg__4;

   assign _00005e_00006041 = ram__output__forg_00003a263_00003a_00003areg__5;

   assign _00005e_00006042 = ram__output__forg_00003a263_00003a_00003areg__6;

   assign _00005e_00006043 = ram__output__forg_00003a263_00003a_00003areg__7;

   assign _00005e_00006044 = ram__output__forg_00003a263_00003a_00003awinc_00003a303_00003a_00003aabus__w;

   assign _00003a337 = ram__output__ingsig_00003a335_00003a_00003areg__0;

   assign _00003a338 = ram__output__ingsig_00003a335_00003a_00003areg__1;

   assign _00003a339 = ram__output__ingsig_00003a335_00003a_00003areg__2;

   assign _00003a340 = ram__output__ingsig_00003a335_00003a_00003areg__3;

   assign _00003a341 = ram__output__ingsig_00003a335_00003a_00003areg__4;

   assign _00003a342 = ram__output__ingsig_00003a335_00003a_00003areg__5;

   assign _00003a343 = ram__output__ingsig_00003a335_00003a_00003areg__6;

   assign _00003a344 = ram__output__ingsig_00003a335_00003a_00003areg__7;

   assign _00005e_00006045 = ram__output__ingsig_00003a335_00003a_00003areg__0;

   assign _00005e_00006046 = ram__output__ingsig_00003a335_00003a_00003areg__1;

   assign _00005e_00006047 = ram__output__ingsig_00003a335_00003a_00003areg__2;

   assign _00005e_00006048 = ram__output__ingsig_00003a335_00003a_00003areg__3;

   assign _00005e_00006049 = ram__output__ingsig_00003a335_00003a_00003areg__4;

   assign _00005e_00006050 = ram__output__ingsig_00003a335_00003a_00003areg__5;

   assign _00005e_00006051 = ram__output__ingsig_00003a335_00003a_00003areg__6;

   assign _00005e_00006052 = ram__output__ingsig_00003a335_00003a_00003areg__7;

   assign _00005e_00006053 = ram__output__ingsig_00003a335_00003a_00003awinc_00003a375_00003a_00003aabus__w;

   assign _00003a409 = ram__output__ingtanh_00003a407_00003a_00003areg__0;

   assign _00003a410 = ram__output__ingtanh_00003a407_00003a_00003areg__1;

   assign _00003a411 = ram__output__ingtanh_00003a407_00003a_00003areg__2;

   assign _00003a412 = ram__output__ingtanh_00003a407_00003a_00003areg__3;

   assign _00003a413 = ram__output__ingtanh_00003a407_00003a_00003areg__4;

   assign _00003a414 = ram__output__ingtanh_00003a407_00003a_00003areg__5;

   assign _00003a415 = ram__output__ingtanh_00003a407_00003a_00003areg__6;

   assign _00003a416 = ram__output__ingtanh_00003a407_00003a_00003areg__7;

   assign _00005e_00006054 = ram__output__ingtanh_00003a407_00003a_00003areg__0;

   assign _00005e_00006055 = ram__output__ingtanh_00003a407_00003a_00003areg__1;

   assign _00005e_00006056 = ram__output__ingtanh_00003a407_00003a_00003areg__2;

   assign _00005e_00006057 = ram__output__ingtanh_00003a407_00003a_00003areg__3;

   assign _00005e_00006058 = ram__output__ingtanh_00003a407_00003a_00003areg__4;

   assign _00005e_00006059 = ram__output__ingtanh_00003a407_00003a_00003areg__5;

   assign _00005e_00006060 = ram__output__ingtanh_00003a407_00003a_00003areg__6;

   assign _00005e_00006061 = ram__output__ingtanh_00003a407_00003a_00003areg__7;

   assign _00005e_00006062 = ram__output__ingtanh_00003a407_00003a_00003awinc_00003a447_00003a_00003aabus__w;

   assign _00003a481 = ram__output__outg_00003a479_00003a_00003areg__0;

   assign _00003a482 = ram__output__outg_00003a479_00003a_00003areg__1;

   assign _00003a483 = ram__output__outg_00003a479_00003a_00003areg__2;

   assign _00003a484 = ram__output__outg_00003a479_00003a_00003areg__3;

   assign _00003a485 = ram__output__outg_00003a479_00003a_00003areg__4;

   assign _00003a486 = ram__output__outg_00003a479_00003a_00003areg__5;

   assign _00003a487 = ram__output__outg_00003a479_00003a_00003areg__6;

   assign _00003a488 = ram__output__outg_00003a479_00003a_00003areg__7;

   assign _00005e_00006063 = ram__output__outg_00003a479_00003a_00003areg__0;

   assign _00005e_00006064 = ram__output__outg_00003a479_00003a_00003areg__1;

   assign _00005e_00006065 = ram__output__outg_00003a479_00003a_00003areg__2;

   assign _00005e_00006066 = ram__output__outg_00003a479_00003a_00003areg__3;

   assign _00005e_00006067 = ram__output__outg_00003a479_00003a_00003areg__4;

   assign _00005e_00006068 = ram__output__outg_00003a479_00003a_00003areg__5;

   assign _00005e_00006069 = ram__output__outg_00003a479_00003a_00003areg__6;

   assign _00005e_00006070 = ram__output__outg_00003a479_00003a_00003areg__7;

   assign _00005e_00006071 = ram__output__outg_00003a479_00003a_00003awinc_00003a519_00003a_00003aabus__w;

   assign _00003a553 = ram__output__mul__forg_00003a551_00003a_00003areg__0;

   assign _00003a554 = ram__output__mul__forg_00003a551_00003a_00003areg__1;

   assign _00003a555 = ram__output__mul__forg_00003a551_00003a_00003areg__2;

   assign _00003a556 = ram__output__mul__forg_00003a551_00003a_00003areg__3;

   assign _00003a557 = ram__output__mul__forg_00003a551_00003a_00003areg__4;

   assign _00003a558 = ram__output__mul__forg_00003a551_00003a_00003areg__5;

   assign _00003a559 = ram__output__mul__forg_00003a551_00003a_00003areg__6;

   assign _00003a560 = ram__output__mul__forg_00003a551_00003a_00003areg__7;

   assign _00003a625 = ram__output__mul__ing_00003a623_00003a_00003areg__0;

   assign _00003a626 = ram__output__mul__ing_00003a623_00003a_00003areg__1;

   assign _00003a627 = ram__output__mul__ing_00003a623_00003a_00003areg__2;

   assign _00003a628 = ram__output__mul__ing_00003a623_00003a_00003areg__3;

   assign _00003a629 = ram__output__mul__ing_00003a623_00003a_00003areg__4;

   assign _00003a630 = ram__output__mul__ing_00003a623_00003a_00003areg__5;

   assign _00003a631 = ram__output__mul__ing_00003a623_00003a_00003areg__6;

   assign _00003a632 = ram__output__mul__ing_00003a623_00003a_00003areg__7;

   assign _00003a697 = ram__output__sum__ing_00003a695_00003a_00003areg__0;

   assign _00003a698 = ram__output__sum__ing_00003a695_00003a_00003areg__1;

   assign _00003a699 = ram__output__sum__ing_00003a695_00003a_00003areg__2;

   assign _00003a700 = ram__output__sum__ing_00003a695_00003a_00003areg__3;

   assign _00003a701 = ram__output__sum__ing_00003a695_00003a_00003areg__4;

   assign _00003a702 = ram__output__sum__ing_00003a695_00003a_00003areg__5;

   assign _00003a703 = ram__output__sum__ing_00003a695_00003a_00003areg__6;

   assign _00003a704 = ram__output__sum__ing_00003a695_00003a_00003areg__7;

   assign _00003a726 = ram__output__sum__ing_00003a695_00003a_00003areg__0;

   assign _00003a727 = ram__output__sum__ing_00003a695_00003a_00003areg__1;

   assign _00003a728 = ram__output__sum__ing_00003a695_00003a_00003areg__2;

   assign _00003a729 = ram__output__sum__ing_00003a695_00003a_00003areg__3;

   assign _00003a730 = ram__output__sum__ing_00003a695_00003a_00003areg__4;

   assign _00003a731 = ram__output__sum__ing_00003a695_00003a_00003areg__5;

   assign _00003a732 = ram__output__sum__ing_00003a695_00003a_00003areg__6;

   assign _00003a733 = ram__output__sum__ing_00003a695_00003a_00003areg__7;

   assign _00003a734 = ram__output__sum__ing_00003a695_00003a_00003arinc_00003a725_00003a_00003aabus__r;

   assign _00003a808 = ram__input__tanh__outg_00003a767_00003a_00003areg__0;

   assign _00003a809 = ram__input__tanh__outg_00003a767_00003a_00003areg__1;

   assign _00003a810 = ram__input__tanh__outg_00003a767_00003a_00003areg__2;

   assign _00003a811 = ram__input__tanh__outg_00003a767_00003a_00003areg__3;

   assign _00003a812 = ram__input__tanh__outg_00003a767_00003a_00003areg__4;

   assign _00003a813 = ram__input__tanh__outg_00003a767_00003a_00003areg__5;

   assign _00003a814 = ram__input__tanh__outg_00003a767_00003a_00003areg__6;

   assign _00003a815 = ram__input__tanh__outg_00003a767_00003a_00003areg__7;

   assign _00003a816 = ram__input__tanh__outg_00003a767_00003a_00003awinc_00003a807_00003a_00003aabus__w;

   assign _00003a841 = ram__output__tanh__outg_00003a839_00003a_00003areg__0;

   assign _00003a842 = ram__output__tanh__outg_00003a839_00003a_00003areg__1;

   assign _00003a843 = ram__output__tanh__outg_00003a839_00003a_00003areg__2;

   assign _00003a844 = ram__output__tanh__outg_00003a839_00003a_00003areg__3;

   assign _00003a845 = ram__output__tanh__outg_00003a839_00003a_00003areg__4;

   assign _00003a846 = ram__output__tanh__outg_00003a839_00003a_00003areg__5;

   assign _00003a847 = ram__output__tanh__outg_00003a839_00003a_00003areg__6;

   assign _00003a848 = ram__output__tanh__outg_00003a839_00003a_00003areg__7;

   assign _00003a952 = ram__outputs__c_00003a911_00003a_00003areg__0;

   assign _00003a953 = ram__outputs__c_00003a911_00003a_00003areg__1;

   assign _00003a954 = ram__outputs__c_00003a911_00003a_00003areg__2;

   assign _00003a955 = ram__outputs__c_00003a911_00003a_00003areg__3;

   assign _00003a956 = ram__outputs__c_00003a911_00003a_00003areg__4;

   assign _00003a957 = ram__outputs__c_00003a911_00003a_00003areg__5;

   assign _00003a958 = ram__outputs__c_00003a911_00003a_00003areg__6;

   assign _00003a959 = ram__outputs__c_00003a911_00003a_00003areg__7;

   assign _00003a960 = ram__outputs__c_00003a911_00003a_00003awinc_00003a951_00003a_00003aabus__w;

   assign _00003a985 = ram__outputs__h_00003a983_00003a_00003areg__0;

   assign _00003a986 = ram__outputs__h_00003a983_00003a_00003areg__1;

   assign _00003a987 = ram__outputs__h_00003a983_00003a_00003areg__2;

   assign _00003a988 = ram__outputs__h_00003a983_00003a_00003areg__3;

   assign _00003a989 = ram__outputs__h_00003a983_00003a_00003areg__4;

   assign _00003a990 = ram__outputs__h_00003a983_00003a_00003areg__5;

   assign _00003a991 = ram__outputs__h_00003a983_00003a_00003areg__6;

   assign _00003a992 = ram__outputs__h_00003a983_00003a_00003areg__7;

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a122 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a50 <= 32'd0;
      end

      if (rst) begin
         init__idx <= 32'd0;
      end

      if (fill) begin
         case(init__idx)
            32'd0: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd16);
                  32'd1: _00003a43 <= $signed(32'd16);
                  32'd2: _00003a44 <= $signed(32'd16);
                  32'd3: _00003a45 <= $signed(32'd16);
                  32'd4: _00003a46 <= $signed(32'd16);
                  32'd5: _00003a47 <= $signed(32'd16);
                  32'd6: _00003a48 <= $signed(32'd16);
                  32'd7: _00003a49 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd8: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd16);
                  32'd1: _00003a115 <= $signed(32'd16);
                  32'd2: _00003a116 <= $signed(32'd16);
                  32'd3: _00003a117 <= $signed(32'd16);
                  32'd4: _00003a118 <= $signed(32'd16);
                  32'd5: _00003a119 <= $signed(32'd16);
                  32'd6: _00003a120 <= $signed(32'd16);
                  32'd7: _00003a121 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd1: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd16);
                  32'd1: _00003a43 <= $signed(32'd16);
                  32'd2: _00003a44 <= $signed(32'd16);
                  32'd3: _00003a45 <= $signed(32'd16);
                  32'd4: _00003a46 <= $signed(32'd16);
                  32'd5: _00003a47 <= $signed(32'd16);
                  32'd6: _00003a48 <= $signed(32'd16);
                  32'd7: _00003a49 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd9: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd16);
                  32'd1: _00003a115 <= $signed(32'd16);
                  32'd2: _00003a116 <= $signed(32'd16);
                  32'd3: _00003a117 <= $signed(32'd16);
                  32'd4: _00003a118 <= $signed(32'd16);
                  32'd5: _00003a119 <= $signed(32'd16);
                  32'd6: _00003a120 <= $signed(32'd16);
                  32'd7: _00003a121 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd2: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd0);
                  32'd1: _00003a43 <= $signed(32'd0);
                  32'd2: _00003a44 <= $signed(32'd0);
                  32'd3: _00003a45 <= $signed(32'd0);
                  32'd4: _00003a46 <= $signed(32'd0);
                  32'd5: _00003a47 <= $signed(32'd0);
                  32'd6: _00003a48 <= $signed(32'd0);
                  32'd7: _00003a49 <= $signed(32'd0);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd10: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd0);
                  32'd1: _00003a115 <= $signed(32'd0);
                  32'd2: _00003a116 <= $signed(32'd0);
                  32'd3: _00003a117 <= $signed(32'd0);
                  32'd4: _00003a118 <= $signed(32'd0);
                  32'd5: _00003a119 <= $signed(32'd0);
                  32'd6: _00003a120 <= $signed(32'd0);
                  32'd7: _00003a121 <= $signed(32'd0);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd3: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd16);
                  32'd1: _00003a43 <= $signed(32'd16);
                  32'd2: _00003a44 <= $signed(32'd16);
                  32'd3: _00003a45 <= $signed(32'd16);
                  32'd4: _00003a46 <= $signed(32'd16);
                  32'd5: _00003a47 <= $signed(32'd16);
                  32'd6: _00003a48 <= $signed(32'd16);
                  32'd7: _00003a49 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd11: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd16);
                  32'd1: _00003a115 <= $signed(32'd16);
                  32'd2: _00003a116 <= $signed(32'd16);
                  32'd3: _00003a117 <= $signed(32'd16);
                  32'd4: _00003a118 <= $signed(32'd16);
                  32'd5: _00003a119 <= $signed(32'd16);
                  32'd6: _00003a120 <= $signed(32'd16);
                  32'd7: _00003a121 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd4: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd0);
                  32'd1: _00003a43 <= $signed(32'd0);
                  32'd2: _00003a44 <= $signed(32'd0);
                  32'd3: _00003a45 <= $signed(32'd0);
                  32'd4: _00003a46 <= $signed(32'd0);
                  32'd5: _00003a47 <= $signed(32'd0);
                  32'd6: _00003a48 <= $signed(32'd0);
                  32'd7: _00003a49 <= $signed(32'd0);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd12: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd0);
                  32'd1: _00003a115 <= $signed(32'd0);
                  32'd2: _00003a116 <= $signed(32'd0);
                  32'd3: _00003a117 <= $signed(32'd0);
                  32'd4: _00003a118 <= $signed(32'd0);
                  32'd5: _00003a119 <= $signed(32'd0);
                  32'd6: _00003a120 <= $signed(32'd0);
                  32'd7: _00003a121 <= $signed(32'd0);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd5: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd16);
                  32'd1: _00003a43 <= $signed(32'd16);
                  32'd2: _00003a44 <= $signed(32'd16);
                  32'd3: _00003a45 <= $signed(32'd16);
                  32'd4: _00003a46 <= $signed(32'd16);
                  32'd5: _00003a47 <= $signed(32'd16);
                  32'd6: _00003a48 <= $signed(32'd16);
                  32'd7: _00003a49 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd13: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd16);
                  32'd1: _00003a115 <= $signed(32'd16);
                  32'd2: _00003a116 <= $signed(32'd16);
                  32'd3: _00003a117 <= $signed(32'd16);
                  32'd4: _00003a118 <= $signed(32'd16);
                  32'd5: _00003a119 <= $signed(32'd16);
                  32'd6: _00003a120 <= $signed(32'd16);
                  32'd7: _00003a121 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd6: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd16);
                  32'd1: _00003a43 <= $signed(32'd16);
                  32'd2: _00003a44 <= $signed(32'd16);
                  32'd3: _00003a45 <= $signed(32'd16);
                  32'd4: _00003a46 <= $signed(32'd16);
                  32'd5: _00003a47 <= $signed(32'd16);
                  32'd6: _00003a48 <= $signed(32'd16);
                  32'd7: _00003a49 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd14: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd16);
                  32'd1: _00003a115 <= $signed(32'd16);
                  32'd2: _00003a116 <= $signed(32'd16);
                  32'd3: _00003a117 <= $signed(32'd16);
                  32'd4: _00003a118 <= $signed(32'd16);
                  32'd5: _00003a119 <= $signed(32'd16);
                  32'd6: _00003a120 <= $signed(32'd16);
                  32'd7: _00003a121 <= $signed(32'd16);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
            32'd7: if ((rst == 32'd0)) begin
               case(_00003a50)
                  32'd0: _00003a42 <= $signed(32'd0);
                  32'd1: _00003a43 <= $signed(32'd0);
                  32'd2: _00003a44 <= $signed(32'd0);
                  32'd3: _00003a45 <= $signed(32'd0);
                  32'd4: _00003a46 <= $signed(32'd0);
                  32'd5: _00003a47 <= $signed(32'd0);
                  32'd6: _00003a48 <= $signed(32'd0);
                  32'd7: _00003a49 <= $signed(32'd0);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a50 <= ((_00003a50 + 32'd1) == 32'd8) == 1 ? (_00003a50 + 32'd1) : 32'd0;
            end
            32'd15: if ((rst == 32'd0)) begin
               case(_00003a122)
                  32'd0: _00003a114 <= $signed(32'd0);
                  32'd1: _00003a115 <= $signed(32'd0);
                  32'd2: _00003a116 <= $signed(32'd0);
                  32'd3: _00003a117 <= $signed(32'd0);
                  32'd4: _00003a118 <= $signed(32'd0);
                  32'd5: _00003a119 <= $signed(32'd0);
                  32'd6: _00003a120 <= $signed(32'd0);
                  32'd7: _00003a121 <= $signed(32'd0);
               endcase
               init__idx <= (init__idx + 32'd1);
               _00003a122 <= ((_00003a122 + 32'd1) == 32'd8) == 1 ? (_00003a122 + 32'd1) : 32'd0;
            end
         endcase
      end

   end

   initial begin

      clk = 32'd0;

      rst = 32'd0;

      req = 32'd0;

      fill = 32'd0;

      #10

      rst = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      rst = 32'd0;

      fill = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      fill = 32'd0;

      clk = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd0;

      req = 32'd1;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

      clk = 32'd1;

      #10

      clk = 32'd0;

      #10

   end

   always @( negedge clk ) begin

      ram__input__forg_00003a147_00003a_00003adbus__r <= ram__input__forg_00003a147_00003a_00003amem[ram__input__forg_00003a147_00003a_00003aabus__r];

      if (ram__input__forg_00003a147_00003a_00003atrig__w) begin
         ram__input__forg_00003a147_00003a_00003amem[ram__input__forg_00003a147_00003a_00003aabus__w] <= ram__input__forg_00003a147_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      ram__input__ingsig_00003a176_00003a_00003adbus__r <= ram__input__ingsig_00003a176_00003a_00003amem[ram__input__ingsig_00003a176_00003a_00003aabus__r];

      if (ram__input__ingsig_00003a176_00003a_00003atrig__w) begin
         ram__input__ingsig_00003a176_00003a_00003amem[ram__input__ingsig_00003a176_00003a_00003aabus__w] <= ram__input__ingsig_00003a176_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      ram__input__ingtanh_00003a205_00003a_00003adbus__r <= ram__input__ingtanh_00003a205_00003a_00003amem[ram__input__ingtanh_00003a205_00003a_00003aabus__r];

      if (ram__input__ingtanh_00003a205_00003a_00003atrig__w) begin
         ram__input__ingtanh_00003a205_00003a_00003amem[ram__input__ingtanh_00003a205_00003a_00003aabus__w] <= ram__input__ingtanh_00003a205_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      ram__input__outg_00003a234_00003a_00003adbus__r <= ram__input__outg_00003a234_00003a_00003amem[ram__input__outg_00003a234_00003a_00003aabus__r];

      if (ram__input__outg_00003a234_00003a_00003atrig__w) begin
         ram__input__outg_00003a234_00003a_00003amem[ram__input__outg_00003a234_00003a_00003aabus__w] <= ram__input__outg_00003a234_00003a_00003adbus__w;
      end

   end

   always @( negedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a251 <= -32'd1;
      end

      _00003a250 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a222 <= -32'd1;
      end

      _00003a221 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a193 <= -32'd1;
      end

      _00003a192 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a164 <= -32'd1;
      end

      _00003a163 <= 32'd0;

      if ((rst == 32'd1)) begin
         _00003a112 <= 32'd0;
      end

      duplicator_00003a1055_00003a_00003ain__req <= 32'd1;

      duplicator_00003a1055_00003a_00003aout__ack0 <= 32'd0;

      duplicator_00003a1055_00003a_00003aout__ack1 <= 32'd0;

      duplicator_00003a1055_00003a_00003aout__ack2 <= 32'd0;

      duplicator_00003a1055_00003a_00003aout__ack3 <= 32'd0;

      if ((duplicator_00003a1055_00003a_00003aout__ack0 == 32'd1)) begin
         duplicator_00003a1055_00003a_00003ain__req <= 32'd0;
      end

      if ((duplicator_00003a1055_00003a_00003aout__ack1 == 32'd1)) begin
         duplicator_00003a1055_00003a_00003ain__req <= 32'd0;
      end

      if ((duplicator_00003a1055_00003a_00003aout__ack2 == 32'd1)) begin
         duplicator_00003a1055_00003a_00003ain__req <= 32'd0;
      end

      if ((duplicator_00003a1055_00003a_00003aout__ack3 == 32'd1)) begin
         duplicator_00003a1055_00003a_00003ain__req <= 32'd0;
      end

      if (duplicator_00003a1055_00003a_00003ain__req) begin
         duplicator_00003a1055_00003a_00003ain__ack <= 32'd0;
         if ((rst == 32'd0)) begin
            case(_00003a112)
               32'd0: duplicator_00003a1055_00003a_00003adata <= _00003a104;
               32'd1: duplicator_00003a1055_00003a_00003adata <= _00003a105;
               32'd2: duplicator_00003a1055_00003a_00003adata <= _00003a106;
               32'd3: duplicator_00003a1055_00003a_00003adata <= _00003a107;
               32'd4: duplicator_00003a1055_00003a_00003adata <= _00003a108;
               32'd5: duplicator_00003a1055_00003a_00003adata <= _00003a109;
               32'd6: duplicator_00003a1055_00003a_00003adata <= _00003a110;
               32'd7: duplicator_00003a1055_00003a_00003adata <= _00003a111;
            endcase
            duplicator_00003a1055_00003a_00003ain__ack <= 32'd1;
            _00003a112 <= ((_00003a112 + 32'd1) == 32'd8) == 1 ? (_00003a112 + 32'd1) : 32'd0;
         end
      end

      if (duplicator_00003a1055_00003a_00003ain__ack) begin
         if ((duplicator_00003a1055_00003a_00003aout__ack0 == 32'd0)) begin
            if ((rst == 32'd0)) begin
               duplicator_00003a1055_00003a_00003aout__ack0 <= 32'd1;
               _00003a164 <= ((_00003a164 + 32'd1) == 32'd8) == 1 ? (_00003a164 + 32'd1) : 32'd0;
               _00003a163 <= 32'd1;
               _00003a165 <= duplicator_00003a1055_00003a_00003adata;
            end
         end
         if ((duplicator_00003a1055_00003a_00003aout__ack1 == 32'd0)) begin
            if ((rst == 32'd0)) begin
               duplicator_00003a1055_00003a_00003aout__ack1 <= 32'd1;
               _00003a193 <= ((_00003a193 + 32'd1) == 32'd8) == 1 ? (_00003a193 + 32'd1) : 32'd0;
               _00003a192 <= 32'd1;
               _00003a194 <= duplicator_00003a1055_00003a_00003adata;
            end
         end
         if ((duplicator_00003a1055_00003a_00003aout__ack2 == 32'd0)) begin
            if ((rst == 32'd0)) begin
               duplicator_00003a1055_00003a_00003aout__ack2 <= 32'd1;
               _00003a222 <= ((_00003a222 + 32'd1) == 32'd8) == 1 ? (_00003a222 + 32'd1) : 32'd0;
               _00003a221 <= 32'd1;
               _00003a223 <= duplicator_00003a1055_00003a_00003adata;
            end
         end
         if ((duplicator_00003a1055_00003a_00003aout__ack3 == 32'd0)) begin
            if ((rst == 32'd0)) begin
               duplicator_00003a1055_00003a_00003aout__ack3 <= 32'd1;
               _00003a251 <= ((_00003a251 + 32'd1) == 32'd8) == 1 ? (_00003a251 + 32'd1) : 32'd0;
               _00003a250 <= 32'd1;
               _00003a252 <= duplicator_00003a1055_00003a_00003adata;
            end
         end
         if ((duplicator_00003a1055_00003a_00003aout__ack3 & (duplicator_00003a1055_00003a_00003aout__ack2 & (duplicator_00003a1055_00003a_00003aout__ack1 & (duplicator_00003a1055_00003a_00003aout__ack0 & 1'b1))))) begin
            duplicator_00003a1055_00003a_00003aout__ack0 <= 32'd0;
            duplicator_00003a1055_00003a_00003aout__ack1 <= 32'd0;
            duplicator_00003a1055_00003a_00003aout__ack2 <= 32'd0;
            duplicator_00003a1055_00003a_00003aout__ack3 <= 32'd0;
         end
      end

   end

   always @( posedge clk ) begin

      ack__mul__forg <= 32'd0;

      mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;

      if ((req__mul__forg | mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun)) begin
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv0 <= _00003a3;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok0 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv0 <= _00003a265;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok0 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok0 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok0)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a553 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv0) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv0) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv1 <= _00003a4;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok1 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv1 <= _00003a266;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok1 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok1 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok1)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a554 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv1) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv1) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv2 <= _00003a5;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok2 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv2 <= _00003a267;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok2 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok2 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok2)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a555 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv2) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv2) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv3 <= _00003a6;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok3 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv3 <= _00003a268;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok3 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok3 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok3)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a556 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv3) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv3) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv4 <= _00003a7;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok4 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv4 <= _00003a269;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok4 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok4 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok4)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a557 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv4) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv4) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv5 <= _00003a8;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok5 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv5 <= _00003a270;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok5 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok5 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok5)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a558 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv5) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv5) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv6 <= _00003a9;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok6 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv6 <= _00003a271;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok6 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok6 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok6)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a559 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv6) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv6) >> 32'd4);
         end
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv7 <= _00003a10;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok7 <= 32'd1;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv7 <= _00003a272;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok7 <= 32'd1;
         if ((mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok7 & mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok7)) begin
            mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arun <= 32'd0;
            ack__mul__forg <= 32'd1;
            _00003a560 <= (($signed(mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alv7) * mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arv7) >> 32'd4);
         end
      end
      else begin
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok0 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok0 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok1 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok1 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok2 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok2 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok3 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok3 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok4 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok4 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok5 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok5 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok6 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok6 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003alvok7 <= 32'd0;
         mul__n_00003a3921_00003a_00003aadd__n_00003a3922_00003a_00003arvok7 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      ack__mul__ing <= 32'd0;

      mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;

      if ((req__mul__ing | mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun)) begin
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv0 <= _00003a337;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok0 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv0 <= _00003a409;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok0 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok0 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok0)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a625 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv0) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv0) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv1 <= _00003a338;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok1 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv1 <= _00003a410;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok1 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok1 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok1)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a626 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv1) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv1) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv2 <= _00003a339;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok2 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv2 <= _00003a411;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok2 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok2 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok2)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a627 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv2) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv2) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv3 <= _00003a340;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok3 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv3 <= _00003a412;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok3 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok3 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok3)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a628 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv3) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv3) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv4 <= _00003a341;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok4 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv4 <= _00003a413;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok4 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok4 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok4)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a629 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv4) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv4) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv5 <= _00003a342;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok5 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv5 <= _00003a414;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok5 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok5 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok5)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a630 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv5) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv5) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv6 <= _00003a343;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok6 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv6 <= _00003a415;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok6 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok6 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok6)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a631 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv6) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv6) >> 32'd4);
         end
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv7 <= _00003a344;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok7 <= 32'd1;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv7 <= _00003a416;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok7 <= 32'd1;
         if ((mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok7 & mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok7)) begin
            mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arun <= 32'd0;
            ack__mul__ing <= 32'd1;
            _00003a632 <= (($signed(mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alv7) * mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arv7) >> 32'd4);
         end
      end
      else begin
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok0 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok0 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok1 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok1 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok2 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok2 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok3 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok3 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok4 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok4 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok5 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok5 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok6 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok6 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003alvok7 <= 32'd0;
         mul__n_00003a3950_00003a_00003aadd__n_00003a3951_00003a_00003arvok7 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      ack__sum__ing <= 32'd0;

      add__n_00003a3979_00003a_00003arun <= 32'd0;

      if ((req__sum__ing | add__n_00003a3979_00003a_00003arun)) begin
         add__n_00003a3979_00003a_00003arun <= 32'd1;
         add__n_00003a3979_00003a_00003alv0 <= _00003a553;
         add__n_00003a3979_00003a_00003alvok0 <= 32'd1;
         add__n_00003a3979_00003a_00003arv0 <= _00003a625;
         add__n_00003a3979_00003a_00003arvok0 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok0 & add__n_00003a3979_00003a_00003arvok0)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a697 <= (add__n_00003a3979_00003a_00003alv0 + add__n_00003a3979_00003a_00003arv0);
         end
         add__n_00003a3979_00003a_00003alv1 <= _00003a554;
         add__n_00003a3979_00003a_00003alvok1 <= 32'd1;
         add__n_00003a3979_00003a_00003arv1 <= _00003a626;
         add__n_00003a3979_00003a_00003arvok1 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok1 & add__n_00003a3979_00003a_00003arvok1)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a698 <= (add__n_00003a3979_00003a_00003alv1 + add__n_00003a3979_00003a_00003arv1);
         end
         add__n_00003a3979_00003a_00003alv2 <= _00003a555;
         add__n_00003a3979_00003a_00003alvok2 <= 32'd1;
         add__n_00003a3979_00003a_00003arv2 <= _00003a627;
         add__n_00003a3979_00003a_00003arvok2 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok2 & add__n_00003a3979_00003a_00003arvok2)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a699 <= (add__n_00003a3979_00003a_00003alv2 + add__n_00003a3979_00003a_00003arv2);
         end
         add__n_00003a3979_00003a_00003alv3 <= _00003a556;
         add__n_00003a3979_00003a_00003alvok3 <= 32'd1;
         add__n_00003a3979_00003a_00003arv3 <= _00003a628;
         add__n_00003a3979_00003a_00003arvok3 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok3 & add__n_00003a3979_00003a_00003arvok3)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a700 <= (add__n_00003a3979_00003a_00003alv3 + add__n_00003a3979_00003a_00003arv3);
         end
         add__n_00003a3979_00003a_00003alv4 <= _00003a557;
         add__n_00003a3979_00003a_00003alvok4 <= 32'd1;
         add__n_00003a3979_00003a_00003arv4 <= _00003a629;
         add__n_00003a3979_00003a_00003arvok4 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok4 & add__n_00003a3979_00003a_00003arvok4)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a701 <= (add__n_00003a3979_00003a_00003alv4 + add__n_00003a3979_00003a_00003arv4);
         end
         add__n_00003a3979_00003a_00003alv5 <= _00003a558;
         add__n_00003a3979_00003a_00003alvok5 <= 32'd1;
         add__n_00003a3979_00003a_00003arv5 <= _00003a630;
         add__n_00003a3979_00003a_00003arvok5 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok5 & add__n_00003a3979_00003a_00003arvok5)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a702 <= (add__n_00003a3979_00003a_00003alv5 + add__n_00003a3979_00003a_00003arv5);
         end
         add__n_00003a3979_00003a_00003alv6 <= _00003a559;
         add__n_00003a3979_00003a_00003alvok6 <= 32'd1;
         add__n_00003a3979_00003a_00003arv6 <= _00003a631;
         add__n_00003a3979_00003a_00003arvok6 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok6 & add__n_00003a3979_00003a_00003arvok6)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a703 <= (add__n_00003a3979_00003a_00003alv6 + add__n_00003a3979_00003a_00003arv6);
         end
         add__n_00003a3979_00003a_00003alv7 <= _00003a560;
         add__n_00003a3979_00003a_00003alvok7 <= 32'd1;
         add__n_00003a3979_00003a_00003arv7 <= _00003a632;
         add__n_00003a3979_00003a_00003arvok7 <= 32'd1;
         if ((add__n_00003a3979_00003a_00003alvok7 & add__n_00003a3979_00003a_00003arvok7)) begin
            add__n_00003a3979_00003a_00003arun <= 32'd0;
            ack__sum__ing <= 32'd1;
            _00003a704 <= (add__n_00003a3979_00003a_00003alv7 + add__n_00003a3979_00003a_00003arv7);
         end
      end
      else begin
         add__n_00003a3979_00003a_00003alvok0 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok0 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok1 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok1 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok2 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok2 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok3 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok3 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok4 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok4 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok5 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok5 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok6 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok6 <= 32'd0;
         add__n_00003a3979_00003a_00003alvok7 <= 32'd0;
         add__n_00003a3979_00003a_00003arvok7 <= 32'd0;
      end

   end

   always @( posedge clk ) begin

      ack__mul__outg <= 32'd0;

      mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;

      if ((req__mul__outg | mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun)) begin
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv0 <= _00003a481;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok0 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv0 <= _00003a841;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok0 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok0 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok0)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a985 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv0) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv0) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv1 <= _00003a482;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok1 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv1 <= _00003a842;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok1 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok1 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok1)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a986 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv1) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv1) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv2 <= _00003a483;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok2 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv2 <= _00003a843;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok2 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok2 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok2)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a987 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv2) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv2) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv3 <= _00003a484;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok3 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv3 <= _00003a844;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok3 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok3 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok3)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a988 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv3) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv3) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv4 <= _00003a485;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok4 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv4 <= _00003a845;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok4 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok4 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok4)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a989 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv4) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv4) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv5 <= _00003a486;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok5 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv5 <= _00003a846;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok5 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok5 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok5)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a990 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv5) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv5) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv6 <= _00003a487;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok6 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv6 <= _00003a847;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok6 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok6 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok6)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a991 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv6) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv6) >> 32'd4);
         end
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv7 <= _00003a488;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok7 <= 32'd1;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv7 <= _00003a848;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok7 <= 32'd1;
         if ((mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok7 & mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok7)) begin
            mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arun <= 32'd0;
            ack__mul__outg <= 32'd1;
            _00003a992 <= (($signed(mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alv7) * mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arv7) >> 32'd4);
         end
      end
      else begin
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok0 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok0 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok1 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok1 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok2 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok2 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok3 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok3 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok4 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok4 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok5 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok5 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok6 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok6 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003alvok7 <= 32'd0;
         mul__n_00003a3989_00003a_00003aadd__n_00003a3990_00003a_00003arvok7 <= 32'd0;
      end

   end

   always @( negedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a816 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a960 <= 32'd0;
      end

      if ((rst == 32'd1)) begin
         _00003a734 <= 32'd0;
      end

      duplicator_00003a4018_00003a_00003ain__req <= 32'd1;

      duplicator_00003a4018_00003a_00003aout__ack0 <= 32'd0;

      duplicator_00003a4018_00003a_00003aout__ack1 <= 32'd0;

      if ((duplicator_00003a4018_00003a_00003aout__ack0 == 32'd1)) begin
         duplicator_00003a4018_00003a_00003ain__req <= 32'd0;
      end

      if ((duplicator_00003a4018_00003a_00003aout__ack1 == 32'd1)) begin
         duplicator_00003a4018_00003a_00003ain__req <= 32'd0;
      end

      if (duplicator_00003a4018_00003a_00003ain__req) begin
         duplicator_00003a4018_00003a_00003ain__ack <= 32'd0;
         if ((rst == 32'd0)) begin
            case(_00003a734)
               32'd0: duplicator_00003a4018_00003a_00003adata <= _00003a726;
               32'd1: duplicator_00003a4018_00003a_00003adata <= _00003a727;
               32'd2: duplicator_00003a4018_00003a_00003adata <= _00003a728;
               32'd3: duplicator_00003a4018_00003a_00003adata <= _00003a729;
               32'd4: duplicator_00003a4018_00003a_00003adata <= _00003a730;
               32'd5: duplicator_00003a4018_00003a_00003adata <= _00003a731;
               32'd6: duplicator_00003a4018_00003a_00003adata <= _00003a732;
               32'd7: duplicator_00003a4018_00003a_00003adata <= _00003a733;
            endcase
            duplicator_00003a4018_00003a_00003ain__ack <= 32'd1;
            _00003a734 <= ((_00003a734 + 32'd1) == 32'd8) == 1 ? (_00003a734 + 32'd1) : 32'd0;
         end
      end

      if (duplicator_00003a4018_00003a_00003ain__ack) begin
         if ((duplicator_00003a4018_00003a_00003aout__ack0 == 32'd0)) begin
            if ((rst == 32'd0)) begin
               case(_00003a960)
                  32'd0: _00003a952 <= duplicator_00003a4018_00003a_00003adata;
                  32'd1: _00003a953 <= duplicator_00003a4018_00003a_00003adata;
                  32'd2: _00003a954 <= duplicator_00003a4018_00003a_00003adata;
                  32'd3: _00003a955 <= duplicator_00003a4018_00003a_00003adata;
                  32'd4: _00003a956 <= duplicator_00003a4018_00003a_00003adata;
                  32'd5: _00003a957 <= duplicator_00003a4018_00003a_00003adata;
                  32'd6: _00003a958 <= duplicator_00003a4018_00003a_00003adata;
                  32'd7: _00003a959 <= duplicator_00003a4018_00003a_00003adata;
               endcase
               duplicator_00003a4018_00003a_00003aout__ack0 <= 32'd1;
               _00003a960 <= ((_00003a960 + 32'd1) == 32'd8) == 1 ? (_00003a960 + 32'd1) : 32'd0;
            end
         end
         if ((duplicator_00003a4018_00003a_00003aout__ack1 == 32'd0)) begin
            if ((rst == 32'd0)) begin
               case(_00003a816)
                  32'd0: _00003a808 <= duplicator_00003a4018_00003a_00003adata;
                  32'd1: _00003a809 <= duplicator_00003a4018_00003a_00003adata;
                  32'd2: _00003a810 <= duplicator_00003a4018_00003a_00003adata;
                  32'd3: _00003a811 <= duplicator_00003a4018_00003a_00003adata;
                  32'd4: _00003a812 <= duplicator_00003a4018_00003a_00003adata;
                  32'd5: _00003a813 <= duplicator_00003a4018_00003a_00003adata;
                  32'd6: _00003a814 <= duplicator_00003a4018_00003a_00003adata;
                  32'd7: _00003a815 <= duplicator_00003a4018_00003a_00003adata;
               endcase
               duplicator_00003a4018_00003a_00003aout__ack1 <= 32'd1;
               _00003a816 <= ((_00003a816 + 32'd1) == 32'd8) == 1 ? (_00003a816 + 32'd1) : 32'd0;
            end
         end
         if ((duplicator_00003a4018_00003a_00003aout__ack1 & (duplicator_00003a4018_00003a_00003aout__ack0 & 1'b1))) begin
            duplicator_00003a4018_00003a_00003aout__ack0 <= 32'd0;
            duplicator_00003a4018_00003a_00003aout__ack1 <= 32'd0;
         end
      end

   end

endmodule