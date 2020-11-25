#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_841_65671240;

SignalI clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeclk_65669120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = "clk";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerst_65669100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = "rst";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereq_65669080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = "req";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58142_65885600_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58142_65885600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58142_65885600_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = ":142";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58143_65962820_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58143_65962820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_65962820_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = ":143";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_65962780_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__layer_65962780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_65962780_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = "ack_layer";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58144_65962680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = ":144";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58108_66080820_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58108_66080820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58108_66080820_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_841_65671240;
   signalI->name = ":108";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __65244380;

Block __65244160;

void code__65244160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139980(),ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139920(),ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139860(),ack__add_55858240_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65244160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65244160 = block;
   block->owner = (Object)__65244380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65244160;

   return block;
};

void code__65244380() {
   {
      Value cond = rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65244160();
   }
      }
   }
}

Block make__65244380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65244380 = block;
   block->owner = (Object)__65243200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65244380;

   return block;
};

Block __65243080;

Block __65242440;

Block __65242280;

void code__65242280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139680(),flag__z0_50498860_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65242280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65242280 = block;
   block->owner = (Object)__65242440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65242280;

   return block;
};

void code__65242440() {
 code__65242280();
}

Block make__65242440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65242440 = block;
   block->owner = (Object)__65243080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65242440;

   return block;
};

Block __65242900;

void code__65242900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139620(),flag__z0_50498860_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65242900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65242900 = block;
   block->owner = (Object)__65243080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65242900;

   return block;
};

void code__65243080() {
   {
      Value cond = ack__add_55858240_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65242440();
   }
   else {
  code__65242900();
   }
      }
   }
}

Block make__65243080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65243080 = block;
   block->owner = (Object)__65453300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65243080;

   return block;
};

Block __65453180;

Block __65452960;

void code__65452960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139520(),ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65452960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65452960 = block;
   block->owner = (Object)__65453180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65452960;

   return block;
};

Block __65452480;

Block __65452320;

void code__65452320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50498880_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58108_66080820_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76139280(),ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__65452320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65452320 = block;
   block->owner = (Object)__65452480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65452320;

   return block;
};

void code__65452480() {
 code__65452320();
}

Block make__65452480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65452480 = block;
   block->owner = (Object)__65453180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65452480;

   return block;
};

void code__65453180() {
   {
      Value cond = rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65452960();
   }
   else if (value2integer(flag__z0_50498860_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value)) {
  code__65452480();
   }
      }
   }
}

Block make__65453180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65453180 = block;
   block->owner = (Object)__65671660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65453180;

   return block;
};

Block __76007640;

void code__76007640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_55858320_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76007640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76007640 = block;
   block->owner = (Object)__76007400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76007640;

   return block;
};

Block __76007880;

void code__76007880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,clk_54957760_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,ack_54957740_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rst_54957720_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,z__value_64401480_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,ack__layer_65962780_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76007880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76007880 = block;
   block->owner = (Object)__76058840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76007880;

   return block;
};

Block __76007820;

void code__76007820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58349_56977440_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,value__a0_50498880_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76007820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76007820 = block;
   block->owner = (Object)__76058660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76007820;

   return block;
};

Block __55693340;

void code__55693340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55292400_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55693340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55693340 = block;
   block->owner = (Object)__56366480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55693340;

   return block;
};

Block __76057920;

void code__76057920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76057920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76057920 = block;
   block->owner = (Object)__76057720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76057920;

   return block;
};

Block __76057640;

void code__76057640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76057640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76057640 = block;
   block->owner = (Object)__76057480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76057640;

   return block;
};

Block __76057180;

void code__76057180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76057180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76057180 = block;
   block->owner = (Object)__76057020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76057180;

   return block;
};

Block __76056980;

void code__76056980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76056980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76056980 = block;
   block->owner = (Object)__76056820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76056980;

   return block;
};

Block __76056500;

void code__76056500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76056500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76056500 = block;
   block->owner = (Object)__76056340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76056500;

   return block;
};

Block __76056300;

void code__76056300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76056300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76056300 = block;
   block->owner = (Object)__76056140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76056300;

   return block;
};

Block __76054820;

void code__76054820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76054820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76054820 = block;
   block->owner = (Object)__76054660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76054820;

   return block;
};

Block __76054600;

void code__76054600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76054600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76054600 = block;
   block->owner = (Object)__76078980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76054600;

   return block;
};

Block __51116700;

Block __51116420;

Block __51115680;

void code__51115680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76123380(),_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51115680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51115680 = block;
   block->owner = (Object)__51116420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51115680;

   return block;
};

void code__51116420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76123460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51115680();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76123320(),_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51116420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51116420 = block;
   block->owner = (Object)__51116700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51116420;

   return block;
};

Block __51114300;

Block __51113620;

void code__51113620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76123160(),_58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51113620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51113620 = block;
   block->owner = (Object)__51114300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51113620;

   return block;
};

void code__51114300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76123240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51113620();
   }
      }
   }
}

Block make__51114300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51114300 = block;
   block->owner = (Object)__51116700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51114300;

   return block;
};

Block __51175180;

void code__51175180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76122900(),rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76122840(),lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76122780(),wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51175180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51175180 = block;
   block->owner = (Object)__51116700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51175180;

   return block;
};

Block __51809100;

Block __51875300;

Block __51874140;

Block __53583820;

Block __53583200;

void code__53583200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58142_65885600_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rv_51116940_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53583200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53583200 = block;
   block->owner = (Object)__53583820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53583200;

   return block;
};

Block __54407820;

void code__54407820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_65962820_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rv_51116940_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54407820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54407820 = block;
   block->owner = (Object)__53583820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54407820;

   return block;
};

void code__53583820() {
{
      Value value = _58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__76122360())) {
    code__53583200();
         }
         else if (value2integer(value) == value2integer(make__76122240())) {
    code__54407820();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76122080(),rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__76121920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76121880();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76121640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76121580();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58144_65962680_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53583820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53583820 = block;
   block->owner = (Object)__51874140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53583820;

   return block;
};

void code__51874140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76122480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53583820();
   }
      }
   }
}

Block make__51874140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51874140 = block;
   block->owner = (Object)__51875300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51874140;

   return block;
};

void code__51875300() {
 code__51874140();
}

Block make__51875300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51875300 = block;
   block->owner = (Object)__51809100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51875300;

   return block;
};

Block __55461080;

Block __55460860;

Block __55460280;

Block __55514220;

Block __55513780;

void code__55513780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,lv0_48231840_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76121120(),lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55513780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55513780 = block;
   block->owner = (Object)__55514220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55513780;

   return block;
};

void code__55514220() {
 code__55513780();
}

Block make__55514220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55514220 = block;
   block->owner = (Object)__55460280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55514220;

   return block;
};

Block __55517120;

void code__55517120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value sel;
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      sel = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                  src1 = make__76121020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76120960();
            dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);            set_value_pos(pool_state);
         dst; });
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = _58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76120720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76120660();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76120540(),_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__55517120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55517120 = block;
   block->owner = (Object)__55460280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55517120;

   return block;
};

void code__55460280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76121280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55514220();
   }
   else {
  code__55517120();
   }
      }
   }
}

Block make__55460280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55460280 = block;
   block->owner = (Object)__55460860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55460280;

   return block;
};

void code__55460860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76121380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55460280();
   }
      }
   }
}

Block make__55460860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55460860 = block;
   block->owner = (Object)__55461080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55460860;

   return block;
};

void code__55461080() {
 code__55460860();
}

Block make__55461080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55461080 = block;
   block->owner = (Object)__51809100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55461080;

   return block;
};

Block __56613840;

Block __56612920;

Block __56612720;

void code__56612720() {
}

Block make__56612720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56612720 = block;
   block->owner = (Object)__56612920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56612720;

   return block;
};

Block __53669360;

void code__53669360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50485520_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76144180(),wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53669360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53669360 = block;
   block->owner = (Object)__56612920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53669360;

   return block;
};

void code__56612920() {
 code__56612720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_50485520_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = lv0_48231840_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51116940_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76144360();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50485520_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__53669360();
}

Block make__56612920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56612920 = block;
   block->owner = (Object)__56613840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56612920;

   return block;
};

void code__56613840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76120300(),ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76120240(),run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__56612920();
}

Block make__56613840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56613840 = block;
   block->owner = (Object)__51809100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56613840;

   return block;
};

Block __54771840;

void code__54771840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76144080(),wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76144020(),lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76143960(),rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54771840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54771840 = block;
   block->owner = (Object)__51809100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54771840;

   return block;
};

void code__51809100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76122620(),run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51875300();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55461080();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0,src1,dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               src1 = rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56613840();
   }
      }
   }
   {
      Value cond = wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54771840();
   }
      }
   }
}

Block make__51809100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51809100 = block;
   block->owner = (Object)__51116700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51809100;

   return block;
};

Block __51173440;

void code__51173440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76143900(),av0_50485520_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51173440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51173440 = block;
   block->owner = (Object)__51116700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51173440;

   return block;
};

void code__51116700() {
 code__51116420();
 code__51114300();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76123100(),ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76123020(),run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51175180();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_55858320_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51809100();
   }
   else {
  code__51173440();
   }
      }
   }
}

Block make__51116700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51116700 = block;
   block->owner = (Object)__54663760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51116700;

   return block;
};

Block __57244640;

void code__57244640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56239620_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__57244640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57244640 = block;
   block->owner = (Object)__49803140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57244640;

   return block;
};

Block __76076940;

void code__76076940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76076940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76076940 = block;
   block->owner = (Object)__76076760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76076940;

   return block;
};

Block __76076720;

void code__76076720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76076720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76076720 = block;
   block->owner = (Object)__76076560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76076720;

   return block;
};

Block __76076260;

void code__76076260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76076260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76076260 = block;
   block->owner = (Object)__76076100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76076260;

   return block;
};

Block __76076060;

void code__76076060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76076060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76076060 = block;
   block->owner = (Object)__76075860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76076060;

   return block;
};

Block __76075500;

void code__76075500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76075500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76075500 = block;
   block->owner = (Object)__76075340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76075500;

   return block;
};

Block __76075300;

void code__76075300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76075300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76075300 = block;
   block->owner = (Object)__76075140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76075300;

   return block;
};

Block __76073880;

void code__76073880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76073880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76073880 = block;
   block->owner = (Object)__76073700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76073880;

   return block;
};

Block __76073640;

void code__76073640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__76073640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76073640 = block;
   block->owner = (Object)__76073440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76073640;

   return block;
};

Block __53765200;

Block __53765020;

void code__53765020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76142660(),_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53765020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53765020 = block;
   block->owner = (Object)__53765200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53765020;

   return block;
};

Block __53787100;

Block __53786660;

void code__53786660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,lv0_51796280_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76142160(),lvok0_53765820_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53786660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53786660 = block;
   block->owner = (Object)__53787100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53786660;

   return block;
};

Block __54261300;

Block __54260760;

Block __54259360;

void code__54259360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value,rv0_53765880_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141820(),_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141760(),rvok0_53765780_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54259360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54259360 = block;
   block->owner = (Object)__54260760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54259360;

   return block;
};

Block __54260480;

void code__54260480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141700(),_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141640(),_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54260480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54260480 = block;
   block->owner = (Object)__54260760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54260480;

   return block;
};

void code__54260760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76141980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54259360();
   }
   else {
  code__54260480();
   }
      }
   }
}

Block make__54260760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54260760 = block;
   block->owner = (Object)__54261300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54260760;

   return block;
};

void code__54261300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58349_56977440_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76142080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54260760();
   }
      }
   }
}

Block make__54261300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54261300 = block;
   block->owner = (Object)__53787100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54261300;

   return block;
};

Block __54920360;

Block __54919560;

void code__54919560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51796280_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      src1 = rv0_53765880_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54919560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54919560 = block;
   block->owner = (Object)__54920360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54919560;

   return block;
};

void code__54920360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141480(),run_53765720_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141420(),ack__add_55858240_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__54919560();
}

Block make__54920360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54920360 = block;
   block->owner = (Object)__53787100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54920360;

   return block;
};

void code__53787100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76142300(),run_53765720_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
 code__53786660();
 code__54261300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53765820_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = rvok0_53765780_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54920360();
   }
      }
   }
}

Block make__53787100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53787100 = block;
   block->owner = (Object)__53765200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53787100;

   return block;
};

Block __53788300;

void code__53788300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141160(),lvok0_53765820_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76141100(),rvok0_53765780_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__53788300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53788300 = block;
   block->owner = (Object)__53765200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53788300;

   return block;
};

void code__53765200() {
 code__53765020();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76142600(),ack__add_55858240_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76142520(),run_53765720_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         src1 = run_53765720_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53787100();
   }
   else {
  code__53788300();
   }
      }
   }
}

Block make__53765200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53765200 = block;
   block->owner = (Object)__55858460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53765200;

   return block;
};

Value make__76125040() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76125020() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76143880() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__76123460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76123380() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76123320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76123240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76123160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76123100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76123020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76122900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76122840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76122780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76122620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76122480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76122360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76122240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76122080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76121920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76121880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76121640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76121580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76121380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76121280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76121120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76121020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76120960() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76120720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76120660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76120540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76120300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76120240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76144360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76144180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76144080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76144020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76143960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76143900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__76142660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76142600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76142520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76142300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76142160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76142080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76141980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76141820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76141760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76141700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76141640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76141480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76141420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76141160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76141100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76139280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_53781060;

SignalI req__mac_55858320_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereq__mac_55858320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_55858320_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "req_mac";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack_55858300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "ack";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__mac_55858260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "ack_mac";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__add_55858240_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__add_55858240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_55858240_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "ack_add";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58308_56284740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":308";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58306_56284680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":306";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58307_56284480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":307";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58316_56611640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":316";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58348_56977500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":348";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58349_56977440_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58349_56977440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58349_56977440_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":349";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58346_56977420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":346";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58347_56977180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":347";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI make_58361_57195680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = ":361";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makevalue__z0_55138340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "value_z0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__a0_50498880_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makevalue__a0_50498880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50498880_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "value_a0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI flag__z0_50498860_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeflag__z0_50498860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50498860_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "flag_z0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeack__a0_50498840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)layer1_58_84_53781060;
   signalI->name = "ack_a0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI counter_54957540;

SystemI makecounter_54957540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_54957540 = systemI;
   systemI->owner = (Object)layer1_58_84_53781060;
   systemI->name = "counter";
   systemI->system = counter_58_8400_54959600;

   return systemI;
};

SystemI func0_64658740;

SystemI makefunc0_64658740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_64658740 = systemI;
   systemI->owner = (Object)layer1_58_84_53781060;
   systemI->name = "func0";
   systemI->system = func0_58_8400_64334340;

   return systemI;
};

Scope channel__w0_58299_53804480;

SignalI trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI maketrig__r_53800300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58299_53804480;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makedbus__r_53995340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58299_53804480;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_53995140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58299_53804480;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_55292400_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makemem_55292400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55292400_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__w0_58299_53804480;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__76125040();
         src1 = make__76125020();
         concat_value(2,0,dst,src0,src1);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58300_53803580;

Scope makeraddr_58300_53803580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58300_53803580 = scope;
   scope->owner = (Object)channel__w0_58299_53804480;
   scope->name = "raddr:300";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58305_53801660;

Scope makerinc_58305_53801660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58305_53801660 = scope;
   scope->owner = (Object)channel__w0_58299_53804480;
   scope->name = "rinc:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58309_53801000;

Scope makerdec_58309_53801000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58309_53801000 = scope;
   scope->owner = (Object)channel__w0_58299_53804480;
   scope->name = "rdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56366480;

Behavior make__56366480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56366480 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__55693340();

   return behavior;
}

Behavior __76057720;

Behavior make__76057720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76057720 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[dbus__r_53995340_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76057920();

   return behavior;
}

Behavior __76057480;

Behavior make__76057480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76057480 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58308_56284740_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76057640();

   return behavior;
}

Behavior __76057020;

Behavior make__76057020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76057020 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[trig__r_53800300_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76057180();

   return behavior;
}

Behavior __76056820;

Behavior make__76056820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76056820 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58306_56284680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76056980();

   return behavior;
}

Behavior __76056340;

Behavior make__76056340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76056340 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[abus__r_53995140_channel__w0_58299_53804480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76056500();

   return behavior;
}

Behavior __76056140;

Behavior make__76056140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76056140 = behavior;
   behavior->owner = (Object)channel__w0_58299_53804480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58307_56284480_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76056300();

   return behavior;
}

Scope makechannel__w0_58299_53804480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58299_53804480 = scope;
   scope->owner = (Object)layer1_58_84_53781060;
   scope->name = "channel_w0:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53800300();
   scope->inners[1] = makedbus__r_53995340();
   scope->inners[2] = makeabus__r_53995140();
   scope->inners[3] = makemem_55292400();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58300_53803580();
   scope->scopes[1] = makerinc_58305_53801660();
   scope->scopes[2] = makerdec_58309_53801000();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56366480();
   scope->behaviors[1] = make__76057720();
   scope->behaviors[2] = make__76057480();
   scope->behaviors[3] = make__76057020();
   scope->behaviors[4] = make__76056820();
   scope->behaviors[5] = make__76056340();
   scope->behaviors[6] = make__76056140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58314_56366180;

SignalI reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereg__0_56750520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__accum_58314_56366180;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_58315_56365760;

Scope makeanum_58315_56365760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58315_56365760 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "anum:315";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58317_56364920;

Scope makeraddr_58317_56364920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58317_56364920 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "raddr:317";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58320_56364220;

Scope makewaddr_58320_56364220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58320_56364220 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "waddr:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58323_56363700;

SignalI abus__r_56362820_rinc_58323_56363700_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_56362820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56362820_rinc_58323_56363700_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58323_56363700;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerinc_58323_56363700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58323_56363700 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "rinc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56362820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58327_56362600;

SignalI abus__w_56361840_winc_58327_56362600_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_56361840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56361840_winc_58327_56362600_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58327_56362600;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewinc_58327_56362600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58327_56362600 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "winc:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56361840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58331_56361720;

SignalI abus__r_56361240_rdec_58331_56361720_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_56361240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56361240_rdec_58331_56361720_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58331_56361720;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_58331_56361720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58331_56361720 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "rdec:331";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56361240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58335_56361120;

SignalI abus__w_56384740_wdec_58335_56361120_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_56384740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56384740_wdec_58335_56361120_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58335_56361120;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_58335_56361120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58335_56361120 = scope;
   scope->owner = (Object)channel__accum_58314_56366180;
   scope->name = "wdec:335";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56384740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76054660;

Behavior make__76054660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76054660 = behavior;
   behavior->owner = (Object)channel__accum_58314_56366180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[reg__0_56750520_channel__accum_58314_56366180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76054820();

   return behavior;
}

Behavior __76078980;

Behavior make__76078980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76078980 = behavior;
   behavior->owner = (Object)channel__accum_58314_56366180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58316_56611640_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76054600();

   return behavior;
}

Scope makechannel__accum_58314_56366180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58314_56366180 = scope;
   scope->owner = (Object)layer1_58_84_53781060;
   scope->name = "channel_accum:314";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56750520();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58315_56365760();
   scope->scopes[1] = makeraddr_58317_56364920();
   scope->scopes[2] = makewaddr_58320_56364220();
   scope->scopes[3] = makerinc_58323_56363700();
   scope->scopes[4] = makewinc_58327_56362600();
   scope->scopes[5] = makerdec_58331_56361720();
   scope->scopes[6] = makewdec_58335_56361120();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76054660();
   scope->behaviors[1] = make__76078980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58339_57225020;

SignalI lv0_48231840_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelv0_48231840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48231840_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI av0_50485520_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeav0_50485520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50485520_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "av0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv_51116940_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerv_51116940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51116940_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "rv";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelvok0_51116920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51116920_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "lvok0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makervok_51116900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51116900_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "rvok";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makewok0_51116880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_51116880_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "wok0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerun_51116820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51116820_mac__n1_58339_57225020_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)mac__n1_58339_57225020;
   signalI->name = "run";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Behavior __54663760;

Behavior make__54663760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54663760 = behavior;
   behavior->owner = (Object)mac__n1_58339_57225020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__51116700();

   return behavior;
}

Scope makemac__n1_58339_57225020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58339_57225020 = scope;
   scope->owner = (Object)layer1_58_84_53781060;
   scope->name = "mac_n1:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48231840();
   scope->inners[1] = makeav0_50485520();
   scope->inners[2] = makerv_51116940();
   scope->inners[3] = makelvok0_51116920();
   scope->inners[4] = makervok_51116900();
   scope->inners[5] = makewok0_51116880();
   scope->inners[6] = makerun_51116820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54663760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58344_54663500;

SignalI trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI maketrig__r_54657200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58344_54663500;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makedbus__r_55388780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58344_54663500;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_55388080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58344_54663500;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_56239620_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makemem_56239620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56239620_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__b0_58344_54663500;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__76143880(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58345_54662520;

Scope makeraddr_58345_54662520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58345_54662520 = scope;
   scope->owner = (Object)channel__b0_58344_54663500;
   scope->name = "raddr:345";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58350_54661820;

Scope makerinc_58350_54661820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58350_54661820 = scope;
   scope->owner = (Object)channel__b0_58344_54663500;
   scope->name = "rinc:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58354_54658580;

Scope makerdec_58354_54658580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58354_54658580 = scope;
   scope->owner = (Object)channel__b0_58344_54663500;
   scope->name = "rdec:354";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49803140;

Behavior make__49803140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49803140 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->neg[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_neg-1] = (Object)behavior;
   behavior->block = make__57244640();

   return behavior;
}

Behavior __76076760;

Behavior make__76076760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76076760 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[dbus__r_55388780_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76076940();

   return behavior;
}

Behavior __76076560;

Behavior make__76076560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76076560 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58348_56977500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76076720();

   return behavior;
}

Behavior __76076100;

Behavior make__76076100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76076100 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[trig__r_54657200_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76076260();

   return behavior;
}

Behavior __76075860;

Behavior make__76075860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76075860 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58346_56977420_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76076060();

   return behavior;
}

Behavior __76075340;

Behavior make__76075340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76075340 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[abus__r_55388080_channel__b0_58344_54663500_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76075500();

   return behavior;
}

Behavior __76075140;

Behavior make__76075140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76075140 = behavior;
   behavior->owner = (Object)channel__b0_58344_54663500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58347_56977180_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76075300();

   return behavior;
}

Scope makechannel__b0_58344_54663500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58344_54663500 = scope;
   scope->owner = (Object)layer1_58_84_53781060;
   scope->name = "channel_b0:344";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54657200();
   scope->inners[1] = makedbus__r_55388780();
   scope->inners[2] = makeabus__r_55388080();
   scope->inners[3] = makemem_56239620();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58345_54662520();
   scope->scopes[1] = makerinc_58350_54661820();
   scope->scopes[2] = makerdec_58354_54658580();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49803140();
   scope->behaviors[1] = make__76076760();
   scope->behaviors[2] = make__76076560();
   scope->behaviors[3] = make__76076100();
   scope->behaviors[4] = make__76075860();
   scope->behaviors[5] = make__76075340();
   scope->behaviors[6] = make__76075140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58359_49802840;

SignalI reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makereg__0_50871960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)channel__z_58359_49802840;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_58360_49802260;

Scope makeanum_58360_49802260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58360_49802260 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "anum:360";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58362_49801180;

Scope makeraddr_58362_49801180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58362_49801180 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "raddr:362";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_58365_49800380;

Scope makewaddr_58365_49800380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58365_49800380 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "waddr:365";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_58368_50061140;

SignalI abus__r_50060300_rinc_58368_50061140_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_50060300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50060300_rinc_58368_50061140_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rinc_58368_50061140;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerinc_58368_50061140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58368_50061140 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "rinc:368";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50060300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58371_50059920;

SignalI abus__w_50059380_winc_58371_50059920_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_50059380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50059380_winc_58371_50059920_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)winc_58371_50059920;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewinc_58371_50059920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58371_50059920 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "winc:371";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50059380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58374_50059220;

SignalI abus__r_50058240_rdec_58374_50059220_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__r_50058240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50058240_rdec_58374_50059220_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)rdec_58374_50059220;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_58374_50059220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58374_50059220 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "rdec:374";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50058240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58378_50057900;

SignalI abus__w_50486240_wdec_58378_50057900_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makeabus__w_50486240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50486240_wdec_58378_50057900_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)wdec_58378_50057900;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_58378_50057900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58378_50057900 = scope;
   scope->owner = (Object)channel__z_58359_49802840;
   scope->name = "wdec:378";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50486240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76073700;

Behavior make__76073700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76073700 = behavior;
   behavior->owner = (Object)channel__z_58359_49802840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[reg__0_50871960_channel__z_58359_49802840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76073880();

   return behavior;
}

Behavior __76073440;

Behavior make__76073440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76073440 = behavior;
   behavior->owner = (Object)channel__z_58359_49802840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   _58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   _58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[_58361_57195680_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76073640();

   return behavior;
}

Scope makechannel__z_58359_49802840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58359_49802840 = scope;
   scope->owner = (Object)layer1_58_84_53781060;
   scope->name = "channel_z:359";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50871960();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58360_49802260();
   scope->scopes[1] = makeraddr_58362_49801180();
   scope->scopes[2] = makewaddr_58365_49800380();
   scope->scopes[3] = makerinc_58368_50061140();
   scope->scopes[4] = makewinc_58371_50059920();
   scope->scopes[5] = makerdec_58374_50059220();
   scope->scopes[6] = makewdec_58378_50057900();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76073700();
   scope->behaviors[1] = make__76073440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58382_51351720;

SignalI lv0_51796280_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelv0_51796280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51796280_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58382_51351720;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv0_53765880_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerv0_53765880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_53765880_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58382_51351720;
   signalI->name = "rv0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_53765820_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makelvok0_53765820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53765820_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58382_51351720;
   signalI->name = "lvok0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rvok0_53765780_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makervok0_53765780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53765780_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58382_51351720;
   signalI->name = "rvok0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI run_53765720_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080;

SignalI makerun_53765720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53765720_add__n_58382_51351720_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)add__n_58382_51351720;
   signalI->name = "run";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Behavior __55858460;

Behavior make__55858460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55858460 = behavior;
   behavior->owner = (Object)add__n_58382_51351720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__53765200();

   return behavior;
}

Scope makeadd__n_58382_51351720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58382_51351720 = scope;
   scope->owner = (Object)layer1_58_84_53781060;
   scope->name = "add_n:382";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51796280();
   scope->inners[1] = makerv0_53765880();
   scope->inners[2] = makelvok0_53765820();
   scope->inners[3] = makervok0_53765780();
   scope->inners[4] = makerun_53765720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55858460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __65243200;

Behavior make__65243200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65243200 = behavior;
   behavior->owner = (Object)layer1_58_84_53781060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__65244380();

   return behavior;
}

Behavior __65453300;

Behavior make__65453300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65453300 = behavior;
   behavior->owner = (Object)layer1_58_84_53781060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__65243080();

   return behavior;
}

Behavior __65671660;

Behavior make__65671660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65671660 = behavior;
   behavior->owner = (Object)layer1_58_84_53781060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->pos[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_pos-1] = (Object)behavior;
   behavior->block = make__65453180();

   return behavior;
}

Behavior __76007400;

Behavior make__76007400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76007400 = behavior;
   behavior->owner = (Object)layer1_58_84_53781060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[req_65669080_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__mac_55858260_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76007640();

   return behavior;
}

Behavior __76058840;

Behavior make__76058840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76058840 = behavior;
   behavior->owner = (Object)layer1_58_84_53781060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[clk_65669120_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack_55858300_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[value__z0_55138340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__a0_50498840_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76007880();

   return behavior;
}

Behavior __76058660;

Behavior make__76058660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76058660 = behavior;
   behavior->owner = (Object)layer1_58_84_53781060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[ack__mac_54957680_counter_58_8400_54959600_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[rst_65669100_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080);
   a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any += 1;
   a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any = realloc(a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any,a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->any[a_64658880_func0_58_8400_64334340_layer1_58_84_53781060_layer1_58_841_65671240_sigmoid__neural__network_58_84_50010280_sigmoid__neural__network_58_840_50999300______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__76007820();

   return behavior;
}

Scope makelayer1_58_84_53781060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_53781060 = scope;
   scope->owner = (Object)layer1_58_841_65671240;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_54957540();
   scope->systemIs[1] = makefunc0_64658740();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_55858320();
   scope->inners[1] = makeack_55858300();
   scope->inners[2] = makeack__mac_55858260();
   scope->inners[3] = makeack__add_55858240();
   scope->inners[4] = make_58308_56284740();
   scope->inners[5] = make_58306_56284680();
   scope->inners[6] = make_58307_56284480();
   scope->inners[7] = make_58316_56611640();
   scope->inners[8] = make_58348_56977500();
   scope->inners[9] = make_58349_56977440();
   scope->inners[10] = make_58346_56977420();
   scope->inners[11] = make_58347_56977180();
   scope->inners[12] = make_58361_57195680();
   scope->inners[13] = makevalue__z0_55138340();
   scope->inners[14] = makevalue__a0_50498880();
   scope->inners[15] = makeflag__z0_50498860();
   scope->inners[16] = makeack__a0_50498840();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58299_53804480();
   scope->scopes[1] = makechannel__accum_58314_56366180();
   scope->scopes[2] = makemac__n1_58339_57225020();
   scope->scopes[3] = makechannel__b0_58344_54663500();
   scope->scopes[4] = makechannel__z_58359_49802840();
   scope->scopes[5] = makeadd__n_58382_51351720();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65243200();
   scope->behaviors[1] = make__65453300();
   scope->behaviors[2] = make__65671660();
   scope->behaviors[3] = make__76007400();
   scope->behaviors[4] = make__76058840();
   scope->behaviors[5] = make__76058660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_841_65671240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_841_65671240 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T1";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_65669120();
   systemT->inputs[1] = makerst_65669100();
   systemT->inputs[2] = makereq_65669080();
   systemT->inputs[3] = make_58142_65885600();
   systemT->inputs[4] = make_58143_65962820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_65962780();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58144_65962680();
   systemT->inouts[1] = make_58108_66080820();

   systemT->scope = makelayer1_58_84_53781060();

   return systemT;
}