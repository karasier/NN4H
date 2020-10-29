#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_54830400;

SignalI clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeclk_54851640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
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

SignalI rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerst_54851620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
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

SignalI req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereq_54851600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
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

SignalI _58110_54995840_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58110_54995840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58110_54995840_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
   signalI->name = ":110";
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

SignalI _58111_55229280_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58111_55229280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58111_55229280_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
   signalI->name = ":111";
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

SignalI ack__layer_55229220_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__layer_55229220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_55229220_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
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

SignalI _58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58112_55228680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
   signalI->name = ":112";
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

SignalI _5876_55545920_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_5876_55545920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5876_55545920_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_840_54830400;
   signalI->name = ":76";
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

Block __50244020;

Block __50243660;

void code__50243660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50544860(),ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50544740(),ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50519900(),ack__add_55065720_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50243660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50243660 = block;
   block->owner = (Object)__50244020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50243660;

   return block;
};

void code__50244020() {
   {
      Value cond = rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50243660();
   }
      }
   }
}

Block make__50244020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50244020 = block;
   block->owner = (Object)__50264760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50244020;

   return block;
};

Block __50264380;

Block __50260020;

Block __50259340;

void code__50259340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50519080(),flag__z0_56208280_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50259340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50259340 = block;
   block->owner = (Object)__50260020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50259340;

   return block;
};

void code__50260020() {
 code__50259340();
}

Block make__50260020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50260020 = block;
   block->owner = (Object)__50264380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50260020;

   return block;
};

Block __50263800;

void code__50263800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50518900(),flag__z0_56208280_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50263800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50263800 = block;
   block->owner = (Object)__50264380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50263800;

   return block;
};

void code__50264380() {
   {
      Value cond = ack__add_55065720_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50260020();
   }
   else {
  code__50263800();
   }
      }
   }
}

Block make__50264380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50264380 = block;
   block->owner = (Object)__50882680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50264380;

   return block;
};

Block __50881680;

Block __50904240;

void code__50904240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50518580(),ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50904240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50904240 = block;
   block->owner = (Object)__50881680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50904240;

   return block;
};

Block __50901780;

Block __50900900;

void code__50900900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_56208300_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_5876_55545920_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50518260(),ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50900900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50900900 = block;
   block->owner = (Object)__50901780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50900900;

   return block;
};

void code__50901780() {
 code__50900900();
}

Block make__50901780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50901780 = block;
   block->owner = (Object)__50881680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50901780;

   return block;
};

void code__50881680() {
   {
      Value cond = rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50904240();
   }
   else if (value2integer(flag__z0_56208280_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value)) {
  code__50901780();
   }
      }
   }
}

Block make__50881680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50881680 = block;
   block->owner = (Object)__54830880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50881680;

   return block;
};

Block __48416540;

void code__48416540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_55065820_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48416540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48416540 = block;
   block->owner = (Object)__48415820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48416540;

   return block;
};

Block __48417300;

void code__48417300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,clk_56222260_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack_56222200_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rst_56222180_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,z__value_57793940_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack__layer_55229220_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48417300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48417300 = block;
   block->owner = (Object)__48879540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48417300;

   return block;
};

Block __48416880;

void code__48416880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58317_55702200_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,value__a0_56208300_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48416880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48416880 = block;
   block->owner = (Object)__48879140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48416880;

   return block;
};

Block __57440340;

void code__57440340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_57146420_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57440340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57440340 = block;
   block->owner = (Object)__47007440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57440340;

   return block;
};

Block __48846500;

void code__48846500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48846500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48846500 = block;
   block->owner = (Object)__48844980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48846500;

   return block;
};

Block __48844940;

void code__48844940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48844940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48844940 = block;
   block->owner = (Object)__48842960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48844940;

   return block;
};

Block __48814740;

void code__48814740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48814740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48814740 = block;
   block->owner = (Object)__48813420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48814740;

   return block;
};

Block __48813320;

void code__48813320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48813320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48813320 = block;
   block->owner = (Object)__48812980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48813320;

   return block;
};

Block __48811040;

void code__48811040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48811040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48811040 = block;
   block->owner = (Object)__48779880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48811040;

   return block;
};

Block __48779800;

void code__48779800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48779800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48779800 = block;
   block->owner = (Object)__48779460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48779800;

   return block;
};

Block __48745980;

void code__48745980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48745980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48745980 = block;
   block->owner = (Object)__48717620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48745980;

   return block;
};

Block __48717520;

void code__48717520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__48717520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48717520 = block;
   block->owner = (Object)__48714960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48717520;

   return block;
};

Block __50309020;

Block __50308740;

Block __50308100;

void code__50308100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50296200(),_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50308100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50308100 = block;
   block->owner = (Object)__50308740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50308100;

   return block;
};

void code__50308740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50296280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50308100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50296140(),_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50308740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50308740 = block;
   block->owner = (Object)__50309020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50308740;

   return block;
};

Block __50330420;

Block __50329960;

void code__50329960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50295940(),_58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50329960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50329960 = block;
   block->owner = (Object)__50330420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50329960;

   return block;
};

void code__50330420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50296040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50329960();
   }
      }
   }
}

Block make__50330420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50330420 = block;
   block->owner = (Object)__50309020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50330420;

   return block;
};

Block __50326840;

void code__50326840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50295460(),rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50295360(),lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50294660(),wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50326840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50326840 = block;
   block->owner = (Object)__50309020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50326840;

   return block;
};

Block __50499040;

Block __50497400;

Block __50497220;

Block __50496780;

Block __50496020;

void code__50496020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58110_54995840_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rv_50309740_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50496020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50496020 = block;
   block->owner = (Object)__50496780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50496020;

   return block;
};

Block __51087120;

void code__51087120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58111_55229280_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rv_50309740_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__51087120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51087120 = block;
   block->owner = (Object)__50496780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51087120;

   return block;
};

void code__50496780() {
{
      Value value = _58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__50293440())) {
    code__50496020();
         }
         else if (value2integer(value) == value2integer(make__50293200())) {
    code__51087120();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50292860(),rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
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
                  src0 = _58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  src1 = make__50292720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50292660();
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
                        src0 = _58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50292140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50292080();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58112_55228680_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50496780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50496780 = block;
   block->owner = (Object)__50497220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50496780;

   return block;
};

void code__50497220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50293720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50496780();
   }
      }
   }
}

Block make__50497220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50497220 = block;
   block->owner = (Object)__50497400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50497220;

   return block;
};

void code__50497400() {
 code__50497220();
}

Block make__50497400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50497400 = block;
   block->owner = (Object)__50499040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50497400;

   return block;
};

Block __54836820;

Block __54836560;

Block __54836080;

Block __54833540;

Block __54833320;

void code__54833320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,lv0_49837980_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50650900(),lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__54833320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54833320 = block;
   block->owner = (Object)__54833540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54833320;

   return block;
};

void code__54833540() {
 code__54833320();
}

Block make__54833540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54833540 = block;
   block->owner = (Object)__54836080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54833540;

   return block;
};

Block __54835840;

void code__54835840() {
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
                  src0 = _58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                  src1 = make__50650420();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50650300();
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
                        src0 = _58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50649340();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50649280();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50649080(),_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__54835840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54835840 = block;
   block->owner = (Object)__54836080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54835840;

   return block;
};

void code__54836080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50291180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54833540();
   }
   else {
  code__54835840();
   }
      }
   }
}

Block make__54836080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54836080 = block;
   block->owner = (Object)__54836560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54836080;

   return block;
};

void code__54836560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50291360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54836080();
   }
      }
   }
}

Block make__54836560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54836560 = block;
   block->owner = (Object)__54836820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54836560;

   return block;
};

void code__54836820() {
 code__54836560();
}

Block make__54836820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54836820 = block;
   block->owner = (Object)__50499040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54836820;

   return block;
};

Block __55146880;

Block __55146100;

Block __55145900;

void code__55145900() {
}

Block make__55145900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55145900 = block;
   block->owner = (Object)__55146100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55145900;

   return block;
};

Block __56081640;

void code__56081640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50063200_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50645220(),wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56081640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56081640 = block;
   block->owner = (Object)__55146100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56081640;

   return block;
};

void code__55146100() {
 code__55145900();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_50063200_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
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
                              src0 = lv0_49837980_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50309740_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50646260();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50063200_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__56081640();
}

Block make__55146100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55146100 = block;
   block->owner = (Object)__55146880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55146100;

   return block;
};

void code__55146880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50647360(),ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50647220(),run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__55146100();
}

Block make__55146880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55146880 = block;
   block->owner = (Object)__50499040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55146880;

   return block;
};

Block __56433500;

void code__56433500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50645040(),wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50644760(),lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50644500(),rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__56433500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56433500 = block;
   block->owner = (Object)__50499040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56433500;

   return block;
};

void code__50499040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50294080(),run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50497400();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54836820();
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
               src0 = lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               src1 = rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55146880();
   }
      }
   }
   {
      Value cond = wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56433500();
   }
      }
   }
}

Block make__50499040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50499040 = block;
   block->owner = (Object)__50309020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50499040;

   return block;
};

Block __50324300;

void code__50324300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50644180(),av0_50063200_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50324300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50324300 = block;
   block->owner = (Object)__50309020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50324300;

   return block;
};

void code__50309020() {
 code__50308740();
 code__50330420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50295880(),ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50295740(),run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50326840();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_55065820_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50499040();
   }
   else {
  code__50324300();
   }
      }
   }
}

Block make__50309020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50309020 = block;
   block->owner = (Object)__56431680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50309020;

   return block;
};

Block __57217380;

void code__57217380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56788600_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
            idx = value2integer(abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__57217380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57217380 = block;
   block->owner = (Object)__57705240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57217380;

   return block;
};

Block __50014040;

void code__50014040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50014040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50014040 = block;
   block->owner = (Object)__50013520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50014040;

   return block;
};

Block __50013460;

void code__50013460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50013460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50013460 = block;
   block->owner = (Object)__50013020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50013460;

   return block;
};

Block __50012380;

void code__50012380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50012380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50012380 = block;
   block->owner = (Object)__49987360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50012380;

   return block;
};

Block __49987320;

void code__49987320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49987320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49987320 = block;
   block->owner = (Object)__49984680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49987320;

   return block;
};

Block __49982800;

void code__49982800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49982800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49982800 = block;
   block->owner = (Object)__49982400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49982800;

   return block;
};

Block __49982340;

void code__49982340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49982340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49982340 = block;
   block->owner = (Object)__49981960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49982340;

   return block;
};

Block __49870720;

void code__49870720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49870720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49870720 = block;
   block->owner = (Object)__49868040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49870720;

   return block;
};

Block __49867620;

void code__49867620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49867620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49867620 = block;
   block->owner = (Object)__49866700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49867620;

   return block;
};

Block __49850920;

Block __49849500;

void code__49849500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50582480(),_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49849500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49849500 = block;
   block->owner = (Object)__49850920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49849500;

   return block;
};

Block __49869940;

Block __49868240;

void code__49868240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,lv0_48748480_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50580180(),lvok0_49853980_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49868240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49868240 = block;
   block->owner = (Object)__49869940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49868240;

   return block;
};

Block __50403360;

Block __50402820;

Block __50401180;

void code__50401180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value,rv0_49854100_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50552640(),_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50552500(),rvok0_49852760_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50401180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50401180 = block;
   block->owner = (Object)__50402820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50401180;

   return block;
};

Block __50402600;

void code__50402600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50552140(),_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50552040(),_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50402600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50402600 = block;
   block->owner = (Object)__50402820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50402600;

   return block;
};

void code__50402820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50579380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50401180();
   }
   else {
  code__50402600();
   }
      }
   }
}

Block make__50402820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50402820 = block;
   block->owner = (Object)__50403360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50402820;

   return block;
};

void code__50403360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58317_55702200_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50579580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50402820();
   }
      }
   }
}

Block make__50403360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50403360 = block;
   block->owner = (Object)__49869940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50403360;

   return block;
};

Block __50936600;

Block __50935520;

void code__50935520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_48748480_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      src1 = rv0_49854100_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__50935520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50935520 = block;
   block->owner = (Object)__50936600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50935520;

   return block;
};

void code__50936600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50549720(),run_49852640_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50549180(),ack__add_55065720_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__50935520();
}

Block make__50936600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50936600 = block;
   block->owner = (Object)__49869940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50936600;

   return block;
};

void code__49869940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50580940(),run_49852640_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
 code__49868240();
 code__50403360();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49853980_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = rvok0_49852760_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50936600();
   }
      }
   }
}

Block make__49869940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49869940 = block;
   block->owner = (Object)__49850920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49869940;

   return block;
};

Block __49871100;

void code__49871100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50548220(),lvok0_49853980_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50548140(),rvok0_49852760_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
}

Block make__49871100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49871100 = block;
   block->owner = (Object)__49850920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49871100;

   return block;
};

void code__49850920() {
 code__49849500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50582040(),ack__add_55065720_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50581840(),run_49852640_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         src1 = run_49852640_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49869940();
   }
   else {
  code__49871100();
   }
      }
   }
}

Block make__49850920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49850920 = block;
   block->owner = (Object)__55065980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49850920;

   return block;
};

Value make__50324180() {
   static unsigned long long data[] = { 29ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50324140() {
   static unsigned long long data[] = { 4294967266ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50644140() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__50296280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50296200() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50296140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50296040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50295940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50295880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50295740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50295460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50295360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50294660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50294080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50293720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50293440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50293200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50292860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50292720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50292660() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50292140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50292080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50291360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50291180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50650900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50650420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50650300() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50649340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50649280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50649080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50647360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50647220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50646260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50645220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50645040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50644760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50644500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50644180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50582480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50582040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50581840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50580940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50580180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50579580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50579380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50552640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50552500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50552140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50552040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50549720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50549180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50548220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50548140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50544860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50544740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50519900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50519080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50518900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50518580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50518260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_56206940;

SignalI req__mac_55065820_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereq__mac_55065820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_55065820_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack_55065800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__mac_55065740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI ack__add_55065720_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__add_55065720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_55065720_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI _58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58276_55212000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":276";
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

SignalI _58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58274_55211980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":274";
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

SignalI _58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58275_55211800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":275";
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

SignalI _58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58284_55497020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI _58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58316_55702220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI _58317_55702200_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58317_55702200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_55702200_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":317";
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

SignalI _58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58314_55702180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":314";
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

SignalI _58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58315_55702100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":315";
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

SignalI _58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI make_58329_55845100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
   signalI->name = ":329";
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

SignalI value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makevalue__z0_55960220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI value__a0_56208300_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makevalue__a0_56208300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_56208300_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI flag__z0_56208280_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeflag__z0_56208280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_56208280_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SignalI ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeack__a0_56208260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)layer1_58_84_56206940;
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

SystemI counter_56222000;

SystemI makecounter_56222000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_56222000 = systemI;
   systemI->owner = (Object)layer1_58_84_56206940;
   systemI->name = "counter";
   systemI->system = counter_58_8400_56224920;

   return systemI;
};

SystemI func0_47460360;

SystemI makefunc0_47460360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_47460360 = systemI;
   systemI->owner = (Object)layer1_58_84_56206940;
   systemI->name = "func0";
   systemI->system = func0_58_8400_57505260;

   return systemI;
};

Scope channel__w0_58267_56206640;

SignalI trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_56229100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58267_56206640;
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

SignalI dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_56348220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58267_56206640;
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

SignalI abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_56348120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58267_56206640;
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

SignalI mem_57146420_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_57146420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_57146420_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__w0_58267_56206640;
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
         src0 = make__50324180();
         src1 = make__50324140();
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

Scope raddr_58268_56206240;

Scope makeraddr_58268_56206240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_56206240 = scope;
   scope->owner = (Object)channel__w0_58267_56206640;
   scope->name = "raddr:268";
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

Scope rinc_58273_56205800;

Scope makerinc_58273_56205800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_56205800 = scope;
   scope->owner = (Object)channel__w0_58267_56206640;
   scope->name = "rinc:273";
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

Scope rdec_58277_56229680;

Scope makerdec_58277_56229680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58277_56229680 = scope;
   scope->owner = (Object)channel__w0_58267_56206640;
   scope->name = "rdec:277";
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

Behavior __47007440;

Behavior make__47007440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47007440 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__57440340();

   return behavior;
}

Behavior __48844980;

Behavior make__48844980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48844980 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_56348220_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48846500();

   return behavior;
}

Behavior __48842960;

Behavior make__48842960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48842960 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58276_55212000_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48844940();

   return behavior;
}

Behavior __48813420;

Behavior make__48813420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48813420 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[trig__r_56229100_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48814740();

   return behavior;
}

Behavior __48812980;

Behavior make__48812980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48812980 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58274_55211980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48813320();

   return behavior;
}

Behavior __48779880;

Behavior make__48779880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48779880 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[abus__r_56348120_channel__w0_58267_56206640_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48811040();

   return behavior;
}

Behavior __48779460;

Behavior make__48779460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48779460 = behavior;
   behavior->owner = (Object)channel__w0_58267_56206640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58275_55211800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48779800();

   return behavior;
}

Scope makechannel__w0_58267_56206640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58267_56206640 = scope;
   scope->owner = (Object)layer1_58_84_56206940;
   scope->name = "channel_w0:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56229100();
   scope->inners[1] = makedbus__r_56348220();
   scope->inners[2] = makeabus__r_56348120();
   scope->inners[3] = makemem_57146420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58268_56206240();
   scope->scopes[1] = makerinc_58273_56205800();
   scope->scopes[2] = makerdec_58277_56229680();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47007440();
   scope->behaviors[1] = make__48844980();
   scope->behaviors[2] = make__48842960();
   scope->behaviors[3] = make__48813420();
   scope->behaviors[4] = make__48812980();
   scope->behaviors[5] = make__48779880();
   scope->behaviors[6] = make__48779460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58282_47006700;

SignalI reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereg__0_48091200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__accum_58282_47006700;
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

Scope anum_58283_47029640;

Scope makeanum_58283_47029640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58283_47029640 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
   scope->name = "anum:283";
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

Scope raddr_58285_47027500;

Scope makeraddr_58285_47027500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58285_47027500 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
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

Scope waddr_58288_47025840;

Scope makewaddr_58288_47025840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58288_47025840 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
   scope->name = "waddr:288";
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

Scope rinc_58291_47057500;

SignalI abus__r_47078840_rinc_58291_47057500_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_47078840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47078840_rinc_58291_47057500_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rinc_58291_47057500;
   signalI->name = "abus_r";
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

Scope makerinc_58291_47057500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58291_47057500 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
   scope->name = "rinc:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47078840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58295_47077580;

SignalI abus__w_47073520_winc_58295_47077580_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_47073520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47073520_winc_58295_47077580_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)winc_58295_47077580;
   signalI->name = "abus_w";
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

Scope makewinc_58295_47077580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58295_47077580 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
   scope->name = "winc:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47073520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58299_47095120;

SignalI abus__r_47335700_rdec_58299_47095120_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_47335700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47335700_rdec_58299_47095120_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rdec_58299_47095120;
   signalI->name = "abus_r";
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

Scope makerdec_58299_47095120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58299_47095120 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
   scope->name = "rdec:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47335700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58303_47333800;

SignalI abus__w_47413960_wdec_58303_47333800_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_47413960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47413960_wdec_58303_47333800_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)wdec_58303_47333800;
   signalI->name = "abus_w";
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

Scope makewdec_58303_47333800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58303_47333800 = scope;
   scope->owner = (Object)channel__accum_58282_47006700;
   scope->name = "wdec:303";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47413960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48717620;

Behavior make__48717620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48717620 = behavior;
   behavior->owner = (Object)channel__accum_58282_47006700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[reg__0_48091200_channel__accum_58282_47006700_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48745980();

   return behavior;
}

Behavior __48714960;

Behavior make__48714960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48714960 = behavior;
   behavior->owner = (Object)channel__accum_58282_47006700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58284_55497020_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48717520();

   return behavior;
}

Scope makechannel__accum_58282_47006700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58282_47006700 = scope;
   scope->owner = (Object)layer1_58_84_56206940;
   scope->name = "channel_accum:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48091200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58283_47029640();
   scope->scopes[1] = makeraddr_58285_47027500();
   scope->scopes[2] = makewaddr_58288_47025840();
   scope->scopes[3] = makerinc_58291_47057500();
   scope->scopes[4] = makewinc_58295_47077580();
   scope->scopes[5] = makerdec_58299_47095120();
   scope->scopes[6] = makewdec_58303_47333800();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48717620();
   scope->behaviors[1] = make__48714960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58307_48728860;

SignalI lv0_49837980_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelv0_49837980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49837980_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

SignalI av0_50063200_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeav0_50063200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50063200_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

SignalI rv_50309740_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerv_50309740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50309740_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

SignalI lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelvok0_50309660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50309660_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

SignalI rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makervok_50309540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50309540_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

SignalI wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makewok0_50309220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_50309220_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

SignalI run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerun_50309180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50309180_mac__n1_58307_48728860_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)mac__n1_58307_48728860;
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

Behavior __56431680;

Behavior make__56431680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56431680 = behavior;
   behavior->owner = (Object)mac__n1_58307_48728860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__50309020();

   return behavior;
}

Scope makemac__n1_58307_48728860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58307_48728860 = scope;
   scope->owner = (Object)layer1_58_84_56206940;
   scope->name = "mac_n1:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49837980();
   scope->inners[1] = makeav0_50063200();
   scope->inners[2] = makerv_50309740();
   scope->inners[3] = makelvok0_50309660();
   scope->inners[4] = makervok_50309540();
   scope->inners[5] = makewok0_50309220();
   scope->inners[6] = makerun_50309180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56431680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58312_56431520;

SignalI trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI maketrig__r_56429520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58312_56431520;
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

SignalI dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makedbus__r_56546360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58312_56431520;
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

SignalI abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_56546280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58312_56431520;
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

SignalI mem_56788600_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makemem_56788600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56788600_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__b0_58312_56431520;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__50644140(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58313_56431120;

Scope makeraddr_58313_56431120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58313_56431120 = scope;
   scope->owner = (Object)channel__b0_58312_56431520;
   scope->name = "raddr:313";
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

Scope rinc_58318_56430700;

Scope makerinc_58318_56430700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58318_56430700 = scope;
   scope->owner = (Object)channel__b0_58312_56431520;
   scope->name = "rinc:318";
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

Scope rdec_58322_56430180;

Scope makerdec_58322_56430180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58322_56430180 = scope;
   scope->owner = (Object)channel__b0_58312_56431520;
   scope->name = "rdec:322";
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

Behavior __57705240;

Behavior make__57705240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57705240 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->neg[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_neg-1] = (Object)behavior;
   behavior->block = make__57217380();

   return behavior;
}

Behavior __50013520;

Behavior make__50013520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50013520 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[dbus__r_56546360_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__50014040();

   return behavior;
}

Behavior __50013020;

Behavior make__50013020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50013020 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58316_55702220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__50013460();

   return behavior;
}

Behavior __49987360;

Behavior make__49987360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49987360 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[trig__r_56429520_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__50012380();

   return behavior;
}

Behavior __49984680;

Behavior make__49984680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49984680 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58314_55702180_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__49987320();

   return behavior;
}

Behavior __49982400;

Behavior make__49982400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49982400 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[abus__r_56546280_channel__b0_58312_56431520_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__49982800();

   return behavior;
}

Behavior __49981960;

Behavior make__49981960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49981960 = behavior;
   behavior->owner = (Object)channel__b0_58312_56431520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58315_55702100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__49982340();

   return behavior;
}

Scope makechannel__b0_58312_56431520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58312_56431520 = scope;
   scope->owner = (Object)layer1_58_84_56206940;
   scope->name = "channel_b0:312";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56429520();
   scope->inners[1] = makedbus__r_56546360();
   scope->inners[2] = makeabus__r_56546280();
   scope->inners[3] = makemem_56788600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58313_56431120();
   scope->scopes[1] = makerinc_58318_56430700();
   scope->scopes[2] = makerdec_58322_56430180();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57705240();
   scope->behaviors[1] = make__50013520();
   scope->behaviors[2] = make__50013020();
   scope->behaviors[3] = make__49987360();
   scope->behaviors[4] = make__49984680();
   scope->behaviors[5] = make__49982400();
   scope->behaviors[6] = make__49981960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58327_57704980;

SignalI reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makereg__0_45976340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)channel__z_58327_57704980;
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

Scope anum_58328_57704620;

Scope makeanum_58328_57704620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58328_57704620 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "anum:328";
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

Scope raddr_58330_57794280;

Scope makeraddr_58330_57794280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58330_57794280 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "raddr:330";
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

Scope waddr_58333_57793780;

Scope makewaddr_58333_57793780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58333_57793780 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "waddr:333";
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

Scope rinc_58336_57792980;

SignalI abus__r_57792520_rinc_58336_57792980_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_57792520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57792520_rinc_58336_57792980_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rinc_58336_57792980;
   signalI->name = "abus_r";
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

Scope makerinc_58336_57792980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58336_57792980 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "rinc:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57792520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_57792340;

SignalI abus__w_57791960_winc_58339_57792340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_57791960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57791960_winc_58339_57792340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)winc_58339_57792340;
   signalI->name = "abus_w";
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

Scope makewinc_58339_57792340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_57792340 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57791960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58342_57791840;

SignalI abus__r_57791400_rdec_58342_57791840_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__r_57791400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57791400_rdec_58342_57791840_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)rdec_58342_57791840;
   signalI->name = "abus_r";
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

Scope makerdec_58342_57791840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58342_57791840 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "rdec:342";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57791400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58346_57791180;

SignalI abus__w_57790460_wdec_58346_57791180_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makeabus__w_57790460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57790460_wdec_58346_57791180_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)wdec_58346_57791180;
   signalI->name = "abus_w";
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

Scope makewdec_58346_57791180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58346_57791180 = scope;
   scope->owner = (Object)channel__z_58327_57704980;
   scope->name = "wdec:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57790460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49868040;

Behavior make__49868040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49868040 = behavior;
   behavior->owner = (Object)channel__z_58327_57704980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[reg__0_45976340_channel__z_58327_57704980_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__49870720();

   return behavior;
}

Behavior __49866700;

Behavior make__49866700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49866700 = behavior;
   behavior->owner = (Object)channel__z_58327_57704980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   _58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   _58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[_58329_55845100_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__49867620();

   return behavior;
}

Scope makechannel__z_58327_57704980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58327_57704980 = scope;
   scope->owner = (Object)layer1_58_84_56206940;
   scope->name = "channel_z:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45976340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58328_57704620();
   scope->scopes[1] = makeraddr_58330_57794280();
   scope->scopes[2] = makewaddr_58333_57793780();
   scope->scopes[3] = makerinc_58336_57792980();
   scope->scopes[4] = makewinc_58339_57792340();
   scope->scopes[5] = makerdec_58342_57791840();
   scope->scopes[6] = makewdec_58346_57791180();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49868040();
   scope->behaviors[1] = make__49866700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58350_48301460;

SignalI lv0_48748480_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelv0_48748480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48748480_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58350_48301460;
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

SignalI rv0_49854100_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerv0_49854100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49854100_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58350_48301460;
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

SignalI lvok0_49853980_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makelvok0_49853980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49853980_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58350_48301460;
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

SignalI rvok0_49852760_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makervok0_49852760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49852760_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58350_48301460;
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

SignalI run_49852640_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140;

SignalI makerun_49852640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49852640_add__n_58350_48301460_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140 = signalI;
   signalI->owner = (Object)add__n_58350_48301460;
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

Behavior __55065980;

Behavior make__55065980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55065980 = behavior;
   behavior->owner = (Object)add__n_58350_48301460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__49850920();

   return behavior;
}

Scope makeadd__n_58350_48301460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58350_48301460 = scope;
   scope->owner = (Object)layer1_58_84_56206940;
   scope->name = "add_n:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48748480();
   scope->inners[1] = makerv0_49854100();
   scope->inners[2] = makelvok0_49853980();
   scope->inners[3] = makervok0_49852760();
   scope->inners[4] = makerun_49852640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55065980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50264760;

Behavior make__50264760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50264760 = behavior;
   behavior->owner = (Object)layer1_58_84_56206940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__50244020();

   return behavior;
}

Behavior __50882680;

Behavior make__50882680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50882680 = behavior;
   behavior->owner = (Object)layer1_58_84_56206940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__50264380();

   return behavior;
}

Behavior __54830880;

Behavior make__54830880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54830880 = behavior;
   behavior->owner = (Object)layer1_58_84_56206940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->pos[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_pos-1] = (Object)behavior;
   behavior->block = make__50881680();

   return behavior;
}

Behavior __48415820;

Behavior make__48415820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48415820 = behavior;
   behavior->owner = (Object)layer1_58_84_56206940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[req_54851600_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__mac_55065740_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48416540();

   return behavior;
}

Behavior __48879540;

Behavior make__48879540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48879540 = behavior;
   behavior->owner = (Object)layer1_58_84_56206940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[clk_54851640_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack_55065800_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[value__z0_55960220_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__a0_56208260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48417300();

   return behavior;
}

Behavior __48879140;

Behavior make__48879140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48879140 = behavior;
   behavior->owner = (Object)layer1_58_84_56206940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[ack__mac_56222140_counter_58_8400_56224920_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[rst_54851620_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140);
   a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any += 1;
   a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any = realloc(a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any,a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any*sizeof(Object));
a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->any[a_47461040_func0_58_8400_57505260_layer1_58_84_56206940_layer1_58_840_54830400_neural__network_58_84_50632580_neural__network_58_840_57566280_nn__simulator_58_84_50758280_nn__simulator_58_840_48486120______58_84_50759120______58_840_50030140->num_any-1] = (Object)behavior;
   behavior->block = make__48416880();

   return behavior;
}

Scope makelayer1_58_84_56206940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_56206940 = scope;
   scope->owner = (Object)layer1_58_840_54830400;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_56222000();
   scope->systemIs[1] = makefunc0_47460360();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_55065820();
   scope->inners[1] = makeack_55065800();
   scope->inners[2] = makeack__mac_55065740();
   scope->inners[3] = makeack__add_55065720();
   scope->inners[4] = make_58276_55212000();
   scope->inners[5] = make_58274_55211980();
   scope->inners[6] = make_58275_55211800();
   scope->inners[7] = make_58284_55497020();
   scope->inners[8] = make_58316_55702220();
   scope->inners[9] = make_58317_55702200();
   scope->inners[10] = make_58314_55702180();
   scope->inners[11] = make_58315_55702100();
   scope->inners[12] = make_58329_55845100();
   scope->inners[13] = makevalue__z0_55960220();
   scope->inners[14] = makevalue__a0_56208300();
   scope->inners[15] = makeflag__z0_56208280();
   scope->inners[16] = makeack__a0_56208260();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58267_56206640();
   scope->scopes[1] = makechannel__accum_58282_47006700();
   scope->scopes[2] = makemac__n1_58307_48728860();
   scope->scopes[3] = makechannel__b0_58312_56431520();
   scope->scopes[4] = makechannel__z_58327_57704980();
   scope->scopes[5] = makeadd__n_58350_48301460();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50264760();
   scope->behaviors[1] = make__50882680();
   scope->behaviors[2] = make__54830880();
   scope->behaviors[3] = make__48415820();
   scope->behaviors[4] = make__48879540();
   scope->behaviors[5] = make__48879140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_54830400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_54830400 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54851640();
   systemT->inputs[1] = makerst_54851620();
   systemT->inputs[2] = makereq_54851600();
   systemT->inputs[3] = make_58110_54995840();
   systemT->inputs[4] = make_58111_55229280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_55229220();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58112_55228680();
   systemT->inouts[1] = make_5876_55545920();

   systemT->scope = makelayer1_58_84_56206940();

   return systemT;
}