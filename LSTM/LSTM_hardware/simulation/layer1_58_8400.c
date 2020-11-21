#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_8400_74245760;

SignalI clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeclk_74284720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
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

SignalI rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerst_74284700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
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

SignalI req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereq_74284680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
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

SignalI _58470_74329240_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58470_74329240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58470_74329240_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
   signalI->name = ":470";
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

SignalI _58471_74447340_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58471_74447340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58471_74447340_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
   signalI->name = ":471";
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

SignalI ack__layer_74447300_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__layer_74447300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_74447300_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
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

SignalI _58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58472_74447200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
   signalI->name = ":472";
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

SignalI _58436_74508140_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58436_74508140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58436_74508140_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_8400_74245760;
   signalI->name = ":436";
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

Block __73761580;

Block __73761340;

void code__73761340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79362360(),ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79362300(),ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79362240(),ack__add_53929940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73761340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73761340 = block;
   block->owner = (Object)__73761580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73761340;

   return block;
};

void code__73761580() {
   {
      Value cond = rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73761340();
   }
      }
   }
}

Block make__73761580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73761580 = block;
   block->owner = (Object)__73784860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73761580;

   return block;
};

Block __73784740;

Block __73784180;

Block __73784020;

void code__73784020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79362060(),flag__z0_73450860_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73784020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73784020 = block;
   block->owner = (Object)__73784180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73784020;

   return block;
};

void code__73784180() {
 code__73784020();
}

Block make__73784180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73784180 = block;
   block->owner = (Object)__73784740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73784180;

   return block;
};

Block __73784560;

void code__73784560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79362000(),flag__z0_73450860_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73784560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73784560 = block;
   block->owner = (Object)__73784740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73784560;

   return block;
};

void code__73784740() {
   {
      Value cond = ack__add_53929940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73784180();
   }
   else {
  code__73784560();
   }
      }
   }
}

Block make__73784740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73784740 = block;
   block->owner = (Object)__73986700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73784740;

   return block;
};

Block __73986580;

Block __73986340;

void code__73986340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79361900(),ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73986340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73986340 = block;
   block->owner = (Object)__73986580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73986340;

   return block;
};

Block __73985800;

Block __73985640;

void code__73985640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_73450880_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58436_74508140_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79361660(),ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__73985640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73985640 = block;
   block->owner = (Object)__73985800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73985640;

   return block;
};

void code__73985800() {
 code__73985640();
}

Block make__73985800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73985800 = block;
   block->owner = (Object)__73986580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73985800;

   return block;
};

void code__73986580() {
   {
      Value cond = rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73986340();
   }
   else if (value2integer(flag__z0_73450860_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value)) {
  code__73985800();
   }
      }
   }
}

Block make__73986580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73986580 = block;
   block->owner = (Object)__74246080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73986580;

   return block;
};

Block __79189300;

void code__79189300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53930000_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79189300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79189300 = block;
   block->owner = (Object)__79189060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79189300;

   return block;
};

Block __79189580;

void code__79189580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,clk_73486080_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,ack_73486060_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rst_73486040_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,z__value_54195200_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,ack__layer_74447300_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79189580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79189580 = block;
   block->owner = (Object)__79273300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79189580;

   return block;
};

Block __79189520;

void code__79189520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58677_65029800_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,value__a0_73450880_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79189520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79189520 = block;
   block->owner = (Object)__79273080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79189520;

   return block;
};

Block __66696380;

void code__66696380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_65686440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66696380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66696380 = block;
   block->owner = (Object)__54951860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66696380;

   return block;
};

Block __79272360;

void code__79272360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79272360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79272360 = block;
   block->owner = (Object)__79272180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79272360;

   return block;
};

Block __79272140;

void code__79272140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79272140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79272140 = block;
   block->owner = (Object)__79271980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79272140;

   return block;
};

Block __79271680;

void code__79271680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79271680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79271680 = block;
   block->owner = (Object)__79271520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79271680;

   return block;
};

Block __79271480;

void code__79271480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79271480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79271480 = block;
   block->owner = (Object)__79271280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79271480;

   return block;
};

Block __79270920;

void code__79270920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79270920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79270920 = block;
   block->owner = (Object)__79270760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79270920;

   return block;
};

Block __79270720;

void code__79270720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79270720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79270720 = block;
   block->owner = (Object)__79270560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79270720;

   return block;
};

Block __79269300;

void code__79269300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79269300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79269300 = block;
   block->owner = (Object)__79269100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79269300;

   return block;
};

Block __79269020;

void code__79269020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79269020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79269020 = block;
   block->owner = (Object)__79268720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79269020;

   return block;
};

Block __63661500;

Block __63661240;

Block __63660740;

void code__63660740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345780(),_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63660740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63660740 = block;
   block->owner = (Object)__63661240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63660740;

   return block;
};

void code__63661240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79345860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63660740();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345720(),_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63661240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63661240 = block;
   block->owner = (Object)__63661500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63661240;

   return block;
};

Block __63618700;

Block __63618200;

void code__63618200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345560(),_58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63618200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63618200 = block;
   block->owner = (Object)__63618700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63618200;

   return block;
};

void code__63618700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79345640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63618200();
   }
      }
   }
}

Block make__63618700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63618700 = block;
   block->owner = (Object)__63661500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63618700;

   return block;
};

Block __63616200;

void code__63616200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345280(),rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345200(),lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345100(),wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63616200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63616200 = block;
   block->owner = (Object)__63661500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63616200;

   return block;
};

Block __64518220;

Block __64517200;

Block __64516900;

Block __64516440;

Block __64515800;

void code__64515800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58470_74329240_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rv_63661980_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64515800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64515800 = block;
   block->owner = (Object)__64516440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64515800;

   return block;
};

Block __65232140;

void code__65232140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58471_74447340_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rv_63661980_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65232140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65232140 = block;
   block->owner = (Object)__64516440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65232140;

   return block;
};

void code__64516440() {
{
      Value value = _58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__79344680())) {
    code__64515800();
         }
         else if (value2integer(value) == value2integer(make__79344580())) {
    code__65232140();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79344440(),rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
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
                  src0 = _58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__79344340();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79344300();
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
                        src0 = _58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79344040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79343980();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58472_74447200_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64516440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64516440 = block;
   block->owner = (Object)__64516900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64516440;

   return block;
};

void code__64516900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79344800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64516440();
   }
      }
   }
}

Block make__64516900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64516900 = block;
   block->owner = (Object)__64517200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64516900;

   return block;
};

void code__64517200() {
 code__64516900();
}

Block make__64517200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64517200 = block;
   block->owner = (Object)__64518220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64517200;

   return block;
};

Block __66310040;

Block __66309380;

Block __66307300;

Block __66197480;

Block __66197160;

void code__66197160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,lv0_62751780_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79343520(),lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66197160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66197160 = block;
   block->owner = (Object)__66197480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66197160;

   return block;
};

void code__66197480() {
 code__66197160();
}

Block make__66197480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66197480 = block;
   block->owner = (Object)__66307300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66197480;

   return block;
};

Block __66306740;

void code__66306740() {
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
                  src0 = _58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__79343400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79343360();
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
                        src0 = _58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79343040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79342980();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79342860(),_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66306740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66306740 = block;
   block->owner = (Object)__66307300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66306740;

   return block;
};

void code__66307300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79343680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66197480();
   }
   else {
  code__66306740();
   }
      }
   }
}

Block make__66307300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66307300 = block;
   block->owner = (Object)__66309380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66307300;

   return block;
};

void code__66309380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79343780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66307300();
   }
      }
   }
}

Block make__66309380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66309380 = block;
   block->owner = (Object)__66310040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66309380;

   return block;
};

void code__66310040() {
 code__66309380();
}

Block make__66310040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66310040 = block;
   block->owner = (Object)__64518220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66310040;

   return block;
};

Block __47952600;

Block __47966020;

Block __47984120;

void code__47984120() {
}

Block make__47984120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47984120 = block;
   block->owner = (Object)__47966020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47984120;

   return block;
};

Block __55294900;

void code__55294900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_63042840_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79342040(),wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55294900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55294900 = block;
   block->owner = (Object)__47966020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55294900;

   return block;
};

void code__47966020() {
 code__47984120();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_63042840_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
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
                              src0 = lv0_62751780_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_63661980_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79342240();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_63042840_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__55294900();
}

Block make__47966020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47966020 = block;
   block->owner = (Object)__47952600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47966020;

   return block;
};

void code__47952600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79342620(),ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79342560(),run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__47966020();
}

Block make__47952600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47952600 = block;
   block->owner = (Object)__64518220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47952600;

   return block;
};

Block __56576840;

void code__56576840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79341940(),wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79341880(),lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79341820(),rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56576840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56576840 = block;
   block->owner = (Object)__64518220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56576840;

   return block;
};

void code__64518220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79344940(),run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64517200();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66310040();
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
               src0 = lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               src1 = rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47952600();
   }
      }
   }
   {
      Value cond = wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56576840();
   }
      }
   }
}

Block make__64518220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64518220 = block;
   block->owner = (Object)__63661500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64518220;

   return block;
};

Block __63613720;

void code__63613720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79341760(),av0_63042840_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63613720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63613720 = block;
   block->owner = (Object)__63661500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63613720;

   return block;
};

void code__63661500() {
 code__63661240();
 code__63618700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345480(),ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79345420(),run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63616200();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53930000_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64518220();
   }
   else {
  code__63613720();
   }
      }
   }
}

Block make__63661500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63661500 = block;
   block->owner = (Object)__56637680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63661500;

   return block;
};

Block __62836060;

void code__62836060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62276020_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__62836060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62836060 = block;
   block->owner = (Object)__63549820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62836060;

   return block;
};

Block __79266940;

void code__79266940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79266940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79266940 = block;
   block->owner = (Object)__79266720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79266940;

   return block;
};

Block __79266680;

void code__79266680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79266680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79266680 = block;
   block->owner = (Object)__79266520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79266680;

   return block;
};

Block __79266220;

void code__79266220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79266220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79266220 = block;
   block->owner = (Object)__79266060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79266220;

   return block;
};

Block __79266020;

void code__79266020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79266020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79266020 = block;
   block->owner = (Object)__79265860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79266020;

   return block;
};

Block __79290080;

void code__79290080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79290080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79290080 = block;
   block->owner = (Object)__79289920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79290080;

   return block;
};

Block __79289880;

void code__79289880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79289880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79289880 = block;
   block->owner = (Object)__79289720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79289880;

   return block;
};

Block __79288400;

void code__79288400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79288400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79288400 = block;
   block->owner = (Object)__79288220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79288400;

   return block;
};

Block __79288180;

void code__79288180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__79288180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79288180 = block;
   block->owner = (Object)__79288020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79288180;

   return block;
};

Block __65085080;

Block __65084780;

void code__65084780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79340460(),_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65084780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65084780 = block;
   block->owner = (Object)__65085080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65084780;

   return block;
};

Block __65082080;

Block __65081400;

void code__65081400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,lv0_64807800_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79340020(),lvok0_65085340_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65081400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65081400 = block;
   block->owner = (Object)__65082080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65081400;

   return block;
};

Block __65520200;

Block __65519620;

Block __65542580;

void code__65542580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rv0_65085380_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79339680(),_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79339620(),rvok0_65085320_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65542580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65542580 = block;
   block->owner = (Object)__65519620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65542580;

   return block;
};

Block __65543900;

void code__65543900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79339560(),_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79364020(),_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65543900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65543900 = block;
   block->owner = (Object)__65519620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65543900;

   return block;
};

void code__65519620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79339840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65542580();
   }
   else {
  code__65543900();
   }
      }
   }
}

Block make__65519620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65519620 = block;
   block->owner = (Object)__65520200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65519620;

   return block;
};

void code__65520200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58677_65029800_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79339940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65519620();
   }
      }
   }
}

Block make__65520200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65520200 = block;
   block->owner = (Object)__65082080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65520200;

   return block;
};

Block __66158340;

Block __66157660;

void code__66157660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_64807800_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      src1 = rv0_65085380_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66157660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66157660 = block;
   block->owner = (Object)__66158340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66157660;

   return block;
};

void code__66158340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79363860(),run_65085240_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79363800(),ack__add_53929940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__66157660();
}

Block make__66158340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66158340 = block;
   block->owner = (Object)__65082080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66158340;

   return block;
};

void code__65082080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79340180(),run_65085240_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__65081400();
 code__65520200();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65085340_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = rvok0_65085320_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66158340();
   }
      }
   }
}

Block make__65082080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65082080 = block;
   block->owner = (Object)__65085080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65082080;

   return block;
};

Block __65083300;

void code__65083300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79363500(),lvok0_65085340_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79363400(),rvok0_65085320_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65083300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65083300 = block;
   block->owner = (Object)__65085080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65083300;

   return block;
};

void code__65085080() {
 code__65084780();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79340400(),ack__add_53929940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79340340(),run_65085240_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = run_65085240_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65082080();
   }
   else {
  code__65083300();
   }
      }
   }
}

Block make__65085080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65085080 = block;
   block->owner = (Object)__53930140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65085080;

   return block;
};

Value make__79347140() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79347120() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79341740() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__79345860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79345780() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79345720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79345640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79345560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79345480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79345420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79345280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79345200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79345100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79344940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79344800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79344680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79344580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79344440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79344340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79344300() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79344040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79343980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79343780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79343680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79343520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79343400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79343360() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79343040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79342980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79342860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79342620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79342560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79342240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79342040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79341940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79341880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79341820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79341760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__79340460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79340400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79340340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79340180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79340020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79339940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79339840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79339680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79339620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79339560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79364020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79363860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79363800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79363500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79363400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79362360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79362300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79362240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79362060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79362000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79361900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79361660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_840_62702120;

SignalI req__mac_53930000_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereq__mac_53930000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53930000_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack_53929980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__mac_53929960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI ack__add_53929940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__add_53929940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53929940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI _58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58636_62774500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":636";
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

SignalI _58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58634_62774480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":634";
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

SignalI _58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58635_62774400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":635";
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

SignalI _58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58644_64663940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":644";
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

SignalI _58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58676_65029820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":676";
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

SignalI _58677_65029800_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58677_65029800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58677_65029800_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":677";
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

SignalI _58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58674_65029780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":674";
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

SignalI _58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58675_65029700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":675";
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

SignalI _58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58689_54197060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
   signalI->name = ":689";
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

SignalI value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makevalue__z0_73371740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI value__a0_73450880_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makevalue__a0_73450880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_73450880_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI flag__z0_73450860_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeflag__z0_73450860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_73450860_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SignalI ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__a0_73450840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_840_62702120;
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

SystemI counter_73485860;

SystemI makecounter_73485860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_73485860 = systemI;
   systemI->owner = (Object)layer1_58_840_62702120;
   systemI->name = "counter";
   systemI->system = counter_58_8420_73487920;

   return systemI;
};

SystemI func0_73367880;

SystemI makefunc0_73367880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_73367880 = systemI;
   systemI->owner = (Object)layer1_58_840_62702120;
   systemI->name = "func0";
   systemI->system = func0_58_8420_65031780;

   return systemI;
};

Scope channel__w0_58627_62742420;

SignalI trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI maketrig__r_62739360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58627_62742420;
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

SignalI dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makedbus__r_63158440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58627_62742420;
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

SignalI abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_63158360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58627_62742420;
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

SignalI mem_65686440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makemem_65686440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_65686440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58627_62742420;
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
         src0 = make__79347140();
         src1 = make__79347120();
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

Scope raddr_58628_62741860;

Scope makeraddr_58628_62741860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58628_62741860 = scope;
   scope->owner = (Object)channel__w0_58627_62742420;
   scope->name = "raddr:628";
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

Scope rinc_58633_62740940;

Scope makerinc_58633_62740940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58633_62740940 = scope;
   scope->owner = (Object)channel__w0_58627_62742420;
   scope->name = "rinc:633";
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

Scope rdec_58637_62740280;

Scope makerdec_58637_62740280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58637_62740280 = scope;
   scope->owner = (Object)channel__w0_58627_62742420;
   scope->name = "rdec:637";
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

Behavior __54951860;

Behavior make__54951860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54951860 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__66696380();

   return behavior;
}

Behavior __79272180;

Behavior make__79272180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79272180 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[dbus__r_63158440_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79272360();

   return behavior;
}

Behavior __79271980;

Behavior make__79271980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79271980 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58636_62774500_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79272140();

   return behavior;
}

Behavior __79271520;

Behavior make__79271520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79271520 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[trig__r_62739360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79271680();

   return behavior;
}

Behavior __79271280;

Behavior make__79271280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79271280 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58634_62774480_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79271480();

   return behavior;
}

Behavior __79270760;

Behavior make__79270760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79270760 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[abus__r_63158360_channel__w0_58627_62742420_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79270920();

   return behavior;
}

Behavior __79270560;

Behavior make__79270560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79270560 = behavior;
   behavior->owner = (Object)channel__w0_58627_62742420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58635_62774400_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79270720();

   return behavior;
}

Scope makechannel__w0_58627_62742420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58627_62742420 = scope;
   scope->owner = (Object)layer1_58_840_62702120;
   scope->name = "channel_w0:627";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_62739360();
   scope->inners[1] = makedbus__r_63158440();
   scope->inners[2] = makeabus__r_63158360();
   scope->inners[3] = makemem_65686440();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58628_62741860();
   scope->scopes[1] = makerinc_58633_62740940();
   scope->scopes[2] = makerdec_58637_62740280();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54951860();
   scope->behaviors[1] = make__79272180();
   scope->behaviors[2] = make__79271980();
   scope->behaviors[3] = make__79271520();
   scope->behaviors[4] = make__79271280();
   scope->behaviors[5] = make__79270760();
   scope->behaviors[6] = make__79270560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58642_54951200;

SignalI reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereg__0_55754560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__accum_58642_54951200;
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

Scope anum_58643_54950580;

Scope makeanum_58643_54950580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58643_54950580 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "anum:643";
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

Scope raddr_58645_54949600;

Scope makeraddr_58645_54949600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58645_54949600 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "raddr:645";
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

Scope waddr_58648_54947740;

Scope makewaddr_58648_54947740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58648_54947740 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "waddr:648";
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

Scope rinc_58651_54945860;

SignalI abus__r_54917940_rinc_58651_54945860_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_54917940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54917940_rinc_58651_54945860_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58651_54945860;
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

Scope makerinc_58651_54945860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58651_54945860 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "rinc:651";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54917940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58655_54917320;

SignalI abus__w_54916280_winc_58655_54917320_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_54916280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54916280_winc_58655_54917320_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58655_54917320;
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

Scope makewinc_58655_54917320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58655_54917320 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "winc:655";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54916280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58659_54915560;

SignalI abus__r_54913660_rdec_58659_54915560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_54913660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54913660_rdec_58659_54915560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58659_54915560;
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

Scope makerdec_58659_54915560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58659_54915560 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "rdec:659";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54913660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58663_54912880;

SignalI abus__w_54912220_wdec_58663_54912880_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_54912220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54912220_wdec_58663_54912880_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58663_54912880;
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

Scope makewdec_58663_54912880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58663_54912880 = scope;
   scope->owner = (Object)channel__accum_58642_54951200;
   scope->name = "wdec:663";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54912220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __79269100;

Behavior make__79269100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79269100 = behavior;
   behavior->owner = (Object)channel__accum_58642_54951200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[reg__0_55754560_channel__accum_58642_54951200_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79269300();

   return behavior;
}

Behavior __79268720;

Behavior make__79268720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79268720 = behavior;
   behavior->owner = (Object)channel__accum_58642_54951200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58644_64663940_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79269020();

   return behavior;
}

Scope makechannel__accum_58642_54951200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58642_54951200 = scope;
   scope->owner = (Object)layer1_58_840_62702120;
   scope->name = "channel_accum:642";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55754560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58643_54950580();
   scope->scopes[1] = makeraddr_58645_54949600();
   scope->scopes[2] = makewaddr_58648_54947740();
   scope->scopes[3] = makerinc_58651_54945860();
   scope->scopes[4] = makewinc_58655_54917320();
   scope->scopes[5] = makerdec_58659_54915560();
   scope->scopes[6] = makewdec_58663_54912880();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79269100();
   scope->behaviors[1] = make__79268720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58667_62266740;

SignalI lv0_62751780_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelv0_62751780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_62751780_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

SignalI av0_63042840_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeav0_63042840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_63042840_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

SignalI rv_63661980_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerv_63661980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_63661980_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

SignalI lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelvok0_63661960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_63661960_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

SignalI rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makervok_63661900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_63661900_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

SignalI wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makewok0_63661860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_63661860_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

SignalI run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerun_63661640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_63661640_mac__n1_58667_62266740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58667_62266740;
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

Behavior __56637680;

Behavior make__56637680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56637680 = behavior;
   behavior->owner = (Object)mac__n1_58667_62266740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__63661500();

   return behavior;
}

Scope makemac__n1_58667_62266740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58667_62266740 = scope;
   scope->owner = (Object)layer1_58_840_62702120;
   scope->name = "mac_n1:667";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_62751780();
   scope->inners[1] = makeav0_63042840();
   scope->inners[2] = makerv_63661980();
   scope->inners[3] = makelvok0_63661960();
   scope->inners[4] = makervok_63661900();
   scope->inners[5] = makewok0_63661860();
   scope->inners[6] = makerun_63661640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56637680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58672_56635260;

SignalI trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI maketrig__r_56667600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58672_56635260;
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

SignalI dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makedbus__r_57329760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58672_56635260;
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

SignalI abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_57329440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58672_56635260;
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

SignalI mem_62276020_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makemem_62276020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62276020_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58672_56635260;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__79341740(),signalI->c_value);
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

Scope raddr_58673_56632460;

Scope makeraddr_58673_56632460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58673_56632460 = scope;
   scope->owner = (Object)channel__b0_58672_56635260;
   scope->name = "raddr:673";
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

Scope rinc_58678_56670500;

Scope makerinc_58678_56670500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58678_56670500 = scope;
   scope->owner = (Object)channel__b0_58672_56635260;
   scope->name = "rinc:678";
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

Scope rdec_58682_56669140;

Scope makerdec_58682_56669140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58682_56669140 = scope;
   scope->owner = (Object)channel__b0_58672_56635260;
   scope->name = "rdec:682";
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

Behavior __63549820;

Behavior make__63549820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63549820 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__62836060();

   return behavior;
}

Behavior __79266720;

Behavior make__79266720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79266720 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[dbus__r_57329760_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79266940();

   return behavior;
}

Behavior __79266520;

Behavior make__79266520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79266520 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58676_65029820_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79266680();

   return behavior;
}

Behavior __79266060;

Behavior make__79266060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79266060 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[trig__r_56667600_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79266220();

   return behavior;
}

Behavior __79265860;

Behavior make__79265860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79265860 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58674_65029780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79266020();

   return behavior;
}

Behavior __79289920;

Behavior make__79289920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79289920 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[abus__r_57329440_channel__b0_58672_56635260_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79290080();

   return behavior;
}

Behavior __79289720;

Behavior make__79289720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79289720 = behavior;
   behavior->owner = (Object)channel__b0_58672_56635260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58675_65029700_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79289880();

   return behavior;
}

Scope makechannel__b0_58672_56635260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58672_56635260 = scope;
   scope->owner = (Object)layer1_58_840_62702120;
   scope->name = "channel_b0:672";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56667600();
   scope->inners[1] = makedbus__r_57329760();
   scope->inners[2] = makeabus__r_57329440();
   scope->inners[3] = makemem_62276020();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58673_56632460();
   scope->scopes[1] = makerinc_58678_56670500();
   scope->scopes[2] = makerdec_58682_56669140();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63549820();
   scope->behaviors[1] = make__79266720();
   scope->behaviors[2] = make__79266520();
   scope->behaviors[3] = make__79266060();
   scope->behaviors[4] = make__79265860();
   scope->behaviors[5] = make__79289920();
   scope->behaviors[6] = make__79289720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58687_63549660;

SignalI reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereg__0_63919860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__z_58687_63549660;
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

Scope anum_58688_63548940;

Scope makeanum_58688_63548940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58688_63548940 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "anum:688";
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

Scope raddr_58690_63547980;

Scope makeraddr_58690_63547980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58690_63547980 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "raddr:690";
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

Scope waddr_58693_63547300;

Scope makewaddr_58693_63547300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58693_63547300 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "waddr:693";
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

Scope rinc_58696_63546720;

SignalI abus__r_63545520_rinc_58696_63546720_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_63545520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63545520_rinc_58696_63546720_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58696_63546720;
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

Scope makerinc_58696_63546720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58696_63546720 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "rinc:696";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63545520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58699_63602640;

SignalI abus__w_63602040_winc_58699_63602640_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_63602040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63602040_winc_58699_63602640_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58699_63602640;
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

Scope makewinc_58699_63602640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58699_63602640 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "winc:699";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63602040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58702_63601820;

SignalI abus__r_63600900_rdec_58702_63601820_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_63600900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63600900_rdec_58702_63601820_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58702_63601820;
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

Scope makerdec_58702_63601820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58702_63601820 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "rdec:702";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63600900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58706_63600680;

SignalI abus__w_63600140_wdec_58706_63600680_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_63600140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63600140_wdec_58706_63600680_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58706_63600680;
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

Scope makewdec_58706_63600680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58706_63600680 = scope;
   scope->owner = (Object)channel__z_58687_63549660;
   scope->name = "wdec:706";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63600140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __79288220;

Behavior make__79288220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79288220 = behavior;
   behavior->owner = (Object)channel__z_58687_63549660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[reg__0_63919860_channel__z_58687_63549660_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79288400();

   return behavior;
}

Behavior __79288020;

Behavior make__79288020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79288020 = behavior;
   behavior->owner = (Object)channel__z_58687_63549660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58689_54197060_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79288180();

   return behavior;
}

Scope makechannel__z_58687_63549660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58687_63549660 = scope;
   scope->owner = (Object)layer1_58_840_62702120;
   scope->name = "channel_z:687";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_63919860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58688_63548940();
   scope->scopes[1] = makeraddr_58690_63547980();
   scope->scopes[2] = makewaddr_58693_63547300();
   scope->scopes[3] = makerinc_58696_63546720();
   scope->scopes[4] = makewinc_58699_63602640();
   scope->scopes[5] = makerdec_58702_63601820();
   scope->scopes[6] = makewdec_58706_63600680();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79288220();
   scope->behaviors[1] = make__79288020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58710_64643980;

SignalI lv0_64807800_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelv0_64807800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64807800_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58710_64643980;
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

SignalI rv0_65085380_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerv0_65085380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_65085380_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58710_64643980;
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

SignalI lvok0_65085340_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelvok0_65085340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65085340_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58710_64643980;
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

SignalI rvok0_65085320_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makervok0_65085320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_65085320_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58710_64643980;
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

SignalI run_65085240_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerun_65085240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65085240_add__n_58710_64643980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58710_64643980;
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

Behavior __53930140;

Behavior make__53930140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53930140 = behavior;
   behavior->owner = (Object)add__n_58710_64643980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__65085080();

   return behavior;
}

Scope makeadd__n_58710_64643980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58710_64643980 = scope;
   scope->owner = (Object)layer1_58_840_62702120;
   scope->name = "add_n:710";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64807800();
   scope->inners[1] = makerv0_65085380();
   scope->inners[2] = makelvok0_65085340();
   scope->inners[3] = makervok0_65085320();
   scope->inners[4] = makerun_65085240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53930140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __73784860;

Behavior make__73784860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73784860 = behavior;
   behavior->owner = (Object)layer1_58_840_62702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__73761580();

   return behavior;
}

Behavior __73986700;

Behavior make__73986700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73986700 = behavior;
   behavior->owner = (Object)layer1_58_840_62702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__73784740();

   return behavior;
}

Behavior __74246080;

Behavior make__74246080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74246080 = behavior;
   behavior->owner = (Object)layer1_58_840_62702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__73986580();

   return behavior;
}

Behavior __79189060;

Behavior make__79189060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79189060 = behavior;
   behavior->owner = (Object)layer1_58_840_62702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[req_74284680_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__mac_53929960_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79189300();

   return behavior;
}

Behavior __79273300;

Behavior make__79273300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79273300 = behavior;
   behavior->owner = (Object)layer1_58_840_62702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[clk_74284720_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack_53929980_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[value__z0_73371740_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__a0_73450840_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79189580();

   return behavior;
}

Behavior __79273080;

Behavior make__79273080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79273080 = behavior;
   behavior->owner = (Object)layer1_58_840_62702120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__mac_73486000_counter_58_8420_73487920_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[rst_74284700_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[a_73368020_func0_58_8420_65031780_layer1_58_840_62702120_layer1_58_8400_74245760_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__79189520();

   return behavior;
}

Scope makelayer1_58_840_62702120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_840_62702120 = scope;
   scope->owner = (Object)layer1_58_8400_74245760;
   scope->name = "layer1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_73485860();
   scope->systemIs[1] = makefunc0_73367880();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53930000();
   scope->inners[1] = makeack_53929980();
   scope->inners[2] = makeack__mac_53929960();
   scope->inners[3] = makeack__add_53929940();
   scope->inners[4] = make_58636_62774500();
   scope->inners[5] = make_58634_62774480();
   scope->inners[6] = make_58635_62774400();
   scope->inners[7] = make_58644_64663940();
   scope->inners[8] = make_58676_65029820();
   scope->inners[9] = make_58677_65029800();
   scope->inners[10] = make_58674_65029780();
   scope->inners[11] = make_58675_65029700();
   scope->inners[12] = make_58689_54197060();
   scope->inners[13] = makevalue__z0_73371740();
   scope->inners[14] = makevalue__a0_73450880();
   scope->inners[15] = makeflag__z0_73450860();
   scope->inners[16] = makeack__a0_73450840();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58627_62742420();
   scope->scopes[1] = makechannel__accum_58642_54951200();
   scope->scopes[2] = makemac__n1_58667_62266740();
   scope->scopes[3] = makechannel__b0_58672_56635260();
   scope->scopes[4] = makechannel__z_58687_63549660();
   scope->scopes[5] = makeadd__n_58710_64643980();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73784860();
   scope->behaviors[1] = make__73986700();
   scope->behaviors[2] = make__74246080();
   scope->behaviors[3] = make__79189060();
   scope->behaviors[4] = make__79273300();
   scope->behaviors[5] = make__79273080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_8400_74245760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_8400_74245760 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T00";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_74284720();
   systemT->inputs[1] = makerst_74284700();
   systemT->inputs[2] = makereq_74284680();
   systemT->inputs[3] = make_58470_74329240();
   systemT->inputs[4] = make_58471_74447340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_74447300();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58472_74447200();
   systemT->inouts[1] = make_58436_74508140();

   systemT->scope = makelayer1_58_840_62702120();

   return systemT;
}