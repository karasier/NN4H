#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_8400_62644360;

SignalI clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeclk_62729160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerst_62729120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereq_62729040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI _58470_61881200_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58470_61881200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58470_61881200_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI _58471_59327600_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58471_59327600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58471_59327600_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI ack__layer_59327560_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__layer_59327560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_59327560_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI _58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58472_59327440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

SignalI _58436_55799960_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58436_55799960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58436_55799960_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_8400_62644360;
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

Block __61160080;

Block __61159340;

void code__61159340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74026580(),ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74026520(),ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74026460(),ack__add_70387960_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61159340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61159340 = block;
   block->owner = (Object)__61160080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61159340;

   return block;
};

void code__61160080() {
   {
      Value cond = rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61159340();
   }
      }
   }
}

Block make__61160080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61160080 = block;
   block->owner = (Object)__61153660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61160080;

   return block;
};

Block __61153460;

Block __61209240;

Block __61209000;

void code__61209000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74026220(),flag__z0_71258140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61209000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61209000 = block;
   block->owner = (Object)__61209240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61209000;

   return block;
};

void code__61209240() {
 code__61209000();
}

Block make__61209240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61209240 = block;
   block->owner = (Object)__61153460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61209240;

   return block;
};

Block __61210040;

void code__61210040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74026140(),flag__z0_71258140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61210040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61210040 = block;
   block->owner = (Object)__61153460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61210040;

   return block;
};

void code__61153460() {
   {
      Value cond = ack__add_70387960_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61209240();
   }
   else {
  code__61210040();
   }
      }
   }
}

Block make__61153460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61153460 = block;
   block->owner = (Object)__61777540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61153460;

   return block;
};

Block __61777140;

Block __61864980;

void code__61864980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74025980(),ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61864980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61864980 = block;
   block->owner = (Object)__61777140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61864980;

   return block;
};

Block __61863480;

Block __61863160;

void code__61863160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_71258160_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58436_55799960_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74025720(),ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61863160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61863160 = block;
   block->owner = (Object)__61863480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61863160;

   return block;
};

void code__61863480() {
 code__61863160();
}

Block make__61863480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61863480 = block;
   block->owner = (Object)__61777140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61863480;

   return block;
};

void code__61777140() {
   {
      Value cond = rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61864980();
   }
   else if (value2integer(flag__z0_71258140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value)) {
  code__61863480();
   }
      }
   }
}

Block make__61777140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61777140 = block;
   block->owner = (Object)__62645960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61777140;

   return block;
};

Block __73746720;

void code__73746720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_70388040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73746720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73746720 = block;
   block->owner = (Object)__73746320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73746720;

   return block;
};

Block __73747000;

void code__73747000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,clk_71275620_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,ack_71275600_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rst_71275580_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,z__value_58757860_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,ack__layer_59327560_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73747000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73747000 = block;
   block->owner = (Object)__73778020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73747000;

   return block;
};

Block __73746920;

void code__73746920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58677_70901320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,value__a0_71258160_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73746920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73746920 = block;
   block->owner = (Object)__73777520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73746920;

   return block;
};

Block __72993400;

void code__72993400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_72754680_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__72993400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72993400 = block;
   block->owner = (Object)__73535740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72993400;

   return block;
};

Block __73801200;

void code__73801200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73801200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73801200 = block;
   block->owner = (Object)__73801000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73801200;

   return block;
};

Block __73800960;

void code__73800960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73800960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73800960 = block;
   block->owner = (Object)__73800800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73800960;

   return block;
};

Block __73800480;

void code__73800480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73800480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73800480 = block;
   block->owner = (Object)__73800120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73800480;

   return block;
};

Block __73800060;

void code__73800060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73800060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73800060 = block;
   block->owner = (Object)__73799720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73800060;

   return block;
};

Block __73799420;

void code__73799420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73799420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73799420 = block;
   block->owner = (Object)__73799260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73799420;

   return block;
};

Block __73799220;

void code__73799220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73799220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73799220 = block;
   block->owner = (Object)__73799000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73799220;

   return block;
};

Block __73797240;

void code__73797240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73797240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73797240 = block;
   block->owner = (Object)__73797060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73797240;

   return block;
};

Block __73797020;

void code__73797020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73797020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73797020 = block;
   block->owner = (Object)__73796860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73797020;

   return block;
};

Block __50481540;

Block __50480980;

Block __50503400;

void code__50503400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74012580(),_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50503400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50503400 = block;
   block->owner = (Object)__50480980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50503400;

   return block;
};

void code__50480980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74012720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50503400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74012480(),_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50480980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50480980 = block;
   block->owner = (Object)__50481540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50480980;

   return block;
};

Block __50501240;

Block __50518140;

void code__50518140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74012240(),_58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50518140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50518140 = block;
   block->owner = (Object)__50501240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50518140;

   return block;
};

void code__50501240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74012320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50518140();
   }
      }
   }
}

Block make__50501240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50501240 = block;
   block->owner = (Object)__50481540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50501240;

   return block;
};

Block __50513880;

void code__50513880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74011940(),rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74011840(),lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74011780(),wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50513880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50513880 = block;
   block->owner = (Object)__50481540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50513880;

   return block;
};

Block __51836980;

Block __51833680;

Block __51832720;

Block __51698460;

Block __51691960;

void code__51691960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58470_61881200_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rv_50481940_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__51691960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51691960 = block;
   block->owner = (Object)__51698460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51691960;

   return block;
};

Block __52676760;

void code__52676760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58471_59327600_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rv_50481940_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__52676760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52676760 = block;
   block->owner = (Object)__51698460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52676760;

   return block;
};

void code__51698460() {
{
      Value value = _58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__74011120())) {
    code__51691960();
         }
         else if (value2integer(value) == value2integer(make__74011020())) {
    code__52676760();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74010860(),rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
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
                  src0 = _58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__74010760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__74010720();
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
                        src0 = _58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__74010460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__74010400();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58472_59327440_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__51698460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51698460 = block;
   block->owner = (Object)__51832720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51698460;

   return block;
};

void code__51832720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74011380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51698460();
   }
      }
   }
}

Block make__51832720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51832720 = block;
   block->owner = (Object)__51833680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51832720;

   return block;
};

void code__51833680() {
 code__51832720();
}

Block make__51833680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51833680 = block;
   block->owner = (Object)__51836980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51833680;

   return block;
};

Block __58422560;

Block __58422320;

Block __58421500;

Block __58457780;

Block __58457540;

void code__58457540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,lv0_74165440_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__74009480(),lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58457540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58457540 = block;
   block->owner = (Object)__58457780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58457540;

   return block;
};

void code__58457780() {
 code__58457540();
}

Block make__58457780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58457780 = block;
   block->owner = (Object)__58421500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58457780;

   return block;
};

Block __58421260;

void code__58421260() {
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
                  src0 = _58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__74009360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__74009320();
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
                        src0 = _58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__74009000();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__74008940();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74008740(),_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58421260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58421260 = block;
   block->owner = (Object)__58421500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58421260;

   return block;
};

void code__58421500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74009640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58457780();
   }
   else {
  code__58421260();
   }
      }
   }
}

Block make__58421500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58421500 = block;
   block->owner = (Object)__58422320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58421500;

   return block;
};

void code__58422320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74009780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58421500();
   }
      }
   }
}

Block make__58422320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58422320 = block;
   block->owner = (Object)__58422560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58422320;

   return block;
};

void code__58422560() {
 code__58422320();
}

Block make__58422560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58422560 = block;
   block->owner = (Object)__51836980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58422560;

   return block;
};

Block __59085940;

Block __59084280;

Block __59083900;

void code__59083900() {
}

Block make__59083900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59083900 = block;
   block->owner = (Object)__59084280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59083900;

   return block;
};

Block __61078220;

void code__61078220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49139580_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74007660(),wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61078220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61078220 = block;
   block->owner = (Object)__59084280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61078220;

   return block;
};

void code__59084280() {
 code__59083900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_49139580_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
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
                              src0 = lv0_74165440_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50481940_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__74007980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49139580_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__61078220();
}

Block make__59084280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59084280 = block;
   block->owner = (Object)__59085940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59084280;

   return block;
};

void code__59085940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74008420(),ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74008360(),run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__59084280();
}

Block make__59085940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59085940 = block;
   block->owner = (Object)__51836980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59085940;

   return block;
};

Block __61532840;

void code__61532840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74007500(),wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74007440(),lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74007360(),rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__61532840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61532840 = block;
   block->owner = (Object)__51836980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61532840;

   return block;
};

void code__51836980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74011560(),run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51833680();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58422560();
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
               src0 = lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               src1 = rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59085940();
   }
      }
   }
   {
      Value cond = wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61532840();
   }
      }
   }
}

Block make__51836980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51836980 = block;
   block->owner = (Object)__50481540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51836980;

   return block;
};

Block __50532540;

void code__50532540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74007260(),av0_49139580_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__50532540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50532540 = block;
   block->owner = (Object)__50481540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50532540;

   return block;
};

void code__50481540() {
 code__50480980();
 code__50501240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74012160(),ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74012080(),run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50513880();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_70388040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51836980();
   }
   else {
  code__50532540();
   }
      }
   }
}

Block make__50481540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50481540 = block;
   block->owner = (Object)__61554400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50481540;

   return block;
};

Block __55873220;

void code__55873220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62732220_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__55873220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55873220 = block;
   block->owner = (Object)__54314460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55873220;

   return block;
};

Block __73794340;

void code__73794340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73794340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73794340 = block;
   block->owner = (Object)__73794140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73794340;

   return block;
};

Block __73794100;

void code__73794100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73794100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73794100 = block;
   block->owner = (Object)__73793880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73794100;

   return block;
};

Block __73818000;

void code__73818000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73818000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73818000 = block;
   block->owner = (Object)__73817720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73818000;

   return block;
};

Block __73817680;

void code__73817680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73817680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73817680 = block;
   block->owner = (Object)__73817520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73817680;

   return block;
};

Block __73817060;

void code__73817060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73817060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73817060 = block;
   block->owner = (Object)__73816860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73817060;

   return block;
};

Block __73816780;

void code__73816780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73816780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73816780 = block;
   block->owner = (Object)__73816560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73816780;

   return block;
};

Block __73814820;

void code__73814820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73814820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73814820 = block;
   block->owner = (Object)__73814600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73814820;

   return block;
};

Block __73814520;

void code__73814520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__73814520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73814520 = block;
   block->owner = (Object)__73814300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73814520;

   return block;
};

Block __69214420;

Block __69214260;

void code__69214260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74030240(),_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__69214260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69214260 = block;
   block->owner = (Object)__69214420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69214260;

   return block;
};

Block __69268860;

Block __69268520;

void code__69268520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,lv0_69116840_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74029660(),lvok0_69214580_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__69268520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69268520 = block;
   block->owner = (Object)__69268860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69268520;

   return block;
};

Block __69619020;

Block __69618700;

Block __69617620;

void code__69617620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value,rv0_69214600_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74029120(),_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74029040(),rvok0_69214560_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__69617620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69617620 = block;
   block->owner = (Object)__69618700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69617620;

   return block;
};

Block __69618500;

void code__69618500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74028980(),_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74028920(),_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__69618500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69618500 = block;
   block->owner = (Object)__69618700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69618500;

   return block;
};

void code__69618700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74029400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__69617620();
   }
   else {
  code__69618500();
   }
      }
   }
}

Block make__69618700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69618700 = block;
   block->owner = (Object)__69619020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69618700;

   return block;
};

void code__69619020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58677_70901320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__74029560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__69618700();
   }
      }
   }
}

Block make__69619020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69619020 = block;
   block->owner = (Object)__69268860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69619020;

   return block;
};

Block __70041260;

Block __70040700;

void code__70040700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_69116840_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      src1 = rv0_69214600_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70040700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70040700 = block;
   block->owner = (Object)__70041260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70040700;

   return block;
};

void code__70041260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74028760(),run_69214540_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74028680(),ack__add_70387960_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__70040700();
}

Block make__70041260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70041260 = block;
   block->owner = (Object)__69268860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70041260;

   return block;
};

void code__69268860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74029860(),run_69214540_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
 code__69268520();
 code__69619020();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_69214580_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = rvok0_69214560_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__70041260();
   }
      }
   }
}

Block make__69268860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69268860 = block;
   block->owner = (Object)__69214420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69268860;

   return block;
};

Block __69270720;

void code__69270720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74028420(),lvok0_69214580_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74028360(),rvok0_69214560_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__69270720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69270720 = block;
   block->owner = (Object)__69214420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69270720;

   return block;
};

void code__69214420() {
 code__69214260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74030120(),ack__add_70387960_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__74030040(),run_69214540_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         src1 = run_69214540_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__69268860();
   }
   else {
  code__69270720();
   }
      }
   }
}

Block make__69214420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69214420 = block;
   block->owner = (Object)__70388180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69214420;

   return block;
};

Value make__74014400() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__74014360() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__74007240() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__74012720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74012580() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74012480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74012320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74012240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74012160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74012080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74011940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74011840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74011780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74011560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74011380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74011120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74011020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74010860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74010760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74010720() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74010460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74010400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74009780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74009640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74009480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74009360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74009320() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74009000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74008940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74008740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74008420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74008360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74007980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74007660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74007500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74007440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74007360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74007260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__74030240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74030120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74030040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74029860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74029660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74029560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74029400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__74029120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74029040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74028980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__74028920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74028760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74028680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74028420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74028360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74026580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74026520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74026460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74026220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74026140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74025980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__74025720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_840_71841520;

SignalI req__mac_70388040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereq__mac_70388040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_70388040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack_70388000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__mac_70387980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI ack__add_70387960_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__add_70387960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_70387960_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58636_70575540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58634_70575520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58635_70575440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58644_70738200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58676_70901340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58677_70901320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58677_70901320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58677_70901320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58674_70901260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58675_70901140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI _58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI make_58689_70998000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makevalue__z0_71128520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI value__a0_71258160_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makevalue__a0_71258160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_71258160_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI flag__z0_71258140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeflag__z0_71258140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_71258140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SignalI ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeack__a0_71258100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)layer1_58_840_71841520;
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

SystemI counter_71275400;

SystemI makecounter_71275400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_71275400 = systemI;
   systemI->owner = (Object)layer1_58_840_71841520;
   systemI->name = "counter";
   systemI->system = counter_58_8420_71278040;

   return systemI;
};

SystemI func0_59234240;

SystemI makefunc0_59234240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_59234240 = systemI;
   systemI->owner = (Object)layer1_58_840_71841520;
   systemI->name = "func0";
   systemI->system = func0_58_8420_58483060;

   return systemI;
};

Scope channel__w0_58627_71841180;

SignalI trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI maketrig__r_71839400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58627_71841180;
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

SignalI dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makedbus__r_71906000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58627_71841180;
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

SignalI abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_71905920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58627_71841180;
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

SignalI mem_72754680_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makemem_72754680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_72754680_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__w0_58627_71841180;
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
         src0 = make__74014400();
         src1 = make__74014360();
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

Scope raddr_58628_71840880;

Scope makeraddr_58628_71840880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58628_71840880 = scope;
   scope->owner = (Object)channel__w0_58627_71841180;
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

Scope rinc_58633_71840360;

Scope makerinc_58633_71840360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58633_71840360 = scope;
   scope->owner = (Object)channel__w0_58627_71841180;
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

Scope rdec_58637_71839840;

Scope makerdec_58637_71839840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58637_71839840 = scope;
   scope->owner = (Object)channel__w0_58627_71841180;
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

Behavior __73535740;

Behavior make__73535740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73535740 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__72993400();

   return behavior;
}

Behavior __73801000;

Behavior make__73801000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73801000 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[dbus__r_71906000_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73801200();

   return behavior;
}

Behavior __73800800;

Behavior make__73800800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73800800 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58636_70575540_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73800960();

   return behavior;
}

Behavior __73800120;

Behavior make__73800120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73800120 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[trig__r_71839400_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73800480();

   return behavior;
}

Behavior __73799720;

Behavior make__73799720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73799720 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58634_70575520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73800060();

   return behavior;
}

Behavior __73799260;

Behavior make__73799260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73799260 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[abus__r_71905920_channel__w0_58627_71841180_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73799420();

   return behavior;
}

Behavior __73799000;

Behavior make__73799000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73799000 = behavior;
   behavior->owner = (Object)channel__w0_58627_71841180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58635_70575440_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73799220();

   return behavior;
}

Scope makechannel__w0_58627_71841180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58627_71841180 = scope;
   scope->owner = (Object)layer1_58_840_71841520;
   scope->name = "channel_w0:627";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_71839400();
   scope->inners[1] = makedbus__r_71906000();
   scope->inners[2] = makeabus__r_71905920();
   scope->inners[3] = makemem_72754680();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58628_71840880();
   scope->scopes[1] = makerinc_58633_71840360();
   scope->scopes[2] = makerdec_58637_71839840();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73535740();
   scope->behaviors[1] = make__73801000();
   scope->behaviors[2] = make__73800800();
   scope->behaviors[3] = make__73800120();
   scope->behaviors[4] = make__73799720();
   scope->behaviors[5] = make__73799260();
   scope->behaviors[6] = make__73799000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58642_73535560;

SignalI reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereg__0_73713540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__accum_58642_73535560;
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

Scope anum_58643_73535260;

Scope makeanum_58643_73535260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58643_73535260 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
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

Scope raddr_58645_73534840;

Scope makeraddr_58645_73534840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58645_73534840 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
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

Scope waddr_58648_73534380;

Scope makewaddr_58648_73534380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58648_73534380 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
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

Scope rinc_58651_73533940;

SignalI abus__r_73533380_rinc_58651_73533940_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_73533380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_73533380_rinc_58651_73533940_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58651_73533940;
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

Scope makerinc_58651_73533940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58651_73533940 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
   scope->name = "rinc:651";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_73533380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58655_73533260;

SignalI abus__w_73532880_winc_58655_73533260_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_73532880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_73532880_winc_58655_73533260_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58655_73533260;
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

Scope makewinc_58655_73533260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58655_73533260 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
   scope->name = "winc:655";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_73532880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58659_73532760;

SignalI abus__r_73532340_rdec_58659_73532760_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_73532340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_73532340_rdec_58659_73532760_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58659_73532760;
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

Scope makerdec_58659_73532760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58659_73532760 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
   scope->name = "rdec:659";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_73532340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58663_73532220;

SignalI abus__w_73531840_wdec_58663_73532220_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_73531840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_73531840_wdec_58663_73532220_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58663_73532220;
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

Scope makewdec_58663_73532220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58663_73532220 = scope;
   scope->owner = (Object)channel__accum_58642_73535560;
   scope->name = "wdec:663";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_73531840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __73797060;

Behavior make__73797060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73797060 = behavior;
   behavior->owner = (Object)channel__accum_58642_73535560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[reg__0_73713540_channel__accum_58642_73535560_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73797240();

   return behavior;
}

Behavior __73796860;

Behavior make__73796860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73796860 = behavior;
   behavior->owner = (Object)channel__accum_58642_73535560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58644_70738200_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73797020();

   return behavior;
}

Scope makechannel__accum_58642_73535560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58642_73535560 = scope;
   scope->owner = (Object)layer1_58_840_71841520;
   scope->name = "channel_accum:642";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_73713540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58643_73535260();
   scope->scopes[1] = makeraddr_58645_73534840();
   scope->scopes[2] = makewaddr_58648_73534380();
   scope->scopes[3] = makerinc_58651_73533940();
   scope->scopes[4] = makewinc_58655_73533260();
   scope->scopes[5] = makerdec_58659_73532760();
   scope->scopes[6] = makewdec_58663_73532220();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73797060();
   scope->behaviors[1] = make__73796860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58667_73927420;

SignalI lv0_74165440_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelv0_74165440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_74165440_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

SignalI av0_49139580_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeav0_49139580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49139580_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

SignalI rv_50481940_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerv_50481940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50481940_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

SignalI lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelvok0_50481900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50481900_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

SignalI rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makervok_50481880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50481880_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

SignalI wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makewok0_50481840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_50481840_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

SignalI run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerun_50481780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50481780_mac__n1_58667_73927420_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)mac__n1_58667_73927420;
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

Behavior __61554400;

Behavior make__61554400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61554400 = behavior;
   behavior->owner = (Object)mac__n1_58667_73927420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__50481540();

   return behavior;
}

Scope makemac__n1_58667_73927420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58667_73927420 = scope;
   scope->owner = (Object)layer1_58_840_71841520;
   scope->name = "mac_n1:667";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_74165440();
   scope->inners[1] = makeav0_49139580();
   scope->inners[2] = makerv_50481940();
   scope->inners[3] = makelvok0_50481900();
   scope->inners[4] = makervok_50481880();
   scope->inners[5] = makewok0_50481840();
   scope->inners[6] = makerun_50481780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61554400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58672_61554040;

SignalI trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI maketrig__r_61550400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58672_61554040;
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

SignalI dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makedbus__r_62033000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58672_61554040;
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

SignalI abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_62032900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58672_61554040;
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

SignalI mem_62732220_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makemem_62732220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62732220_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__b0_58672_61554040;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__74007240(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58673_61553440;

Scope makeraddr_58673_61553440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58673_61553440 = scope;
   scope->owner = (Object)channel__b0_58672_61554040;
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

Scope rinc_58678_61552360;

Scope makerinc_58678_61552360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58678_61552360 = scope;
   scope->owner = (Object)channel__b0_58672_61554040;
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

Scope rdec_58682_61551200;

Scope makerdec_58682_61551200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58682_61551200 = scope;
   scope->owner = (Object)channel__b0_58672_61554040;
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

Behavior __54314460;

Behavior make__54314460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54314460 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->neg[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__55873220();

   return behavior;
}

Behavior __73794140;

Behavior make__73794140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73794140 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[dbus__r_62033000_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73794340();

   return behavior;
}

Behavior __73793880;

Behavior make__73793880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73793880 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58676_70901340_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73794100();

   return behavior;
}

Behavior __73817720;

Behavior make__73817720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73817720 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[trig__r_61550400_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73818000();

   return behavior;
}

Behavior __73817520;

Behavior make__73817520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73817520 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58674_70901260_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73817680();

   return behavior;
}

Behavior __73816860;

Behavior make__73816860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73816860 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[abus__r_62032900_channel__b0_58672_61554040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73817060();

   return behavior;
}

Behavior __73816560;

Behavior make__73816560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73816560 = behavior;
   behavior->owner = (Object)channel__b0_58672_61554040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58675_70901140_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73816780();

   return behavior;
}

Scope makechannel__b0_58672_61554040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58672_61554040 = scope;
   scope->owner = (Object)layer1_58_840_71841520;
   scope->name = "channel_b0:672";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_61550400();
   scope->inners[1] = makedbus__r_62033000();
   scope->inners[2] = makeabus__r_62032900();
   scope->inners[3] = makemem_62732220();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58673_61553440();
   scope->scopes[1] = makerinc_58678_61552360();
   scope->scopes[2] = makerdec_58682_61551200();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54314460();
   scope->behaviors[1] = make__73794140();
   scope->behaviors[2] = make__73793880();
   scope->behaviors[3] = make__73817720();
   scope->behaviors[4] = make__73817520();
   scope->behaviors[5] = make__73816860();
   scope->behaviors[6] = make__73816560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58687_54314320;

SignalI reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makereg__0_68604620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__z_58687_54314320;
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

Scope anum_58688_54314020;

Scope makeanum_58688_54314020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58688_54314020 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
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

Scope raddr_58690_54313560;

Scope makeraddr_58690_54313560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58690_54313560 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
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

Scope waddr_58693_54313040;

Scope makewaddr_58693_54313040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58693_54313040 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
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

Scope rinc_58696_64167400;

SignalI abus__r_64166940_rinc_58696_64167400_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_64166940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_64166940_rinc_58696_64167400_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58696_64167400;
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

Scope makerinc_58696_64167400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58696_64167400 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
   scope->name = "rinc:696";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_64166940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58699_64166820;

SignalI abus__w_64166420_winc_58699_64166820_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_64166420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_64166420_winc_58699_64166820_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58699_64166820;
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

Scope makewinc_58699_64166820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58699_64166820 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
   scope->name = "winc:699";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_64166420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58702_64166300;

SignalI abus__r_64165780_rdec_58702_64166300_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__r_64165780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_64165780_rdec_58702_64166300_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58702_64166300;
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

Scope makerdec_58702_64166300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58702_64166300 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
   scope->name = "rdec:702";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_64165780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58706_64165640;

SignalI abus__w_64165160_wdec_58706_64165640_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeabus__w_64165160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_64165160_wdec_58706_64165640_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58706_64165640;
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

Scope makewdec_58706_64165640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58706_64165640 = scope;
   scope->owner = (Object)channel__z_58687_54314320;
   scope->name = "wdec:706";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_64165160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __73814600;

Behavior make__73814600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73814600 = behavior;
   behavior->owner = (Object)channel__z_58687_54314320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[reg__0_68604620_channel__z_58687_54314320_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73814820();

   return behavior;
}

Behavior __73814300;

Behavior make__73814300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73814300 = behavior;
   behavior->owner = (Object)channel__z_58687_54314320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   _58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   _58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[_58689_70998000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73814520();

   return behavior;
}

Scope makechannel__z_58687_54314320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58687_54314320 = scope;
   scope->owner = (Object)layer1_58_840_71841520;
   scope->name = "channel_z:687";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_68604620();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58688_54314020();
   scope->scopes[1] = makeraddr_58690_54313560();
   scope->scopes[2] = makewaddr_58693_54313040();
   scope->scopes[3] = makerinc_58696_64167400();
   scope->scopes[4] = makewinc_58699_64166820();
   scope->scopes[5] = makerdec_58702_64166300();
   scope->scopes[6] = makewdec_58706_64165640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73814600();
   scope->behaviors[1] = make__73814300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58710_68988220;

SignalI lv0_69116840_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelv0_69116840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_69116840_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58710_68988220;
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

SignalI rv0_69214600_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerv0_69214600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_69214600_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58710_68988220;
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

SignalI lvok0_69214580_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelvok0_69214580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_69214580_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58710_68988220;
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

SignalI rvok0_69214560_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makervok0_69214560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_69214560_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58710_68988220;
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

SignalI run_69214540_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makerun_69214540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_69214540_add__n_58710_68988220_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)add__n_58710_68988220;
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

Behavior __70388180;

Behavior make__70388180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70388180 = behavior;
   behavior->owner = (Object)add__n_58710_68988220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__69214420();

   return behavior;
}

Scope makeadd__n_58710_68988220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58710_68988220 = scope;
   scope->owner = (Object)layer1_58_840_71841520;
   scope->name = "add_n:710";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_69116840();
   scope->inners[1] = makerv0_69214600();
   scope->inners[2] = makelvok0_69214580();
   scope->inners[3] = makervok0_69214560();
   scope->inners[4] = makerun_69214540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70388180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61153660;

Behavior make__61153660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61153660 = behavior;
   behavior->owner = (Object)layer1_58_840_71841520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__61160080();

   return behavior;
}

Behavior __61777540;

Behavior make__61777540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61777540 = behavior;
   behavior->owner = (Object)layer1_58_840_71841520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__61153460();

   return behavior;
}

Behavior __62645960;

Behavior make__62645960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62645960 = behavior;
   behavior->owner = (Object)layer1_58_840_71841520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->pos[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__61777140();

   return behavior;
}

Behavior __73746320;

Behavior make__73746320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73746320 = behavior;
   behavior->owner = (Object)layer1_58_840_71841520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[req_62729040_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__mac_70387980_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73746720();

   return behavior;
}

Behavior __73778020;

Behavior make__73778020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73778020 = behavior;
   behavior->owner = (Object)layer1_58_840_71841520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[clk_62729160_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack_70388000_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[value__z0_71128520_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__a0_71258100_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73747000();

   return behavior;
}

Behavior __73777520;

Behavior make__73777520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73777520 = behavior;
   behavior->owner = (Object)layer1_58_840_71841520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[ack__mac_71275540_counter_58_8420_71278040_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[rst_62729120_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[a_59234680_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__73746920();

   return behavior;
}

Scope makelayer1_58_840_71841520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_840_71841520 = scope;
   scope->owner = (Object)layer1_58_8400_62644360;
   scope->name = "layer1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_71275400();
   scope->systemIs[1] = makefunc0_59234240();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_70388040();
   scope->inners[1] = makeack_70388000();
   scope->inners[2] = makeack__mac_70387980();
   scope->inners[3] = makeack__add_70387960();
   scope->inners[4] = make_58636_70575540();
   scope->inners[5] = make_58634_70575520();
   scope->inners[6] = make_58635_70575440();
   scope->inners[7] = make_58644_70738200();
   scope->inners[8] = make_58676_70901340();
   scope->inners[9] = make_58677_70901320();
   scope->inners[10] = make_58674_70901260();
   scope->inners[11] = make_58675_70901140();
   scope->inners[12] = make_58689_70998000();
   scope->inners[13] = makevalue__z0_71128520();
   scope->inners[14] = makevalue__a0_71258160();
   scope->inners[15] = makeflag__z0_71258140();
   scope->inners[16] = makeack__a0_71258100();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58627_71841180();
   scope->scopes[1] = makechannel__accum_58642_73535560();
   scope->scopes[2] = makemac__n1_58667_73927420();
   scope->scopes[3] = makechannel__b0_58672_61554040();
   scope->scopes[4] = makechannel__z_58687_54314320();
   scope->scopes[5] = makeadd__n_58710_68988220();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61153660();
   scope->behaviors[1] = make__61777540();
   scope->behaviors[2] = make__62645960();
   scope->behaviors[3] = make__73746320();
   scope->behaviors[4] = make__73778020();
   scope->behaviors[5] = make__73777520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_8400_62644360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_8400_62644360 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T00";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_62729160();
   systemT->inputs[1] = makerst_62729120();
   systemT->inputs[2] = makereq_62729040();
   systemT->inputs[3] = make_58470_61881200();
   systemT->inputs[4] = make_58471_59327600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_59327560();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58472_59327440();
   systemT->inouts[1] = make_58436_55799960();

   systemT->scope = makelayer1_58_840_71841520();

   return systemT;
}