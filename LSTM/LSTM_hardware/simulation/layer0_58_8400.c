#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8400_66024780;

SignalI clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeclk_66021540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
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

SignalI rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerst_66021520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
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

SignalI req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereq_66021480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
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

SignalI _58430_47101600_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58430_47101600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58430_47101600_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
   signalI->name = ":430";
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

SignalI ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__layer_47101340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
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

SignalI _58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58428_47101180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
   signalI->name = ":428";
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

SignalI _58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58429_47100160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
   signalI->name = ":429";
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

SignalI _58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58470_50624220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
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

SignalI _58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58471_53485380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_8400_66024780;
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

Block __61818600;

Block __61817920;

void code__61817920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51000620(),ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51000460(),ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51000200(),ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__61817920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61817920 = block;
   block->owner = (Object)__61818600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61817920;

   return block;
};

void code__61818600() {
   {
      Value cond = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61817920();
   }
      }
   }
}

Block make__61818600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61818600 = block;
   block->owner = (Object)__61963600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61818600;

   return block;
};

Block __61963320;

Block __61962040;

Block __61961780;

void code__61961780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50998720(),flag__z0_62343980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__61961780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61961780 = block;
   block->owner = (Object)__61962040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61961780;

   return block;
};

Block __62940860;

void code__62940860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50998140(),flag__z1_62343960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62940860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62940860 = block;
   block->owner = (Object)__61962040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62940860;

   return block;
};

void code__61962040() {
 code__61961780();
 code__62940860();
}

Block make__61962040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61962040 = block;
   block->owner = (Object)__61963320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61962040;

   return block;
};

Block __61963080;

void code__61963080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50998060(),flag__z0_62343980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50997960(),flag__z1_62343960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__61963080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61963080 = block;
   block->owner = (Object)__61963320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61963080;

   return block;
};

void code__61963320() {
   {
      Value cond = ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61962040();
   }
   else {
  code__61963080();
   }
      }
   }
}

Block make__61963320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61963320 = block;
   block->owner = (Object)__63837400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61963320;

   return block;
};

Block __63837040;

Block __63836700;

void code__63836700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50997580(),ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50997260(),ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63836700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63836700 = block;
   block->owner = (Object)__63837040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63836700;

   return block;
};

Block __63834860;

Block __63834600;

void code__63834600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_62196100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50995740(),ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63834600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63834600 = block;
   block->owner = (Object)__63834860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63834600;

   return block;
};

Block __65119120;

void code__65119120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_62344000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51016160(),ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65119120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65119120 = block;
   block->owner = (Object)__63834860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65119120;

   return block;
};

void code__63834860() {
 code__63834600();
 code__65119120();
}

Block make__63834860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63834860 = block;
   block->owner = (Object)__63837040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63834860;

   return block;
};

void code__63837040() {
   {
      Value cond = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63836700();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_62343980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = flag__z1_62343960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__63834860();
   }
      }
   }
}

Block make__63837040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63837040 = block;
   block->owner = (Object)__66025300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63837040;

   return block;
};

Block __79134780;

void code__79134780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54291340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79134780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79134780 = block;
   block->owner = (Object)__79175460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79134780;

   return block;
};

Block __79135000;

void code__79135000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,clk_62376700_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack_62376680_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rst_62376660_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,z__value_62759480_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,z__value_65928320_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      src1 = ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79135000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79135000 = block;
   block->owner = (Object)__79167680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79135000;

   return block;
};

Block __79134940;

void code__79134940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58572_56243660_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58587_61730720_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__a0_62196100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__a1_62344000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79134940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79134940 = block;
   block->owner = (Object)__79167520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79134940;

   return block;
};

Block __56062040;

void code__56062040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55343780_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56062040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56062040 = block;
   block->owner = (Object)__52273420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56062040;

   return block;
};

Block __79191260;

void code__79191260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79191260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79191260 = block;
   block->owner = (Object)__79191100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79191260;

   return block;
};

Block __79191060;

void code__79191060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79191060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79191060 = block;
   block->owner = (Object)__79190880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79191060;

   return block;
};

Block __79190560;

void code__79190560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79190560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79190560 = block;
   block->owner = (Object)__79190380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79190560;

   return block;
};

Block __79190320;

void code__79190320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79190320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79190320 = block;
   block->owner = (Object)__79190120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79190320;

   return block;
};

Block __79189760;

void code__79189760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79189760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79189760 = block;
   block->owner = (Object)__79189560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79189760;

   return block;
};

Block __79189520;

void code__79189520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79189520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79189520 = block;
   block->owner = (Object)__79189360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79189520;

   return block;
};

Block __62825140;

void code__62825140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62413620_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62825140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62825140 = block;
   block->owner = (Object)__63373860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62825140;

   return block;
};

Block __79188000;

void code__79188000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79188000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79188000 = block;
   block->owner = (Object)__79187820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79188000;

   return block;
};

Block __79187780;

void code__79187780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79187780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79187780 = block;
   block->owner = (Object)__79187580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79187780;

   return block;
};

Block __79187240;

void code__79187240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79187240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79187240 = block;
   block->owner = (Object)__79187060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79187240;

   return block;
};

Block __79187020;

void code__79187020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79187020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79187020 = block;
   block->owner = (Object)__79186860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79187020;

   return block;
};

Block __79186560;

void code__79186560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79186560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79186560 = block;
   block->owner = (Object)__79186360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79186560;

   return block;
};

Block __79186300;

void code__79186300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79186300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79186300 = block;
   block->owner = (Object)__79186080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79186300;

   return block;
};

Block __79184560;

void code__79184560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79184560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79184560 = block;
   block->owner = (Object)__79184400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79184560;

   return block;
};

Block __79184360;

void code__79184360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79184360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79184360 = block;
   block->owner = (Object)__79184200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79184360;

   return block;
};

Block __39805720;

void code__39805720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__39805720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __39805720 = block;
   block->owner = (Object)__42235000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__39805720;

   return block;
};

Block __42234400;

void code__42234400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__42234400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42234400 = block;
   block->owner = (Object)__42456500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42234400;

   return block;
};

Block __65139940;

Block __65139740;

Block __65139340;

void code__65139340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50537960(),_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65139340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65139340 = block;
   block->owner = (Object)__65139740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65139340;

   return block;
};

void code__65139740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50544120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65139340();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50536500(),_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65139740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65139740 = block;
   block->owner = (Object)__65139940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65139740;

   return block;
};

Block __65138600;

Block __65138180;

void code__65138180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50558060(),_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65138180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65138180 = block;
   block->owner = (Object)__65138600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65138180;

   return block;
};

void code__65138600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50560200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65138180();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50557120(),_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65138600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65138600 = block;
   block->owner = (Object)__65139940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65138600;

   return block;
};

Block __65137520;

Block __65137100;

void code__65137100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50555540(),_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65137100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65137100 = block;
   block->owner = (Object)__65137520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65137100;

   return block;
};

void code__65137520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50556340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65137100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50555440(),_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65137520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65137520 = block;
   block->owner = (Object)__65139940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65137520;

   return block;
};

Block __65135860;

void code__65135860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50553980(),rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50576620(),lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50574620(),wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50574100(),lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50573400(),wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65135860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65135860 = block;
   block->owner = (Object)__65139940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65135860;

   return block;
};

Block __65367400;

Block __65366980;

Block __65366820;

Block __65366460;

Block __65364300;

Block __65364140;

void code__65364140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58430_47101600_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rv_65140200_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50610120(),rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65364140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65364140 = block;
   block->owner = (Object)__65364300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65364140;

   return block;
};

void code__65364300() {
 code__65364140();
}

Block make__65364300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65364300 = block;
   block->owner = (Object)__65366460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65364300;

   return block;
};

Block __65366300;

void code__65366300() {
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
                  src0 = _58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__50609620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50609400();
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
                        src0 = _58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50607360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50607180();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50606140(),_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65366300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65366300 = block;
   block->owner = (Object)__65366460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65366300;

   return block;
};

void code__65366460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50586020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65364300();
   }
   else {
  code__65366300();
   }
      }
   }
}

Block make__65366460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65366460 = block;
   block->owner = (Object)__65366820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65366460;

   return block;
};

void code__65366820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50586480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65366460();
   }
      }
   }
}

Block make__65366820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65366820 = block;
   block->owner = (Object)__65366980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65366820;

   return block;
};

void code__65366980() {
 code__65366820();
}

Block make__65366980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65366980 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65366980;

   return block;
};

Block __65621960;

Block __65621740;

Block __65621380;

Block __65619260;

Block __65619060;

void code__65619060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,lv0_64254560_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50602080(),lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65619060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65619060 = block;
   block->owner = (Object)__65619260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65619060;

   return block;
};

void code__65619260() {
 code__65619060();
}

Block make__65619260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65619260 = block;
   block->owner = (Object)__65621380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65619260;

   return block;
};

Block __65621140;

void code__65621140() {
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
                  src0 = _58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__50625660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50625240();
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
                        src0 = _58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50622540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50621360();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50635220(),_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65621140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621140 = block;
   block->owner = (Object)__65621380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621140;

   return block;
};

void code__65621380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50603980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65619260();
   }
   else {
  code__65621140();
   }
      }
   }
}

Block make__65621380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621380 = block;
   block->owner = (Object)__65621740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621380;

   return block;
};

void code__65621740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50604700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65621380();
   }
      }
   }
}

Block make__65621740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621740 = block;
   block->owner = (Object)__65621960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621740;

   return block;
};

void code__65621960() {
 code__65621740();
}

Block make__65621960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65621960 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65621960;

   return block;
};

Block __65993340;

Block __65992800;

Block __65992540;

void code__65992540() {
}

Block make__65992540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65992540 = block;
   block->owner = (Object)__65992800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65992540;

   return block;
};

Block __47132240;

void code__47132240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_64749660_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50751960(),wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__47132240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47132240 = block;
   block->owner = (Object)__65992800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47132240;

   return block;
};

void code__65992800() {
 code__65992540();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_64749660_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
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
                              src0 = lv0_64254560_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65140200_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50756220();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_64749660_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__47132240();
}

Block make__65992800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65992800 = block;
   block->owner = (Object)__65993340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65992800;

   return block;
};

void code__65993340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50686820(),ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50685040(),run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__65992800();
}

Block make__65993340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65993340 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65993340;

   return block;
};

Block __50391740;

void code__50391740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50771380(),wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50770280(),wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50769400(),lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50769080(),lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50768860(),rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50391740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50391740 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50391740;

   return block;
};

Block __50410020;

Block __50409260;

Block __50407800;

Block __50422460;

Block __50421960;

void code__50421960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,lv1_64537280_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50789960(),lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50421960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50421960 = block;
   block->owner = (Object)__50422460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50421960;

   return block;
};

void code__50422460() {
 code__50421960();
}

Block make__50422460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50422460 = block;
   block->owner = (Object)__50407800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50422460;

   return block;
};

Block __50407400;

void code__50407400() {
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
                  src0 = _58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__50789800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50789680();
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
                        src0 = _58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50806560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50805260();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50804040(),_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50407400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50407400 = block;
   block->owner = (Object)__50407800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50407400;

   return block;
};

void code__50407800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50766180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50422460();
   }
   else {
  code__50407400();
   }
      }
   }
}

Block make__50407800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50407800 = block;
   block->owner = (Object)__50409260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50407800;

   return block;
};

void code__50409260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50768160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50407800();
   }
      }
   }
}

Block make__50409260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50409260 = block;
   block->owner = (Object)__50410020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50409260;

   return block;
};

void code__50410020() {
 code__50409260();
}

Block make__50410020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50410020 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50410020;

   return block;
};

Block __51316320;

Block __51315080;

Block __51337840;

void code__51337840() {
}

Block make__51337840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51337840 = block;
   block->owner = (Object)__51315080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51337840;

   return block;
};

Block __54805220;

void code__54805220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_64952760_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50838080(),wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54805220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54805220 = block;
   block->owner = (Object)__51315080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54805220;

   return block;
};

void code__51315080() {
 code__51337840();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_64952760_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
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
                              src0 = lv1_64537280_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65140200_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50838760();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_64952760_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__54805220();
}

Block make__51315080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51315080 = block;
   block->owner = (Object)__51316320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51315080;

   return block;
};

void code__51316320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50817100(),ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50816880(),run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__51315080();
}

Block make__51316320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51316320 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51316320;

   return block;
};

Block __55408720;

void code__55408720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50837320(),wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50836600(),wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50836220(),lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50835940(),lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50834500(),rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55408720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55408720 = block;
   block->owner = (Object)__65367400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55408720;

   return block;
};

void code__65367400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50586760(),run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65366980();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65621960();
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
               src0 = lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               src1 = rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65993340();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50391740();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50410020();
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
               src0 = lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               src1 = rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51316320();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55408720();
   }
      }
   }
}

Block make__65367400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65367400 = block;
   block->owner = (Object)__65139940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65367400;

   return block;
};

Block __65134640;

void code__65134640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50834340(),av0_64749660_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50834280(),av1_64952760_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65134640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65134640 = block;
   block->owner = (Object)__65139940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65134640;

   return block;
};

void code__65139940() {
 code__65139740();
 code__65138600();
 code__65137520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50555140(),ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50554940(),run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65135860();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54291340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65367400();
   }
   else {
  code__65134640();
   }
      }
   }
}

Block make__65139940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65139940 = block;
   block->owner = (Object)__55405060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65139940;

   return block;
};

Block __61731740;

void code__61731740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56746960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__61731740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61731740 = block;
   block->owner = (Object)__62172160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61731740;

   return block;
};

Block __44106880;

void code__44106880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__44106880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44106880 = block;
   block->owner = (Object)__44162620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44106880;

   return block;
};

Block __44161480;

void code__44161480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__44161480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44161480 = block;
   block->owner = (Object)__44155880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44161480;

   return block;
};

Block __44615460;

void code__44615460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__44615460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44615460 = block;
   block->owner = (Object)__45399660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44615460;

   return block;
};

Block __45399620;

void code__45399620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45399620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45399620 = block;
   block->owner = (Object)__45394780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45399620;

   return block;
};

Block __45370860;

void code__45370860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45370860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45370860 = block;
   block->owner = (Object)__45414780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45370860;

   return block;
};

Block __45414420;

void code__45414420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45414420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45414420 = block;
   block->owner = (Object)__45408380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45414420;

   return block;
};

Block __63044480;

void code__63044480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62743740_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63044480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63044480 = block;
   block->owner = (Object)__63513940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63044480;

   return block;
};

Block __45830360;

void code__45830360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45830360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45830360 = block;
   block->owner = (Object)__45827040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45830360;

   return block;
};

Block __45826820;

void code__45826820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45826820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45826820 = block;
   block->owner = (Object)__45847220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45826820;

   return block;
};

Block __45904480;

void code__45904480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45904480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45904480 = block;
   block->owner = (Object)__45928200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45904480;

   return block;
};

Block __45927800;

void code__45927800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__45927800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45927800 = block;
   block->owner = (Object)__45946540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45927800;

   return block;
};

Block __46027800;

void code__46027800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__46027800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46027800 = block;
   block->owner = (Object)__46068000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46027800;

   return block;
};

Block __46067880;

void code__46067880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__46067880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46067880 = block;
   block->owner = (Object)__46067020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46067880;

   return block;
};

Block __46127180;

void code__46127180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__46127180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46127180 = block;
   block->owner = (Object)__46126000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46127180;

   return block;
};

Block __46125540;

void code__46125540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__46125540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46125540 = block;
   block->owner = (Object)__46124900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46125540;

   return block;
};

Block __46123300;

void code__46123300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__46123300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46123300 = block;
   block->owner = (Object)__46121940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46123300;

   return block;
};

Block __46121540;

void code__46121540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__46121540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46121540 = block;
   block->owner = (Object)__46179800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46121540;

   return block;
};

Block __65284080;

Block __65283820;

void code__65283820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50899280(),_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65283820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65283820 = block;
   block->owner = (Object)__65284080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65283820;

   return block;
};

Block __65283440;

void code__65283440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50898580(),_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65283440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65283440 = block;
   block->owner = (Object)__65284080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65283440;

   return block;
};

Block __65338320;

Block __65337940;

void code__65337940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,lv0_64767660_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50919080(),lvok0_65284380_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65337940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65337940 = block;
   block->owner = (Object)__65338320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65337940;

   return block;
};

Block __65573200;

Block __65572720;

Block __65571620;

void code__65571620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rv0_65224500_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50917720(),_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50917480(),rvok0_65284320_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65571620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65571620 = block;
   block->owner = (Object)__65572720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65571620;

   return block;
};

Block __65572460;

void code__65572460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50917040(),_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50916880(),_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65572460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65572460 = block;
   block->owner = (Object)__65572720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65572460;

   return block;
};

void code__65572720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50918540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65571620();
   }
   else {
  code__65572460();
   }
      }
   }
}

Block make__65572720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65572720 = block;
   block->owner = (Object)__65573200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65572720;

   return block;
};

void code__65573200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58572_56243660_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50918920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65572720();
   }
      }
   }
}

Block make__65573200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65573200 = block;
   block->owner = (Object)__65338320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65573200;

   return block;
};

Block __65923060;

Block __65922440;

void code__65922440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_64767660_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      src1 = rv0_65224500_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65922440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65922440 = block;
   block->owner = (Object)__65923060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65922440;

   return block;
};

void code__65923060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50915960(),run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50914720(),ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__65922440();
}

Block make__65923060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65923060 = block;
   block->owner = (Object)__65338320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65923060;

   return block;
};

Block __66432720;

void code__66432720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,lv1_65091800_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50932360(),lvok1_65284340_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__66432720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66432720 = block;
   block->owner = (Object)__65338320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66432720;

   return block;
};

Block __49400300;

Block __49446740;

Block __49438880;

void code__49438880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rv1_65284400_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50953040(),_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50952920(),rvok1_65284240_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__49438880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49438880 = block;
   block->owner = (Object)__49446740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49438880;

   return block;
};

Block __49441600;

void code__49441600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50952780(),_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50952120(),_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__49441600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49441600 = block;
   block->owner = (Object)__49446740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49441600;

   return block;
};

void code__49446740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50931620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49438880();
   }
   else {
  code__49441600();
   }
      }
   }
}

Block make__49446740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49446740 = block;
   block->owner = (Object)__49400300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49446740;

   return block;
};

void code__49400300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58587_61730720_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50931980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49446740();
   }
      }
   }
}

Block make__49400300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49400300 = block;
   block->owner = (Object)__65338320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49400300;

   return block;
};

Block __51015920;

Block __51014000;

void code__51014000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_65091800_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      src1 = rv1_65284400_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51014000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51014000 = block;
   block->owner = (Object)__51015920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51014000;

   return block;
};

void code__51015920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50951460(),run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50950400(),ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__51014000();
}

Block make__51015920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51015920 = block;
   block->owner = (Object)__65338320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51015920;

   return block;
};

void code__65338320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50920000(),run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__65337940();
 code__65573200();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65284380_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = rvok0_65284320_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65923060();
   }
      }
   }
 code__66432720();
 code__49400300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_65284340_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = rvok1_65284240_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51015920();
   }
      }
   }
}

Block make__65338320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65338320 = block;
   block->owner = (Object)__65284080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65338320;

   return block;
};

Block __65282740;

void code__65282740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50946360(),lvok0_65284380_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50969300(),rvok0_65284320_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50969100(),lvok1_65284340_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50968280(),rvok1_65284240_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65282740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65282740 = block;
   block->owner = (Object)__65284080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65282740;

   return block;
};

void code__65284080() {
 code__65283820();
 code__65283440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50897360(),ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50921300(),run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65338320();
   }
   else {
  code__65282740();
   }
      }
   }
}

Block make__65284080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65284080 = block;
   block->owner = (Object)__54291540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65284080;

   return block;
};

Value make__50441140() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50440360() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50473160() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50471500() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50834140() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__50851800() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__50544120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50537960() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50536500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50560200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50558060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50557120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50556340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50555540() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50555440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50555140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50554940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50553980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50576620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50574620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50574100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50573400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50586760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50586480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50586020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50610120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50609620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50609400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50607360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50607180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50606140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50604700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50603980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50602080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50625660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50625240() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50622540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50621360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50635220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50686820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50685040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50756220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50751960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50771380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50770280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50769400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50769080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50768860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50768160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50766180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50789960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50789800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50789680() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50806560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50805260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50804040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50817100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50816880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50838760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50838080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50837320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50836600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50836220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50835940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50834500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50834340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50834280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50899280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50898580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50897360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50921300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50920000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50919080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50918920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50918540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50917720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50917480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50917040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50916880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50915960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50914720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50932360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50931980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50931620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50953040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50952920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50952780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50952120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50951460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50950400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50946360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50969300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50969100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50968280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51000620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51000460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51000200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50998720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50998140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50998060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50997960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50997580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50997260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50995740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51016160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_840_53428740;

SignalI req__mac_54291340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereq__mac_54291340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54291340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack_54291280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__mac_54291260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__add_54291160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54291160_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI _58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58507_54743120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":507";
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

SignalI _58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58505_54743100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":505";
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

SignalI _58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58506_54742820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":506";
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

SignalI _58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58530_55028280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":530";
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

SignalI _58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58531_55338980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":531";
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

SignalI _58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58522_55650880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":522";
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

SignalI _58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58520_55650200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":520";
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

SignalI _58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58521_55649960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":521";
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

SignalI _58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58571_56243680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":571";
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

SignalI _58572_56243660_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58572_56243660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58572_56243660_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":572";
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

SignalI _58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58569_56243640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":569";
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

SignalI _58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58570_56243500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":570";
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

SignalI _58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58599_56730180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":599";
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

SignalI _58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58600_54307380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":600";
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

SignalI _58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58586_61730740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":586";
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

SignalI _58587_61730720_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58587_61730720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58587_61730720_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":587";
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

SignalI _58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58584_61730680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":584";
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

SignalI _58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58585_61730560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
   signalI->name = ":585";
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

SignalI value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__z0_61910220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__z1_62090780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI value__a0_62196100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__a0_62196100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_62196100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI value__a1_62344000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__a1_62344000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_62344000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI flag__z0_62343980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeflag__z0_62343980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_62343980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI flag__z1_62343960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeflag__z1_62343960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_62343960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__a0_62343940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SignalI ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__a1_62343920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer0_58_840_53428740;
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

SystemI counter_62376420;

SystemI makecounter_62376420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_62376420 = systemI;
   systemI->owner = (Object)layer0_58_840_53428740;
   systemI->name = "counter";
   systemI->system = counter_58_8410_62379540;

   return systemI;
};

SystemI func0_62957860;

SystemI makefunc0_62957860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_62957860 = systemI;
   systemI->owner = (Object)layer0_58_840_53428740;
   systemI->name = "func0";
   systemI->system = func0_58_8410_62410340;

   return systemI;
};

SystemI func1_66055840;

SystemI makefunc1_66055840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_66055840 = systemI;
   systemI->owner = (Object)layer0_58_840_53428740;
   systemI->name = "func1";
   systemI->system = func1_58_8400_65625220;

   return systemI;
};

Scope channel__w0_58498_53469000;

SignalI trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_53465260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58498_53469000;
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

SignalI dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_53770220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58498_53469000;
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

SignalI abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_53769940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58498_53469000;
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

SignalI mem_55343780_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_55343780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55343780_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58498_53469000;
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
         src0 = make__50441140();
         src1 = make__50440360();
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

Scope raddr_58499_53468380;

Scope makeraddr_58499_53468380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58499_53468380 = scope;
   scope->owner = (Object)channel__w0_58498_53469000;
   scope->name = "raddr:499";
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

Scope rinc_58504_53467180;

Scope makerinc_58504_53467180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58504_53467180 = scope;
   scope->owner = (Object)channel__w0_58498_53469000;
   scope->name = "rinc:504";
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

Scope rdec_58508_53466160;

Scope makerdec_58508_53466160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58508_53466160 = scope;
   scope->owner = (Object)channel__w0_58498_53469000;
   scope->name = "rdec:508";
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

Behavior __52273420;

Behavior make__52273420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52273420 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__56062040();

   return behavior;
}

Behavior __79191100;

Behavior make__79191100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79191100 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_53770220_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79191260();

   return behavior;
}

Behavior __79190880;

Behavior make__79190880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79190880 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58507_54743120_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79191060();

   return behavior;
}

Behavior __79190380;

Behavior make__79190380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79190380 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__r_53465260_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79190560();

   return behavior;
}

Behavior __79190120;

Behavior make__79190120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79190120 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58505_54743100_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79190320();

   return behavior;
}

Behavior __79189560;

Behavior make__79189560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79189560 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_53769940_channel__w0_58498_53469000_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79189760();

   return behavior;
}

Behavior __79189360;

Behavior make__79189360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79189360 = behavior;
   behavior->owner = (Object)channel__w0_58498_53469000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58506_54742820_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79189520();

   return behavior;
}

Scope makechannel__w0_58498_53469000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58498_53469000 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "channel_w0:498";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53465260();
   scope->inners[1] = makedbus__r_53770220();
   scope->inners[2] = makeabus__r_53769940();
   scope->inners[3] = makemem_55343780();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58499_53468380();
   scope->scopes[1] = makerinc_58504_53467180();
   scope->scopes[2] = makerdec_58508_53466160();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52273420();
   scope->behaviors[1] = make__79191100();
   scope->behaviors[2] = make__79190880();
   scope->behaviors[3] = make__79190380();
   scope->behaviors[4] = make__79190120();
   scope->behaviors[5] = make__79189560();
   scope->behaviors[6] = make__79189360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58513_52273220;

SignalI trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_54606060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58513_52273220;
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

SignalI dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_61762740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58513_52273220;
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

SignalI abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_61762660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58513_52273220;
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

SignalI mem_62413620_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_62413620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62413620_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w1_58513_52273220;
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
         src0 = make__50473160();
         src1 = make__50471500();
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

Scope raddr_58514_54607520;

Scope makeraddr_58514_54607520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58514_54607520 = scope;
   scope->owner = (Object)channel__w1_58513_52273220;
   scope->name = "raddr:514";
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

Scope rinc_58519_54607100;

Scope makerinc_58519_54607100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58519_54607100 = scope;
   scope->owner = (Object)channel__w1_58513_52273220;
   scope->name = "rinc:519";
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

Scope rdec_58523_54606540;

Scope makerdec_58523_54606540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58523_54606540 = scope;
   scope->owner = (Object)channel__w1_58513_52273220;
   scope->name = "rdec:523";
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

Behavior __63373860;

Behavior make__63373860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63373860 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__62825140();

   return behavior;
}

Behavior __79187820;

Behavior make__79187820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79187820 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_61762740_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79188000();

   return behavior;
}

Behavior __79187580;

Behavior make__79187580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79187580 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58522_55650880_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79187780();

   return behavior;
}

Behavior __79187060;

Behavior make__79187060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79187060 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__r_54606060_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79187240();

   return behavior;
}

Behavior __79186860;

Behavior make__79186860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79186860 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58520_55650200_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79187020();

   return behavior;
}

Behavior __79186360;

Behavior make__79186360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79186360 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_61762660_channel__w1_58513_52273220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79186560();

   return behavior;
}

Behavior __79186080;

Behavior make__79186080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79186080 = behavior;
   behavior->owner = (Object)channel__w1_58513_52273220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58521_55649960_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79186300();

   return behavior;
}

Scope makechannel__w1_58513_52273220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58513_52273220 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "channel_w1:513";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54606060();
   scope->inners[1] = makedbus__r_61762740();
   scope->inners[2] = makeabus__r_61762660();
   scope->inners[3] = makemem_62413620();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58514_54607520();
   scope->scopes[1] = makerinc_58519_54607100();
   scope->scopes[2] = makerdec_58523_54606540();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63373860();
   scope->behaviors[1] = make__79187820();
   scope->behaviors[2] = make__79187580();
   scope->behaviors[3] = make__79187060();
   scope->behaviors[4] = make__79186860();
   scope->behaviors[5] = make__79186360();
   scope->behaviors[6] = make__79186080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58528_63373740;

SignalI reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__0_63483420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__accum_58528_63373740;
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

SignalI reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__1_63564840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__accum_58528_63373740;
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

Scope anum_58529_63373400;

Scope makeanum_58529_63373400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58529_63373400 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "anum:529";
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

Scope raddr_58532_63397340;

Scope makeraddr_58532_63397340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58532_63397340 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "raddr:532";
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

Scope waddr_58536_63396880;

Scope makewaddr_58536_63396880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58536_63396880 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "waddr:536";
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

Scope rinc_58540_63396360;

SignalI abus__r_63395980_rinc_58540_63396360_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_63395980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63395980_rinc_58540_63396360_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58540_63396360;
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

Scope makerinc_58540_63396360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58540_63396360 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "rinc:540";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63395980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58545_63395860;

SignalI abus__w_63395260_winc_58545_63395860_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_63395260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63395260_winc_58545_63395860_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58545_63395860;
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

Scope makewinc_58545_63395860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58545_63395860 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "winc:545";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63395260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58550_63395140;

SignalI abus__r_63394740_rdec_58550_63395140_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_63394740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63394740_rdec_58550_63395140_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58550_63395140;
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

Scope makerdec_58550_63395140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58550_63395140 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "rdec:550";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63394740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58555_63394600;

SignalI abus__w_63394120_wdec_58555_63394600_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_63394120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63394120_wdec_58555_63394600_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58555_63394600;
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

Scope makewdec_58555_63394600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58555_63394600 = scope;
   scope->owner = (Object)channel__accum_58528_63373740;
   scope->name = "wdec:555";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63394120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __79184400;

Behavior make__79184400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79184400 = behavior;
   behavior->owner = (Object)channel__accum_58528_63373740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_63483420_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79184560();

   return behavior;
}

Behavior __79184200;

Behavior make__79184200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79184200 = behavior;
   behavior->owner = (Object)channel__accum_58528_63373740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58530_55028280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79184360();

   return behavior;
}

Behavior __42235000;

Behavior make__42235000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42235000 = behavior;
   behavior->owner = (Object)channel__accum_58528_63373740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__1_63564840_channel__accum_58528_63373740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__39805720();

   return behavior;
}

Behavior __42456500;

Behavior make__42456500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42456500 = behavior;
   behavior->owner = (Object)channel__accum_58528_63373740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58531_55338980_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__42234400();

   return behavior;
}

Scope makechannel__accum_58528_63373740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58528_63373740 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "channel_accum:528";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_63483420();
   scope->inners[1] = makereg__1_63564840();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58529_63373400();
   scope->scopes[1] = makeraddr_58532_63397340();
   scope->scopes[2] = makewaddr_58536_63396880();
   scope->scopes[3] = makerinc_58540_63396360();
   scope->scopes[4] = makewinc_58545_63395860();
   scope->scopes[5] = makerdec_58550_63395140();
   scope->scopes[6] = makewdec_58555_63394600();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79184400();
   scope->behaviors[1] = make__79184200();
   scope->behaviors[2] = make__42235000();
   scope->behaviors[3] = make__42456500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58560_64190280;

SignalI lv0_64254560_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelv0_64254560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64254560_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI lv1_64537280_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelv1_64537280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_64537280_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI av0_64749660_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeav0_64749660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_64749660_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI av1_64952760_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeav1_64952760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_64952760_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI rv_65140200_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerv_65140200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_65140200_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelvok0_65140180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65140180_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelvok1_65140160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_65140160_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makervok_65140140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_65140140_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makewok0_65140120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_65140120_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makewok1_65140100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_65140100_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

SignalI run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerun_65140080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65140080_mac__n1_58560_64190280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58560_64190280;
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

Behavior __55405060;

Behavior make__55405060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55405060 = behavior;
   behavior->owner = (Object)mac__n1_58560_64190280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__65139940();

   return behavior;
}

Scope makemac__n1_58560_64190280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58560_64190280 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "mac_n1:560";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64254560();
   scope->inners[1] = makelv1_64537280();
   scope->inners[2] = makeav0_64749660();
   scope->inners[3] = makeav1_64952760();
   scope->inners[4] = makerv_65140200();
   scope->inners[5] = makelvok0_65140180();
   scope->inners[6] = makelvok1_65140160();
   scope->inners[7] = makervok_65140140();
   scope->inners[8] = makewok0_65140120();
   scope->inners[9] = makewok1_65140100();
   scope->inners[10] = makerun_65140080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55405060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58567_55404480;

SignalI trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_55422960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58567_55404480;
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

SignalI dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_55738460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58567_55404480;
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

SignalI abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_55762860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58567_55404480;
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

SignalI mem_56746960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_56746960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56746960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58567_55404480;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__50834140(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58568_55404040;

Scope makeraddr_58568_55404040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58568_55404040 = scope;
   scope->owner = (Object)channel__b0_58567_55404480;
   scope->name = "raddr:568";
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

Scope rinc_58573_55402800;

Scope makerinc_58573_55402800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58573_55402800 = scope;
   scope->owner = (Object)channel__b0_58567_55404480;
   scope->name = "rinc:573";
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

Scope rdec_58577_55426260;

Scope makerdec_58577_55426260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58577_55426260 = scope;
   scope->owner = (Object)channel__b0_58567_55404480;
   scope->name = "rdec:577";
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

Behavior __62172160;

Behavior make__62172160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62172160 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__61731740();

   return behavior;
}

Behavior __44162620;

Behavior make__44162620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44162620 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_55738460_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__44106880();

   return behavior;
}

Behavior __44155880;

Behavior make__44155880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44155880 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58571_56243680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__44161480();

   return behavior;
}

Behavior __45399660;

Behavior make__45399660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45399660 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__r_55422960_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__44615460();

   return behavior;
}

Behavior __45394780;

Behavior make__45394780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45394780 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58569_56243640_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45399620();

   return behavior;
}

Behavior __45414780;

Behavior make__45414780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45414780 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_55762860_channel__b0_58567_55404480_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45370860();

   return behavior;
}

Behavior __45408380;

Behavior make__45408380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45408380 = behavior;
   behavior->owner = (Object)channel__b0_58567_55404480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58570_56243500_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45414420();

   return behavior;
}

Scope makechannel__b0_58567_55404480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58567_55404480 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "channel_b0:567";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55422960();
   scope->inners[1] = makedbus__r_55738460();
   scope->inners[2] = makeabus__r_55762860();
   scope->inners[3] = makemem_56746960();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58568_55404040();
   scope->scopes[1] = makerinc_58573_55402800();
   scope->scopes[2] = makerdec_58577_55426260();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62172160();
   scope->behaviors[1] = make__44162620();
   scope->behaviors[2] = make__44155880();
   scope->behaviors[3] = make__45399660();
   scope->behaviors[4] = make__45394780();
   scope->behaviors[5] = make__45414780();
   scope->behaviors[6] = make__45408380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58582_62172040;

SignalI trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_62169800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58582_62172040;
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

SignalI dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_62328280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58582_62172040;
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

SignalI abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_62328160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58582_62172040;
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

SignalI mem_62743740_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_62743740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62743740_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b1_58582_62172040;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__50851800(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58583_62171560;

Scope makeraddr_58583_62171560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58583_62171560 = scope;
   scope->owner = (Object)channel__b1_58582_62172040;
   scope->name = "raddr:583";
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

Scope rinc_58588_62171000;

Scope makerinc_58588_62171000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58588_62171000 = scope;
   scope->owner = (Object)channel__b1_58582_62172040;
   scope->name = "rinc:588";
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

Scope rdec_58592_62170240;

Scope makerdec_58592_62170240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58592_62170240 = scope;
   scope->owner = (Object)channel__b1_58582_62172040;
   scope->name = "rdec:592";
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

Behavior __63513940;

Behavior make__63513940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63513940 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__63044480();

   return behavior;
}

Behavior __45827040;

Behavior make__45827040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45827040 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_62328280_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45830360();

   return behavior;
}

Behavior __45847220;

Behavior make__45847220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45847220 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58586_61730740_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45826820();

   return behavior;
}

Behavior __45928200;

Behavior make__45928200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45928200 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__r_62169800_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45904480();

   return behavior;
}

Behavior __45946540;

Behavior make__45946540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45946540 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58584_61730680_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__45927800();

   return behavior;
}

Behavior __46068000;

Behavior make__46068000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46068000 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_62328160_channel__b1_58582_62172040_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__46027800();

   return behavior;
}

Behavior __46067020;

Behavior make__46067020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46067020 = behavior;
   behavior->owner = (Object)channel__b1_58582_62172040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58585_61730560_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__46067880();

   return behavior;
}

Scope makechannel__b1_58582_62172040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58582_62172040 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "channel_b1:582";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_62169800();
   scope->inners[1] = makedbus__r_62328280();
   scope->inners[2] = makeabus__r_62328160();
   scope->inners[3] = makemem_62743740();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58583_62171560();
   scope->scopes[1] = makerinc_58588_62171000();
   scope->scopes[2] = makerdec_58592_62170240();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63513940();
   scope->behaviors[1] = make__45827040();
   scope->behaviors[2] = make__45847220();
   scope->behaviors[3] = make__45928200();
   scope->behaviors[4] = make__45946540();
   scope->behaviors[5] = make__46068000();
   scope->behaviors[6] = make__46067020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58597_63513800;

SignalI reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__0_63653200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__z_58597_63513800;
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

SignalI reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__1_63805860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__z_58597_63513800;
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

Scope anum_58598_63513480;

Scope makeanum_58598_63513480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58598_63513480 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "anum:598";
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

Scope raddr_58601_63512980;

Scope makeraddr_58601_63512980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58601_63512980 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "raddr:601";
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

Scope waddr_58605_63536940;

Scope makewaddr_58605_63536940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58605_63536940 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "waddr:605";
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

Scope rinc_58609_63536300;

SignalI abus__r_63535900_rinc_58609_63536300_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_63535900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63535900_rinc_58609_63536300_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58609_63536300;
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

Scope makerinc_58609_63536300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58609_63536300 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "rinc:609";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63535900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58613_63535780;

SignalI abus__w_63535300_winc_58613_63535780_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_63535300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63535300_winc_58613_63535780_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58613_63535780;
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

Scope makewinc_58613_63535780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58613_63535780 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "winc:613";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63535300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58617_63534940;

SignalI abus__r_63534480_rdec_58617_63534940_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_63534480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63534480_rdec_58617_63534940_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58617_63534940;
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

Scope makerdec_58617_63534940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58617_63534940 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "rdec:617";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_63534480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58622_63534340;

SignalI abus__w_63533760_wdec_58622_63534340_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_63533760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63533760_wdec_58622_63534340_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58622_63534340;
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

Scope makewdec_58622_63534340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58622_63534340 = scope;
   scope->owner = (Object)channel__z_58597_63513800;
   scope->name = "wdec:622";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_63533760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __46126000;

Behavior make__46126000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46126000 = behavior;
   behavior->owner = (Object)channel__z_58597_63513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_63653200_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__46127180();

   return behavior;
}

Behavior __46124900;

Behavior make__46124900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46124900 = behavior;
   behavior->owner = (Object)channel__z_58597_63513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58599_56730180_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__46125540();

   return behavior;
}

Behavior __46121940;

Behavior make__46121940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46121940 = behavior;
   behavior->owner = (Object)channel__z_58597_63513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__1_63805860_channel__z_58597_63513800_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__46123300();

   return behavior;
}

Behavior __46179800;

Behavior make__46179800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46179800 = behavior;
   behavior->owner = (Object)channel__z_58597_63513800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58600_54307380_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__46121540();

   return behavior;
}

Scope makechannel__z_58597_63513800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58597_63513800 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "channel_z:597";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_63653200();
   scope->inners[1] = makereg__1_63805860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58598_63513480();
   scope->scopes[1] = makeraddr_58601_63512980();
   scope->scopes[2] = makewaddr_58605_63536940();
   scope->scopes[3] = makerinc_58609_63536300();
   scope->scopes[4] = makewinc_58613_63535780();
   scope->scopes[5] = makerdec_58617_63534940();
   scope->scopes[6] = makewdec_58622_63534340();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46126000();
   scope->behaviors[1] = make__46124900();
   scope->behaviors[2] = make__46121940();
   scope->behaviors[3] = make__46179800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58627_64558220;

SignalI lv0_64767660_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelv0_64767660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64767660_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI lv1_65091800_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelv1_65091800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_65091800_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI rv0_65224500_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerv0_65224500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_65224500_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI rv1_65284400_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerv1_65284400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_65284400_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI lvok0_65284380_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelvok0_65284380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65284380_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI lvok1_65284340_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelvok1_65284340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_65284340_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI rvok0_65284320_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makervok0_65284320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_65284320_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI rvok1_65284240_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makervok1_65284240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_65284240_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

SignalI run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerun_65284220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65284220_add__n_58627_64558220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58627_64558220;
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

Behavior __54291540;

Behavior make__54291540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54291540 = behavior;
   behavior->owner = (Object)add__n_58627_64558220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__65284080();

   return behavior;
}

Scope makeadd__n_58627_64558220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58627_64558220 = scope;
   scope->owner = (Object)layer0_58_840_53428740;
   scope->name = "add_n:627";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64767660();
   scope->inners[1] = makelv1_65091800();
   scope->inners[2] = makerv0_65224500();
   scope->inners[3] = makerv1_65284400();
   scope->inners[4] = makelvok0_65284380();
   scope->inners[5] = makelvok1_65284340();
   scope->inners[6] = makervok0_65284320();
   scope->inners[7] = makervok1_65284240();
   scope->inners[8] = makerun_65284220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54291540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61963600;

Behavior make__61963600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61963600 = behavior;
   behavior->owner = (Object)layer0_58_840_53428740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__61818600();

   return behavior;
}

Behavior __63837400;

Behavior make__63837400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63837400 = behavior;
   behavior->owner = (Object)layer0_58_840_53428740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__61963320();

   return behavior;
}

Behavior __66025300;

Behavior make__66025300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66025300 = behavior;
   behavior->owner = (Object)layer0_58_840_53428740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__63837040();

   return behavior;
}

Behavior __79175460;

Behavior make__79175460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79175460 = behavior;
   behavior->owner = (Object)layer0_58_840_53428740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__mac_54291260_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79134780();

   return behavior;
}

Behavior __79167680;

Behavior make__79167680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79167680 = behavior;
   behavior->owner = (Object)layer0_58_840_53428740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack_54291280_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[value__z0_61910220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[value__z1_62090780_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__a0_62343940_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__a1_62343920_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79135000();

   return behavior;
}

Behavior __79167520;

Behavior make__79167520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79167520 = behavior;
   behavior->owner = (Object)layer0_58_840_53428740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__mac_62376620_counter_58_8410_62379540_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[a_62958900_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[a_66056080_func1_58_8400_65625220_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79134940();

   return behavior;
}

Scope makelayer0_58_840_53428740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_840_53428740 = scope;
   scope->owner = (Object)layer0_58_8400_66024780;
   scope->name = "layer0:T0";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_62376420();
   scope->systemIs[1] = makefunc0_62957860();
   scope->systemIs[2] = makefunc1_66055840();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54291340();
   scope->inners[1] = makeack_54291280();
   scope->inners[2] = makeack__mac_54291260();
   scope->inners[3] = makeack__add_54291160();
   scope->inners[4] = make_58507_54743120();
   scope->inners[5] = make_58505_54743100();
   scope->inners[6] = make_58506_54742820();
   scope->inners[7] = make_58530_55028280();
   scope->inners[8] = make_58531_55338980();
   scope->inners[9] = make_58522_55650880();
   scope->inners[10] = make_58520_55650200();
   scope->inners[11] = make_58521_55649960();
   scope->inners[12] = make_58571_56243680();
   scope->inners[13] = make_58572_56243660();
   scope->inners[14] = make_58569_56243640();
   scope->inners[15] = make_58570_56243500();
   scope->inners[16] = make_58599_56730180();
   scope->inners[17] = make_58600_54307380();
   scope->inners[18] = make_58586_61730740();
   scope->inners[19] = make_58587_61730720();
   scope->inners[20] = make_58584_61730680();
   scope->inners[21] = make_58585_61730560();
   scope->inners[22] = makevalue__z0_61910220();
   scope->inners[23] = makevalue__z1_62090780();
   scope->inners[24] = makevalue__a0_62196100();
   scope->inners[25] = makevalue__a1_62344000();
   scope->inners[26] = makeflag__z0_62343980();
   scope->inners[27] = makeflag__z1_62343960();
   scope->inners[28] = makeack__a0_62343940();
   scope->inners[29] = makeack__a1_62343920();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58498_53469000();
   scope->scopes[1] = makechannel__w1_58513_52273220();
   scope->scopes[2] = makechannel__accum_58528_63373740();
   scope->scopes[3] = makemac__n1_58560_64190280();
   scope->scopes[4] = makechannel__b0_58567_55404480();
   scope->scopes[5] = makechannel__b1_58582_62172040();
   scope->scopes[6] = makechannel__z_58597_63513800();
   scope->scopes[7] = makeadd__n_58627_64558220();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61963600();
   scope->behaviors[1] = make__63837400();
   scope->behaviors[2] = make__66025300();
   scope->behaviors[3] = make__79175460();
   scope->behaviors[4] = make__79167680();
   scope->behaviors[5] = make__79167520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8400_66024780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8400_66024780 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T00";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_66021540();
   systemT->inputs[1] = makerst_66021520();
   systemT->inputs[2] = makereq_66021480();
   systemT->inputs[3] = make_58430_47101600();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_47101340();
   systemT->outputs[1] = make_58428_47101180();
   systemT->outputs[2] = make_58429_47100160();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58470_50624220();
   systemT->inouts[1] = make_58471_53485380();

   systemT->scope = makelayer0_58_840_53428740();

   return systemT;
}