#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_841_53980880;

SignalI clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeclk_54091200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
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

SignalI rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerst_54091180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
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

SignalI req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereq_54091160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
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

SignalI _58114_54633280_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58114_54633280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58114_54633280_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
   signalI->name = ":114";
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

SignalI ack__layer_54633120_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__layer_54633120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_54633120_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
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

SignalI _58112_54633100_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58112_54633100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_54633100_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
   signalI->name = ":112";
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

SignalI _58113_54632880_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58113_54632880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58113_54632880_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
   signalI->name = ":113";
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

SignalI _58154_55131720_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58154_55131720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58154_55131720_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
   signalI->name = ":154";
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

SignalI _58155_55472600_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58155_55472600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58155_55472600_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_841_53980880;
   signalI->name = ":155";
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

Block __56238960;

Block __56238520;

void code__56238520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78424420(),ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78424360(),ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78424300(),ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56238520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56238520 = block;
   block->owner = (Object)__56238960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56238520;

   return block;
};

void code__56238960() {
   {
      Value cond = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56238520();
   }
      }
   }
}

Block make__56238960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56238960 = block;
   block->owner = (Object)__56400740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56238960;

   return block;
};

Block __56400540;

Block __56399360;

Block __56399040;

void code__56399040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78424120(),flag__z0_56464940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56399040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56399040 = block;
   block->owner = (Object)__56399360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56399040;

   return block;
};

Block __56838340;

void code__56838340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78423980(),flag__z1_56464920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56838340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56838340 = block;
   block->owner = (Object)__56399360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56838340;

   return block;
};

void code__56399360() {
 code__56399040();
 code__56838340();
}

Block make__56399360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56399360 = block;
   block->owner = (Object)__56400540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56399360;

   return block;
};

Block __56400100;

void code__56400100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78423920(),flag__z0_56464940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78423860(),flag__z1_56464920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56400100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56400100 = block;
   block->owner = (Object)__56400540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56400100;

   return block;
};

void code__56400540() {
   {
      Value cond = ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56399360();
   }
   else {
  code__56400100();
   }
      }
   }
}

Block make__56400540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56400540 = block;
   block->owner = (Object)__49110640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56400540;

   return block;
};

Block __49110300;

Block __49109720;

void code__49109720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78423760(),ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78423700(),ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__49109720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49109720 = block;
   block->owner = (Object)__49110300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49109720;

   return block;
};

Block __49107940;

Block __49107700;

void code__49107700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_56189340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58154_55131720_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78423320(),ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__49107700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49107700 = block;
   block->owner = (Object)__49107940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49107700;

   return block;
};

Block __51483940;

void code__51483940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_56464960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58155_55472600_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78422960(),ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51483940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51483940 = block;
   block->owner = (Object)__49107940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51483940;

   return block;
};

void code__49107940() {
 code__49107700();
 code__51483940();
}

Block make__49107940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49107940 = block;
   block->owner = (Object)__49110300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49107940;

   return block;
};

void code__49110300() {
   {
      Value cond = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49109720();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_56464940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = flag__z1_56464920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__49107940();
   }
      }
   }
}

Block make__49110300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49110300 = block;
   block->owner = (Object)__53981720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49110300;

   return block;
};

Block __77936100;

void code__77936100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54638440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77936100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77936100 = block;
   block->owner = (Object)__77935800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77936100;

   return block;
};

Block __77936360;

void code__77936360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,clk_56498380_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,ack_56498360_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rst_56498340_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,z__value_53699740_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,z__value_54113000_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      src1 = ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_54633120_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77936360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77936360 = block;
   block->owner = (Object)__77985440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77936360;

   return block;
};

Block __77936280;

void code__77936280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58256_55311140_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58271_55577580_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,value__a0_56189340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,value__a1_56464960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77936280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77936280 = block;
   block->owner = (Object)__77985260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77936280;

   return block;
};

Block __51546420;

void code__51546420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51202640_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51546420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51546420 = block;
   block->owner = (Object)__53527980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51546420;

   return block;
};

Block __77984460;

void code__77984460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77984460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77984460 = block;
   block->owner = (Object)__77984300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77984460;

   return block;
};

Block __77984260;

void code__77984260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77984260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77984260 = block;
   block->owner = (Object)__77984100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77984260;

   return block;
};

Block __77983780;

void code__77983780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77983780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77983780 = block;
   block->owner = (Object)__77983620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77983780;

   return block;
};

Block __77983580;

void code__77983580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77983580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77983580 = block;
   block->owner = (Object)__77983420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77983580;

   return block;
};

Block __77983080;

void code__77983080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77983080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77983080 = block;
   block->owner = (Object)__77982860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77983080;

   return block;
};

Block __77982820;

void code__77982820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77982820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77982820 = block;
   block->owner = (Object)__77982660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77982820;

   return block;
};

Block __54673000;

void code__54673000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54322840_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54673000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54673000 = block;
   block->owner = (Object)__54920480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54673000;

   return block;
};

Block __77981420;

void code__77981420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77981420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77981420 = block;
   block->owner = (Object)__77981260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77981420;

   return block;
};

Block __77981220;

void code__77981220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77981220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77981220 = block;
   block->owner = (Object)__77981020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77981220;

   return block;
};

Block __77980660;

void code__77980660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77980660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77980660 = block;
   block->owner = (Object)__77980500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77980660;

   return block;
};

Block __77980460;

void code__77980460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77980460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77980460 = block;
   block->owner = (Object)__77980300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77980460;

   return block;
};

Block __77980000;

void code__77980000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77980000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77980000 = block;
   block->owner = (Object)__77979820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77980000;

   return block;
};

Block __77979780;

void code__77979780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__77979780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77979780 = block;
   block->owner = (Object)__78266300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77979780;

   return block;
};

Block __78264980;

void code__78264980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78264980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78264980 = block;
   block->owner = (Object)__78264820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78264980;

   return block;
};

Block __78264780;

void code__78264780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78264780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78264780 = block;
   block->owner = (Object)__78264620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78264780;

   return block;
};

Block __78264300;

void code__78264300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78264300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78264300 = block;
   block->owner = (Object)__78264140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78264300;

   return block;
};

Block __78264100;

void code__78264100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78264100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78264100 = block;
   block->owner = (Object)__78263940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78264100;

   return block;
};

Block __56549040;

Block __56548860;

Block __56548540;

void code__56548540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413640(),_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56548540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56548540 = block;
   block->owner = (Object)__56548860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56548540;

   return block;
};

void code__56548860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78413740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56548540();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413560(),_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56548860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56548860 = block;
   block->owner = (Object)__56549040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56548860;

   return block;
};

Block __56547880;

Block __56547500;

void code__56547500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413340(),_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56547500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56547500 = block;
   block->owner = (Object)__56547880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56547500;

   return block;
};

void code__56547880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78413480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56547500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413280(),_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56547880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56547880 = block;
   block->owner = (Object)__56549040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56547880;

   return block;
};

Block __56546880;

Block __56546540;

void code__56546540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413120(),_58113_54632880_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56546540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56546540 = block;
   block->owner = (Object)__56546880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56546540;

   return block;
};

void code__56546880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78413200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56546540();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413060(),_58112_54633100_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56546880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56546880 = block;
   block->owner = (Object)__56549040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56546880;

   return block;
};

Block __56545420;

void code__56545420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412820(),rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412760(),lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412700(),wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412640(),lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412580(),wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56545420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56545420 = block;
   block->owner = (Object)__56549040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56545420;

   return block;
};

Block __56779300;

Block __56778880;

Block __56836020;

Block __56835700;

Block __56833780;

Block __56833620;

void code__56833620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58114_54633280_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rv_56549280_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78412000(),rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56833620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56833620 = block;
   block->owner = (Object)__56833780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56833620;

   return block;
};

void code__56833780() {
 code__56833620();
}

Block make__56833780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56833780 = block;
   block->owner = (Object)__56835700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56833780;

   return block;
};

Block __56835540;

void code__56835540() {
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
                  src0 = _58113_54632880_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__78411900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78411860();
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
                        src0 = _58113_54632880_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78411600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78411540();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58113_54632880_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78411400(),_58112_54633100_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56835540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56835540 = block;
   block->owner = (Object)__56835700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56835540;

   return block;
};

void code__56835700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58112_54633100_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78412160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56833780();
   }
   else {
  code__56835540();
   }
      }
   }
}

Block make__56835700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56835700 = block;
   block->owner = (Object)__56836020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56835700;

   return block;
};

void code__56836020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78412260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56835700();
   }
      }
   }
}

Block make__56836020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56836020 = block;
   block->owner = (Object)__56778880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56836020;

   return block;
};

void code__56778880() {
 code__56836020();
}

Block make__56778880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56778880 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56778880;

   return block;
};

Block __45947320;

Block __45946760;

Block __45946240;

Block __45992860;

Block __45990880;

void code__45990880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,lv0_55741060_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78410940(),lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45990880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45990880 = block;
   block->owner = (Object)__45992860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45990880;

   return block;
};

void code__45992860() {
 code__45990880();
}

Block make__45992860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45992860 = block;
   block->owner = (Object)__45946240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45992860;

   return block;
};

Block __45945920;

void code__45945920() {
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
                  src0 = _58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__78410840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78410800();
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
                        src0 = _58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78410560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78410500();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78410380(),_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45945920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45945920 = block;
   block->owner = (Object)__45946240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45945920;

   return block;
};

void code__45946240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78411100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45992860();
   }
   else {
  code__45945920();
   }
      }
   }
}

Block make__45946240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45946240 = block;
   block->owner = (Object)__45946760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45946240;

   return block;
};

void code__45946760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78411200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45946240();
   }
      }
   }
}

Block make__45946760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45946760 = block;
   block->owner = (Object)__45947320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45946760;

   return block;
};

void code__45947320() {
 code__45946760();
}

Block make__45947320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45947320 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45947320;

   return block;
};

Block __48772480;

Block __48771700;

Block __48771540;

void code__48771540() {
}

Block make__48771540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48771540 = block;
   block->owner = (Object)__48771700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48771540;

   return block;
};

Block __50575820;

void code__50575820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_56108100_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78409560(),wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50575820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50575820 = block;
   block->owner = (Object)__48771700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50575820;

   return block;
};

void code__48771700() {
 code__48771540();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_56108100_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
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
                              src0 = lv0_55741060_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_56549280_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78409740();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_56108100_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__50575820();
}

Block make__48771700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48771700 = block;
   block->owner = (Object)__48772480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48771700;

   return block;
};

void code__48772480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78410120(),ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78410060(),run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__48771700();
}

Block make__48772480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48772480 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48772480;

   return block;
};

Block __50984520;

void code__50984520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78409360(),wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78409300(),wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78409180(),lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78409120(),lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78409060(),rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50984520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50984520 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50984520;

   return block;
};

Block __50983260;

Block __50983020;

Block __50980840;

Block __51002320;

Block __51002160;

void code__51002160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,lv1_55858800_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78408660(),lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51002160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51002160 = block;
   block->owner = (Object)__51002320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51002160;

   return block;
};

void code__51002320() {
 code__51002160();
}

Block make__51002320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51002320 = block;
   block->owner = (Object)__50980840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51002320;

   return block;
};

Block __50980040;

void code__50980040() {
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
                  src0 = _58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__78408560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78408520();
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
                        src0 = _58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78408280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78408200();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78408080(),_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50980040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50980040 = block;
   block->owner = (Object)__50980840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50980040;

   return block;
};

void code__50980840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78408820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51002320();
   }
   else {
  code__50980040();
   }
      }
   }
}

Block make__50980840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50980840 = block;
   block->owner = (Object)__50983020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50980840;

   return block;
};

void code__50983020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78408920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50980840();
   }
      }
   }
}

Block make__50983020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50983020 = block;
   block->owner = (Object)__50983260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50983020;

   return block;
};

void code__50983260() {
 code__50983020();
}

Block make__50983260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50983260 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50983260;

   return block;
};

Block __51305740;

Block __51305020;

Block __51304820;

void code__51304820() {
}

Block make__51304820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51304820 = block;
   block->owner = (Object)__51305020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51304820;

   return block;
};

Block __53703660;

void code__53703660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_56414720_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78407240(),wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53703660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53703660 = block;
   block->owner = (Object)__51305020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53703660;

   return block;
};

void code__51305020() {
 code__51304820();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_56414720_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
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
                              src0 = lv1_55858800_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_56549280_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78407440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_56414720_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__53703660();
}

Block make__51305020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51305020 = block;
   block->owner = (Object)__51305740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51305020;

   return block;
};

void code__51305740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78407840(),ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78407780(),run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__51305020();
}

Block make__51305740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51305740 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51305740;

   return block;
};

Block __53917860;

void code__53917860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78407020(),wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78406960(),wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78406900(),lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78406840(),lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78406780(),rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53917860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53917860 = block;
   block->owner = (Object)__56779300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53917860;

   return block;
};

void code__56779300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412420(),run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56778880();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45947320();
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
               src0 = lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               src1 = rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48772480();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50984520();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50983260();
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
               src0 = lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               src1 = rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51305740();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53917860();
   }
      }
   }
}

Block make__56779300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56779300 = block;
   block->owner = (Object)__56549040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56779300;

   return block;
};

Block __56544360;

void code__56544360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78406720(),av0_56108100_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78406660(),av1_56414720_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56544360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56544360 = block;
   block->owner = (Object)__56549040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56544360;

   return block;
};

void code__56549040() {
 code__56548860();
 code__56547880();
 code__56546880();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78413000(),ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78412940(),run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56545420();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54638440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56779300();
   }
   else {
  code__56544360();
   }
      }
   }
}

Block make__56549040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56549040 = block;
   block->owner = (Object)__53916480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56549040;

   return block;
};

Block __54746780;

void code__54746780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54360220_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54746780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54746780 = block;
   block->owner = (Object)__55043580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54746780;

   return block;
};

Block __78262100;

void code__78262100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78262100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78262100 = block;
   block->owner = (Object)__78261940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78262100;

   return block;
};

Block __78261900;

void code__78261900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78261900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78261900 = block;
   block->owner = (Object)__78261740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78261900;

   return block;
};

Block __78261400;

void code__78261400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78261400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78261400 = block;
   block->owner = (Object)__78261180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78261400;

   return block;
};

Block __78261140;

void code__78261140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78261140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78261140 = block;
   block->owner = (Object)__78260980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78261140;

   return block;
};

Block __78260680;

void code__78260680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78260680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78260680 = block;
   block->owner = (Object)__78260520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78260680;

   return block;
};

Block __78260480;

void code__78260480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78260480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78260480 = block;
   block->owner = (Object)__78260320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78260480;

   return block;
};

Block __55594820;

void code__55594820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55405860_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55594820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55594820 = block;
   block->owner = (Object)__56245600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55594820;

   return block;
};

Block __78258980;

void code__78258980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78258980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78258980 = block;
   block->owner = (Object)__78258820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78258980;

   return block;
};

Block __78258780;

void code__78258780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78258780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78258780 = block;
   block->owner = (Object)__78258620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78258780;

   return block;
};

Block __78258320;

void code__78258320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78258320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78258320 = block;
   block->owner = (Object)__78282680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78258320;

   return block;
};

Block __78282640;

void code__78282640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78282640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78282640 = block;
   block->owner = (Object)__78282480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78282640;

   return block;
};

Block __78282180;

void code__78282180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78282180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78282180 = block;
   block->owner = (Object)__78282020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78282180;

   return block;
};

Block __78281980;

void code__78281980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78281980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78281980 = block;
   block->owner = (Object)__78281780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78281980;

   return block;
};

Block __78280260;

void code__78280260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78280260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78280260 = block;
   block->owner = (Object)__78280100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78280260;

   return block;
};

Block __78280060;

void code__78280060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78280060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78280060 = block;
   block->owner = (Object)__78279900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78280060;

   return block;
};

Block __78279580;

void code__78279580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78279580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78279580 = block;
   block->owner = (Object)__78279400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78279580;

   return block;
};

Block __78279360;

void code__78279360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78279360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78279360 = block;
   block->owner = (Object)__78279140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78279360;

   return block;
};

Block __50063900;

Block __50063640;

void code__50063640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78428740(),_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50063640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50063640 = block;
   block->owner = (Object)__50063900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50063640;

   return block;
};

Block __50062060;

void code__50062060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78428680(),_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50062060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50062060 = block;
   block->owner = (Object)__50063900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50062060;

   return block;
};

Block __48615680;

Block __48614700;

void code__48614700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,lv0_47997920_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78428240(),lvok0_50064360_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__48614700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48614700 = block;
   block->owner = (Object)__48615680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48614700;

   return block;
};

Block __50606760;

Block __50606220;

Block __50604820;

void code__50604820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rv0_49587820_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427900(),_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427820(),rvok0_50064200_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50604820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50604820 = block;
   block->owner = (Object)__50606220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50604820;

   return block;
};

Block __50606040;

void code__50606040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427760(),_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427680(),_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50606040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50606040 = block;
   block->owner = (Object)__50606220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50606040;

   return block;
};

void code__50606220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78428060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50604820();
   }
   else {
  code__50606040();
   }
      }
   }
}

Block make__50606220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50606220 = block;
   block->owner = (Object)__50606760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50606220;

   return block;
};

void code__50606760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58256_55311140_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78428160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50606220();
   }
      }
   }
}

Block make__50606760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50606760 = block;
   block->owner = (Object)__48615680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50606760;

   return block;
};

Block __51028740;

Block __51028180;

void code__51028180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47997920_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      src1 = rv0_49587820_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51028180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51028180 = block;
   block->owner = (Object)__51028740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51028180;

   return block;
};

void code__51028740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427460(),run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427400(),ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__51028180();
}

Block make__51028740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51028740 = block;
   block->owner = (Object)__48615680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51028740;

   return block;
};

Block __53433380;

void code__53433380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,lv1_49267640_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78427080(),lvok1_50064340_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53433380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53433380 = block;
   block->owner = (Object)__48615680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53433380;

   return block;
};

Block __53643260;

Block __53642780;

Block __53641840;

void code__53641840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rv1_50064500_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426740(),_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426680(),rvok1_50064180_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53641840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53641840 = block;
   block->owner = (Object)__53642780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53641840;

   return block;
};

Block __53642600;

void code__53642600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426620(),_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426560(),_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53642600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53642600 = block;
   block->owner = (Object)__53642780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53642600;

   return block;
};

void code__53642780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78426900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53641840();
   }
   else {
  code__53642600();
   }
      }
   }
}

Block make__53642780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53642780 = block;
   block->owner = (Object)__53643260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53642780;

   return block;
};

void code__53643260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58271_55577580_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78427000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53642780();
   }
      }
   }
}

Block make__53643260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53643260 = block;
   block->owner = (Object)__48615680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53643260;

   return block;
};

Block __53914820;

Block __53914120;

void code__53914120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_49267640_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      src1 = rv1_50064500_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53914120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53914120 = block;
   block->owner = (Object)__53914820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53914120;

   return block;
};

void code__53914820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426380(),run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426320(),ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__53914120();
}

Block make__53914820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53914820 = block;
   block->owner = (Object)__48615680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53914820;

   return block;
};

void code__48615680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78428380(),run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__48614700();
 code__50606760();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50064360_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = rvok0_50064200_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51028740();
   }
      }
   }
 code__53433380();
 code__53643260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_50064340_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = rvok1_50064180_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53914820();
   }
      }
   }
}

Block make__48615680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48615680 = block;
   block->owner = (Object)__50063900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48615680;

   return block;
};

Block __48618300;

void code__48618300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426080(),lvok0_50064360_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78426020(),rvok0_50064200_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78425960(),lvok1_50064340_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78425900(),rvok1_50064180_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__48618300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48618300 = block;
   block->owner = (Object)__50063900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48618300;

   return block;
};

void code__50063900() {
 code__50063640();
 code__50062060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78428600(),ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78428540(),run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48615680();
   }
   else {
  code__48618300();
   }
      }
   }
}

Block make__50063900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50063900 = block;
   block->owner = (Object)__54638600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50063900;

   return block;
};

Value make__78359160() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78359140() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78357960() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78357940() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78406640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78405720() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78413740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78413640() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78413560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78413480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78413340() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78413280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78413200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78413120() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78413060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78413000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78412260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78412160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78412000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78411900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78411860() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78411600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78411540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78411400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78411200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78411100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78410940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78410840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78410800() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78410560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78410500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78410380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78410120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78410060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78409740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78409560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78409360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78409300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78409180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78409120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78409060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78408920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78408820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78408660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78408560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78408520() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78408280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78408200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78408080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78407840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78407780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78407440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78407240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78407020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78406960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78406900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78406840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78406780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78406720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78406660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78428740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78428680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78428600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78428540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78428380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78428240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78428160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78428060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78427900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78427820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78427760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78427680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78427460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78427400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78427080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78427000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78426900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78426740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78426680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78426620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78426560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78426380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78426320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78426080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78426020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78425960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78425900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78424420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78424360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78424300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78424120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78423980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78423920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78423860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78423760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78423700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78423320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78422960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_49418680;

SignalI req__mac_54638440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereq__mac_54638440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54638440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack_54638420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__mac_54638400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__add_54638380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54638380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI _58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58191_54759940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":191";
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

SignalI _58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58189_54759920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":189";
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

SignalI _58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58190_54759840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":190";
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

SignalI _58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58214_54841040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":214";
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

SignalI _58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58215_55010400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":215";
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

SignalI _58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58206_55148040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":206";
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

SignalI _58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58204_55148020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":204";
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

SignalI _58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58205_55147940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":205";
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

SignalI _58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58255_55311160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":255";
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

SignalI _58256_55311140_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58256_55311140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58256_55311140_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":256";
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

SignalI _58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58253_55311120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":253";
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

SignalI _58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58254_55310960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":254";
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

SignalI _58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58283_55391960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":283";
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

SignalI _58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58284_55504440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":284";
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

SignalI _58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58270_55577600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":270";
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

SignalI _58271_55577580_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58271_55577580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58271_55577580_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":271";
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

SignalI _58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58268_55577560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":268";
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

SignalI _58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58269_55577460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
   signalI->name = ":269";
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

SignalI value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makevalue__z0_55739980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makevalue__z1_55853760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI value__a0_56189340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makevalue__a0_56189340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_56189340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI value__a1_56464960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makevalue__a1_56464960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_56464960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI flag__z0_56464940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeflag__z0_56464940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_56464940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI flag__z1_56464920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeflag__z1_56464920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_56464920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__a0_56464900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SignalI ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__a1_56464880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_84_49418680;
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

SystemI counter_56498160;

SystemI makecounter_56498160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_56498160 = systemI;
   systemI->owner = (Object)layer0_58_84_49418680;
   systemI->name = "counter";
   systemI->system = counter_58_843_56459660;

   return systemI;
};

SystemI func0_53871040;

SystemI makefunc0_53871040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53871040 = systemI;
   systemI->owner = (Object)layer0_58_84_49418680;
   systemI->name = "func0";
   systemI->system = func0_58_843_53516640;

   return systemI;
};

SystemI func1_54354620;

SystemI makefunc1_54354620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_54354620 = systemI;
   systemI->owner = (Object)layer0_58_84_49418680;
   systemI->name = "func1";
   systemI->system = func1_58_841_53899160;

   return systemI;
};

Scope channel__w0_58182_49418240;

SignalI trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI maketrig__r_49414160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58182_49418240;
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

SignalI dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makedbus__r_50427980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58182_49418240;
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

SignalI abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_50427880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58182_49418240;
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

SignalI mem_51202640_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makemem_51202640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51202640_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58182_49418240;
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
         src0 = make__78359160();
         src1 = make__78359140();
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

Scope raddr_58183_49417040;

Scope makeraddr_58183_49417040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58183_49417040 = scope;
   scope->owner = (Object)channel__w0_58182_49418240;
   scope->name = "raddr:183";
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

Scope rinc_58188_49415360;

Scope makerinc_58188_49415360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58188_49415360 = scope;
   scope->owner = (Object)channel__w0_58182_49418240;
   scope->name = "rinc:188";
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

Scope rdec_58192_49414740;

Scope makerdec_58192_49414740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58192_49414740 = scope;
   scope->owner = (Object)channel__w0_58182_49418240;
   scope->name = "rdec:192";
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

Behavior __53527980;

Behavior make__53527980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53527980 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__51546420();

   return behavior;
}

Behavior __77984300;

Behavior make__77984300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77984300 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[dbus__r_50427980_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77984460();

   return behavior;
}

Behavior __77984100;

Behavior make__77984100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77984100 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58191_54759940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77984260();

   return behavior;
}

Behavior __77983620;

Behavior make__77983620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77983620 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[trig__r_49414160_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77983780();

   return behavior;
}

Behavior __77983420;

Behavior make__77983420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77983420 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58189_54759920_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77983580();

   return behavior;
}

Behavior __77982860;

Behavior make__77982860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77982860 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[abus__r_50427880_channel__w0_58182_49418240_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77983080();

   return behavior;
}

Behavior __77982660;

Behavior make__77982660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77982660 = behavior;
   behavior->owner = (Object)channel__w0_58182_49418240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58190_54759840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77982820();

   return behavior;
}

Scope makechannel__w0_58182_49418240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58182_49418240 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "channel_w0:182";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49414160();
   scope->inners[1] = makedbus__r_50427980();
   scope->inners[2] = makeabus__r_50427880();
   scope->inners[3] = makemem_51202640();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58183_49417040();
   scope->scopes[1] = makerinc_58188_49415360();
   scope->scopes[2] = makerdec_58192_49414740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53527980();
   scope->behaviors[1] = make__77984300();
   scope->behaviors[2] = make__77984100();
   scope->behaviors[3] = make__77983620();
   scope->behaviors[4] = make__77983420();
   scope->behaviors[5] = make__77982860();
   scope->behaviors[6] = make__77982660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58197_53527840;

SignalI trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI maketrig__r_53616240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58197_53527840;
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

SignalI dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makedbus__r_53701740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58197_53527840;
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

SignalI abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_53701660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58197_53527840;
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

SignalI mem_54322840_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makemem_54322840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54322840_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58197_53527840;
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
         src0 = make__78357960();
         src1 = make__78357940();
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

Scope raddr_58198_53527460;

Scope makeraddr_58198_53527460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58198_53527460 = scope;
   scope->owner = (Object)channel__w1_58197_53527840;
   scope->name = "raddr:198";
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

Scope rinc_58203_53527040;

Scope makerinc_58203_53527040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58203_53527040 = scope;
   scope->owner = (Object)channel__w1_58197_53527840;
   scope->name = "rinc:203";
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

Scope rdec_58207_53526620;

Scope makerdec_58207_53526620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58207_53526620 = scope;
   scope->owner = (Object)channel__w1_58197_53527840;
   scope->name = "rdec:207";
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

Behavior __54920480;

Behavior make__54920480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54920480 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__54673000();

   return behavior;
}

Behavior __77981260;

Behavior make__77981260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77981260 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[dbus__r_53701740_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77981420();

   return behavior;
}

Behavior __77981020;

Behavior make__77981020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77981020 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58206_55148040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77981220();

   return behavior;
}

Behavior __77980500;

Behavior make__77980500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77980500 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[trig__r_53616240_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77980660();

   return behavior;
}

Behavior __77980300;

Behavior make__77980300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77980300 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58204_55148020_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77980460();

   return behavior;
}

Behavior __77979820;

Behavior make__77979820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77979820 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[abus__r_53701660_channel__w1_58197_53527840_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77980000();

   return behavior;
}

Behavior __78266300;

Behavior make__78266300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78266300 = behavior;
   behavior->owner = (Object)channel__w1_58197_53527840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58205_55147940_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77979780();

   return behavior;
}

Scope makechannel__w1_58197_53527840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58197_53527840 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "channel_w1:197";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53616240();
   scope->inners[1] = makedbus__r_53701740();
   scope->inners[2] = makeabus__r_53701660();
   scope->inners[3] = makemem_54322840();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58198_53527460();
   scope->scopes[1] = makerinc_58203_53527040();
   scope->scopes[2] = makerdec_58207_53526620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54920480();
   scope->behaviors[1] = make__77981260();
   scope->behaviors[2] = make__77981020();
   scope->behaviors[3] = make__77980500();
   scope->behaviors[4] = make__77980300();
   scope->behaviors[5] = make__77979820();
   scope->behaviors[6] = make__78266300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58212_54920360;

SignalI reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereg__0_55075400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__accum_58212_54920360;
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

SignalI reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereg__1_55226240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__accum_58212_54920360;
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

Scope anum_58213_54920060;

Scope makeanum_58213_54920060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58213_54920060 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "anum:213";
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

Scope raddr_58216_54919620;

Scope makeraddr_58216_54919620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58216_54919620 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "raddr:216";
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

Scope waddr_58220_54919200;

Scope makewaddr_58220_54919200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58220_54919200 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "waddr:220";
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

Scope rinc_58224_55017000;

SignalI abus__r_55016120_rinc_58224_55017000_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_55016120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55016120_rinc_58224_55017000_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58224_55017000;
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

Scope makerinc_58224_55017000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58224_55017000 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "rinc:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55016120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58229_55016000;

SignalI abus__w_55015620_winc_58229_55016000_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_55015620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55015620_winc_58229_55016000_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58229_55016000;
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

Scope makewinc_58229_55016000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58229_55016000 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "winc:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55015620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58234_55015500;

SignalI abus__r_55015100_rdec_58234_55015500_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_55015100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55015100_rdec_58234_55015500_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58234_55015500;
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

Scope makerdec_58234_55015500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58234_55015500 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "rdec:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55015100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58239_55014980;

SignalI abus__w_55014600_wdec_58239_55014980_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_55014600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55014600_wdec_58239_55014980_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58239_55014980;
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

Scope makewdec_58239_55014980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58239_55014980 = scope;
   scope->owner = (Object)channel__accum_58212_54920360;
   scope->name = "wdec:239";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55014600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78264820;

Behavior make__78264820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78264820 = behavior;
   behavior->owner = (Object)channel__accum_58212_54920360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[reg__0_55075400_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78264980();

   return behavior;
}

Behavior __78264620;

Behavior make__78264620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78264620 = behavior;
   behavior->owner = (Object)channel__accum_58212_54920360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58214_54841040_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78264780();

   return behavior;
}

Behavior __78264140;

Behavior make__78264140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78264140 = behavior;
   behavior->owner = (Object)channel__accum_58212_54920360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[reg__1_55226240_channel__accum_58212_54920360_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78264300();

   return behavior;
}

Behavior __78263940;

Behavior make__78263940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78263940 = behavior;
   behavior->owner = (Object)channel__accum_58212_54920360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58215_55010400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78264100();

   return behavior;
}

Scope makechannel__accum_58212_54920360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58212_54920360 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "channel_accum:212";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55075400();
   scope->inners[1] = makereg__1_55226240();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58213_54920060();
   scope->scopes[1] = makeraddr_58216_54919620();
   scope->scopes[2] = makewaddr_58220_54919200();
   scope->scopes[3] = makerinc_58224_55017000();
   scope->scopes[4] = makewinc_58229_55016000();
   scope->scopes[5] = makerdec_58234_55015500();
   scope->scopes[6] = makewdec_58239_55014980();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78264820();
   scope->behaviors[1] = make__78264620();
   scope->behaviors[2] = make__78264140();
   scope->behaviors[3] = make__78263940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58244_55598560;

SignalI lv0_55741060_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelv0_55741060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_55741060_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI lv1_55858800_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelv1_55858800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_55858800_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI av0_56108100_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeav0_56108100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_56108100_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI av1_56414720_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeav1_56414720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_56414720_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI rv_56549280_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerv_56549280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_56549280_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelvok0_56549260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_56549260_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelvok1_56549240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_56549240_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makervok_56549220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_56549220_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makewok0_56549200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_56549200_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makewok1_56549180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_56549180_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

SignalI run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerun_56549160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_56549160_mac__n1_58244_55598560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58244_55598560;
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

Behavior __53916480;

Behavior make__53916480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53916480 = behavior;
   behavior->owner = (Object)mac__n1_58244_55598560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__56549040();

   return behavior;
}

Scope makemac__n1_58244_55598560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58244_55598560 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "mac_n1:244";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_55741060();
   scope->inners[1] = makelv1_55858800();
   scope->inners[2] = makeav0_56108100();
   scope->inners[3] = makeav1_56414720();
   scope->inners[4] = makerv_56549280();
   scope->inners[5] = makelvok0_56549260();
   scope->inners[6] = makelvok1_56549240();
   scope->inners[7] = makervok_56549220();
   scope->inners[8] = makewok0_56549200();
   scope->inners[9] = makewok1_56549180();
   scope->inners[10] = makerun_56549160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53916480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58251_53916340;

SignalI trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI maketrig__r_53914540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58251_53916340;
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

SignalI dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makedbus__r_54070840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58251_53916340;
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

SignalI abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_54070760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58251_53916340;
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

SignalI mem_54360220_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makemem_54360220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54360220_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58251_53916340;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78406640(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58252_53915920;

Scope makeraddr_58252_53915920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58252_53915920 = scope;
   scope->owner = (Object)channel__b0_58251_53916340;
   scope->name = "raddr:252";
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

Scope rinc_58257_53915440;

Scope makerinc_58257_53915440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58257_53915440 = scope;
   scope->owner = (Object)channel__b0_58251_53916340;
   scope->name = "rinc:257";
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

Scope rdec_58261_53915000;

Scope makerdec_58261_53915000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58261_53915000 = scope;
   scope->owner = (Object)channel__b0_58251_53916340;
   scope->name = "rdec:261";
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

Behavior __55043580;

Behavior make__55043580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55043580 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__54746780();

   return behavior;
}

Behavior __78261940;

Behavior make__78261940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78261940 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[dbus__r_54070840_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78262100();

   return behavior;
}

Behavior __78261740;

Behavior make__78261740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78261740 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58255_55311160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78261900();

   return behavior;
}

Behavior __78261180;

Behavior make__78261180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78261180 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[trig__r_53914540_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78261400();

   return behavior;
}

Behavior __78260980;

Behavior make__78260980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78260980 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58253_55311120_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78261140();

   return behavior;
}

Behavior __78260520;

Behavior make__78260520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78260520 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[abus__r_54070760_channel__b0_58251_53916340_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78260680();

   return behavior;
}

Behavior __78260320;

Behavior make__78260320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78260320 = behavior;
   behavior->owner = (Object)channel__b0_58251_53916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58254_55310960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78260480();

   return behavior;
}

Scope makechannel__b0_58251_53916340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58251_53916340 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "channel_b0:251";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53914540();
   scope->inners[1] = makedbus__r_54070840();
   scope->inners[2] = makeabus__r_54070760();
   scope->inners[3] = makemem_54360220();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58252_53915920();
   scope->scopes[1] = makerinc_58257_53915440();
   scope->scopes[2] = makerdec_58261_53915000();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55043580();
   scope->behaviors[1] = make__78261940();
   scope->behaviors[2] = make__78261740();
   scope->behaviors[3] = make__78261180();
   scope->behaviors[4] = make__78260980();
   scope->behaviors[5] = make__78260520();
   scope->behaviors[6] = make__78260320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58266_55043380;

SignalI trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI maketrig__r_55082600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58266_55043380;
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

SignalI dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makedbus__r_55174040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58266_55043380;
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

SignalI abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_55173960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58266_55043380;
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

SignalI mem_55405860_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makemem_55405860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55405860_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58266_55043380;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78405720(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58267_55043080;

Scope makeraddr_58267_55043080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_55043080 = scope;
   scope->owner = (Object)channel__b1_58266_55043380;
   scope->name = "raddr:267";
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

Scope rinc_58272_55042640;

Scope makerinc_58272_55042640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58272_55042640 = scope;
   scope->owner = (Object)channel__b1_58266_55043380;
   scope->name = "rinc:272";
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

Scope rdec_58276_55042120;

Scope makerdec_58276_55042120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58276_55042120 = scope;
   scope->owner = (Object)channel__b1_58266_55043380;
   scope->name = "rdec:276";
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

Behavior __56245600;

Behavior make__56245600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56245600 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__55594820();

   return behavior;
}

Behavior __78258820;

Behavior make__78258820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78258820 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[dbus__r_55174040_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78258980();

   return behavior;
}

Behavior __78258620;

Behavior make__78258620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78258620 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58270_55577600_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78258780();

   return behavior;
}

Behavior __78282680;

Behavior make__78282680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78282680 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[trig__r_55082600_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78258320();

   return behavior;
}

Behavior __78282480;

Behavior make__78282480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78282480 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58268_55577560_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78282640();

   return behavior;
}

Behavior __78282020;

Behavior make__78282020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78282020 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[abus__r_55173960_channel__b1_58266_55043380_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78282180();

   return behavior;
}

Behavior __78281780;

Behavior make__78281780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78281780 = behavior;
   behavior->owner = (Object)channel__b1_58266_55043380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58269_55577460_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78281980();

   return behavior;
}

Scope makechannel__b1_58266_55043380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58266_55043380 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "channel_b1:266";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55082600();
   scope->inners[1] = makedbus__r_55174040();
   scope->inners[2] = makeabus__r_55173960();
   scope->inners[3] = makemem_55405860();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58267_55043080();
   scope->scopes[1] = makerinc_58272_55042640();
   scope->scopes[2] = makerdec_58276_55042120();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56245600();
   scope->behaviors[1] = make__78258820();
   scope->behaviors[2] = make__78258620();
   scope->behaviors[3] = make__78282680();
   scope->behaviors[4] = make__78282480();
   scope->behaviors[5] = make__78282020();
   scope->behaviors[6] = make__78281780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58281_56245480;

SignalI reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereg__0_56463940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__z_58281_56245480;
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

SignalI reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereg__1_56642020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__z_58281_56245480;
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

Scope anum_58282_56245140;

Scope makeanum_58282_56245140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_56245140 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "anum:282";
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

Scope raddr_58285_56244720;

Scope makeraddr_58285_56244720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_56244720 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "raddr:285";
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

Scope waddr_58289_56243900;

Scope makewaddr_58289_56243900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58289_56243900 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "waddr:289";
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

Scope rinc_58293_56243480;

SignalI abus__r_56243100_rinc_58293_56243480_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_56243100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56243100_rinc_58293_56243480_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58293_56243480;
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

Scope makerinc_58293_56243480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58293_56243480 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "rinc:293";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56243100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58297_56242940;

SignalI abus__w_56242560_winc_58297_56242940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_56242560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56242560_winc_58297_56242940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58297_56242940;
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

Scope makewinc_58297_56242940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58297_56242940 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "winc:297";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56242560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58301_56242440;

SignalI abus__r_56241980_rdec_58301_56242440_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_56241980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56241980_rdec_58301_56242440_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58301_56242440;
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

Scope makerdec_58301_56242440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58301_56242440 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "rdec:301";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56241980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58306_56241740;

SignalI abus__w_56241360_wdec_58306_56241740_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_56241360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56241360_wdec_58306_56241740_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58306_56241740;
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

Scope makewdec_58306_56241740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58306_56241740 = scope;
   scope->owner = (Object)channel__z_58281_56245480;
   scope->name = "wdec:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56241360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78280100;

Behavior make__78280100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78280100 = behavior;
   behavior->owner = (Object)channel__z_58281_56245480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[reg__0_56463940_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78280260();

   return behavior;
}

Behavior __78279900;

Behavior make__78279900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78279900 = behavior;
   behavior->owner = (Object)channel__z_58281_56245480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58283_55391960_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78280060();

   return behavior;
}

Behavior __78279400;

Behavior make__78279400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78279400 = behavior;
   behavior->owner = (Object)channel__z_58281_56245480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[reg__1_56642020_channel__z_58281_56245480_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78279580();

   return behavior;
}

Behavior __78279140;

Behavior make__78279140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78279140 = behavior;
   behavior->owner = (Object)channel__z_58281_56245480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58284_55504440_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78279360();

   return behavior;
}

Scope makechannel__z_58281_56245480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58281_56245480 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "channel_z:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56463940();
   scope->inners[1] = makereg__1_56642020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_56245140();
   scope->scopes[1] = makeraddr_58285_56244720();
   scope->scopes[2] = makewaddr_58289_56243900();
   scope->scopes[3] = makerinc_58293_56243480();
   scope->scopes[4] = makewinc_58297_56242940();
   scope->scopes[5] = makerdec_58301_56242440();
   scope->scopes[6] = makewdec_58306_56241740();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78280100();
   scope->behaviors[1] = make__78279900();
   scope->behaviors[2] = make__78279400();
   scope->behaviors[3] = make__78279140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58311_47129420;

SignalI lv0_47997920_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelv0_47997920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47997920_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI lv1_49267640_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelv1_49267640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49267640_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI rv0_49587820_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerv0_49587820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49587820_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI rv1_50064500_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerv1_50064500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_50064500_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI lvok0_50064360_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelvok0_50064360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50064360_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI lvok1_50064340_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelvok1_50064340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_50064340_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI rvok0_50064200_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makervok0_50064200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_50064200_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI rvok1_50064180_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makervok1_50064180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_50064180_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

SignalI run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerun_50064160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50064160_add__n_58311_47129420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58311_47129420;
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

Behavior __54638600;

Behavior make__54638600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54638600 = behavior;
   behavior->owner = (Object)add__n_58311_47129420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__50063900();

   return behavior;
}

Scope makeadd__n_58311_47129420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58311_47129420 = scope;
   scope->owner = (Object)layer0_58_84_49418680;
   scope->name = "add_n:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47997920();
   scope->inners[1] = makelv1_49267640();
   scope->inners[2] = makerv0_49587820();
   scope->inners[3] = makerv1_50064500();
   scope->inners[4] = makelvok0_50064360();
   scope->inners[5] = makelvok1_50064340();
   scope->inners[6] = makervok0_50064200();
   scope->inners[7] = makervok1_50064180();
   scope->inners[8] = makerun_50064160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54638600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56400740;

Behavior make__56400740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56400740 = behavior;
   behavior->owner = (Object)layer0_58_84_49418680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__56238960();

   return behavior;
}

Behavior __49110640;

Behavior make__49110640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49110640 = behavior;
   behavior->owner = (Object)layer0_58_84_49418680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__56400540();

   return behavior;
}

Behavior __53981720;

Behavior make__53981720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53981720 = behavior;
   behavior->owner = (Object)layer0_58_84_49418680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__49110300();

   return behavior;
}

Behavior __77935800;

Behavior make__77935800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77935800 = behavior;
   behavior->owner = (Object)layer0_58_84_49418680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[req_54091160_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__mac_54638400_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77936100();

   return behavior;
}

Behavior __77985440;

Behavior make__77985440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77985440 = behavior;
   behavior->owner = (Object)layer0_58_84_49418680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[clk_54091200_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack_54638420_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[value__z0_55739980_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[value__z1_55853760_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__a0_56464900_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__a1_56464880_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77936360();

   return behavior;
}

Behavior __77985260;

Behavior make__77985260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77985260 = behavior;
   behavior->owner = (Object)layer0_58_84_49418680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__mac_56498300_counter_58_843_56459660_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[rst_54091180_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[a_53871220_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[a_54354860_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__77936280();

   return behavior;
}

Scope makelayer0_58_84_49418680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49418680 = scope;
   scope->owner = (Object)layer0_58_841_53980880;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_56498160();
   scope->systemIs[1] = makefunc0_53871040();
   scope->systemIs[2] = makefunc1_54354620();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54638440();
   scope->inners[1] = makeack_54638420();
   scope->inners[2] = makeack__mac_54638400();
   scope->inners[3] = makeack__add_54638380();
   scope->inners[4] = make_58191_54759940();
   scope->inners[5] = make_58189_54759920();
   scope->inners[6] = make_58190_54759840();
   scope->inners[7] = make_58214_54841040();
   scope->inners[8] = make_58215_55010400();
   scope->inners[9] = make_58206_55148040();
   scope->inners[10] = make_58204_55148020();
   scope->inners[11] = make_58205_55147940();
   scope->inners[12] = make_58255_55311160();
   scope->inners[13] = make_58256_55311140();
   scope->inners[14] = make_58253_55311120();
   scope->inners[15] = make_58254_55310960();
   scope->inners[16] = make_58283_55391960();
   scope->inners[17] = make_58284_55504440();
   scope->inners[18] = make_58270_55577600();
   scope->inners[19] = make_58271_55577580();
   scope->inners[20] = make_58268_55577560();
   scope->inners[21] = make_58269_55577460();
   scope->inners[22] = makevalue__z0_55739980();
   scope->inners[23] = makevalue__z1_55853760();
   scope->inners[24] = makevalue__a0_56189340();
   scope->inners[25] = makevalue__a1_56464960();
   scope->inners[26] = makeflag__z0_56464940();
   scope->inners[27] = makeflag__z1_56464920();
   scope->inners[28] = makeack__a0_56464900();
   scope->inners[29] = makeack__a1_56464880();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58182_49418240();
   scope->scopes[1] = makechannel__w1_58197_53527840();
   scope->scopes[2] = makechannel__accum_58212_54920360();
   scope->scopes[3] = makemac__n1_58244_55598560();
   scope->scopes[4] = makechannel__b0_58251_53916340();
   scope->scopes[5] = makechannel__b1_58266_55043380();
   scope->scopes[6] = makechannel__z_58281_56245480();
   scope->scopes[7] = makeadd__n_58311_47129420();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56400740();
   scope->behaviors[1] = make__49110640();
   scope->behaviors[2] = make__53981720();
   scope->behaviors[3] = make__77935800();
   scope->behaviors[4] = make__77985440();
   scope->behaviors[5] = make__77985260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_841_53980880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_841_53980880 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54091200();
   systemT->inputs[1] = makerst_54091180();
   systemT->inputs[2] = makereq_54091160();
   systemT->inputs[3] = make_58114_54633280();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_54633120();
   systemT->outputs[1] = make_58112_54633100();
   systemT->outputs[2] = make_58113_54632880();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58154_55131720();
   systemT->inouts[1] = make_58155_55472600();

   systemT->scope = makelayer0_58_84_49418680();

   return systemT;
}