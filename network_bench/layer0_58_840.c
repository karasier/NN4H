#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_58458880;

SignalI clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeclk_58620640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
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

SignalI rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerst_58620620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
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

SignalI fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makefill_58620600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
   signalI->name = "fill";
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

SignalI req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereq_58620560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
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

SignalI _5815_58720980_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5815_58720980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_58720980_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
   signalI->name = ":15";
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

SignalI ack__layer_58720940_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__layer_58720940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_58720940_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
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

SignalI _5813_58720920_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5813_58720920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_58720920_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
   signalI->name = ":13";
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

SignalI _5814_58720840_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5814_58720840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_58720840_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
   signalI->name = ":14";
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

SignalI _5855_58952240_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5855_58952240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_58952240_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
   signalI->name = ":55";
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

SignalI _5856_59208160_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5856_59208160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_59208160_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_840_58458880;
   signalI->name = ":56";
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

Block __53231560;

Block __53231340;

void code__53231340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57587980(),ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57587880(),ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57587800(),ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__53231340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53231340 = block;
   block->owner = (Object)__53231560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53231340;

   return block;
};

void code__53231560() {
   {
      Value cond = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53231340();
   }
      }
   }
}

Block make__53231560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53231560 = block;
   block->owner = (Object)__53230300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53231560;

   return block;
};

Block __53230180;

Block __53229380;

Block __53229220;

void code__53229220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57587360(),flag__z0_51030600_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__53229220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53229220 = block;
   block->owner = (Object)__53229380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53229220;

   return block;
};

Block __56198360;

void code__56198360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57587200(),flag__z1_51030580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56198360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56198360 = block;
   block->owner = (Object)__53229380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56198360;

   return block;
};

void code__53229380() {
 code__53229220();
 code__56198360();
}

Block make__53229380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53229380 = block;
   block->owner = (Object)__53230180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53229380;

   return block;
};

Block __53230020;

void code__53230020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57587100(),flag__z0_51030600_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586980(),flag__z1_51030580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__53230020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53230020 = block;
   block->owner = (Object)__53230180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53230020;

   return block;
};

void code__53230180() {
   {
      Value cond = ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53229380();
   }
   else {
  code__53230020();
   }
      }
   }
}

Block make__53230180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53230180 = block;
   block->owner = (Object)__56374060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53230180;

   return block;
};

Block __56373920;

Block __56373660;

void code__56373660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586820(),ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57586720(),ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56373660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56373660 = block;
   block->owner = (Object)__56373920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56373660;

   return block;
};

Block __56372920;

Block __56372760;

void code__56372760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50947960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_5855_58952240_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585980(),ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56372760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56372760 = block;
   block->owner = (Object)__56372920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56372760;

   return block;
};

Block __56630320;

void code__56630320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_51030740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_5856_59208160_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585820(),ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56630320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56630320 = block;
   block->owner = (Object)__56372920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56630320;

   return block;
};

void code__56372920() {
 code__56372760();
 code__56630320();
}

Block make__56372920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56372920 = block;
   block->owner = (Object)__56373920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56372920;

   return block;
};

void code__56373920() {
   {
      Value cond = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56373660();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_51030600_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = flag__z1_51030580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__56372920();
   }
      }
   }
}

Block make__56373920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56373920 = block;
   block->owner = (Object)__56953720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56373920;

   return block;
};

Block __56953580;

Block __56953360;

Block __56953040;

void code__56953040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585560(),_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56953040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56953040 = block;
   block->owner = (Object)__56953360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56953040;

   return block;
};

void code__56953360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57585680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56953040();
   }
      }
   }
}

Block make__56953360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56953360 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56953360;

   return block;
};

Block __56952540;

Block __56952160;

void code__56952160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585340(),_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56952160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56952160 = block;
   block->owner = (Object)__56952540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56952160;

   return block;
};

void code__56952540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57585420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56952160();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585260(),_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56952540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56952540 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56952540;

   return block;
};

Block __56951520;

Block __56951120;

void code__56951120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57585060(),_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56951120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56951120 = block;
   block->owner = (Object)__56951520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56951120;

   return block;
};

void code__56951520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57585140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56951120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584980(),_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56951520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56951520 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56951520;

   return block;
};

Block __56974940;

void code__56974940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584840(),address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584760(),ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584640(),address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584540(),ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584420(),address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584340(),ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56974940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56974940 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56974940;

   return block;
};

Block __56973340;

Block __56973080;

Block __56972900;

Block __56972520;

void code__56972520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57583840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57583600(),_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = w0_49383260_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56972520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56972520 = block;
   block->owner = (Object)__56972900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56972520;

   return block;
};

void code__56972900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57584060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56972520();
   }
      }
   }
}

Block make__56972900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56972900 = block;
   block->owner = (Object)__56973080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56972900;

   return block;
};

void code__56973080() {
 code__56972900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57583160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56973080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56973080 = block;
   block->owner = (Object)__56973340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56973080;

   return block;
};

Block __57417980;

Block __57417820;

Block __57442040;

void code__57442040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57582620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57582520(),_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = w1_50270920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57442040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57442040 = block;
   block->owner = (Object)__57417820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57442040;

   return block;
};

void code__57417820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57582760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57442040();
   }
      }
   }
}

Block make__57417820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57417820 = block;
   block->owner = (Object)__57417980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57417820;

   return block;
};

void code__57417980() {
 code__57417820();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57582200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57417980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57417980 = block;
   block->owner = (Object)__56973340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57417980;

   return block;
};

Block __57790480;

Block __57790320;

Block __57790000;

Block __57789540;

void code__57789540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_50724660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57789540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57789540 = block;
   block->owner = (Object)__57790000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57789540;

   return block;
};

Block __58194640;

void code__58194640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_50724660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58194640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58194640 = block;
   block->owner = (Object)__57790000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58194640;

   return block;
};

void code__57790000() {
{
      Value value = _58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57581640())) {
    code__57789540();
         }
         else if (value2integer(value) == value2integer(make__57638560())) {
    code__58194640();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57638220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57790000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57790000 = block;
   block->owner = (Object)__57790320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57790000;

   return block;
};

void code__57790320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57581900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57790000();
   }
      }
   }
}

Block make__57790320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57790320 = block;
   block->owner = (Object)__57790480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57790320;

   return block;
};

void code__57790480() {
 code__57790320();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57637900();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57790480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57790480 = block;
   block->owner = (Object)__56973340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57790480;

   return block;
};

void code__56973340() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56973080();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57417980();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57790480();
   }
      }
   }
}

Block make__56973340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56973340 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56973340;

   return block;
};

Block __58461280;

void code__58461280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637680(),ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58461280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58461280 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58461280;

   return block;
};

Block __58460520;

void code__58460520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637460(),ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58460520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58460520 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58460520;

   return block;
};

Block __58459840;

void code__58459840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637300(),ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__58459840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58459840 = block;
   block->owner = (Object)__56953580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58459840;

   return block;
};

void code__56953580() {
 code__56953360();
 code__56952540();
 code__56951520();
   {
      Value cond = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56974940();
   }
      }
   }
   {
      Value cond = fill__channel_49994280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56973340();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57637760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58461280();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57637540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58460520();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57637380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58459840();
   }
      }
   }
}

Block make__56953580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56953580 = block;
   block->owner = (Object)__58459220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56953580;

   return block;
};

Block __56971880;

void code__56971880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49994380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56971880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56971880 = block;
   block->owner = (Object)__56971320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56971880;

   return block;
};

Block __56984120;

void code__56984120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                        src1 = ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                        dst = and_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_49994280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56984120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56984120 = block;
   block->owner = (Object)__57007900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56984120;

   return block;
};

Block __56972920;

void code__56972920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,clk_50949460_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,ack_50949440_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,rst_50949420_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      src1 = ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_58720940_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56972920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56972920 = block;
   block->owner = (Object)__57007720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56972920;

   return block;
};

Block __56972620;

void code__56972620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,value__a0_50947960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,value__a1_51030740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__56972620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56972620 = block;
   block->owner = (Object)__57007520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56972620;

   return block;
};

Block __50299560;

Block __50503780;

void code__50503780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,make_ref_rangeS(mem_50041620_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800,value2integer(abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value),value2integer(abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50503780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50503780 = block;
   block->owner = (Object)__50299560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50503780;

   return block;
};

void code__50299560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50041620_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50503780();
   }
      }
   }
}

Block make__50299560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50299560 = block;
   block->owner = (Object)__50705060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50299560;

   return block;
};

Block __57006420;

void code__57006420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57006420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57006420 = block;
   block->owner = (Object)__57006160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57006420;

   return block;
};

Block __57006100;

void code__57006100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57006100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57006100 = block;
   block->owner = (Object)__57005900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57006100;

   return block;
};

Block __57005340;

void code__57005340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57005340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57005340 = block;
   block->owner = (Object)__57005080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57005340;

   return block;
};

Block __57004960;

void code__57004960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57004960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57004960 = block;
   block->owner = (Object)__57004500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57004960;

   return block;
};

Block __57004120;

void code__57004120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57004120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57004120 = block;
   block->owner = (Object)__57003960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57004120;

   return block;
};

Block __57003920;

void code__57003920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57003920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57003920 = block;
   block->owner = (Object)__57003760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57003920;

   return block;
};

Block __57003380;

void code__57003380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57003380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57003380 = block;
   block->owner = (Object)__57003040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57003380;

   return block;
};

Block __57002920;

void code__57002920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57002920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57002920 = block;
   block->owner = (Object)__57002300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57002920;

   return block;
};

Block __57001400;

void code__57001400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57001400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57001400 = block;
   block->owner = (Object)__57001180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57001400;

   return block;
};

Block __57001140;

void code__57001140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57001140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57001140 = block;
   block->owner = (Object)__57000760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57001140;

   return block;
};

Block __57000280;

void code__57000280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57000280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57000280 = block;
   block->owner = (Object)__57000000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57000280;

   return block;
};

Block __57163620;

void code__57163620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57163620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57163620 = block;
   block->owner = (Object)__57163400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57163620;

   return block;
};

Block __47361540;

Block __48952100;

void code__48952100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,make_ref_rangeS(mem_50953660_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800,value2integer(abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value),value2integer(abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48952100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48952100 = block;
   block->owner = (Object)__47361540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48952100;

   return block;
};

void code__47361540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50953660_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            idx = value2integer(abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48952100();
   }
      }
   }
}

Block make__47361540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47361540 = block;
   block->owner = (Object)__49320300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47361540;

   return block;
};

Block __57161180;

void code__57161180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57161180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57161180 = block;
   block->owner = (Object)__57160920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57161180;

   return block;
};

Block __57160880;

void code__57160880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57160880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57160880 = block;
   block->owner = (Object)__57160680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57160880;

   return block;
};

Block __57160320;

void code__57160320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57160320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57160320 = block;
   block->owner = (Object)__57160160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57160320;

   return block;
};

Block __57160100;

void code__57160100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57160100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57160100 = block;
   block->owner = (Object)__57159920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57160100;

   return block;
};

Block __57159520;

void code__57159520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57159520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57159520 = block;
   block->owner = (Object)__57159220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57159520;

   return block;
};

Block __57159080;

void code__57159080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57159080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57159080 = block;
   block->owner = (Object)__57158620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57159080;

   return block;
};

Block __57158200;

void code__57158200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57158200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57158200 = block;
   block->owner = (Object)__57158040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57158200;

   return block;
};

Block __57158000;

void code__57158000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57158000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57158000 = block;
   block->owner = (Object)__57157800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57158000;

   return block;
};

Block __57157440;

void code__57157440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57157440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57157440 = block;
   block->owner = (Object)__57157280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57157440;

   return block;
};

Block __57157240;

void code__57157240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57157240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57157240 = block;
   block->owner = (Object)__57157080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57157240;

   return block;
};

Block __57156500;

void code__57156500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57156500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57156500 = block;
   block->owner = (Object)__57155980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57156500;

   return block;
};

Block __57155940;

void code__57155940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57155940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57155940 = block;
   block->owner = (Object)__57155700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57155940;

   return block;
};

Block __57227120;

void code__57227120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57227120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57227120 = block;
   block->owner = (Object)__57226800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57227120;

   return block;
};

Block __57226700;

void code__57226700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57226700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57226700 = block;
   block->owner = (Object)__57226440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57226700;

   return block;
};

Block __57226120;

void code__57226120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57226120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57226120 = block;
   block->owner = (Object)__57225920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57226120;

   return block;
};

Block __57225840;

void code__57225840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57225840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57225840 = block;
   block->owner = (Object)__57225660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57225840;

   return block;
};

Block __50573860;

Block __50573640;

Block __50573320;

void code__50573320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57504680(),_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50573320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50573320 = block;
   block->owner = (Object)__50573640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50573320;

   return block;
};

void code__50573640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57504840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50573320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57504580(),_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50573640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50573640 = block;
   block->owner = (Object)__50573860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50573640;

   return block;
};

Block __50572700;

Block __50572380;

void code__50572380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57504320(),_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50572380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50572380 = block;
   block->owner = (Object)__50572700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50572380;

   return block;
};

void code__50572700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57504480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50572380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57504220(),_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50572700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50572700 = block;
   block->owner = (Object)__50573860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50572700;

   return block;
};

Block __50571420;

Block __50571100;

void code__50571100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57504040(),_5814_58720840_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50571100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50571100 = block;
   block->owner = (Object)__50571420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50571100;

   return block;
};

void code__50571420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57504140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50571100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57503940(),_5813_58720920_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50571420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50571420 = block;
   block->owner = (Object)__50573860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50571420;

   return block;
};

Block __50722620;

Block __50722240;

Block __50721820;

Block __50721500;

void code__50721500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_58720980_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,rv_50574160_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57503080(),rvok_50574100_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50721500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50721500 = block;
   block->owner = (Object)__50721820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50721500;

   return block;
};

void code__50721820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_58720920_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57503240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50721500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5814_58720840_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57502920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_58720840_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57502800(),_5813_58720920_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50721820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50721820 = block;
   block->owner = (Object)__50722240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50721820;

   return block;
};

void code__50722240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57503400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50721820();
   }
      }
   }
}

Block make__50722240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50722240 = block;
   block->owner = (Object)__50722620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50722240;

   return block;
};

Block __50900200;

Block __50899880;

Block __50899560;

void code__50899560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,lv0_50283720_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57502020(),lvok0_50574140_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50899560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50899560 = block;
   block->owner = (Object)__50899880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50899560;

   return block;
};

void code__50899880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57502500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50899560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57501720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57501620(),_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50899880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50899880 = block;
   block->owner = (Object)__50900200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50899880;

   return block;
};

void code__50900200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57502640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50899880();
   }
      }
   }
}

Block make__50900200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50900200 = block;
   block->owner = (Object)__50722620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50900200;

   return block;
};

Block __51052080;

Block __51050500;

Block __51050260;

void code__51050260() {
}

Block make__51050260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51050260 = block;
   block->owner = (Object)__51050500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51050260;

   return block;
};

Block __49192400;

void code__49192400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50418980_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__49192400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49192400 = block;
   block->owner = (Object)__51050500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49192400;

   return block;
};

void code__51050500() {
 code__51050260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_50418980_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
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
                              src0 = lv0_50283720_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50574160_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57500960();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50418980_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__49192400();
}

Block make__51050500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51050500 = block;
   block->owner = (Object)__51052080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51050500;

   return block;
};

void code__51052080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57501460(),ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57501400(),run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__51050500();
}

Block make__51052080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51052080 = block;
   block->owner = (Object)__50722620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51052080;

   return block;
};

Block __49450680;

Block __49450060;

Block __49449700;

void code__49449700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,lv1_50351380_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57500260(),lvok1_50574120_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__49449700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49449700 = block;
   block->owner = (Object)__49450060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49449700;

   return block;
};

void code__49450060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57500440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49449700();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57500060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57499900(),_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__49450060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49450060 = block;
   block->owner = (Object)__49450680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49450060;

   return block;
};

void code__49450680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57500600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49450060();
   }
      }
   }
}

Block make__49450680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49450680 = block;
   block->owner = (Object)__50722620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49450680;

   return block;
};

Block __50028120;

Block __50027560;

Block __50027340;

void code__50027340() {
}

Block make__50027340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50027340 = block;
   block->owner = (Object)__50027560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50027340;

   return block;
};

Block __50539520;

void code__50539520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_50507900_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50539520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50539520 = block;
   block->owner = (Object)__50027560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50539520;

   return block;
};

void code__50027560() {
 code__50027340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_50507900_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
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
                              src0 = lv1_50351380_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50574160_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57523400();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_50507900_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__50539520();
}

Block make__50027560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50027560 = block;
   block->owner = (Object)__50028120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50027560;

   return block;
};

void code__50028120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57524080(),ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57523980(),run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__50027560();
}

Block make__50028120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50028120 = block;
   block->owner = (Object)__50722620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50028120;

   return block;
};

void code__50722620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57503480(),run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__50722240();
 code__50900200();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50574140_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = rvok_50574100_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51052080();
   }
      }
   }
 code__49450680();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_50574120_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = rvok_50574100_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50028120();
   }
      }
   }
}

Block make__50722620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50722620 = block;
   block->owner = (Object)__50573860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50722620;

   return block;
};

Block __50570160;

void code__50570160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57523220(),rvok_50574100_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57523140(),lvok0_50574140_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57523060(),av0_50418980_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57523000(),lvok1_50574120_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57522920(),av1_50507900_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50570160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50570160 = block;
   block->owner = (Object)__50573860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50570160;

   return block;
};

void code__50573860() {
 code__50573640();
 code__50572700();
 code__50571420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57503840(),ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57503740(),run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49994380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50722620();
   }
   else {
  code__50570160();
   }
      }
   }
}

Block make__50573860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50573860 = block;
   block->owner = (Object)__50686300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50573860;

   return block;
};

Block __57222920;

void code__57222920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57222920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57222920 = block;
   block->owner = (Object)__57222700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57222920;

   return block;
};

Block __57222640;

void code__57222640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57222640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57222640 = block;
   block->owner = (Object)__57222160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57222640;

   return block;
};

Block __57221560;

void code__57221560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57221560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57221560 = block;
   block->owner = (Object)__57221360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57221560;

   return block;
};

Block __57221320;

void code__57221320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57221320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57221320 = block;
   block->owner = (Object)__57278420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57221320;

   return block;
};

Block __57277800;

void code__57277800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57277800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57277800 = block;
   block->owner = (Object)__57277500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57277800;

   return block;
};

Block __57277460;

void code__57277460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57277460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57277460 = block;
   block->owner = (Object)__57277300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57277460;

   return block;
};

Block __57276920;

void code__57276920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57276920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57276920 = block;
   block->owner = (Object)__57276600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57276920;

   return block;
};

Block __57276560;

void code__57276560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57276560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57276560 = block;
   block->owner = (Object)__57276340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57276560;

   return block;
};

Block __57274020;

void code__57274020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57274020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57274020 = block;
   block->owner = (Object)__57273800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57274020;

   return block;
};

Block __57273760;

void code__57273760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57273760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57273760 = block;
   block->owner = (Object)__57273560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57273760;

   return block;
};

Block __57271820;

void code__57271820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57271820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57271820 = block;
   block->owner = (Object)__57271580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57271820;

   return block;
};

Block __57271540;

void code__57271540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57271540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57271540 = block;
   block->owner = (Object)__57271260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57271540;

   return block;
};

Block __57270600;

void code__57270600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57270600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57270600 = block;
   block->owner = (Object)__57294540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57270600;

   return block;
};

Block __57294300;

void code__57294300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57294300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57294300 = block;
   block->owner = (Object)__57293240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57294300;

   return block;
};

Block __50449220;

Block __50447540;

Block __50447160;

void code__50447160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,lv0_50236480_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57519700(),lvok0_50449720_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50447160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50447160 = block;
   block->owner = (Object)__50447540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50447160;

   return block;
};

Block __50619260;

void code__50619260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,rv0_50388700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57519440(),rvok0_50449680_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50619260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50619260 = block;
   block->owner = (Object)__50447540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50619260;

   return block;
};

Block __50839180;

Block __50838700;

void code__50838700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_50236480_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      src1 = rv0_50388700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50838700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50838700 = block;
   block->owner = (Object)__50839180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50838700;

   return block;
};

void code__50839180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57519240(),run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57519180(),ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__50838700();
}

Block make__50839180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50839180 = block;
   block->owner = (Object)__50447540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50839180;

   return block;
};

Block __45465040;

void code__45465040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,lv1_50300300_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57518640(),lvok1_50449700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__45465040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45465040 = block;
   block->owner = (Object)__50447540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45465040;

   return block;
};

Block __47723000;

void code__47723000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,rv1_50449740_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57518440(),rvok1_50449640_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__47723000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47723000 = block;
   block->owner = (Object)__50447540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47723000;

   return block;
};

Block __49047200;

Block __49046280;

void code__49046280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_50300300_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      src1 = rv1_50449740_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__49046280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49046280 = block;
   block->owner = (Object)__49047200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49046280;

   return block;
};

void code__49047200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57518160(),run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57518000(),ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__49046280();
}

Block make__49047200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49047200 = block;
   block->owner = (Object)__50447540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49047200;

   return block;
};

void code__50447540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57519900(),run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
 code__50447160();
 code__50619260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50449720_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = rvok0_50449680_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50839180();
   }
      }
   }
 code__45465040();
 code__47723000();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_50449700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = rvok1_50449640_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49047200();
   }
      }
   }
}

Block make__50447540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50447540 = block;
   block->owner = (Object)__50449220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50447540;

   return block;
};

Block __50448680;

void code__50448680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57517700(),lvok0_50449720_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57517640(),rvok0_50449680_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57517560(),lvok1_50449700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57517480(),rvok1_50449640_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__50448680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50448680 = block;
   block->owner = (Object)__50449220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50448680;

   return block;
};

void code__50449220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57520180(),ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57520080(),run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         src1 = run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50447540();
   }
   else {
  code__50448680();
   }
      }
   }
}

Block make__50449220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50449220 = block;
   block->owner = (Object)__49994540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50449220;

   return block;
};

Value make__57517300() {
   static unsigned long long data[] = { 21ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57517240() {
   static unsigned long long data[] = { 247ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57516820() {
   static unsigned long long data[] = { 30ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57516800() {
   static unsigned long long data[] = { 227ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57516540() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57516520() {
   static unsigned long long data[] = { 19ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57504840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57504680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57504580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57504480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57504320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57504220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57504140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57504040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57503940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57503840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57503740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57503480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57503400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57503240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57503080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57502920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57502800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57502640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57502500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57502020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57501720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57501620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57501460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57501400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57500960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57500600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57500440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57500260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57500060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57499900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57524080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57523980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57523400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57523220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57523140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57523060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57523000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57522920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57520180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57520080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57519900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57519700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57519440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57519240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57519180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57518640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57518440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57518160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57518000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57517700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57517640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57517560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57517480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57587980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57587880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57587800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57587360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57587200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57587100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57586980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57586820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57586720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57585560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57585420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57585340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57585260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57585140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57585060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57584980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57584760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57584540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57584340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57583840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57583600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57583160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57582760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57582620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57582520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57582200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57581900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57581640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57638560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57638220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57637900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57637760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57637680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57637460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57637300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_49420260;

SignalI req__mac_49994380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereq__mac_49994380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49994380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack_49994360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__mac_49994340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__add_49994300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49994300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI fill__channel_49994280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makefill__channel_49994280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_49994280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "fill_channel";
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

SignalI _5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5897_50053520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":97";
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

SignalI _5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5895_50053500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":95";
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

SignalI _5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5896_50053400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":96";
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

SignalI _58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58143_50171000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI _58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58144_50257020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":144";
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

SignalI _58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58126_50318580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":126";
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

SignalI _58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58124_50318540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":124";
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

SignalI _58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58125_50318420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":125";
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

SignalI _58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58182_50405200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":182";
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

SignalI _58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58183_50511620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":183";
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

SignalI _58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58212_50593480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":212";
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

SignalI _58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58213_50675300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":213";
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

SignalI value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makevalue__z0_50754880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makevalue__z1_50887620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI value__a0_50947960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makevalue__a0_50947960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50947960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI value__a1_51030740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makevalue__a1_51030740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_51030740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI flag__z0_51030600_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeflag__z0_51030600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51030600_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI flag__z1_51030580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeflag__z1_51030580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_51030580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__a0_51030480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__a1_51030460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
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

SignalI address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress__weights0_51030320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_51030320_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "address_weights0";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SignalI address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress__weights1_51029960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights1_51029960_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "address_weights1";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SignalI address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress__bias_51029840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_51029840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "address_bias";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SignalI ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__weights0_51029740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "ack_weights0";
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

SignalI ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__weights1_51029660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "ack_weights1";
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

SignalI ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeack__bias_51029580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "ack_bias";
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

SignalI _58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58197_44183120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":197";
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

SignalI _58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58198_47361840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":198";
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

SignalI _58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58199_47361640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":199";
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

SignalI w0_49383260_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makew0_49383260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_49383260_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "w0";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57517300();
         src1 = make__57517240();
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

SignalI w1_50270920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makew1_50270920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w1_50270920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "w1";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57516820();
         src1 = make__57516800();
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

SignalI b_50724660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeb_50724660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_50724660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57516540();
         src1 = make__57516520();
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

SignalI _5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_5899_50724640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":99";
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

SignalI _58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58100_50724540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":100";
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

SignalI _58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58101_50835300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":101";
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

SignalI _58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58128_50835280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":128";
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

SignalI _58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58129_50835200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":129";
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

SignalI _58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI make_58130_50934740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)layer0_58_84_49420260;
   signalI->name = ":130";
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

SystemI counter_50949100;

SystemI makecounter_50949100() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_50949100 = systemI;
   systemI->owner = (Object)layer0_58_84_49420260;
   systemI->name = "counter";
   systemI->system = counter_58_841_50952020;

   return systemI;
};

SystemI func0_50337440;

SystemI makefunc0_50337440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_50337440 = systemI;
   systemI->owner = (Object)layer0_58_84_49420260;
   systemI->name = "func0";
   systemI->system = func0_58_841_50074180;

   return systemI;
};

SystemI func1_50023320;

SystemI makefunc1_50023320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_50023320 = systemI;
   systemI->owner = (Object)layer0_58_84_49420260;
   systemI->name = "func1";
   systemI->system = func1_58_840_49257840;

   return systemI;
};

Scope channel__w0_5883_49419820;

SignalI trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI maketrig__r_49416700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
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

SignalI trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI maketrig__w_49416680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
   signalI->name = "trig_w";
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

SignalI dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makedbus__r_49513240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
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

SignalI dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makedbus__w_49974920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
   signalI->name = "dbus_w";
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

SignalI abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_49974840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
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

SignalI abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_49974760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
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

SignalI mem_50041620_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makemem_50041620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50041620_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w0_5883_49419820;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
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

Scope raddr_5884_49419340;

Scope makeraddr_5884_49419340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49419340 = scope;
   scope->owner = (Object)channel__w0_5883_49419820;
   scope->name = "raddr:84";
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

Scope waddr_5889_49418920;

Scope makewaddr_5889_49418920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49418920 = scope;
   scope->owner = (Object)channel__w0_5883_49419820;
   scope->name = "waddr:89";
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

Scope rinc_5894_49418500;

Scope makerinc_5894_49418500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49418500 = scope;
   scope->owner = (Object)channel__w0_5883_49419820;
   scope->name = "rinc:94";
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

Scope winc_5898_49418080;

Scope makewinc_5898_49418080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49418080 = scope;
   scope->owner = (Object)channel__w0_5883_49419820;
   scope->name = "winc:98";
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

Scope rdec_58102_49417620;

Scope makerdec_58102_49417620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49417620 = scope;
   scope->owner = (Object)channel__w0_5883_49419820;
   scope->name = "rdec:102";
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

Scope wdec_58107_49417140;

Scope makewdec_58107_49417140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49417140 = scope;
   scope->owner = (Object)channel__w0_5883_49419820;
   scope->name = "wdec:107";
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

Behavior __50705060;

Behavior make__50705060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50705060 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg-1] = (Object)behavior;
   behavior->block = make__50299560();

   return behavior;
}

Behavior __57006160;

Behavior make__57006160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57006160 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[dbus__r_49513240_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57006420();

   return behavior;
}

Behavior __57005900;

Behavior make__57005900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57005900 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_5897_50053520_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57006100();

   return behavior;
}

Behavior __57005080;

Behavior make__57005080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57005080 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[trig__r_49416700_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57005340();

   return behavior;
}

Behavior __57004500;

Behavior make__57004500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57004500 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_5895_50053500_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57004960();

   return behavior;
}

Behavior __57003960;

Behavior make__57003960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57003960 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[abus__r_49974840_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57004120();

   return behavior;
}

Behavior __57003760;

Behavior make__57003760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57003760 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_5896_50053400_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57003920();

   return behavior;
}

Behavior __57003040;

Behavior make__57003040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57003040 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[trig__w_49416680_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57003380();

   return behavior;
}

Behavior __57002300;

Behavior make__57002300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57002300 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_5899_50724640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57002920();

   return behavior;
}

Behavior __57001180;

Behavior make__57001180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57001180 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[abus__w_49974760_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57001400();

   return behavior;
}

Behavior __57000760;

Behavior make__57000760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57000760 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58100_50724540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57001140();

   return behavior;
}

Behavior __57000000;

Behavior make__57000000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57000000 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[dbus__w_49974920_channel__w0_5883_49419820_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57000280();

   return behavior;
}

Behavior __57163400;

Behavior make__57163400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57163400 = behavior;
   behavior->owner = (Object)channel__w0_5883_49419820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58101_50835300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57163620();

   return behavior;
}

Scope makechannel__w0_5883_49419820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49419820 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49416700();
   scope->inners[1] = maketrig__w_49416680();
   scope->inners[2] = makedbus__r_49513240();
   scope->inners[3] = makedbus__w_49974920();
   scope->inners[4] = makeabus__r_49974840();
   scope->inners[5] = makeabus__w_49974760();
   scope->inners[6] = makemem_50041620();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49419340();
   scope->scopes[1] = makewaddr_5889_49418920();
   scope->scopes[2] = makerinc_5894_49418500();
   scope->scopes[3] = makewinc_5898_49418080();
   scope->scopes[4] = makerdec_58102_49417620();
   scope->scopes[5] = makewdec_58107_49417140();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50705060();
   scope->behaviors[1] = make__57006160();
   scope->behaviors[2] = make__57005900();
   scope->behaviors[3] = make__57005080();
   scope->behaviors[4] = make__57004500();
   scope->behaviors[5] = make__57003960();
   scope->behaviors[6] = make__57003760();
   scope->behaviors[7] = make__57003040();
   scope->behaviors[8] = make__57002300();
   scope->behaviors[9] = make__57001180();
   scope->behaviors[10] = make__57000760();
   scope->behaviors[11] = make__57000000();
   scope->behaviors[12] = make__57163400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_50704940;

SignalI trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI maketrig__r_50701900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
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

SignalI trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI maketrig__w_50701880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
   signalI->name = "trig_w";
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

SignalI dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makedbus__r_50766820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
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

SignalI dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makedbus__w_50885280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
   signalI->name = "dbus_w";
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

SignalI abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_50885200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
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

SignalI abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_50885120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
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

SignalI mem_50953660_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makemem_50953660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50953660_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__w1_58112_50704940;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
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

Scope raddr_58113_50704640;

Scope makeraddr_58113_50704640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_50704640 = scope;
   scope->owner = (Object)channel__w1_58112_50704940;
   scope->name = "raddr:113";
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

Scope waddr_58118_50704160;

Scope makewaddr_58118_50704160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_50704160 = scope;
   scope->owner = (Object)channel__w1_58112_50704940;
   scope->name = "waddr:118";
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

Scope rinc_58123_50703700;

Scope makerinc_58123_50703700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_50703700 = scope;
   scope->owner = (Object)channel__w1_58112_50704940;
   scope->name = "rinc:123";
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

Scope winc_58127_50703280;

Scope makewinc_58127_50703280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_50703280 = scope;
   scope->owner = (Object)channel__w1_58112_50704940;
   scope->name = "winc:127";
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

Scope rdec_58131_50702860;

Scope makerdec_58131_50702860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_50702860 = scope;
   scope->owner = (Object)channel__w1_58112_50704940;
   scope->name = "rdec:131";
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

Scope wdec_58136_50702440;

Scope makewdec_58136_50702440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_50702440 = scope;
   scope->owner = (Object)channel__w1_58112_50704940;
   scope->name = "wdec:136";
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

Behavior __49320300;

Behavior make__49320300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49320300 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->neg[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_neg-1] = (Object)behavior;
   behavior->block = make__47361540();

   return behavior;
}

Behavior __57160920;

Behavior make__57160920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57160920 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[dbus__r_50766820_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57161180();

   return behavior;
}

Behavior __57160680;

Behavior make__57160680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57160680 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58126_50318580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57160880();

   return behavior;
}

Behavior __57160160;

Behavior make__57160160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57160160 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[trig__r_50701900_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57160320();

   return behavior;
}

Behavior __57159920;

Behavior make__57159920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57159920 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58124_50318540_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57160100();

   return behavior;
}

Behavior __57159220;

Behavior make__57159220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57159220 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[abus__r_50885200_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57159520();

   return behavior;
}

Behavior __57158620;

Behavior make__57158620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57158620 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58125_50318420_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57159080();

   return behavior;
}

Behavior __57158040;

Behavior make__57158040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57158040 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[trig__w_50701880_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57158200();

   return behavior;
}

Behavior __57157800;

Behavior make__57157800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57157800 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58128_50835280_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57158000();

   return behavior;
}

Behavior __57157280;

Behavior make__57157280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57157280 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[abus__w_50885120_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57157440();

   return behavior;
}

Behavior __57157080;

Behavior make__57157080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57157080 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58129_50835200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57157240();

   return behavior;
}

Behavior __57155980;

Behavior make__57155980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57155980 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[dbus__w_50885280_channel__w1_58112_50704940_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57156500();

   return behavior;
}

Behavior __57155700;

Behavior make__57155700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57155700 = behavior;
   behavior->owner = (Object)channel__w1_58112_50704940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58130_50934740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57155940();

   return behavior;
}

Scope makechannel__w1_58112_50704940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_50704940 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50701900();
   scope->inners[1] = maketrig__w_50701880();
   scope->inners[2] = makedbus__r_50766820();
   scope->inners[3] = makedbus__w_50885280();
   scope->inners[4] = makeabus__r_50885200();
   scope->inners[5] = makeabus__w_50885120();
   scope->inners[6] = makemem_50953660();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_50704640();
   scope->scopes[1] = makewaddr_58118_50704160();
   scope->scopes[2] = makerinc_58123_50703700();
   scope->scopes[3] = makewinc_58127_50703280();
   scope->scopes[4] = makerdec_58131_50702860();
   scope->scopes[5] = makewdec_58136_50702440();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49320300();
   scope->behaviors[1] = make__57160920();
   scope->behaviors[2] = make__57160680();
   scope->behaviors[3] = make__57160160();
   scope->behaviors[4] = make__57159920();
   scope->behaviors[5] = make__57159220();
   scope->behaviors[6] = make__57158620();
   scope->behaviors[7] = make__57158040();
   scope->behaviors[8] = make__57157800();
   scope->behaviors[9] = make__57157280();
   scope->behaviors[10] = make__57157080();
   scope->behaviors[11] = make__57155980();
   scope->behaviors[12] = make__57155700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49320160;

SignalI reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereg__0_49448500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__accum_58141_49320160;
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

SignalI reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereg__1_49355820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__accum_58141_49320160;
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

Scope anum_58142_49319820;

Scope makeanum_58142_49319820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49319820 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "anum:142";
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

Scope raddr_58145_49319260;

Scope makeraddr_58145_49319260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49319260 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "raddr:145";
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

Scope waddr_58149_49318680;

Scope makewaddr_58149_49318680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49318680 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "waddr:149";
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

Scope rinc_58153_49317980;

SignalI abus__r_49317400_rinc_58153_49317980_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_49317400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49317400_rinc_58153_49317980_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)rinc_58153_49317980;
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

Scope makerinc_58153_49317980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49317980 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49317400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49317180;

SignalI abus__w_49316620_winc_58158_49317180_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_49316620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49316620_winc_58158_49317180_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)winc_58158_49317180;
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

Scope makewinc_58158_49317180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49317180 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49316620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49316460;

SignalI abus__r_49316080_rdec_58163_49316460_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_49316080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49316080_rdec_58163_49316460_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)rdec_58163_49316460;
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

Scope makerdec_58163_49316460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49316460 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49316080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49315920;

SignalI abus__w_49340020_wdec_58168_49315920_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_49340020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49340020_wdec_58168_49315920_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)wdec_58168_49315920;
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

Scope makewdec_58168_49315920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49315920 = scope;
   scope->owner = (Object)channel__accum_58141_49320160;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49340020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57226800;

Behavior make__57226800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57226800 = behavior;
   behavior->owner = (Object)channel__accum_58141_49320160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__0_49448500_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57227120();

   return behavior;
}

Behavior __57226440;

Behavior make__57226440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57226440 = behavior;
   behavior->owner = (Object)channel__accum_58141_49320160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58143_50171000_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57226700();

   return behavior;
}

Behavior __57225920;

Behavior make__57225920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57225920 = behavior;
   behavior->owner = (Object)channel__accum_58141_49320160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__1_49355820_channel__accum_58141_49320160_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57226120();

   return behavior;
}

Behavior __57225660;

Behavior make__57225660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57225660 = behavior;
   behavior->owner = (Object)channel__accum_58141_49320160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58144_50257020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57225840();

   return behavior;
}

Scope makechannel__accum_58141_49320160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49320160 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49448500();
   scope->inners[1] = makereg__1_49355820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49319820();
   scope->scopes[1] = makeraddr_58145_49319260();
   scope->scopes[2] = makewaddr_58149_49318680();
   scope->scopes[3] = makerinc_58153_49317980();
   scope->scopes[4] = makewinc_58158_49317180();
   scope->scopes[5] = makerdec_58163_49316460();
   scope->scopes[6] = makewdec_58168_49315920();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57226800();
   scope->behaviors[1] = make__57226440();
   scope->behaviors[2] = make__57225920();
   scope->behaviors[3] = make__57225660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_50241060;

SignalI lv0_50283720_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelv0_50283720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50283720_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI lv1_50351380_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelv1_50351380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50351380_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI av0_50418980_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeav0_50418980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50418980_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI av1_50507900_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeav1_50507900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_50507900_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI rv_50574160_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerv_50574160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50574160_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI lvok0_50574140_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelvok0_50574140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50574140_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI lvok1_50574120_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelvok1_50574120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_50574120_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI rvok_50574100_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makervok_50574100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50574100_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

SignalI run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerun_50574080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50574080_mac__n1_58173_50241060_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)mac__n1_58173_50241060;
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

Behavior __50686300;

Behavior make__50686300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50686300 = behavior;
   behavior->owner = (Object)mac__n1_58173_50241060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__50573860();

   return behavior;
}

Scope makemac__n1_58173_50241060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_50241060 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50283720();
   scope->inners[1] = makelv1_50351380();
   scope->inners[2] = makeav0_50418980();
   scope->inners[3] = makeav1_50507900();
   scope->inners[4] = makerv_50574160();
   scope->inners[5] = makelvok0_50574140();
   scope->inners[6] = makelvok1_50574120();
   scope->inners[7] = makervok_50574100();
   scope->inners[8] = makerun_50574080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50686300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_50686180;

SignalI reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereg__0_50822540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__bias_58180_50686180;
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

SignalI reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereg__1_50904740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__bias_58180_50686180;
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

Scope anum_58181_50685780;

Scope makeanum_58181_50685780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_50685780 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "anum:181";
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

Scope raddr_58184_50685260;

Scope makeraddr_58184_50685260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_50685260 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "raddr:184";
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

Scope waddr_58188_50684780;

Scope makewaddr_58188_50684780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_50684780 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "waddr:188";
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

Scope rinc_58192_50684320;

SignalI abus__r_50708440_rinc_58192_50684320_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_50708440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50708440_rinc_58192_50684320_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)rinc_58192_50684320;
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

Scope makerinc_58192_50684320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_50684320 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50708440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_50708300;

SignalI abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_50707840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)winc_58196_50708300;
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

Behavior __57273800;

Behavior make__57273800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57273800 = behavior;
   behavior->owner = (Object)winc_58196_50708300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[abus__w_50707840_winc_58196_50708300_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57274020();

   return behavior;
}

Behavior __57273560;

Behavior make__57273560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57273560 = behavior;
   behavior->owner = (Object)winc_58196_50708300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58199_47361640_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57273760();

   return behavior;
}

Scope makewinc_58196_50708300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_50708300 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50707840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57273800();
   scope->behaviors[1] = make__57273560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_50707400;

SignalI abus__r_50706920_rdec_58200_50707400_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_50706920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50706920_rdec_58200_50707400_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)rdec_58200_50707400;
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

Scope makerdec_58200_50707400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_50707400 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50706920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_50706800;

SignalI abus__w_50706380_wdec_58205_50706800_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_50706380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50706380_wdec_58205_50706800_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)wdec_58205_50706800;
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

Scope makewdec_58205_50706800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_50706800 = scope;
   scope->owner = (Object)channel__bias_58180_50686180;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50706380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57222700;

Behavior make__57222700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57222700 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57222920();

   return behavior;
}

Behavior __57222160;

Behavior make__57222160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57222160 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58182_50405200_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57222640();

   return behavior;
}

Behavior __57221360;

Behavior make__57221360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57221360 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57221560();

   return behavior;
}

Behavior __57278420;

Behavior make__57278420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57278420 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58183_50511620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57221320();

   return behavior;
}

Behavior __57277500;

Behavior make__57277500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57277500 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__0_50822540_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57277800();

   return behavior;
}

Behavior __57277300;

Behavior make__57277300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57277300 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58197_44183120_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57277460();

   return behavior;
}

Behavior __57276600;

Behavior make__57276600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57276600 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__1_50904740_channel__bias_58180_50686180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57276920();

   return behavior;
}

Behavior __57276340;

Behavior make__57276340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57276340 = behavior;
   behavior->owner = (Object)channel__bias_58180_50686180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58198_47361840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57276560();

   return behavior;
}

Scope makechannel__bias_58180_50686180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_50686180 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50822540();
   scope->inners[1] = makereg__1_50904740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_50685780();
   scope->scopes[1] = makeraddr_58184_50685260();
   scope->scopes[2] = makewaddr_58188_50684780();
   scope->scopes[3] = makerinc_58192_50684320();
   scope->scopes[4] = makewinc_58196_50708300();
   scope->scopes[5] = makerdec_58200_50707400();
   scope->scopes[6] = makewdec_58205_50706800();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57222700();
   scope->behaviors[1] = make__57222160();
   scope->behaviors[2] = make__57221360();
   scope->behaviors[3] = make__57278420();
   scope->behaviors[4] = make__57277500();
   scope->behaviors[5] = make__57277300();
   scope->behaviors[6] = make__57276600();
   scope->behaviors[7] = make__57276340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_49106920;

SignalI reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereg__0_49253540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__z_58210_49106920;
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

SignalI reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makereg__1_49399740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)channel__z_58210_49106920;
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

Scope anum_58211_49106420;

Scope makeanum_58211_49106420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_49106420 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "anum:211";
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

Scope raddr_58214_49105940;

Scope makeraddr_58214_49105940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_49105940 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "raddr:214";
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

Scope waddr_58218_49105460;

Scope makewaddr_58218_49105460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_49105460 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "waddr:218";
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

Scope rinc_58222_49104960;

SignalI abus__r_49104440_rinc_58222_49104960_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_49104440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49104440_rinc_58222_49104960_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)rinc_58222_49104960;
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

Scope makerinc_58222_49104960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_49104960 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49104440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_49104260;

SignalI abus__w_49103800_winc_58226_49104260_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_49103800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49103800_winc_58226_49104260_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)winc_58226_49104260;
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

Scope makewinc_58226_49104260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_49104260 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49103800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_49103600;

SignalI abus__r_49103180_rdec_58230_49103600_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__r_49103180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49103180_rdec_58230_49103600_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)rdec_58230_49103600;
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

Scope makerdec_58230_49103600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_49103600 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49103180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_49103000;

SignalI abus__w_49127120_wdec_58235_49103000_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeabus__w_49127120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49127120_wdec_58235_49103000_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)wdec_58235_49103000;
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

Scope makewdec_58235_49103000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_49103000 = scope;
   scope->owner = (Object)channel__z_58210_49106920;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49127120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57271580;

Behavior make__57271580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57271580 = behavior;
   behavior->owner = (Object)channel__z_58210_49106920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__0_49253540_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57271820();

   return behavior;
}

Behavior __57271260;

Behavior make__57271260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57271260 = behavior;
   behavior->owner = (Object)channel__z_58210_49106920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58212_50593480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57271540();

   return behavior;
}

Behavior __57294540;

Behavior make__57294540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57294540 = behavior;
   behavior->owner = (Object)channel__z_58210_49106920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[reg__1_49399740_channel__z_58210_49106920_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57270600();

   return behavior;
}

Behavior __57293240;

Behavior make__57293240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57293240 = behavior;
   behavior->owner = (Object)channel__z_58210_49106920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   _58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   _58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[_58213_50675300_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57294300();

   return behavior;
}

Scope makechannel__z_58210_49106920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_49106920 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49253540();
   scope->inners[1] = makereg__1_49399740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_49106420();
   scope->scopes[1] = makeraddr_58214_49105940();
   scope->scopes[2] = makewaddr_58218_49105460();
   scope->scopes[3] = makerinc_58222_49104960();
   scope->scopes[4] = makewinc_58226_49104260();
   scope->scopes[5] = makerdec_58230_49103600();
   scope->scopes[6] = makewdec_58235_49103000();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57271580();
   scope->behaviors[1] = make__57271260();
   scope->behaviors[2] = make__57294540();
   scope->behaviors[3] = make__57293240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_50173380;

SignalI lv0_50236480_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelv0_50236480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50236480_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI lv1_50300300_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelv1_50300300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50300300_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI rv0_50388700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerv0_50388700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_50388700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI rv1_50449740_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerv1_50449740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_50449740_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI lvok0_50449720_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelvok0_50449720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50449720_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI lvok1_50449700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makelvok1_50449700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_50449700_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI rvok0_50449680_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makervok0_50449680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_50449680_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI rvok1_50449640_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makervok1_50449640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_50449640_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

SignalI run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makerun_50449620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50449620_add__n_58240_50173380_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)add__n_58240_50173380;
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

Behavior __49994540;

Behavior make__49994540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49994540 = behavior;
   behavior->owner = (Object)add__n_58240_50173380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__50449220();

   return behavior;
}

Scope makeadd__n_58240_50173380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_50173380 = scope;
   scope->owner = (Object)layer0_58_84_49420260;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50236480();
   scope->inners[1] = makelv1_50300300();
   scope->inners[2] = makerv0_50388700();
   scope->inners[3] = makerv1_50449740();
   scope->inners[4] = makelvok0_50449720();
   scope->inners[5] = makelvok1_50449700();
   scope->inners[6] = makervok0_50449680();
   scope->inners[7] = makervok1_50449640();
   scope->inners[8] = makerun_50449620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49994540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53230300;

Behavior make__53230300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53230300 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__53231560();

   return behavior;
}

Behavior __56374060;

Behavior make__56374060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56374060 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__53230180();

   return behavior;
}

Behavior __56953720;

Behavior make__56953720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56953720 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__56373920();

   return behavior;
}

Behavior __58459220;

Behavior make__58459220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58459220 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->pos[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_pos-1] = (Object)behavior;
   behavior->block = make__56953580();

   return behavior;
}

Behavior __56971320;

Behavior make__56971320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56971320 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[req_58620560_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__mac_49994340_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__56971880();

   return behavior;
}

Behavior __57007900;

Behavior make__57007900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57007900 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[fill_58620600_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__weights0_51029740_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__weights1_51029660_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__bias_51029580_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__56984120();

   return behavior;
}

Behavior __57007720;

Behavior make__57007720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57007720 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[clk_58620640_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack_49994360_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[rst_58620620_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[value__z0_50754880_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[value__z1_50887620_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__a0_51030480_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__a1_51030460_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__56972920();

   return behavior;
}

Behavior __57007520;

Behavior make__57007520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57007520 = behavior;
   behavior->owner = (Object)layer0_58_84_49420260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[ack__mac_50949360_counter_58_841_50952020_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__56972620();

   return behavior;
}

Scope makelayer0_58_84_49420260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49420260 = scope;
   scope->owner = (Object)layer0_58_840_58458880;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_50949100();
   scope->systemIs[1] = makefunc0_50337440();
   scope->systemIs[2] = makefunc1_50023320();
   scope->num_inners = 43;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49994380();
   scope->inners[1] = makeack_49994360();
   scope->inners[2] = makeack__mac_49994340();
   scope->inners[3] = makeack__add_49994300();
   scope->inners[4] = makefill__channel_49994280();
   scope->inners[5] = make_5897_50053520();
   scope->inners[6] = make_5895_50053500();
   scope->inners[7] = make_5896_50053400();
   scope->inners[8] = make_58143_50171000();
   scope->inners[9] = make_58144_50257020();
   scope->inners[10] = make_58126_50318580();
   scope->inners[11] = make_58124_50318540();
   scope->inners[12] = make_58125_50318420();
   scope->inners[13] = make_58182_50405200();
   scope->inners[14] = make_58183_50511620();
   scope->inners[15] = make_58212_50593480();
   scope->inners[16] = make_58213_50675300();
   scope->inners[17] = makevalue__z0_50754880();
   scope->inners[18] = makevalue__z1_50887620();
   scope->inners[19] = makevalue__a0_50947960();
   scope->inners[20] = makevalue__a1_51030740();
   scope->inners[21] = makeflag__z0_51030600();
   scope->inners[22] = makeflag__z1_51030580();
   scope->inners[23] = makeack__a0_51030480();
   scope->inners[24] = makeack__a1_51030460();
   scope->inners[25] = makeaddress__weights0_51030320();
   scope->inners[26] = makeaddress__weights1_51029960();
   scope->inners[27] = makeaddress__bias_51029840();
   scope->inners[28] = makeack__weights0_51029740();
   scope->inners[29] = makeack__weights1_51029660();
   scope->inners[30] = makeack__bias_51029580();
   scope->inners[31] = make_58197_44183120();
   scope->inners[32] = make_58198_47361840();
   scope->inners[33] = make_58199_47361640();
   scope->inners[34] = makew0_49383260();
   scope->inners[35] = makew1_50270920();
   scope->inners[36] = makeb_50724660();
   scope->inners[37] = make_5899_50724640();
   scope->inners[38] = make_58100_50724540();
   scope->inners[39] = make_58101_50835300();
   scope->inners[40] = make_58128_50835280();
   scope->inners[41] = make_58129_50835200();
   scope->inners[42] = make_58130_50934740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49419820();
   scope->scopes[1] = makechannel__w1_58112_50704940();
   scope->scopes[2] = makechannel__accum_58141_49320160();
   scope->scopes[3] = makemac__n1_58173_50241060();
   scope->scopes[4] = makechannel__bias_58180_50686180();
   scope->scopes[5] = makechannel__z_58210_49106920();
   scope->scopes[6] = makeadd__n_58240_50173380();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53230300();
   scope->behaviors[1] = make__56374060();
   scope->behaviors[2] = make__56953720();
   scope->behaviors[3] = make__58459220();
   scope->behaviors[4] = make__56971320();
   scope->behaviors[5] = make__57007900();
   scope->behaviors[6] = make__57007720();
   scope->behaviors[7] = make__57007520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_58458880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_58458880 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58620640();
   systemT->inputs[1] = makerst_58620620();
   systemT->inputs[2] = makefill_58620600();
   systemT->inputs[3] = makereq_58620560();
   systemT->inputs[4] = make_5815_58720980();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_58720940();
   systemT->outputs[1] = make_5813_58720920();
   systemT->outputs[2] = make_5814_58720840();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_58952240();
   systemT->inouts[1] = make_5856_59208160();

   systemT->scope = makelayer0_58_84_49420260();

   return systemT;
}