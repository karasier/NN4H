#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_55623920;

SignalI clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeclk_55787400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
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

SignalI rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerst_55787360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
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

SignalI req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereq_55787340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
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

SignalI _58419_57051400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58419_57051400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58419_57051400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
   signalI->name = ":419";
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

SignalI ack__layer_57050580_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__layer_57050580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57050580_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
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

SignalI _58417_57050440_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58417_57050440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58417_57050440_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
   signalI->name = ":417";
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

SignalI _58418_57049940_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58418_57049940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58418_57049940_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
   signalI->name = ":418";
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

SignalI _58459_59682020_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58459_59682020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58459_59682020_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
   signalI->name = ":459";
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

SignalI _58460_62703180_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58460_62703180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58460_62703180_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_8400_55623920;
   signalI->name = ":460";
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

Block __65993940;

Block __65993420;

void code__65993420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935940(),ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935880(),ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935820(),ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65993420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65993420 = block;
   block->owner = (Object)__65993940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65993420;

   return block;
};

void code__65993940() {
   {
      Value cond = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65993420();
   }
      }
   }
}

Block make__65993940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65993940 = block;
   block->owner = (Object)__65991680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65993940;

   return block;
};

Block __65991440;

Block __65990160;

Block __65989860;

void code__65989860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935640(),flag__z0_55342300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65989860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65989860 = block;
   block->owner = (Object)__65990160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65989860;

   return block;
};

Block __66361320;

void code__66361320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935500(),flag__z1_55342260_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66361320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66361320 = block;
   block->owner = (Object)__65990160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66361320;

   return block;
};

void code__65990160() {
 code__65989860();
 code__66361320();
}

Block make__65990160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65990160 = block;
   block->owner = (Object)__65991440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65990160;

   return block;
};

Block __65991240;

void code__65991240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935440(),flag__z0_55342300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935380(),flag__z1_55342260_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65991240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65991240 = block;
   block->owner = (Object)__65991440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65991240;

   return block;
};

void code__65991440() {
   {
      Value cond = ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65990160();
   }
   else {
  code__65991240();
   }
      }
   }
}

Block make__65991440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65991440 = block;
   block->owner = (Object)__66775000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65991440;

   return block;
};

Block __66774740;

Block __66774280;

void code__66774280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935240(),ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78935180(),ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66774280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66774280 = block;
   block->owner = (Object)__66774740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66774280;

   return block;
};

Block __66773120;

Block __66862940;

void code__66862940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54965100_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58459_59682020_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78934840(),ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66862940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66862940 = block;
   block->owner = (Object)__66773120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66862940;

   return block;
};

Block __51311820;

void code__51311820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_55342320_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58460_62703180_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78934700(),ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51311820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51311820 = block;
   block->owner = (Object)__66773120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51311820;

   return block;
};

void code__66773120() {
 code__66862940();
 code__51311820();
}

Block make__66773120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66773120 = block;
   block->owner = (Object)__66774740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66773120;

   return block;
};

void code__66774740() {
   {
      Value cond = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66774280();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_55342300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = flag__z1_55342260_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__66773120();
   }
      }
   }
}

Block make__66774740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66774740 = block;
   block->owner = (Object)__55625860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66774740;

   return block;
};

Block __78505380;

void code__78505380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_66475180_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78505380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78505380 = block;
   block->owner = (Object)__78505140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78505380;

   return block;
};

Block __78505600;

void code__78505600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,clk_55374460_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,ack_55374440_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rst_55374420_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,z__value_55423920_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,z__value_63644440_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      src1 = ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_57050580_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78505600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78505600 = block;
   block->owner = (Object)__78554240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78505600;

   return block;
};

Block __78505540;

void code__78505540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58561_49933220_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58576_51812620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,value__a0_54965100_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,value__a1_55342320_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78505540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78505540 = block;
   block->owner = (Object)__78554060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78505540;

   return block;
};

Block __50878920;

void code__50878920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48249760_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__50878920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50878920 = block;
   block->owner = (Object)__53918960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50878920;

   return block;
};

Block __78553280;

void code__78553280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78553280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78553280 = block;
   block->owner = (Object)__78553120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78553280;

   return block;
};

Block __78577620;

void code__78577620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78577620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78577620 = block;
   block->owner = (Object)__78577440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78577620;

   return block;
};

Block __78577140;

void code__78577140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78577140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78577140 = block;
   block->owner = (Object)__78576980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78577140;

   return block;
};

Block __78576940;

void code__78576940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78576940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78576940 = block;
   block->owner = (Object)__78576780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78576940;

   return block;
};

Block __78576420;

void code__78576420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78576420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78576420 = block;
   block->owner = (Object)__78576220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78576420;

   return block;
};

Block __78576180;

void code__78576180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78576180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78576180 = block;
   block->owner = (Object)__78576020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78576180;

   return block;
};

Block __56722800;

void code__56722800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56026160_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56722800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56722800 = block;
   block->owner = (Object)__59753240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56722800;

   return block;
};

Block __78574780;

void code__78574780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78574780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78574780 = block;
   block->owner = (Object)__78574600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78574780;

   return block;
};

Block __78574560;

void code__78574560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78574560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78574560 = block;
   block->owner = (Object)__78574360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78574560;

   return block;
};

Block __78574020;

void code__78574020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78574020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78574020 = block;
   block->owner = (Object)__78573860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78574020;

   return block;
};

Block __78573820;

void code__78573820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78573820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78573820 = block;
   block->owner = (Object)__78573660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78573820;

   return block;
};

Block __78573360;

void code__78573360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78573360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78573360 = block;
   block->owner = (Object)__78573180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78573360;

   return block;
};

Block __78573140;

void code__78573140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78573140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78573140 = block;
   block->owner = (Object)__78572980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78573140;

   return block;
};

Block __78571660;

void code__78571660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78571660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78571660 = block;
   block->owner = (Object)__78571500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78571660;

   return block;
};

Block __78571460;

void code__78571460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78571460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78571460 = block;
   block->owner = (Object)__78571300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78571460;

   return block;
};

Block __78570980;

void code__78570980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78570980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78570980 = block;
   block->owner = (Object)__78570820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78570980;

   return block;
};

Block __78570780;

void code__78570780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78570780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78570780 = block;
   block->owner = (Object)__78570620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78570780;

   return block;
};

Block __63615040;

Block __63614820;

Block __63614480;

void code__63614480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769560(),_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63614480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63614480 = block;
   block->owner = (Object)__63614820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63614480;

   return block;
};

void code__63614820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78769640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63614480();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769440(),_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63614820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63614820 = block;
   block->owner = (Object)__63615040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63614820;

   return block;
};

Block __63613800;

Block __63613380;

void code__63613380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769280(),_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63613380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63613380 = block;
   block->owner = (Object)__63613800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63613380;

   return block;
};

void code__63613800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78769360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63613380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769220(),_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63613800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63613800 = block;
   block->owner = (Object)__63615040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63613800;

   return block;
};

Block __63612580;

Block __63612240;

void code__63612240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769060(),_58418_57049940_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63612240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63612240 = block;
   block->owner = (Object)__63612580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63612240;

   return block;
};

void code__63612580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78769140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63612240();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769000(),_58417_57050440_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63612580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63612580 = block;
   block->owner = (Object)__63615040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63612580;

   return block;
};

Block __63610980;

void code__63610980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768760(),rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768700(),lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768640(),wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768580(),lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768520(),wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63610980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63610980 = block;
   block->owner = (Object)__63615040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63610980;

   return block;
};

Block __63932240;

Block __63931740;

Block __63931500;

Block __63931160;

Block __63953540;

Block __63953380;

void code__63953380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58419_57051400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rv_63615600_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78767940(),rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63953380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63953380 = block;
   block->owner = (Object)__63953540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63953380;

   return block;
};

void code__63953540() {
 code__63953380();
}

Block make__63953540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63953540 = block;
   block->owner = (Object)__63931160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63953540;

   return block;
};

Block __63931000;

void code__63931000() {
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
                  src0 = _58418_57049940_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__78767840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78767800();
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
                        src0 = _58418_57049940_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78767520();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78767440();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58418_57049940_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78767280(),_58417_57050440_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63931000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63931000 = block;
   block->owner = (Object)__63931160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63931000;

   return block;
};

void code__63931160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58417_57050440_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78768100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63953540();
   }
   else {
  code__63931000();
   }
      }
   }
}

Block make__63931160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63931160 = block;
   block->owner = (Object)__63931500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63931160;

   return block;
};

void code__63931500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78768200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63931160();
   }
      }
   }
}

Block make__63931500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63931500 = block;
   block->owner = (Object)__63931740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63931500;

   return block;
};

void code__63931740() {
 code__63931500();
}

Block make__63931740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63931740 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63931740;

   return block;
};

Block __64415860;

Block __64415680;

Block __64415260;

Block __64470420;

Block __64470260;

void code__64470260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,lv0_63023920_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78766880(),lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64470260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64470260 = block;
   block->owner = (Object)__64470420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64470260;

   return block;
};

void code__64470420() {
 code__64470260();
}

Block make__64470420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64470420 = block;
   block->owner = (Object)__64415260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64470420;

   return block;
};

Block __64415100;

void code__64415100() {
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
                  src0 = _58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__78766780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78766740();
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
                        src0 = _58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78766500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78766440();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78766300(),_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64415100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64415100 = block;
   block->owner = (Object)__64415260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64415100;

   return block;
};

void code__64415260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78767040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64470420();
   }
   else {
  code__64415100();
   }
      }
   }
}

Block make__64415260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64415260 = block;
   block->owner = (Object)__64415680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64415260;

   return block;
};

void code__64415680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78767140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64415260();
   }
      }
   }
}

Block make__64415680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64415680 = block;
   block->owner = (Object)__64415860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64415680;

   return block;
};

void code__64415860() {
 code__64415680();
}

Block make__64415860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64415860 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64415860;

   return block;
};

Block __64746560;

Block __64745980;

Block __64745600;

void code__64745600() {
}

Block make__64745600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64745600 = block;
   block->owner = (Object)__64745980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64745600;

   return block;
};

Block __65396780;

void code__65396780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_63407880_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78789980(),wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65396780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65396780 = block;
   block->owner = (Object)__64745980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65396780;

   return block;
};

void code__64745980() {
 code__64745600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_63407880_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
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
                              src0 = lv0_63023920_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_63615600_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78790200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_63407880_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__65396780();
}

Block make__64745980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64745980 = block;
   block->owner = (Object)__64746560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64745980;

   return block;
};

void code__64746560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78790580(),ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78790520(),run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__64745980();
}

Block make__64746560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64746560 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64746560;

   return block;
};

Block __65623160;

void code__65623160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78789760(),wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78789700(),wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78789640(),lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78789580(),lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78789520(),rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65623160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65623160 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65623160;

   return block;
};

Block __65621860;

Block __65621680;

Block __65621280;

Block __65619120;

Block __65618900;

void code__65618900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,lv1_63154260_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78789120(),lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65618900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65618900 = block;
   block->owner = (Object)__65619120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65618900;

   return block;
};

void code__65619120() {
 code__65618900();
}

Block make__65619120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65619120 = block;
   block->owner = (Object)__65621280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65619120;

   return block;
};

Block __65621040;

void code__65621040() {
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
                  src0 = _58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__78789020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78788980();
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
                        src0 = _58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78788720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78788660();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78788540(),_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65621040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621040 = block;
   block->owner = (Object)__65621280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621040;

   return block;
};

void code__65621280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78789280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65619120();
   }
   else {
  code__65621040();
   }
      }
   }
}

Block make__65621280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621280 = block;
   block->owner = (Object)__65621680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621280;

   return block;
};

void code__65621680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78789380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65621280();
   }
      }
   }
}

Block make__65621680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621680 = block;
   block->owner = (Object)__65621860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621680;

   return block;
};

void code__65621860() {
 code__65621680();
}

Block make__65621860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621860 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621860;

   return block;
};

Block __66083180;

Block __66082700;

Block __66082520;

void code__66082520() {
}

Block make__66082520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66082520 = block;
   block->owner = (Object)__66082700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66082520;

   return block;
};

Block __66778800;

void code__66778800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_63501980_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787640(),wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66778800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66778800 = block;
   block->owner = (Object)__66082700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66778800;

   return block;
};

void code__66082700() {
 code__66082520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_63501980_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
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
                              src0 = lv1_63154260_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_63615600_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78787880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_63501980_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__66778800();
}

Block make__66082700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66082700 = block;
   block->owner = (Object)__66083180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66082700;

   return block;
};

void code__66083180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78788300(),ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78788240(),run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__66082700();
}

Block make__66083180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66083180 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66083180;

   return block;
};

Block __47613260;

void code__47613260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787480(),wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787420(),wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787360(),lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787300(),lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787240(),rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__47613260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47613260 = block;
   block->owner = (Object)__63932240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47613260;

   return block;
};

void code__63932240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768340(),run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63931740();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64415860();
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
               src0 = lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               src1 = rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64746560();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65623160();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65621860();
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
               src0 = lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               src1 = rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66083180();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47613260();
   }
      }
   }
}

Block make__63932240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63932240 = block;
   block->owner = (Object)__63615040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63932240;

   return block;
};

Block __63650720;

void code__63650720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787180(),av0_63407880_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78787120(),av1_63501980_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63650720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63650720 = block;
   block->owner = (Object)__63615040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63650720;

   return block;
};

void code__63615040() {
 code__63614820();
 code__63613800();
 code__63612580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768940(),ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768880(),run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63610980();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_66475180_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63932240();
   }
   else {
  code__63650720();
   }
      }
   }
}

Block make__63615040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63615040 = block;
   block->owner = (Object)__47886680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63615040;

   return block;
};

Block __53950340;

void code__53950340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51295620_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__53950340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53950340 = block;
   block->owner = (Object)__55180840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53950340;

   return block;
};

Block __78593320;

void code__78593320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78593320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78593320 = block;
   block->owner = (Object)__78593160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78593320;

   return block;
};

Block __78593120;

void code__78593120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78593120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78593120 = block;
   block->owner = (Object)__78592960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78593120;

   return block;
};

Block __78592560;

void code__78592560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78592560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78592560 = block;
   block->owner = (Object)__78592400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78592560;

   return block;
};

Block __78592360;

void code__78592360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78592360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78592360 = block;
   block->owner = (Object)__78592200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78592360;

   return block;
};

Block __78591900;

void code__78591900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78591900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78591900 = block;
   block->owner = (Object)__78591740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78591900;

   return block;
};

Block __78591700;

void code__78591700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78591700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78591700 = block;
   block->owner = (Object)__78591520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78591700;

   return block;
};

Block __57085520;

void code__57085520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56375420_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57085520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57085520 = block;
   block->owner = (Object)__62234180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57085520;

   return block;
};

Block __78590200;

void code__78590200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78590200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78590200 = block;
   block->owner = (Object)__78590040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78590200;

   return block;
};

Block __78590000;

void code__78590000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78590000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78590000 = block;
   block->owner = (Object)__78589840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78590000;

   return block;
};

Block __78589520;

void code__78589520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78589520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78589520 = block;
   block->owner = (Object)__78589360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78589520;

   return block;
};

Block __78589320;

void code__78589320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78589320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78589320 = block;
   block->owner = (Object)__78589160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78589320;

   return block;
};

Block __78588860;

void code__78588860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78588860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78588860 = block;
   block->owner = (Object)__78588660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78588860;

   return block;
};

Block __78588620;

void code__78588620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78588620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78588620 = block;
   block->owner = (Object)__78588400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78588620;

   return block;
};

Block __78587160;

void code__78587160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78587160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78587160 = block;
   block->owner = (Object)__78587000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78587160;

   return block;
};

Block __78586960;

void code__78586960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78586960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78586960 = block;
   block->owner = (Object)__78586800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78586960;

   return block;
};

Block __78586460;

void code__78586460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78586460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78586460 = block;
   block->owner = (Object)__78586240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78586460;

   return block;
};

Block __78586200;

void code__78586200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__78586200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78586200 = block;
   block->owner = (Object)__78586040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78586200;

   return block;
};

Block __63695300;

Block __63695080;

void code__63695080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78784640(),_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63695080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63695080 = block;
   block->owner = (Object)__63695300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63695080;

   return block;
};

Block __63694720;

void code__63694720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78784580(),_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63694720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63694720 = block;
   block->owner = (Object)__63695300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63694720;

   return block;
};

Block __63823540;

Block __63823140;

void code__63823140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,lv0_63187660_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78784160(),lvok0_63695540_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63823140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63823140 = block;
   block->owner = (Object)__63823540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63823140;

   return block;
};

Block __64171800;

Block __64171420;

Block __64170200;

void code__64170200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rv0_63546520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783780(),_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783720(),rvok0_63695500_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64170200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64170200 = block;
   block->owner = (Object)__64171420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64170200;

   return block;
};

Block __64171180;

void code__64171180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783640(),_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783540(),_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64171180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64171180 = block;
   block->owner = (Object)__64171420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64171180;

   return block;
};

void code__64171420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78783980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64170200();
   }
   else {
  code__64171180();
   }
      }
   }
}

Block make__64171420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64171420 = block;
   block->owner = (Object)__64171800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64171420;

   return block;
};

void code__64171800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58561_49933220_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78784080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64171420();
   }
      }
   }
}

Block make__64171800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64171800 = block;
   block->owner = (Object)__63823540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64171800;

   return block;
};

Block __64650840;

Block __64650220;

void code__64650220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_63187660_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      src1 = rv0_63546520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__64650220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64650220 = block;
   block->owner = (Object)__64650840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64650220;

   return block;
};

void code__64650840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783380(),run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783320(),ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__64650220();
}

Block make__64650840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64650840 = block;
   block->owner = (Object)__63823540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64650840;

   return block;
};

Block __65193460;

void code__65193460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,lv1_63475880_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783000(),lvok1_63695520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65193460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65193460 = block;
   block->owner = (Object)__63823540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65193460;

   return block;
};

Block __65472380;

Block __65472060;

Block __65471040;

void code__65471040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value,rv1_63695560_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78782660(),_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78782580(),rvok1_63695460_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65471040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65471040 = block;
   block->owner = (Object)__65472060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65471040;

   return block;
};

Block __65471900;

void code__65471900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78782520(),_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78938060(),_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65471900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65471900 = block;
   block->owner = (Object)__65472060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65471900;

   return block;
};

void code__65472060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78782820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65471040();
   }
   else {
  code__65471900();
   }
      }
   }
}

Block make__65472060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65472060 = block;
   block->owner = (Object)__65472380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65472060;

   return block;
};

void code__65472380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58576_51812620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78782920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65472060();
   }
      }
   }
}

Block make__65472380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65472380 = block;
   block->owner = (Object)__63823540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65472380;

   return block;
};

Block __65723500;

Block __65722880;

void code__65722880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_63475880_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      src1 = rv1_63695560_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__65722880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65722880 = block;
   block->owner = (Object)__65723500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65722880;

   return block;
};

void code__65723500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78937900(),run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78937840(),ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__65722880();
}

Block make__65723500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65723500 = block;
   block->owner = (Object)__63823540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65723500;

   return block;
};

void code__63823540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78784300(),run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__63823140();
 code__64171800();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_63695540_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = rvok0_63695500_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64650840();
   }
      }
   }
 code__65193460();
 code__65472380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_63695520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = rvok1_63695460_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65723500();
   }
      }
   }
}

Block make__63823540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63823540 = block;
   block->owner = (Object)__63695300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63823540;

   return block;
};

Block __63693720;

void code__63693720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78937600(),lvok0_63695540_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78937540(),rvok0_63695500_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78937480(),lvok1_63695520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78937400(),rvok1_63695460_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__63693720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63693720 = block;
   block->owner = (Object)__63695300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63693720;

   return block;
};

void code__63695300() {
 code__63695080();
 code__63694720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78784520(),ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78784460(),run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         src1 = run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63823540();
   }
   else {
  code__63693720();
   }
      }
   }
}

Block make__63695300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63695300 = block;
   block->owner = (Object)__66475360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63695300;

   return block;
};

Value make__78772540() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78772520() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78771200() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78771180() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78787100() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78786180() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78769640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78769560() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78769440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78769360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78769280() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78769220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78769140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78769060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78769000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78768100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78767840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767800() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78767280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78767140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78766780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766740() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78766300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78790580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78790520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78790200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78789980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78789280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78789120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78789020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78788980() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78788720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78788660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78788540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78788300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78788240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78787640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78787180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78787120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78784640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78783980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78783780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78783540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78782920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78782820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78782660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78782580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78782520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78938060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78937900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78937840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78937600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78937540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78937480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78937400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78935180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78934840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78934700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_66309120;

SignalI req__mac_66475180_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereq__mac_66475180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_66475180_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack_66475160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__mac_66475140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__add_66475080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_66475080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI _58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58496_66553680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":496";
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

SignalI _58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58494_66553660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":494";
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

SignalI _58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58495_66553560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":495";
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

SignalI _58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58519_66780060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":519";
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

SignalI _58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58520_66898160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":520";
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

SignalI _58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58511_47939140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":511";
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

SignalI _58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58509_47939080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":509";
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

SignalI _58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58510_47938900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":510";
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

SignalI _58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58560_49933620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":560";
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

SignalI _58561_49933220_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58561_49933220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58561_49933220_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":561";
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

SignalI _58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58558_49932960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":558";
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

SignalI _58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58559_49930880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":559";
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

SignalI _58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58588_50937300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":588";
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

SignalI _58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58589_51360900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":589";
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

SignalI _58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58575_51812660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":575";
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

SignalI _58576_51812620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58576_51812620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58576_51812620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":576";
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

SignalI _58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58573_51812580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":573";
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

SignalI _58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI make_58574_51812080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = ":574";
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

SignalI value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makevalue__z0_54027560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makevalue__z1_54663560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = "value_z1";
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

SignalI value__a0_54965100_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makevalue__a0_54965100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54965100_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI value__a1_55342320_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makevalue__a1_55342320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_55342320_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = "value_a1";
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

SignalI flag__z0_55342300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeflag__z0_55342300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_55342300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI flag__z1_55342260_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeflag__z1_55342260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_55342260_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = "flag_z1";
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

SignalI ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__a0_55342240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
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

SignalI ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeack__a1_55342160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_840_66309120;
   signalI->name = "ack_a1";
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

SystemI counter_55374000;

SystemI makecounter_55374000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55374000 = systemI;
   systemI->owner = (Object)layer0_58_840_66309120;
   systemI->name = "counter";
   systemI->system = counter_58_8410_55355720;

   return systemI;
};

SystemI func0_55897500;

SystemI makefunc0_55897500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_55897500 = systemI;
   systemI->owner = (Object)layer0_58_840_66309120;
   systemI->name = "func0";
   systemI->system = func0_58_8410_54944880;

   return systemI;
};

SystemI func1_63936960;

SystemI makefunc1_63936960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_63936960 = systemI;
   systemI->owner = (Object)layer0_58_840_66309120;
   systemI->name = "func1";
   systemI->system = func1_58_8400_63472040;

   return systemI;
};

Scope channel__w0_58487_66308800;

SignalI trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI maketrig__r_66307000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58487_66308800;
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

SignalI dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makedbus__r_66389700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58487_66308800;
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

SignalI abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_66389620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58487_66308800;
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

SignalI mem_48249760_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makemem_48249760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48249760_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58487_66308800;
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
         src0 = make__78772540();
         src1 = make__78772520();
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

Scope raddr_58488_66308500;

Scope makeraddr_58488_66308500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58488_66308500 = scope;
   scope->owner = (Object)channel__w0_58487_66308800;
   scope->name = "raddr:488";
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

Scope rinc_58493_66308020;

Scope makerinc_58493_66308020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58493_66308020 = scope;
   scope->owner = (Object)channel__w0_58487_66308800;
   scope->name = "rinc:493";
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

Scope rdec_58497_66307540;

Scope makerdec_58497_66307540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58497_66307540 = scope;
   scope->owner = (Object)channel__w0_58487_66308800;
   scope->name = "rdec:497";
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

Behavior __53918960;

Behavior make__53918960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53918960 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__50878920();

   return behavior;
}

Behavior __78553120;

Behavior make__78553120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78553120 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[dbus__r_66389700_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78553280();

   return behavior;
}

Behavior __78577440;

Behavior make__78577440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78577440 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58496_66553680_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78577620();

   return behavior;
}

Behavior __78576980;

Behavior make__78576980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78576980 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[trig__r_66307000_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78577140();

   return behavior;
}

Behavior __78576780;

Behavior make__78576780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78576780 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58494_66553660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78576940();

   return behavior;
}

Behavior __78576220;

Behavior make__78576220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78576220 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[abus__r_66389620_channel__w0_58487_66308800_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78576420();

   return behavior;
}

Behavior __78576020;

Behavior make__78576020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78576020 = behavior;
   behavior->owner = (Object)channel__w0_58487_66308800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58495_66553560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78576180();

   return behavior;
}

Scope makechannel__w0_58487_66308800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58487_66308800 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "channel_w0:487";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_66307000();
   scope->inners[1] = makedbus__r_66389700();
   scope->inners[2] = makeabus__r_66389620();
   scope->inners[3] = makemem_48249760();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58488_66308500();
   scope->scopes[1] = makerinc_58493_66308020();
   scope->scopes[2] = makerdec_58497_66307540();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53918960();
   scope->behaviors[1] = make__78553120();
   scope->behaviors[2] = make__78577440();
   scope->behaviors[3] = make__78576980();
   scope->behaviors[4] = make__78576780();
   scope->behaviors[5] = make__78576220();
   scope->behaviors[6] = make__78576020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58502_53918760;

SignalI trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI maketrig__r_53914100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58502_53918760;
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

SignalI dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makedbus__r_54336100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58502_53918760;
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

SignalI abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_54335940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58502_53918760;
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

SignalI mem_56026160_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makemem_56026160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56026160_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58502_53918760;
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
         src0 = make__78771200();
         src1 = make__78771180();
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

Scope raddr_58503_53918220;

Scope makeraddr_58503_53918220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58503_53918220 = scope;
   scope->owner = (Object)channel__w1_58502_53918760;
   scope->name = "raddr:503";
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

Scope rinc_58508_53916720;

Scope makerinc_58508_53916720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58508_53916720 = scope;
   scope->owner = (Object)channel__w1_58502_53918760;
   scope->name = "rinc:508";
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

Scope rdec_58512_53914860;

Scope makerdec_58512_53914860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58512_53914860 = scope;
   scope->owner = (Object)channel__w1_58502_53918760;
   scope->name = "rdec:512";
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

Behavior __59753240;

Behavior make__59753240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59753240 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__56722800();

   return behavior;
}

Behavior __78574600;

Behavior make__78574600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78574600 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[dbus__r_54336100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78574780();

   return behavior;
}

Behavior __78574360;

Behavior make__78574360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78574360 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58511_47939140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78574560();

   return behavior;
}

Behavior __78573860;

Behavior make__78573860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78573860 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[trig__r_53914100_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78574020();

   return behavior;
}

Behavior __78573660;

Behavior make__78573660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78573660 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58509_47939080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78573820();

   return behavior;
}

Behavior __78573180;

Behavior make__78573180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78573180 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[abus__r_54335940_channel__w1_58502_53918760_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78573360();

   return behavior;
}

Behavior __78572980;

Behavior make__78572980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78572980 = behavior;
   behavior->owner = (Object)channel__w1_58502_53918760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58510_47938900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78573140();

   return behavior;
}

Scope makechannel__w1_58502_53918760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58502_53918760 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "channel_w1:502";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53914100();
   scope->inners[1] = makedbus__r_54336100();
   scope->inners[2] = makeabus__r_54335940();
   scope->inners[3] = makemem_56026160();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58503_53918220();
   scope->scopes[1] = makerinc_58508_53916720();
   scope->scopes[2] = makerdec_58512_53914860();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59753240();
   scope->behaviors[1] = make__78574600();
   scope->behaviors[2] = make__78574360();
   scope->behaviors[3] = make__78573860();
   scope->behaviors[4] = make__78573660();
   scope->behaviors[5] = make__78573180();
   scope->behaviors[6] = make__78572980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58517_59753120;

SignalI reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereg__0_62229020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__accum_58517_59753120;
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

SignalI reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereg__1_62309520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__accum_58517_59753120;
   signalI->name = "reg_1";
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

Scope anum_58518_59752800;

Scope makeanum_58518_59752800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58518_59752800 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "anum:518";
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

Scope raddr_58521_50495260;

Scope makeraddr_58521_50495260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58521_50495260 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "raddr:521";
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

Scope waddr_58525_50494800;

Scope makewaddr_58525_50494800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58525_50494800 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "waddr:525";
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

Scope rinc_58529_50494060;

SignalI abus__r_50493660_rinc_58529_50494060_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_50493660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50493660_rinc_58529_50494060_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58529_50494060;
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

Scope makerinc_58529_50494060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58529_50494060 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "rinc:529";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50493660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58534_50493540;

SignalI abus__w_50493100_winc_58534_50493540_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_50493100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50493100_winc_58534_50493540_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58534_50493540;
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

Scope makewinc_58534_50493540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58534_50493540 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "winc:534";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50493100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58539_50492960;

SignalI abus__r_50492420_rdec_58539_50492960_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_50492420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50492420_rdec_58539_50492960_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58539_50492960;
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

Scope makerdec_58539_50492960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58539_50492960 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "rdec:539";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50492420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58544_50492240;

SignalI abus__w_50491820_wdec_58544_50492240_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_50491820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50491820_wdec_58544_50492240_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58544_50492240;
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

Scope makewdec_58544_50492240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58544_50492240 = scope;
   scope->owner = (Object)channel__accum_58517_59753120;
   scope->name = "wdec:544";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50491820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78571500;

Behavior make__78571500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78571500 = behavior;
   behavior->owner = (Object)channel__accum_58517_59753120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[reg__0_62229020_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78571660();

   return behavior;
}

Behavior __78571300;

Behavior make__78571300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78571300 = behavior;
   behavior->owner = (Object)channel__accum_58517_59753120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58519_66780060_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78571460();

   return behavior;
}

Behavior __78570820;

Behavior make__78570820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78570820 = behavior;
   behavior->owner = (Object)channel__accum_58517_59753120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[reg__1_62309520_channel__accum_58517_59753120_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78570980();

   return behavior;
}

Behavior __78570620;

Behavior make__78570620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78570620 = behavior;
   behavior->owner = (Object)channel__accum_58517_59753120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58520_66898160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78570780();

   return behavior;
}

Scope makechannel__accum_58517_59753120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58517_59753120 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "channel_accum:517";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62229020();
   scope->inners[1] = makereg__1_62309520();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58518_59752800();
   scope->scopes[1] = makeraddr_58521_50495260();
   scope->scopes[2] = makewaddr_58525_50494800();
   scope->scopes[3] = makerinc_58529_50494060();
   scope->scopes[4] = makewinc_58534_50493540();
   scope->scopes[5] = makerdec_58539_50492960();
   scope->scopes[6] = makewdec_58544_50492240();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78571500();
   scope->behaviors[1] = make__78571300();
   scope->behaviors[2] = make__78570820();
   scope->behaviors[3] = make__78570620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58549_62903940;

SignalI lv0_63023920_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelv0_63023920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_63023920_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

SignalI lv1_63154260_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelv1_63154260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_63154260_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
   signalI->name = "lv1";
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

SignalI av0_63407880_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeav0_63407880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_63407880_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

SignalI av1_63501980_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeav1_63501980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_63501980_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
   signalI->name = "av1";
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

SignalI rv_63615600_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerv_63615600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_63615600_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

SignalI lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelvok0_63615580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_63615580_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

SignalI lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelvok1_63615560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_63615560_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
   signalI->name = "lvok1";
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

SignalI rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makervok_63615520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_63615520_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

SignalI wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makewok0_63615500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_63615500_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

SignalI wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makewok1_63615420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_63615420_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
   signalI->name = "wok1";
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

SignalI run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerun_63615220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_63615220_mac__n1_58549_62903940_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58549_62903940;
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

Behavior __47886680;

Behavior make__47886680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47886680 = behavior;
   behavior->owner = (Object)mac__n1_58549_62903940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__63615040();

   return behavior;
}

Scope makemac__n1_58549_62903940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58549_62903940 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "mac_n1:549";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_63023920();
   scope->inners[1] = makelv1_63154260();
   scope->inners[2] = makeav0_63407880();
   scope->inners[3] = makeav1_63501980();
   scope->inners[4] = makerv_63615600();
   scope->inners[5] = makelvok0_63615580();
   scope->inners[6] = makelvok1_63615560();
   scope->inners[7] = makervok_63615520();
   scope->inners[8] = makewok0_63615500();
   scope->inners[9] = makewok1_63615420();
   scope->inners[10] = makerun_63615220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47886680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58556_47886140;

SignalI trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI maketrig__r_47917980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58556_47886140;
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

SignalI dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makedbus__r_49828400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58556_47886140;
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

SignalI abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_49828040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58556_47886140;
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

SignalI mem_51295620_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makemem_51295620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51295620_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58556_47886140;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78787100(),signalI->c_value);
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

Scope raddr_58557_47885060;

Scope makeraddr_58557_47885060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58557_47885060 = scope;
   scope->owner = (Object)channel__b0_58556_47886140;
   scope->name = "raddr:557";
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

Scope rinc_58562_47900540;

Scope makerinc_58562_47900540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58562_47900540 = scope;
   scope->owner = (Object)channel__b0_58556_47886140;
   scope->name = "rinc:562";
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

Scope rdec_58566_47899480;

Scope makerdec_58566_47899480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58566_47899480 = scope;
   scope->owner = (Object)channel__b0_58556_47886140;
   scope->name = "rdec:566";
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

Behavior __55180840;

Behavior make__55180840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55180840 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__53950340();

   return behavior;
}

Behavior __78593160;

Behavior make__78593160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78593160 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[dbus__r_49828400_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78593320();

   return behavior;
}

Behavior __78592960;

Behavior make__78592960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78592960 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58560_49933620_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78593120();

   return behavior;
}

Behavior __78592400;

Behavior make__78592400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78592400 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[trig__r_47917980_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78592560();

   return behavior;
}

Behavior __78592200;

Behavior make__78592200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78592200 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58558_49932960_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78592360();

   return behavior;
}

Behavior __78591740;

Behavior make__78591740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78591740 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[abus__r_49828040_channel__b0_58556_47886140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78591900();

   return behavior;
}

Behavior __78591520;

Behavior make__78591520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78591520 = behavior;
   behavior->owner = (Object)channel__b0_58556_47886140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58559_49930880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78591700();

   return behavior;
}

Scope makechannel__b0_58556_47886140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58556_47886140 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "channel_b0:556";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47917980();
   scope->inners[1] = makedbus__r_49828400();
   scope->inners[2] = makeabus__r_49828040();
   scope->inners[3] = makemem_51295620();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58557_47885060();
   scope->scopes[1] = makerinc_58562_47900540();
   scope->scopes[2] = makerdec_58566_47899480();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55180840();
   scope->behaviors[1] = make__78593160();
   scope->behaviors[2] = make__78592960();
   scope->behaviors[3] = make__78592400();
   scope->behaviors[4] = make__78592200();
   scope->behaviors[5] = make__78591740();
   scope->behaviors[6] = make__78591520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58571_55180580;

SignalI trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI maketrig__r_55175640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58571_55180580;
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

SignalI dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makedbus__r_55436920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58571_55180580;
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

SignalI abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55436500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58571_55180580;
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

SignalI mem_56375420_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makemem_56375420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56375420_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58571_55180580;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78786180(),signalI->c_value);
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

Scope raddr_58572_55179920;

Scope makeraddr_58572_55179920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58572_55179920 = scope;
   scope->owner = (Object)channel__b1_58571_55180580;
   scope->name = "raddr:572";
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

Scope rinc_58577_55178580;

Scope makerinc_58577_55178580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58577_55178580 = scope;
   scope->owner = (Object)channel__b1_58571_55180580;
   scope->name = "rinc:577";
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

Scope rdec_58581_55177440;

Scope makerdec_58581_55177440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58581_55177440 = scope;
   scope->owner = (Object)channel__b1_58571_55180580;
   scope->name = "rdec:581";
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

Behavior __62234180;

Behavior make__62234180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62234180 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->neg[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__57085520();

   return behavior;
}

Behavior __78590040;

Behavior make__78590040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78590040 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[dbus__r_55436920_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78590200();

   return behavior;
}

Behavior __78589840;

Behavior make__78589840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78589840 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58575_51812660_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78590000();

   return behavior;
}

Behavior __78589360;

Behavior make__78589360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78589360 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[trig__r_55175640_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78589520();

   return behavior;
}

Behavior __78589160;

Behavior make__78589160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78589160 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58573_51812580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78589320();

   return behavior;
}

Behavior __78588660;

Behavior make__78588660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78588660 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[abus__r_55436500_channel__b1_58571_55180580_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78588860();

   return behavior;
}

Behavior __78588400;

Behavior make__78588400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78588400 = behavior;
   behavior->owner = (Object)channel__b1_58571_55180580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58574_51812080_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78588620();

   return behavior;
}

Scope makechannel__b1_58571_55180580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58571_55180580 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "channel_b1:571";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55175640();
   scope->inners[1] = makedbus__r_55436920();
   scope->inners[2] = makeabus__r_55436500();
   scope->inners[3] = makemem_56375420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58572_55179920();
   scope->scopes[1] = makerinc_58577_55178580();
   scope->scopes[2] = makerdec_58581_55177440();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62234180();
   scope->behaviors[1] = make__78590040();
   scope->behaviors[2] = make__78589840();
   scope->behaviors[3] = make__78589360();
   scope->behaviors[4] = make__78589160();
   scope->behaviors[5] = make__78588660();
   scope->behaviors[6] = make__78588400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58586_62234000;

SignalI reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereg__0_62331880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__z_58586_62234000;
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

SignalI reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makereg__1_62476320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__z_58586_62234000;
   signalI->name = "reg_1";
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

Scope anum_58587_62233600;

Scope makeanum_58587_62233600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58587_62233600 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "anum:587";
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

Scope raddr_58590_62233060;

Scope makeraddr_58590_62233060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58590_62233060 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "raddr:590";
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

Scope waddr_58594_62232520;

Scope makewaddr_58594_62232520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58594_62232520 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "waddr:594";
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

Scope rinc_58598_62232060;

SignalI abus__r_62231520_rinc_58598_62232060_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_62231520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62231520_rinc_58598_62232060_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58598_62232060;
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

Scope makerinc_58598_62232060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58598_62232060 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "rinc:598";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62231520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58602_62231380;

SignalI abus__w_62230820_winc_58602_62231380_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_62230820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62230820_winc_58602_62231380_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58602_62231380;
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

Scope makewinc_58602_62231380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58602_62231380 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "winc:602";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62230820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58606_62230700;

SignalI abus__r_62230220_rdec_58606_62230700_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__r_62230220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62230220_rdec_58606_62230700_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58606_62230700;
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

Scope makerdec_58606_62230700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58606_62230700 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "rdec:606";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62230220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58611_62230100;

SignalI abus__w_62229700_wdec_58611_62230100_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makeabus__w_62229700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62229700_wdec_58611_62230100_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58611_62230100;
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

Scope makewdec_58611_62230100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58611_62230100 = scope;
   scope->owner = (Object)channel__z_58586_62234000;
   scope->name = "wdec:611";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62229700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78587000;

Behavior make__78587000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78587000 = behavior;
   behavior->owner = (Object)channel__z_58586_62234000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[reg__0_62331880_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78587160();

   return behavior;
}

Behavior __78586800;

Behavior make__78586800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78586800 = behavior;
   behavior->owner = (Object)channel__z_58586_62234000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58588_50937300_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78586960();

   return behavior;
}

Behavior __78586240;

Behavior make__78586240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78586240 = behavior;
   behavior->owner = (Object)channel__z_58586_62234000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[reg__1_62476320_channel__z_58586_62234000_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78586460();

   return behavior;
}

Behavior __78586040;

Behavior make__78586040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78586040 = behavior;
   behavior->owner = (Object)channel__z_58586_62234000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   _58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   _58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[_58589_51360900_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78586200();

   return behavior;
}

Scope makechannel__z_58586_62234000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58586_62234000 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "channel_z:586";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62331880();
   scope->inners[1] = makereg__1_62476320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58587_62233600();
   scope->scopes[1] = makeraddr_58590_62233060();
   scope->scopes[2] = makewaddr_58594_62232520();
   scope->scopes[3] = makerinc_58598_62232060();
   scope->scopes[4] = makewinc_58602_62231380();
   scope->scopes[5] = makerdec_58606_62230700();
   scope->scopes[6] = makewdec_58611_62230100();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78587000();
   scope->behaviors[1] = make__78586800();
   scope->behaviors[2] = make__78586240();
   scope->behaviors[3] = make__78586040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58616_63109240;

SignalI lv0_63187660_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelv0_63187660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_63187660_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
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

SignalI lv1_63475880_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelv1_63475880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_63475880_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
   signalI->name = "lv1";
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

SignalI rv0_63546520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerv0_63546520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_63546520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
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

SignalI rv1_63695560_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerv1_63695560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_63695560_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
   signalI->name = "rv1";
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

SignalI lvok0_63695540_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelvok0_63695540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_63695540_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
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

SignalI lvok1_63695520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makelvok1_63695520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_63695520_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
   signalI->name = "lvok1";
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

SignalI rvok0_63695500_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makervok0_63695500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_63695500_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
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

SignalI rvok1_63695460_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makervok1_63695460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_63695460_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
   signalI->name = "rvok1";
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

SignalI run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060;

SignalI makerun_63695440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_63695440_add__n_58616_63109240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58616_63109240;
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

Behavior __66475360;

Behavior make__66475360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66475360 = behavior;
   behavior->owner = (Object)add__n_58616_63109240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__63695300();

   return behavior;
}

Scope makeadd__n_58616_63109240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58616_63109240 = scope;
   scope->owner = (Object)layer0_58_840_66309120;
   scope->name = "add_n:616";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_63187660();
   scope->inners[1] = makelv1_63475880();
   scope->inners[2] = makerv0_63546520();
   scope->inners[3] = makerv1_63695560();
   scope->inners[4] = makelvok0_63695540();
   scope->inners[5] = makelvok1_63695520();
   scope->inners[6] = makervok0_63695500();
   scope->inners[7] = makervok1_63695460();
   scope->inners[8] = makerun_63695440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66475360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __65991680;

Behavior make__65991680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65991680 = behavior;
   behavior->owner = (Object)layer0_58_840_66309120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__65993940();

   return behavior;
}

Behavior __66775000;

Behavior make__66775000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66775000 = behavior;
   behavior->owner = (Object)layer0_58_840_66309120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__65991440();

   return behavior;
}

Behavior __55625860;

Behavior make__55625860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55625860 = behavior;
   behavior->owner = (Object)layer0_58_840_66309120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->pos[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__66774740();

   return behavior;
}

Behavior __78505140;

Behavior make__78505140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78505140 = behavior;
   behavior->owner = (Object)layer0_58_840_66309120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[req_55787340_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__mac_66475140_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78505380();

   return behavior;
}

Behavior __78554240;

Behavior make__78554240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78554240 = behavior;
   behavior->owner = (Object)layer0_58_840_66309120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[clk_55787400_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack_66475160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[value__z0_54027560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[value__z1_54663560_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__a0_55342240_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__a1_55342160_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78505600();

   return behavior;
}

Behavior __78554060;

Behavior make__78554060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78554060 = behavior;
   behavior->owner = (Object)layer0_58_840_66309120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[ack__mac_55374340_counter_58_8410_55355720_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[rst_55787360_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[a_55897700_func0_58_8410_54944880_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060);
   a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any += 1;
   a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any = realloc(a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any,a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->any[a_63937260_func1_58_8400_63472040_layer0_58_840_66309120_layer0_58_8400_55623920_tanh__neural__network_58_84_57348740_tanh__neural__network_58_840_75936680______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__78505540();

   return behavior;
}

Scope makelayer0_58_840_66309120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_66309120 = scope;
   scope->owner = (Object)layer0_58_8400_55623920;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55374000();
   scope->systemIs[1] = makefunc0_55897500();
   scope->systemIs[2] = makefunc1_63936960();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_66475180();
   scope->inners[1] = makeack_66475160();
   scope->inners[2] = makeack__mac_66475140();
   scope->inners[3] = makeack__add_66475080();
   scope->inners[4] = make_58496_66553680();
   scope->inners[5] = make_58494_66553660();
   scope->inners[6] = make_58495_66553560();
   scope->inners[7] = make_58519_66780060();
   scope->inners[8] = make_58520_66898160();
   scope->inners[9] = make_58511_47939140();
   scope->inners[10] = make_58509_47939080();
   scope->inners[11] = make_58510_47938900();
   scope->inners[12] = make_58560_49933620();
   scope->inners[13] = make_58561_49933220();
   scope->inners[14] = make_58558_49932960();
   scope->inners[15] = make_58559_49930880();
   scope->inners[16] = make_58588_50937300();
   scope->inners[17] = make_58589_51360900();
   scope->inners[18] = make_58575_51812660();
   scope->inners[19] = make_58576_51812620();
   scope->inners[20] = make_58573_51812580();
   scope->inners[21] = make_58574_51812080();
   scope->inners[22] = makevalue__z0_54027560();
   scope->inners[23] = makevalue__z1_54663560();
   scope->inners[24] = makevalue__a0_54965100();
   scope->inners[25] = makevalue__a1_55342320();
   scope->inners[26] = makeflag__z0_55342300();
   scope->inners[27] = makeflag__z1_55342260();
   scope->inners[28] = makeack__a0_55342240();
   scope->inners[29] = makeack__a1_55342160();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58487_66308800();
   scope->scopes[1] = makechannel__w1_58502_53918760();
   scope->scopes[2] = makechannel__accum_58517_59753120();
   scope->scopes[3] = makemac__n1_58549_62903940();
   scope->scopes[4] = makechannel__b0_58556_47886140();
   scope->scopes[5] = makechannel__b1_58571_55180580();
   scope->scopes[6] = makechannel__z_58586_62234000();
   scope->scopes[7] = makeadd__n_58616_63109240();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65991680();
   scope->behaviors[1] = make__66775000();
   scope->behaviors[2] = make__55625860();
   scope->behaviors[3] = make__78505140();
   scope->behaviors[4] = make__78554240();
   scope->behaviors[5] = make__78554060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_55623920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_55623920 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55787400();
   systemT->inputs[1] = makerst_55787360();
   systemT->inputs[2] = makereq_55787340();
   systemT->inputs[3] = make_58419_57051400();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57050580();
   systemT->outputs[1] = make_58417_57050440();
   systemT->outputs[2] = make_58418_57049940();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58459_59682020();
   systemT->inouts[1] = make_58460_62703180();

   systemT->scope = makelayer0_58_840_66309120();

   return systemT;
}