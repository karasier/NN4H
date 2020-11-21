#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_8400_75350880;

SignalI clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeclk_75373460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerst_75373440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereq_75373420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI _58481_75450760_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58481_75450760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58481_75450760_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI _58482_75536240_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58482_75536240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58482_75536240_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__layer_75536200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58483_75536100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

SignalI _58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58447_75613400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_8400_75350880;
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

Block __74703080;

Block __74727360;

void code__74727360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55147920(),ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55147260(),ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55146900(),ack__add_73535280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74727360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74727360 = block;
   block->owner = (Object)__74703080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74727360;

   return block;
};

void code__74703080() {
   {
      Value cond = rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74727360();
   }
      }
   }
}

Block make__74703080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74703080 = block;
   block->owner = (Object)__74726380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74703080;

   return block;
};

Block __74726240;

Block __74725700;

Block __74725520;

void code__74725520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55145380(),flag__z0_74206420_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74725520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74725520 = block;
   block->owner = (Object)__74725700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74725520;

   return block;
};

void code__74725700() {
 code__74725520();
}

Block make__74725700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74725700 = block;
   block->owner = (Object)__74726240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74725700;

   return block;
};

Block __74726080;

void code__74726080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55144640(),flag__z0_74206420_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74726080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74726080 = block;
   block->owner = (Object)__74726240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74726080;

   return block;
};

void code__74726240() {
   {
      Value cond = ack__add_73535280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74725700();
   }
   else {
  code__74726080();
   }
      }
   }
}

Block make__74726240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74726240 = block;
   block->owner = (Object)__74985440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74726240;

   return block;
};

Block __74985300;

Block __74984880;

void code__74984880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55144060(),ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74984880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74984880 = block;
   block->owner = (Object)__74985300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74984880;

   return block;
};

Block __74984420;

Block __74984260;

void code__74984260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_74206440_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55143480(),ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__74984260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74984260 = block;
   block->owner = (Object)__74984420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74984260;

   return block;
};

void code__74984420() {
 code__74984260();
}

Block make__74984420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74984420 = block;
   block->owner = (Object)__74985300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74984420;

   return block;
};

void code__74985300() {
   {
      Value cond = rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__74984880();
   }
   else if (value2integer(flag__z0_74206420_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)) {
  code__74984420();
   }
      }
   }
}

Block make__74985300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74985300 = block;
   block->owner = (Object)__75351220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74985300;

   return block;
};

Block __54074500;

void code__54074500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_73535340_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54074500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54074500 = block;
   block->owner = (Object)__54073980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54074500;

   return block;
};

Block __53978260;

void code__53978260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,clk_74241640_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack_74241620_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rst_74241600_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,z__value_74060160_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53978260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53978260 = block;
   block->owner = (Object)__54126400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53978260;

   return block;
};

Block __54075300;

void code__54075300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58688_73805300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__a0_74206440_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54075300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54075300 = block;
   block->owner = (Object)__54125960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54075300;

   return block;
};

Block __64169700;

void code__64169700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_62991340_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__64169700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64169700 = block;
   block->owner = (Object)__65653200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64169700;

   return block;
};

Block __54260940;

void code__54260940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54260940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54260940 = block;
   block->owner = (Object)__54259800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54260940;

   return block;
};

Block __54259620;

void code__54259620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54259620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54259620 = block;
   block->owner = (Object)__54257860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54259620;

   return block;
};

Block __54296100;

void code__54296100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54296100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54296100 = block;
   block->owner = (Object)__54294700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54296100;

   return block;
};

Block __54293720;

void code__54293720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54293720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54293720 = block;
   block->owner = (Object)__54292040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54293720;

   return block;
};

Block __54289960;

void code__54289960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54289960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54289960 = block;
   block->owner = (Object)__54289560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54289960;

   return block;
};

Block __54289320;

void code__54289320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54289320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54289320 = block;
   block->owner = (Object)__54288400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54289320;

   return block;
};

Block __54323700;

void code__54323700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54323700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54323700 = block;
   block->owner = (Object)__54321780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54323700;

   return block;
};

Block __54321700;

void code__54321700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54321700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54321700 = block;
   block->owner = (Object)__54343860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54321700;

   return block;
};

Block __53631440;

Block __53631000;

Block __53629560;

void code__53629560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55013580(),_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53629560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53629560 = block;
   block->owner = (Object)__53631000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53629560;

   return block;
};

void code__53631000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55014100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53629560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55013180(),_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53631000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53631000 = block;
   block->owner = (Object)__53631440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53631000;

   return block;
};

Block __53626220;

Block __53625200;

void code__53625200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55012600(),_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53625200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53625200 = block;
   block->owner = (Object)__53626220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53625200;

   return block;
};

void code__53626220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55012800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53625200();
   }
      }
   }
}

Block make__53626220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53626220 = block;
   block->owner = (Object)__53631440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53626220;

   return block;
};

Block __53646580;

void code__53646580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55011760(),rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55011400(),lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55011340(),wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53646580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53646580 = block;
   block->owner = (Object)__53631440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53646580;

   return block;
};

Block __54258140;

Block __54256500;

Block __54255800;

Block __54295420;

Block __54293280;

void code__54293280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58481_75450760_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rv_53632180_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54293280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54293280 = block;
   block->owner = (Object)__54295420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54293280;

   return block;
};

Block __55341220;

void code__55341220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58482_75536240_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rv_53632180_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55341220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55341220 = block;
   block->owner = (Object)__54295420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55341220;

   return block;
};

void code__54295420() {
{
      Value value = _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__55033600())) {
    code__54293280();
         }
         else if (value2integer(value) == value2integer(make__55032960())) {
    code__55341220();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55032560(),rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
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
                  src0 = _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__55032060();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55031860();
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
                        src0 = _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55031100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__55030900();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54295420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54295420 = block;
   block->owner = (Object)__54255800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54295420;

   return block;
};

void code__54255800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55010500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54295420();
   }
      }
   }
}

Block make__54255800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54255800 = block;
   block->owner = (Object)__54256500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54255800;

   return block;
};

void code__54256500() {
 code__54255800();
}

Block make__54256500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54256500 = block;
   block->owner = (Object)__54258140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54256500;

   return block;
};

Block __56749480;

Block __56748640;

Block __56746700;

Block __56835420;

Block __56833520;

void code__56833520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,lv0_50527860_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55029160(),lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56833520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56833520 = block;
   block->owner = (Object)__56835420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56833520;

   return block;
};

void code__56835420() {
 code__56833520();
}

Block make__56835420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56835420 = block;
   block->owner = (Object)__56746700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56835420;

   return block;
};

Block __56746220;

void code__56746220() {
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
                  src0 = _58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__55028800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55028500();
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
                        src0 = _58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55026880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__55026640();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55026260(),_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56746220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56746220 = block;
   block->owner = (Object)__56746700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56746220;

   return block;
};

void code__56746700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55030020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56835420();
   }
   else {
  code__56746220();
   }
      }
   }
}

Block make__56746700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56746700 = block;
   block->owner = (Object)__56748640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56746700;

   return block;
};

void code__56748640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55030400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56746700();
   }
      }
   }
}

Block make__56748640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56748640 = block;
   block->owner = (Object)__56749480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56748640;

   return block;
};

void code__56749480() {
 code__56748640();
}

Block make__56749480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56749480 = block;
   block->owner = (Object)__54258140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56749480;

   return block;
};

Block __61995420;

Block __61994680;

Block __61994300;

void code__61994300() {
}

Block make__61994300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61994300 = block;
   block->owner = (Object)__61994680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61994300;

   return block;
};

Block __63426460;

void code__63426460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51282640_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55046380(),wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63426460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63426460 = block;
   block->owner = (Object)__61994680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63426460;

   return block;
};

void code__61994680() {
 code__61994300();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_51282640_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
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
                              src0 = lv0_50527860_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53632180_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55048360();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51282640_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__63426460();
}

Block make__61994680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61994680 = block;
   block->owner = (Object)__61995420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61994680;

   return block;
};

void code__61995420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55049760(),ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55049520(),run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__61994680();
}

Block make__61995420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61995420 = block;
   block->owner = (Object)__54258140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61995420;

   return block;
};

Block __63806020;

void code__63806020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55045920(),wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55045720(),lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55045560(),rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63806020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63806020 = block;
   block->owner = (Object)__54258140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63806020;

   return block;
};

void code__54258140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55010840(),run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54256500();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56749480();
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
               src0 = lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               src1 = rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61995420();
   }
      }
   }
   {
      Value cond = wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63806020();
   }
      }
   }
}

Block make__54258140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54258140 = block;
   block->owner = (Object)__53631440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54258140;

   return block;
};

Block __53643860;

void code__53643860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55045460(),av0_51282640_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53643860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53643860 = block;
   block->owner = (Object)__53631440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53643860;

   return block;
};

void code__53631440() {
 code__53631000();
 code__53626220();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55012500(),ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55012120(),run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53646580();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_73535340_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54258140();
   }
   else {
  code__53643860();
   }
      }
   }
}

Block make__53631440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53631440 = block;
   block->owner = (Object)__63803700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53631440;

   return block;
};

Block __65354920;

void code__65354920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_64766560_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__65354920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65354920 = block;
   block->owner = (Object)__66108920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65354920;

   return block;
};

Block __54357380;

void code__54357380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54357380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54357380 = block;
   block->owner = (Object)__54356220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54357380;

   return block;
};

Block __54356040;

void code__54356040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54356040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54356040 = block;
   block->owner = (Object)__54355320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54356040;

   return block;
};

Block __54354320;

void code__54354320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54354320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54354320 = block;
   block->owner = (Object)__54515080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54354320;

   return block;
};

Block __54514600;

void code__54514600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54514600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54514600 = block;
   block->owner = (Object)__54514020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54514600;

   return block;
};

Block __54512040;

void code__54512040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54512040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54512040 = block;
   block->owner = (Object)__54510160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54512040;

   return block;
};

Block __54509780;

void code__54509780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54509780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54509780 = block;
   block->owner = (Object)__54541780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54509780;

   return block;
};

Block __54535640;

void code__54535640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54535640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54535640 = block;
   block->owner = (Object)__54535040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54535640;

   return block;
};

Block __54534820;

void code__54534820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54534820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54534820 = block;
   block->owner = (Object)__54591360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54534820;

   return block;
};

Block __62143640;

Block __62143480;

void code__62143480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55079780(),_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62143480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62143480 = block;
   block->owner = (Object)__62143640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62143480;

   return block;
};

Block __62142220;

Block __62141900;

void code__62141900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,lv0_61737060_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55077660(),lvok0_62143800_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62141900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62141900 = block;
   block->owner = (Object)__62142220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62141900;

   return block;
};

Block __72179280;

Block __72178960;

Block __72178100;

void code__72178100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rv0_62143820_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55075520(),_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55074860(),rvok0_62143780_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__72178100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72178100 = block;
   block->owner = (Object)__72178960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72178100;

   return block;
};

Block __72178800;

void code__72178800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55131960(),_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55131860(),_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__72178800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72178800 = block;
   block->owner = (Object)__72178960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72178800;

   return block;
};

void code__72178960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55076400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__72178100();
   }
   else {
  code__72178800();
   }
      }
   }
}

Block make__72178960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72178960 = block;
   block->owner = (Object)__72179280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72178960;

   return block;
};

void code__72179280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58688_73805300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55077220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__72178960();
   }
      }
   }
}

Block make__72179280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __72179280 = block;
   block->owner = (Object)__62142220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__72179280;

   return block;
};

Block __73007200;

Block __73080400;

void code__73080400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_61737060_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      src1 = rv0_62143820_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__73080400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73080400 = block;
   block->owner = (Object)__73007200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73080400;

   return block;
};

void code__73007200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55130880(),run_62143760_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55130760(),ack__add_73535280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__73080400();
}

Block make__73007200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __73007200 = block;
   block->owner = (Object)__62142220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__73007200;

   return block;
};

void code__62142220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55078060(),run_62143760_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__62141900();
 code__72179280();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_62143800_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = rvok0_62143780_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__73007200();
   }
      }
   }
}

Block make__62142220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62142220 = block;
   block->owner = (Object)__62143640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62142220;

   return block;
};

Block __62142840;

void code__62142840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55129620(),lvok0_62143800_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55129500(),rvok0_62143780_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62142840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62142840 = block;
   block->owner = (Object)__62143640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62142840;

   return block;
};

void code__62143640() {
 code__62143480();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55079600(),ack__add_73535280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55078400(),run_62143760_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         src1 = run_62143760_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62142220();
   }
   else {
  code__62142840();
   }
      }
   }
}

Block make__62143640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62143640 = block;
   block->owner = (Object)__73535480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62143640;

   return block;
};

Value make__54925940() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54925680() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55045420() {
   static unsigned long long data[] = { 4294967287ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__55014100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55013580() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55013180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55012800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55012600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55012500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55012120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55011760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55011400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55011340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55010840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55010500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55033600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55032960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55032560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55032060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55031860() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55031100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55030900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55030400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55030020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55029160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55028800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55028500() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55026880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55026640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55026260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55049760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55049520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55048360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55046380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55045920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55045720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55045560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55045460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55079780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55079600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55078400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55078060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55077660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55077220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55076400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55075520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55074860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55131960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55131860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55130880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55130760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55129620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55129500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55147920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55147260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55146900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55145380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55144640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55144060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55143480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_840_53482960;

SignalI req__mac_73535340_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereq__mac_73535340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_73535340_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack_73535320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__mac_73535300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI ack__add_73535280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__add_73535280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_73535280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58647_73679960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58645_73679940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58646_73679860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58655_73758960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58687_73805320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58688_73805300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58688_73805300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58688_73805300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58685_73805280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58686_73805200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI _58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58700_73867960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__z0_74127280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI value__a0_74206440_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__a0_74206440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_74206440_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI flag__z0_74206420_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeflag__z0_74206420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_74206420_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SignalI ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__a0_74206400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_840_53482960;
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

SystemI counter_74241420;

SystemI makecounter_74241420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_74241420 = systemI;
   systemI->owner = (Object)layer1_58_840_53482960;
   systemI->name = "counter";
   systemI->system = counter_58_8420_74243480;

   return systemI;
};

SystemI func0_74194620;

SystemI makefunc0_74194620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_74194620 = systemI;
   systemI->owner = (Object)layer1_58_840_53482960;
   systemI->name = "func0";
   systemI->system = func0_58_8420_73820940;

   return systemI;
};

Scope channel__w0_58638_53482240;

SignalI trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_53434200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58638_53482240;
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

SignalI dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_54511260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58638_53482240;
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

SignalI abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_54510180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58638_53482240;
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

SignalI mem_62991340_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_62991340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_62991340_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58638_53482240;
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
         src0 = make__54925940();
         src1 = make__54925680();
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

Scope raddr_58639_53481540;

Scope makeraddr_58639_53481540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58639_53481540 = scope;
   scope->owner = (Object)channel__w0_58638_53482240;
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

Scope rinc_58644_53479840;

Scope makerinc_58644_53479840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58644_53479840 = scope;
   scope->owner = (Object)channel__w0_58638_53482240;
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

Scope rdec_58648_53478380;

Scope makerdec_58648_53478380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58648_53478380 = scope;
   scope->owner = (Object)channel__w0_58638_53482240;
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

Behavior __65653200;

Behavior make__65653200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65653200 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__64169700();

   return behavior;
}

Behavior __54259800;

Behavior make__54259800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54259800 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_54511260_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54260940();

   return behavior;
}

Behavior __54257860;

Behavior make__54257860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54257860 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58647_73679960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54259620();

   return behavior;
}

Behavior __54294700;

Behavior make__54294700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54294700 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__r_53434200_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54296100();

   return behavior;
}

Behavior __54292040;

Behavior make__54292040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54292040 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58645_73679940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54293720();

   return behavior;
}

Behavior __54289560;

Behavior make__54289560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54289560 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_54510180_channel__w0_58638_53482240_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54289960();

   return behavior;
}

Behavior __54288400;

Behavior make__54288400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54288400 = behavior;
   behavior->owner = (Object)channel__w0_58638_53482240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58646_73679860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54289320();

   return behavior;
}

Scope makechannel__w0_58638_53482240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58638_53482240 = scope;
   scope->owner = (Object)layer1_58_840_53482960;
   scope->name = "channel_w0:638";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53434200();
   scope->inners[1] = makedbus__r_54511260();
   scope->inners[2] = makeabus__r_54510180();
   scope->inners[3] = makemem_62991340();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58639_53481540();
   scope->scopes[1] = makerinc_58644_53479840();
   scope->scopes[2] = makerdec_58648_53478380();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65653200();
   scope->behaviors[1] = make__54259800();
   scope->behaviors[2] = make__54257860();
   scope->behaviors[3] = make__54294700();
   scope->behaviors[4] = make__54292040();
   scope->behaviors[5] = make__54289560();
   scope->behaviors[6] = make__54288400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58653_65653080;

SignalI reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__0_66172220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__accum_58653_65653080;
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

Scope anum_58654_65652240;

Scope makeanum_58654_65652240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58654_65652240 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
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

Scope raddr_58656_65651640;

Scope makeraddr_58656_65651640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58656_65651640 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
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

Scope waddr_58659_65650840;

Scope makewaddr_58659_65650840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58659_65650840 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
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

Scope rinc_58662_65624980;

SignalI abus__r_65621000_rinc_58662_65624980_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_65621000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65621000_rinc_58662_65624980_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58662_65624980;
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

Scope makerinc_58662_65624980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58662_65624980 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
   scope->name = "rinc:662";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65621000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58666_65620240;

SignalI abus__w_65618580_winc_58666_65620240_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_65618580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65618580_winc_58666_65620240_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58666_65620240;
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

Scope makewinc_58666_65620240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58666_65620240 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
   scope->name = "winc:666";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65618580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58670_65618440;

SignalI abus__r_65576780_rdec_58670_65618440_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_65576780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65576780_rdec_58670_65618440_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58670_65618440;
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

Scope makerdec_58670_65618440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58670_65618440 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
   scope->name = "rdec:670";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65576780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58674_65576640;

SignalI abus__w_65575960_wdec_58674_65576640_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_65575960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65575960_wdec_58674_65576640_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58674_65576640;
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

Scope makewdec_58674_65576640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58674_65576640 = scope;
   scope->owner = (Object)channel__accum_58653_65653080;
   scope->name = "wdec:674";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65575960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54321780;

Behavior make__54321780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54321780 = behavior;
   behavior->owner = (Object)channel__accum_58653_65653080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_66172220_channel__accum_58653_65653080_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54323700();

   return behavior;
}

Behavior __54343860;

Behavior make__54343860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54343860 = behavior;
   behavior->owner = (Object)channel__accum_58653_65653080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58655_73758960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54321700();

   return behavior;
}

Scope makechannel__accum_58653_65653080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58653_65653080 = scope;
   scope->owner = (Object)layer1_58_840_53482960;
   scope->name = "channel_accum:653";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_66172220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58654_65652240();
   scope->scopes[1] = makeraddr_58656_65651640();
   scope->scopes[2] = makewaddr_58659_65650840();
   scope->scopes[3] = makerinc_58662_65624980();
   scope->scopes[4] = makewinc_58666_65620240();
   scope->scopes[5] = makerdec_58670_65618440();
   scope->scopes[6] = makewdec_58674_65576640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54321780();
   scope->behaviors[1] = make__54343860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58678_48913860;

SignalI lv0_50527860_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelv0_50527860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50527860_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

SignalI av0_51282640_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeav0_51282640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51282640_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

SignalI rv_53632180_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerv_53632180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53632180_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

SignalI lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelvok0_53632160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53632160_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

SignalI rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makervok_53631960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53631960_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

SignalI wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makewok0_53631920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_53631920_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

SignalI run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerun_53631660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53631660_mac__n1_58678_48913860_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58678_48913860;
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

Behavior __63803700;

Behavior make__63803700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63803700 = behavior;
   behavior->owner = (Object)mac__n1_58678_48913860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__53631440();

   return behavior;
}

Scope makemac__n1_58678_48913860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58678_48913860 = scope;
   scope->owner = (Object)layer1_58_840_53482960;
   scope->name = "mac_n1:678";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50527860();
   scope->inners[1] = makeav0_51282640();
   scope->inners[2] = makerv_53632180();
   scope->inners[3] = makelvok0_53632160();
   scope->inners[4] = makervok_53631960();
   scope->inners[5] = makewok0_53631920();
   scope->inners[6] = makerun_53631660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63803700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58683_63803580;

SignalI trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_63800460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58683_63803580;
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

SignalI dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_64175140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58683_63803580;
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

SignalI abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_64174980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58683_63803580;
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

SignalI mem_64766560_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_64766560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_64766560_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58683_63803580;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__55045420(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58684_63803160;

Scope makeraddr_58684_63803160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58684_63803160 = scope;
   scope->owner = (Object)channel__b0_58683_63803580;
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

Scope rinc_58689_63802220;

Scope makerinc_58689_63802220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58689_63802220 = scope;
   scope->owner = (Object)channel__b0_58683_63803580;
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

Scope rdec_58693_63801420;

Scope makerdec_58693_63801420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58693_63801420 = scope;
   scope->owner = (Object)channel__b0_58683_63803580;
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

Behavior __66108920;

Behavior make__66108920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66108920 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__65354920();

   return behavior;
}

Behavior __54356220;

Behavior make__54356220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54356220 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_64175140_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54357380();

   return behavior;
}

Behavior __54355320;

Behavior make__54355320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54355320 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58687_73805320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54356040();

   return behavior;
}

Behavior __54515080;

Behavior make__54515080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54515080 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__r_63800460_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54354320();

   return behavior;
}

Behavior __54514020;

Behavior make__54514020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54514020 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58685_73805280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54514600();

   return behavior;
}

Behavior __54510160;

Behavior make__54510160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54510160 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_64174980_channel__b0_58683_63803580_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54512040();

   return behavior;
}

Behavior __54541780;

Behavior make__54541780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54541780 = behavior;
   behavior->owner = (Object)channel__b0_58683_63803580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58686_73805200_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54509780();

   return behavior;
}

Scope makechannel__b0_58683_63803580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58683_63803580 = scope;
   scope->owner = (Object)layer1_58_840_53482960;
   scope->name = "channel_b0:683";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_63800460();
   scope->inners[1] = makedbus__r_64175140();
   scope->inners[2] = makeabus__r_64174980();
   scope->inners[3] = makemem_64766560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58684_63803160();
   scope->scopes[1] = makerinc_58689_63802220();
   scope->scopes[2] = makerdec_58693_63801420();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66108920();
   scope->behaviors[1] = make__54356220();
   scope->behaviors[2] = make__54355320();
   scope->behaviors[3] = make__54515080();
   scope->behaviors[4] = make__54514020();
   scope->behaviors[5] = make__54510160();
   scope->behaviors[6] = make__54541780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58698_66108560;

SignalI reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__0_66338620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__z_58698_66108560;
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

Scope anum_58699_66107580;

Scope makeanum_58699_66107580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58699_66107580 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
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

Scope raddr_58701_66107040;

Scope makeraddr_58701_66107040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58701_66107040 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
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

Scope waddr_58704_66106220;

Scope makewaddr_58704_66106220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58704_66106220 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
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

Scope rinc_58707_66105140;

SignalI abus__r_66104080_rinc_58707_66105140_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_66104080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66104080_rinc_58707_66105140_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58707_66105140;
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

Scope makerinc_58707_66105140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58707_66105140 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
   scope->name = "rinc:707";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_66104080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58710_66103940;

SignalI abus__w_66103320_winc_58710_66103940_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_66103320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_66103320_winc_58710_66103940_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58710_66103940;
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

Scope makewinc_58710_66103940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58710_66103940 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
   scope->name = "winc:710";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_66103320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58713_66103140;

SignalI abus__r_66102480_rdec_58713_66103140_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_66102480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66102480_rdec_58713_66103140_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58713_66103140;
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

Scope makerdec_58713_66103140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58713_66103140 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
   scope->name = "rdec:713";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_66102480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58717_66102280;

SignalI abus__w_66101420_wdec_58717_66102280_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_66101420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_66101420_wdec_58717_66102280_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58717_66102280;
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

Scope makewdec_58717_66102280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58717_66102280 = scope;
   scope->owner = (Object)channel__z_58698_66108560;
   scope->name = "wdec:717";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_66101420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54535040;

Behavior make__54535040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54535040 = behavior;
   behavior->owner = (Object)channel__z_58698_66108560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_66338620_channel__z_58698_66108560_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54535640();

   return behavior;
}

Behavior __54591360;

Behavior make__54591360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54591360 = behavior;
   behavior->owner = (Object)channel__z_58698_66108560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58700_73867960_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54534820();

   return behavior;
}

Scope makechannel__z_58698_66108560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58698_66108560 = scope;
   scope->owner = (Object)layer1_58_840_53482960;
   scope->name = "channel_z:698";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_66338620();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58699_66107580();
   scope->scopes[1] = makeraddr_58701_66107040();
   scope->scopes[2] = makewaddr_58704_66106220();
   scope->scopes[3] = makerinc_58707_66105140();
   scope->scopes[4] = makewinc_58710_66103940();
   scope->scopes[5] = makerdec_58713_66103140();
   scope->scopes[6] = makewdec_58717_66102280();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54535040();
   scope->behaviors[1] = make__54591360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58721_56046720;

SignalI lv0_61737060_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelv0_61737060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_61737060_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58721_56046720;
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

SignalI rv0_62143820_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerv0_62143820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_62143820_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58721_56046720;
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

SignalI lvok0_62143800_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelvok0_62143800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_62143800_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58721_56046720;
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

SignalI rvok0_62143780_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makervok0_62143780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_62143780_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58721_56046720;
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

SignalI run_62143760_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerun_62143760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_62143760_add__n_58721_56046720_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58721_56046720;
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

Behavior __73535480;

Behavior make__73535480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __73535480 = behavior;
   behavior->owner = (Object)add__n_58721_56046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__62143640();

   return behavior;
}

Scope makeadd__n_58721_56046720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58721_56046720 = scope;
   scope->owner = (Object)layer1_58_840_53482960;
   scope->name = "add_n:721";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_61737060();
   scope->inners[1] = makerv0_62143820();
   scope->inners[2] = makelvok0_62143800();
   scope->inners[3] = makervok0_62143780();
   scope->inners[4] = makerun_62143760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__73535480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __74726380;

Behavior make__74726380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74726380 = behavior;
   behavior->owner = (Object)layer1_58_840_53482960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__74703080();

   return behavior;
}

Behavior __74985440;

Behavior make__74985440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __74985440 = behavior;
   behavior->owner = (Object)layer1_58_840_53482960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__74726240();

   return behavior;
}

Behavior __75351220;

Behavior make__75351220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75351220 = behavior;
   behavior->owner = (Object)layer1_58_840_53482960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__74985300();

   return behavior;
}

Behavior __54073980;

Behavior make__54073980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54073980 = behavior;
   behavior->owner = (Object)layer1_58_840_53482960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__mac_73535300_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54074500();

   return behavior;
}

Behavior __54126400;

Behavior make__54126400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54126400 = behavior;
   behavior->owner = (Object)layer1_58_840_53482960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack_73535320_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[value__z0_74127280_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__a0_74206400_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__53978260();

   return behavior;
}

Behavior __54125960;

Behavior make__54125960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54125960 = behavior;
   behavior->owner = (Object)layer1_58_840_53482960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__mac_74241560_counter_58_8420_74243480_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[a_74194800_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__54075300();

   return behavior;
}

Scope makelayer1_58_840_53482960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_840_53482960 = scope;
   scope->owner = (Object)layer1_58_8400_75350880;
   scope->name = "layer1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_74241420();
   scope->systemIs[1] = makefunc0_74194620();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_73535340();
   scope->inners[1] = makeack_73535320();
   scope->inners[2] = makeack__mac_73535300();
   scope->inners[3] = makeack__add_73535280();
   scope->inners[4] = make_58647_73679960();
   scope->inners[5] = make_58645_73679940();
   scope->inners[6] = make_58646_73679860();
   scope->inners[7] = make_58655_73758960();
   scope->inners[8] = make_58687_73805320();
   scope->inners[9] = make_58688_73805300();
   scope->inners[10] = make_58685_73805280();
   scope->inners[11] = make_58686_73805200();
   scope->inners[12] = make_58700_73867960();
   scope->inners[13] = makevalue__z0_74127280();
   scope->inners[14] = makevalue__a0_74206440();
   scope->inners[15] = makeflag__z0_74206420();
   scope->inners[16] = makeack__a0_74206400();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58638_53482240();
   scope->scopes[1] = makechannel__accum_58653_65653080();
   scope->scopes[2] = makemac__n1_58678_48913860();
   scope->scopes[3] = makechannel__b0_58683_63803580();
   scope->scopes[4] = makechannel__z_58698_66108560();
   scope->scopes[5] = makeadd__n_58721_56046720();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__74726380();
   scope->behaviors[1] = make__74985440();
   scope->behaviors[2] = make__75351220();
   scope->behaviors[3] = make__54073980();
   scope->behaviors[4] = make__54126400();
   scope->behaviors[5] = make__54125960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_8400_75350880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_8400_75350880 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T00";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_75373460();
   systemT->inputs[1] = makerst_75373440();
   systemT->inputs[2] = makereq_75373420();
   systemT->inputs[3] = make_58481_75450760();
   systemT->inputs[4] = make_58482_75536240();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_75536200();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58483_75536100();
   systemT->inouts[1] = make_58447_75613400();

   systemT->scope = makelayer1_58_840_53482960();

   return systemT;
}