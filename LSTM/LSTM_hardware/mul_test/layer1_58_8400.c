#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_8400_75137140;

SignalI clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeclk_75192480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
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

SignalI rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerst_75192460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
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

SignalI req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereq_75192440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
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

SignalI _58481_75269820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58481_75269820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58481_75269820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
   signalI->name = ":481";
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

SignalI _58482_75543740_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58482_75543740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58482_75543740_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
   signalI->name = ":482";
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

SignalI ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__layer_75543700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
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

SignalI _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58483_75543560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
   signalI->name = ":483";
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

SignalI _58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58447_75686340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_8400_75137140;
   signalI->name = ":447";
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

Block __74612180;

Block __74611960;

void code__74611960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51290380(),ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51314560(),ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51314440(),ack__add_73563900_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74611960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74611960 = block;
   block->owner = (Object)__74612180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74611960;

   return block;
};

void code__74612180() {
   {
      Value cond = rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74611960();
   }
      }
   }
}

Block make__74612180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74612180 = block;
   block->owner = (Object)__74610960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74612180;

   return block;
};

Block __74610820;

Block __74610240;

Block __74610080;

void code__74610080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51312920(),flag__z0_74316980_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74610080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74610080 = block;
   block->owner = (Object)__74610240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74610080;

   return block;
};

void code__74610240() {
 code__74610080();
}

Block make__74610240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74610240 = block;
   block->owner = (Object)__74610820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74610240;

   return block;
};

Block __74610620;

void code__74610620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51312580(),flag__z0_74316980_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74610620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74610620 = block;
   block->owner = (Object)__74610820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74610620;

   return block;
};

void code__74610820() {
   {
      Value cond = ack__add_73563900_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74610240();
   }
   else {
  code__74610620();
   }
      }
   }
}

Block make__74610820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74610820 = block;
   block->owner = (Object)__74869920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74610820;

   return block;
};

Block __74869800;

Block __74869560;

void code__74869560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51312280(),ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74869560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74869560 = block;
   block->owner = (Object)__74869800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74869560;

   return block;
};

Block __74869100;

Block __74868920;

void code__74868920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_74317000_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51310820(),ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__74868920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74868920 = block;
   block->owner = (Object)__74869100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74868920;

   return block;
};

void code__74869100() {
 code__74868920();
}

Block make__74869100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74869100 = block;
   block->owner = (Object)__74869800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74869100;

   return block;
};

void code__74869800() {
   {
      Value cond = rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74869560();
   }
   else if (value2integer(flag__z0_74316980_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)) {
  code__74869100();
   }
      }
   }
}

Block make__74869800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74869800 = block;
   block->owner = (Object)__75137520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74869800;

   return block;
};

Block __45883620;

void code__45883620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_73563960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__45883620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45883620 = block;
   block->owner = (Object)__45939120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45883620;

   return block;
};

Block __45853240;

void code__45853240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,clk_74311280_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack_74311260_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rst_74311240_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,z__value_74051280_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__45853240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45853240 = block;
   block->owner = (Object)__48022640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45853240;

   return block;
};

Block __45890660;

void code__45890660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58688_73924060_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__a0_74317000_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__45890660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45890660 = block;
   block->owner = (Object)__48053520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45890660;

   return block;
};

Block __62531120;

void code__62531120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56935160_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62531120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62531120 = block;
   block->owner = (Object)__63969460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62531120;

   return block;
};

Block __48081480;

void code__48081480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48081480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48081480 = block;
   block->owner = (Object)__48079580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48081480;

   return block;
};

Block __48103340;

void code__48103340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48103340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48103340 = block;
   block->owner = (Object)__48101660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48103340;

   return block;
};

Block __48119640;

void code__48119640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48119640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48119640 = block;
   block->owner = (Object)__48118220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48119640;

   return block;
};

Block __48114400;

void code__48114400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48114400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48114400 = block;
   block->owner = (Object)__48113280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48114400;

   return block;
};

Block __48111680;

void code__48111680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48111680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48111680 = block;
   block->owner = (Object)__48151200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48111680;

   return block;
};

Block __48147440;

void code__48147440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48147440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48147440 = block;
   block->owner = (Object)__48144480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48147440;

   return block;
};

Block __48213000;

void code__48213000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48213000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48213000 = block;
   block->owner = (Object)__48212600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48213000;

   return block;
};

Block __48212560;

void code__48212560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48212560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48212560 = block;
   block->owner = (Object)__48210940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48212560;

   return block;
};

Block __46365220;

Block __46360020;

Block __46595260;

void code__46595260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51130320(),_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__46595260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46595260 = block;
   block->owner = (Object)__46360020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46595260;

   return block;
};

void code__46360020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51132440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46595260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51126400(),_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__46360020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46360020 = block;
   block->owner = (Object)__46365220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46360020;

   return block;
};

Block __47560360;

Block __47644380;

void code__47644380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51147700(),_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__47644380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47644380 = block;
   block->owner = (Object)__47560360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47644380;

   return block;
};

void code__47560360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51148080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47644380();
   }
      }
   }
}

Block make__47560360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47560360 = block;
   block->owner = (Object)__46365220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47560360;

   return block;
};

Block __47779680;

void code__47779680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51145560(),rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51164940(),lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51163740(),wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__47779680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47779680 = block;
   block->owner = (Object)__46365220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47779680;

   return block;
};

Block __49849600;

Block __50156240;

Block __50154380;

Block __50152980;

Block __49045120;

void code__49045120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58481_75269820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rv_46335980_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49045120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49045120 = block;
   block->owner = (Object)__50152980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49045120;

   return block;
};

Block __53818240;

void code__53818240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58482_75543740_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rv_46335980_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__53818240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53818240 = block;
   block->owner = (Object)__50152980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53818240;

   return block;
};

void code__50152980() {
{
      Value value = _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__51159360())) {
    code__49045120();
         }
         else if (value2integer(value) == value2integer(make__51183100())) {
    code__53818240();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51182320(),rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
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
                  src0 = _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__51181880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51181740();
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
                        src0 = _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51180580();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51180120();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__50152980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50152980 = block;
   block->owner = (Object)__50154380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50152980;

   return block;
};

void code__50154380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51160200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50152980();
   }
      }
   }
}

Block make__50154380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50154380 = block;
   block->owner = (Object)__50156240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50154380;

   return block;
};

void code__50156240() {
 code__50154380();
}

Block make__50156240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50156240 = block;
   block->owner = (Object)__49849600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50156240;

   return block;
};

Block __54972760;

Block __54972080;

Block __54970320;

Block __54988720;

Block __54987840;

void code__54987840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,lv0_66341520_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51177580(),lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54987840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54987840 = block;
   block->owner = (Object)__54988720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54987840;

   return block;
};

void code__54988720() {
 code__54987840();
}

Block make__54988720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54988720 = block;
   block->owner = (Object)__54970320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54988720;

   return block;
};

Block __54969740;

void code__54969740() {
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
                  src0 = _58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__51176580();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51176440();
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
                        src0 = _58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51232600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__51232400();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51232220(),_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54969740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54969740 = block;
   block->owner = (Object)__54970320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54969740;

   return block;
};

void code__54970320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51177960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54988720();
   }
   else {
  code__54969740();
   }
      }
   }
}

Block make__54970320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54970320 = block;
   block->owner = (Object)__54972080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54970320;

   return block;
};

void code__54972080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51178140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54970320();
   }
      }
   }
}

Block make__54972080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54972080 = block;
   block->owner = (Object)__54972760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54972080;

   return block;
};

void code__54972760() {
 code__54972080();
}

Block make__54972760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54972760 = block;
   block->owner = (Object)__49849600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54972760;

   return block;
};

Block __56118820;

Block __56139480;

Block __56137940;

void code__56137940() {
}

Block make__56137940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56137940 = block;
   block->owner = (Object)__56139480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56137940;

   return block;
};

Block __62632920;

void code__62632920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_66573460_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51247220(),wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62632920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62632920 = block;
   block->owner = (Object)__56139480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62632920;

   return block;
};

void code__56139480() {
 code__56137940();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_66573460_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
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
                              src0 = lv0_66341520_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_46335980_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51248740();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_66573460_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__62632920();
}

Block make__56139480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56139480 = block;
   block->owner = (Object)__56118820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56139480;

   return block;
};

void code__56118820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51226960(),ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51225780(),run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__56139480();
}

Block make__56118820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56118820 = block;
   block->owner = (Object)__49849600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56118820;

   return block;
};

Block __63204900;

void code__63204900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51246220(),wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51244820(),lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51243380(),rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63204900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63204900 = block;
   block->owner = (Object)__49849600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63204900;

   return block;
};

void code__49849600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51161500(),run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50156240();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54972760();
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
               src0 = lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               src1 = rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56118820();
   }
      }
   }
   {
      Value cond = wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63204900();
   }
      }
   }
}

Block make__49849600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49849600 = block;
   block->owner = (Object)__46365220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49849600;

   return block;
};

Block __47858360;

void code__47858360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51242360(),av0_66573460_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__47858360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47858360 = block;
   block->owner = (Object)__46365220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47858360;

   return block;
};

void code__46365220() {
 code__46360020();
 code__47560360();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51147500(),ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51147120(),run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47779680();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_73563960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49849600();
   }
   else {
  code__47858360();
   }
      }
   }
}

Block make__46365220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46365220 = block;
   block->owner = (Object)__63202640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46365220;

   return block;
};

Block __64516240;

void code__64516240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_63998600_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__64516240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64516240 = block;
   block->owner = (Object)__65517400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64516240;

   return block;
};

Block __48299500;

void code__48299500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48299500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48299500 = block;
   block->owner = (Object)__48292080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48299500;

   return block;
};

Block __48292000;

void code__48292000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48292000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48292000 = block;
   block->owner = (Object)__49462220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48292000;

   return block;
};

Block __49459720;

void code__49459720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49459720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49459720 = block;
   block->owner = (Object)__49456760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49459720;

   return block;
};

Block __49456680;

void code__49456680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49456680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49456680 = block;
   block->owner = (Object)__49437180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49456680;

   return block;
};

Block __49431380;

void code__49431380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49431380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49431380 = block;
   block->owner = (Object)__49099580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49431380;

   return block;
};

Block __49099540;

void code__49099540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49099540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49099540 = block;
   block->owner = (Object)__49098860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49099540;

   return block;
};

Block __49213960;

void code__49213960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49213960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49213960 = block;
   block->owner = (Object)__49211140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49213960;

   return block;
};

Block __49233500;

void code__49233500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49233500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49233500 = block;
   block->owner = (Object)__49232640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49233500;

   return block;
};

Block __66856140;

Block __66855780;

void code__66855780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51260360(),_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66855780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66855780 = block;
   block->owner = (Object)__66856140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66855780;

   return block;
};

Block __66875820;

Block __66875320;

void code__66875320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,lv0_66539480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51278660(),lvok0_66856440_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66875320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66875320 = block;
   block->owner = (Object)__66875820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66875320;

   return block;
};

Block __63499840;

Block __63499520;

Block __63498660;

void code__63498660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rv0_66856480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51276800(),_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51275500(),rvok0_66856340_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63498660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63498660 = block;
   block->owner = (Object)__63499520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63498660;

   return block;
};

Block __63499360;

void code__63499360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51275400(),_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51275060(),_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63499360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63499360 = block;
   block->owner = (Object)__63499520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63499360;

   return block;
};

void code__63499520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51278020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63498660();
   }
   else {
  code__63499360();
   }
      }
   }
}

Block make__63499520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63499520 = block;
   block->owner = (Object)__63499840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63499520;

   return block;
};

void code__63499840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58688_73924060_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51278400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63499520();
   }
      }
   }
}

Block make__63499840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63499840 = block;
   block->owner = (Object)__66875820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63499840;

   return block;
};

Block __65261620;

Block __65261140;

void code__65261140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_66539480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      src1 = rv0_66856480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__65261140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65261140 = block;
   block->owner = (Object)__65261620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65261140;

   return block;
};

void code__65261620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51274700(),run_66856320_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51274520(),ack__add_73563900_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__65261140();
}

Block make__65261620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65261620 = block;
   block->owner = (Object)__66875820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65261620;

   return block;
};

void code__66875820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51258100(),run_66856320_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__66875320();
 code__63499840();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_66856440_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = rvok0_66856340_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65261620();
   }
      }
   }
}

Block make__66875820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66875820 = block;
   block->owner = (Object)__66856140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66875820;

   return block;
};

Block __66878600;

void code__66878600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51297960(),lvok0_66856440_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51297740(),rvok0_66856340_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__66878600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66878600 = block;
   block->owner = (Object)__66856140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66878600;

   return block;
};

void code__66856140() {
 code__66855780();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51260220(),ack__add_73563900_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51259760(),run_66856320_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         src1 = run_66856320_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66875820();
   }
   else {
  code__66878600();
   }
      }
   }
}

Block make__66856140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66856140 = block;
   block->owner = (Object)__73564100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66856140;

   return block;
};

Value make__51096440() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51096340() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51242280() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__51132440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51130320() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51126400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51148080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51147700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51147500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51147120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51145560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51164940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51163740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51161500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51160200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51159360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51183100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51182320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51181880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51181740() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51180580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51180120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51178140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51177960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51177580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51176580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51176440() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51232600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51232400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51232220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51226960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51225780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51248740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51247220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51246220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51244820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51243380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51242360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51260360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51260220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51259760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51258100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51278660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51278400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51278020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51276800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51275500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51275400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51275060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51274700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51274520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51297960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51297740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51290380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51314560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51314440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51312920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51312580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51312280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51310820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_840_66079820;

SignalI req__mac_73563960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereq__mac_73563960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_73563960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack_73563940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__mac_73563920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI ack__add_73563900_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__add_73563900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_73563900_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI _58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58647_73610280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":647";
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

SignalI _58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58645_73610260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":645";
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

SignalI _58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58646_73610180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":646";
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

SignalI _58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58655_73697520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":655";
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

SignalI _58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58687_73924080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":687";
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

SignalI _58688_73924060_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58688_73924060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58688_73924060_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":688";
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

SignalI _58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58685_73924040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":685";
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

SignalI _58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58686_73923960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":686";
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

SignalI _58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58700_74052260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
   signalI->name = ":700";
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

SignalI value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__z0_74196940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI value__a0_74317000_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__a0_74317000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_74317000_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI flag__z0_74316980_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeflag__z0_74316980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_74316980_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SignalI ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__a0_74316960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_840_66079820;
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

SystemI counter_74311060;

SystemI makecounter_74311060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_74311060 = systemI;
   systemI->owner = (Object)layer1_58_840_66079820;
   systemI->name = "counter";
   systemI->system = counter_58_8420_74313120;

   return systemI;
};

SystemI func0_74218500;

SystemI makefunc0_74218500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_74218500 = systemI;
   systemI->owner = (Object)layer1_58_840_66079820;
   systemI->name = "func0";
   systemI->system = func0_58_8420_73894280;

   return systemI;
};

Scope channel__w0_58638_66079240;

SignalI trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_66215080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58638_66079240;
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

SignalI dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_66652400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58638_66079240;
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

SignalI abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_66652320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58638_66079240;
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

SignalI mem_56935160_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_56935160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56935160_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58638_66079240;
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
         src0 = make__51096440();
         src1 = make__51096340();
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

Scope raddr_58639_66078920;

Scope makeraddr_58639_66078920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58639_66078920 = scope;
   scope->owner = (Object)channel__w0_58638_66079240;
   scope->name = "raddr:639";
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

Scope rinc_58644_66077720;

Scope makerinc_58644_66077720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58644_66077720 = scope;
   scope->owner = (Object)channel__w0_58638_66079240;
   scope->name = "rinc:644";
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

Scope rdec_58648_66215840;

Scope makerdec_58648_66215840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58648_66215840 = scope;
   scope->owner = (Object)channel__w0_58638_66079240;
   scope->name = "rdec:648";
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

Behavior __63969460;

Behavior make__63969460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63969460 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__62531120();

   return behavior;
}

Behavior __48079580;

Behavior make__48079580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48079580 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_66652400_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48081480();

   return behavior;
}

Behavior __48101660;

Behavior make__48101660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48101660 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58647_73610280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48103340();

   return behavior;
}

Behavior __48118220;

Behavior make__48118220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48118220 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__r_66215080_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48119640();

   return behavior;
}

Behavior __48113280;

Behavior make__48113280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48113280 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58645_73610260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48114400();

   return behavior;
}

Behavior __48151200;

Behavior make__48151200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48151200 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_66652320_channel__w0_58638_66079240_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48111680();

   return behavior;
}

Behavior __48144480;

Behavior make__48144480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48144480 = behavior;
   behavior->owner = (Object)channel__w0_58638_66079240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58646_73610180_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48147440();

   return behavior;
}

Scope makechannel__w0_58638_66079240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58638_66079240 = scope;
   scope->owner = (Object)layer1_58_840_66079820;
   scope->name = "channel_w0:638";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_66215080();
   scope->inners[1] = makedbus__r_66652400();
   scope->inners[2] = makeabus__r_66652320();
   scope->inners[3] = makemem_56935160();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58639_66078920();
   scope->scopes[1] = makerinc_58644_66077720();
   scope->scopes[2] = makerdec_58648_66215840();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63969460();
   scope->behaviors[1] = make__48079580();
   scope->behaviors[2] = make__48101660();
   scope->behaviors[3] = make__48118220();
   scope->behaviors[4] = make__48113280();
   scope->behaviors[5] = make__48151200();
   scope->behaviors[6] = make__48144480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58653_63969220;

SignalI reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__0_64682960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__accum_58653_63969220;
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

Scope anum_58654_63968540;

Scope makeanum_58654_63968540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58654_63968540 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "anum:654";
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

Scope raddr_58656_63967540;

Scope makeraddr_58656_63967540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58656_63967540 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "raddr:656";
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

Scope waddr_58659_63967000;

Scope makewaddr_58659_63967000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58659_63967000 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "waddr:659";
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

Scope rinc_58662_63965960;

SignalI abus__r_63964920_rinc_58662_63965960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63964920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63964920_rinc_58662_63965960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58662_63965960;
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

Scope makerinc_58662_63965960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58662_63965960 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "rinc:662";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63964920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58666_63964500;

SignalI abus__w_64339920_winc_58666_63964500_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_64339920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_64339920_winc_58666_63964500_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58666_63964500;
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

Scope makewinc_58666_63964500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58666_63964500 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "winc:666";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_64339920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58670_64339740;

SignalI abus__r_64339300_rdec_58670_64339740_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_64339300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_64339300_rdec_58670_64339740_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58670_64339740;
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

Scope makerdec_58670_64339740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58670_64339740 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "rdec:670";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_64339300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58674_64339060;

SignalI abus__w_64338480_wdec_58674_64339060_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_64338480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_64338480_wdec_58674_64339060_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58674_64339060;
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

Scope makewdec_58674_64339060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58674_64339060 = scope;
   scope->owner = (Object)channel__accum_58653_63969220;
   scope->name = "wdec:674";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_64338480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48212600;

Behavior make__48212600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48212600 = behavior;
   behavior->owner = (Object)channel__accum_58653_63969220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_64682960_channel__accum_58653_63969220_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48213000();

   return behavior;
}

Behavior __48210940;

Behavior make__48210940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48210940 = behavior;
   behavior->owner = (Object)channel__accum_58653_63969220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58655_73697520_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48212560();

   return behavior;
}

Scope makechannel__accum_58653_63969220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58653_63969220 = scope;
   scope->owner = (Object)layer1_58_840_66079820;
   scope->name = "channel_accum:653";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_64682960();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58654_63968540();
   scope->scopes[1] = makeraddr_58656_63967540();
   scope->scopes[2] = makewaddr_58659_63967000();
   scope->scopes[3] = makerinc_58662_63965960();
   scope->scopes[4] = makewinc_58666_63964500();
   scope->scopes[5] = makerdec_58670_64339740();
   scope->scopes[6] = makewdec_58674_64339060();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48212600();
   scope->behaviors[1] = make__48210940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58678_65855800;

SignalI lv0_66341520_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelv0_66341520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_66341520_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

SignalI av0_66573460_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeav0_66573460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_66573460_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

SignalI rv_46335980_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerv_46335980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_46335980_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

SignalI lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelvok0_46335740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_46335740_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

SignalI rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makervok_46335720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_46335720_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

SignalI wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makewok0_46335420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_46335420_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

SignalI run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerun_46335340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_46335340_mac__n1_58678_65855800_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58678_65855800;
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

Behavior __63202640;

Behavior make__63202640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63202640 = behavior;
   behavior->owner = (Object)mac__n1_58678_65855800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__46365220();

   return behavior;
}

Scope makemac__n1_58678_65855800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58678_65855800 = scope;
   scope->owner = (Object)layer1_58_840_66079820;
   scope->name = "mac_n1:678";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_66341520();
   scope->inners[1] = makeav0_66573460();
   scope->inners[2] = makerv_46335980();
   scope->inners[3] = makelvok0_46335740();
   scope->inners[4] = makervok_46335720();
   scope->inners[5] = makewok0_46335420();
   scope->inners[6] = makerun_46335340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63202640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58683_63202460;

SignalI trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_63240060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58683_63202460;
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

SignalI dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_63431260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58683_63202460;
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

SignalI abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63431080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58683_63202460;
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

SignalI mem_63998600_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_63998600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_63998600_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58683_63202460;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__51242280(),signalI->c_value);
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

Scope raddr_58684_63201980;

Scope makeraddr_58684_63201980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58684_63201980 = scope;
   scope->owner = (Object)channel__b0_58683_63202460;
   scope->name = "raddr:684";
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

Scope rinc_58689_63201320;

Scope makerinc_58689_63201320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58689_63201320 = scope;
   scope->owner = (Object)channel__b0_58683_63202460;
   scope->name = "rinc:689";
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

Scope rdec_58693_63241360;

Scope makerdec_58693_63241360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58693_63241360 = scope;
   scope->owner = (Object)channel__b0_58683_63202460;
   scope->name = "rdec:693";
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

Behavior __65517400;

Behavior make__65517400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65517400 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__64516240();

   return behavior;
}

Behavior __48292080;

Behavior make__48292080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48292080 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_63431260_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48299500();

   return behavior;
}

Behavior __49462220;

Behavior make__49462220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49462220 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58687_73924080_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48292000();

   return behavior;
}

Behavior __49456760;

Behavior make__49456760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49456760 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__r_63240060_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__49459720();

   return behavior;
}

Behavior __49437180;

Behavior make__49437180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49437180 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58685_73924040_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__49456680();

   return behavior;
}

Behavior __49099580;

Behavior make__49099580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49099580 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_63431080_channel__b0_58683_63202460_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__49431380();

   return behavior;
}

Behavior __49098860;

Behavior make__49098860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49098860 = behavior;
   behavior->owner = (Object)channel__b0_58683_63202460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58686_73923960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__49099540();

   return behavior;
}

Scope makechannel__b0_58683_63202460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58683_63202460 = scope;
   scope->owner = (Object)layer1_58_840_66079820;
   scope->name = "channel_b0:683";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_63240060();
   scope->inners[1] = makedbus__r_63431260();
   scope->inners[2] = makeabus__r_63431080();
   scope->inners[3] = makemem_63998600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58684_63201980();
   scope->scopes[1] = makerinc_58689_63201320();
   scope->scopes[2] = makerdec_58693_63241360();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65517400();
   scope->behaviors[1] = make__48292080();
   scope->behaviors[2] = make__49462220();
   scope->behaviors[3] = make__49456760();
   scope->behaviors[4] = make__49437180();
   scope->behaviors[5] = make__49099580();
   scope->behaviors[6] = make__49098860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58698_65517200;

SignalI reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__0_65773700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__z_58698_65517200;
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

Scope anum_58699_65516680;

Scope makeanum_58699_65516680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58699_65516680 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "anum:699";
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

Scope raddr_58701_65515420;

Scope makeraddr_58701_65515420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58701_65515420 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "raddr:701";
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

Scope waddr_58704_65514680;

Scope makewaddr_58704_65514680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58704_65514680 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "waddr:704";
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

Scope rinc_58707_65514000;

SignalI abus__r_65513320_rinc_58707_65514000_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_65513320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65513320_rinc_58707_65514000_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58707_65514000;
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

Scope makerinc_58707_65514000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58707_65514000 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "rinc:707";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65513320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58710_65512960;

SignalI abus__w_65512140_winc_58710_65512960_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_65512140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65512140_winc_58710_65512960_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58710_65512960;
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

Scope makewinc_58710_65512960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58710_65512960 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "winc:710";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65512140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58713_65511760;

SignalI abus__r_65535800_rdec_58713_65511760_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_65535800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65535800_rdec_58713_65511760_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58713_65511760;
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

Scope makerdec_58713_65511760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58713_65511760 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "rdec:713";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65535800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58717_65535640;

SignalI abus__w_65534800_wdec_58717_65535640_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_65534800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65534800_wdec_58717_65535640_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58717_65535640;
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

Scope makewdec_58717_65535640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58717_65535640 = scope;
   scope->owner = (Object)channel__z_58698_65517200;
   scope->name = "wdec:717";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65534800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49211140;

Behavior make__49211140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49211140 = behavior;
   behavior->owner = (Object)channel__z_58698_65517200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_65773700_channel__z_58698_65517200_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__49213960();

   return behavior;
}

Behavior __49232640;

Behavior make__49232640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49232640 = behavior;
   behavior->owner = (Object)channel__z_58698_65517200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58700_74052260_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__49233500();

   return behavior;
}

Scope makechannel__z_58698_65517200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58698_65517200 = scope;
   scope->owner = (Object)layer1_58_840_66079820;
   scope->name = "channel_z:698";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_65773700();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58699_65516680();
   scope->scopes[1] = makeraddr_58701_65515420();
   scope->scopes[2] = makewaddr_58704_65514680();
   scope->scopes[3] = makerinc_58707_65514000();
   scope->scopes[4] = makewinc_58710_65512960();
   scope->scopes[5] = makerdec_58713_65511760();
   scope->scopes[6] = makewdec_58717_65535640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49211140();
   scope->behaviors[1] = make__49232640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58721_66245560;

SignalI lv0_66539480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelv0_66539480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_66539480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58721_66245560;
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

SignalI rv0_66856480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerv0_66856480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_66856480_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58721_66245560;
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

SignalI lvok0_66856440_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelvok0_66856440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_66856440_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58721_66245560;
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

SignalI rvok0_66856340_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makervok0_66856340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_66856340_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58721_66245560;
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

SignalI run_66856320_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerun_66856320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_66856320_add__n_58721_66245560_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58721_66245560;
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

Behavior __73564100;

Behavior make__73564100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73564100 = behavior;
   behavior->owner = (Object)add__n_58721_66245560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__66856140();

   return behavior;
}

Scope makeadd__n_58721_66245560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58721_66245560 = scope;
   scope->owner = (Object)layer1_58_840_66079820;
   scope->name = "add_n:721";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_66539480();
   scope->inners[1] = makerv0_66856480();
   scope->inners[2] = makelvok0_66856440();
   scope->inners[3] = makervok0_66856340();
   scope->inners[4] = makerun_66856320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73564100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __74610960;

Behavior make__74610960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74610960 = behavior;
   behavior->owner = (Object)layer1_58_840_66079820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__74612180();

   return behavior;
}

Behavior __74869920;

Behavior make__74869920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74869920 = behavior;
   behavior->owner = (Object)layer1_58_840_66079820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__74610820();

   return behavior;
}

Behavior __75137520;

Behavior make__75137520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75137520 = behavior;
   behavior->owner = (Object)layer1_58_840_66079820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__74869800();

   return behavior;
}

Behavior __45939120;

Behavior make__45939120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45939120 = behavior;
   behavior->owner = (Object)layer1_58_840_66079820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__mac_73563920_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__45883620();

   return behavior;
}

Behavior __48022640;

Behavior make__48022640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48022640 = behavior;
   behavior->owner = (Object)layer1_58_840_66079820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack_73563940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[value__z0_74196940_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__a0_74316960_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__45853240();

   return behavior;
}

Behavior __48053520;

Behavior make__48053520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48053520 = behavior;
   behavior->owner = (Object)layer1_58_840_66079820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__mac_74311200_counter_58_8420_74313120_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[a_74218640_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__45890660();

   return behavior;
}

Scope makelayer1_58_840_66079820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_840_66079820 = scope;
   scope->owner = (Object)layer1_58_8400_75137140;
   scope->name = "layer1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_74311060();
   scope->systemIs[1] = makefunc0_74218500();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_73563960();
   scope->inners[1] = makeack_73563940();
   scope->inners[2] = makeack__mac_73563920();
   scope->inners[3] = makeack__add_73563900();
   scope->inners[4] = make_58647_73610280();
   scope->inners[5] = make_58645_73610260();
   scope->inners[6] = make_58646_73610180();
   scope->inners[7] = make_58655_73697520();
   scope->inners[8] = make_58687_73924080();
   scope->inners[9] = make_58688_73924060();
   scope->inners[10] = make_58685_73924040();
   scope->inners[11] = make_58686_73923960();
   scope->inners[12] = make_58700_74052260();
   scope->inners[13] = makevalue__z0_74196940();
   scope->inners[14] = makevalue__a0_74317000();
   scope->inners[15] = makeflag__z0_74316980();
   scope->inners[16] = makeack__a0_74316960();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58638_66079240();
   scope->scopes[1] = makechannel__accum_58653_63969220();
   scope->scopes[2] = makemac__n1_58678_65855800();
   scope->scopes[3] = makechannel__b0_58683_63202460();
   scope->scopes[4] = makechannel__z_58698_65517200();
   scope->scopes[5] = makeadd__n_58721_66245560();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__74610960();
   scope->behaviors[1] = make__74869920();
   scope->behaviors[2] = make__75137520();
   scope->behaviors[3] = make__45939120();
   scope->behaviors[4] = make__48022640();
   scope->behaviors[5] = make__48053520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_8400_75137140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_8400_75137140 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T00";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_75192480();
   systemT->inputs[1] = makerst_75192460();
   systemT->inputs[2] = makereq_75192440();
   systemT->inputs[3] = make_58481_75269820();
   systemT->inputs[4] = make_58482_75543740();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_75543700();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58483_75543560();
   systemT->inouts[1] = make_58447_75686340();

   systemT->scope = makelayer1_58_840_66079820();

   return systemT;
}