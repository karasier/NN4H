#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_58630860;

SignalI clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeclk_58653140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerst_58653120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makefill_58653100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereq_58653080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI _5815_58712560_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5815_58712560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_58712560_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI ack__layer_58712520_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__layer_58712520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_58712520_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI _5813_58712500_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5813_58712500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_58712500_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI _5814_58712400_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5814_58712400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_58712400_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI _5855_58829200_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5855_58829200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_58829200_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

SignalI _5856_58946060_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5856_58946060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_58946060_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_840_58630860;
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

Block __51258260;

Block __51257580;

void code__51257580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56905440(),ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56905380(),ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56905320(),ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51257580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51257580 = block;
   block->owner = (Object)__51258260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51257580;

   return block;
};

void code__51258260() {
   {
      Value cond = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51257580();
   }
      }
   }
}

Block make__51258260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51258260 = block;
   block->owner = (Object)__51280360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51258260;

   return block;
};

Block __51280160;

Block __51278380;

Block __51278200;

void code__51278200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56905120(),flag__z0_46088540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51278200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51278200 = block;
   block->owner = (Object)__51278380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51278200;

   return block;
};

Block __51562040;

void code__51562040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56904880(),flag__z1_46088520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51562040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51562040 = block;
   block->owner = (Object)__51278380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51562040;

   return block;
};

void code__51278380() {
 code__51278200();
 code__51562040();
}

Block make__51278380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51278380 = block;
   block->owner = (Object)__51280160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51278380;

   return block;
};

Block __51279900;

void code__51279900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56904760(),flag__z0_46088540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56904680(),flag__z1_46088520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51279900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51279900 = block;
   block->owner = (Object)__51280160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51279900;

   return block;
};

void code__51280160() {
   {
      Value cond = ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51278380();
   }
   else {
  code__51279900();
   }
      }
   }
}

Block make__51280160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51280160 = block;
   block->owner = (Object)__56119900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51280160;

   return block;
};

Block __56119780;

Block __56119540;

void code__56119540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56904480(),ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56904400(),ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56119540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56119540 = block;
   block->owner = (Object)__56119780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56119540;

   return block;
};

Block __56118660;

Block __56118500;

void code__56118500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_51678080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5855_58829200_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56903920(),ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56118500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56118500 = block;
   block->owner = (Object)__56118660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56118500;

   return block;
};

Block __56745160;

void code__56745160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_46088600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5856_58946060_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56903660(),ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56745160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56745160 = block;
   block->owner = (Object)__56118660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56745160;

   return block;
};

void code__56118660() {
 code__56118500();
 code__56745160();
}

Block make__56118660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56118660 = block;
   block->owner = (Object)__56119780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56118660;

   return block;
};

void code__56119780() {
   {
      Value cond = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56119540();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_46088540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = flag__z1_46088520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__56118660();
   }
      }
   }
}

Block make__56119780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56119780 = block;
   block->owner = (Object)__56920940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56119780;

   return block;
};

Block __56920820;

Block __56920620;

Block __56920140;

void code__56920140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56903300(),_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56920140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56920140 = block;
   block->owner = (Object)__56920620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56920140;

   return block;
};

void code__56920620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56903380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56920140();
   }
      }
   }
}

Block make__56920620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56920620 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56920620;

   return block;
};

Block __56919680;

Block __56919360;

void code__56919360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56903140(),_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56919360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56919360 = block;
   block->owner = (Object)__56919680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56919360;

   return block;
};

void code__56919680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56903220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56919360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56903080(),_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56919680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56919680 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56919680;

   return block;
};

Block __56918740;

Block __56918320;

void code__56918320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902920(),_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56918320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56918320 = block;
   block->owner = (Object)__56918740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56918320;

   return block;
};

void code__56918740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56903000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56918320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902860(),_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56918740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56918740 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56918740;

   return block;
};

Block __56941900;

void code__56941900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902760(),address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902660(),ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902580(),address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902500(),ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902340(),address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56902180(),ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56941900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56941900 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56941900;

   return block;
};

Block __56940180;

Block __56939880;

Block __56939720;

Block __56939400;

void code__56939400() {
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
                  src0 = _58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56901660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56925860(),_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
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
            ref = w0_49977700_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56939400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56939400 = block;
   block->owner = (Object)__56939720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56939400;

   return block;
};

void code__56939720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56901840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56939400();
   }
      }
   }
}

Block make__56939720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56939720 = block;
   block->owner = (Object)__56939880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56939720;

   return block;
};

void code__56939880() {
 code__56939720();
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
                  src0 = address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56925500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56939880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56939880 = block;
   block->owner = (Object)__56940180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56939880;

   return block;
};

Block __57180200;

Block __57343820;

Block __57343420;

void code__57343420() {
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
                  src0 = _58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56925020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56924860(),_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
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
            ref = w1_50998300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57343420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57343420 = block;
   block->owner = (Object)__57343820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57343420;

   return block;
};

void code__57343820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56925200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57343420();
   }
      }
   }
}

Block make__57343820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57343820 = block;
   block->owner = (Object)__57180200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57343820;

   return block;
};

void code__57180200() {
 code__57343820();
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
                  src0 = address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56924380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57180200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57180200 = block;
   block->owner = (Object)__56940180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57180200;

   return block;
};

Block __57937860;

Block __57937700;

Block __57937360;

Block __57936640;

void code__57936640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_51444540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57936640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57936640 = block;
   block->owner = (Object)__57937360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57936640;

   return block;
};

Block __58284920;

void code__58284920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_51444540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58284920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58284920 = block;
   block->owner = (Object)__57937360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58284920;

   return block;
};

void code__57937360() {
{
      Value value = _58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__56924000())) {
    code__57936640();
         }
         else if (value2integer(value) == value2integer(make__56923780())) {
    code__58284920();
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
                  src0 = _58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56923080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57937360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57937360 = block;
   block->owner = (Object)__57937700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57937360;

   return block;
};

void code__57937700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56924140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57937360();
   }
      }
   }
}

Block make__57937700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57937700 = block;
   block->owner = (Object)__57937860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57937700;

   return block;
};

void code__57937860() {
 code__57937700();
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
                  src0 = address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56922920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57937860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57937860 = block;
   block->owner = (Object)__56940180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57937860;

   return block;
};

void code__56940180() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56939880();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57180200();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57937860();
   }
      }
   }
}

Block make__56940180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56940180 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56940180;

   return block;
};

Block __58633460;

void code__58633460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56922640(),ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58633460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58633460 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58633460;

   return block;
};

Block __58632840;

void code__58632840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56922320(),ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58632840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58632840 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58632840;

   return block;
};

Block __58631860;

void code__58631860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56922060(),ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58631860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58631860 = block;
   block->owner = (Object)__56920820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58631860;

   return block;
};

void code__56920820() {
 code__56920620();
 code__56919680();
 code__56918740();
   {
      Value cond = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56941900();
   }
      }
   }
   {
      Value cond = fill__channel_50665420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56940180();
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
               src0 = address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56922740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58633460();
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
               src0 = address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56922460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58632840();
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
               src0 = address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56922200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58631860();
   }
      }
   }
}

Block make__56920820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56920820 = block;
   block->owner = (Object)__58631180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56920820;

   return block;
};

Block __51747040;

void code__51747040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_50665520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51747040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51747040 = block;
   block->owner = (Object)__51746560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51747040;

   return block;
};

Block __55558620;

void code__55558620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
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
                        src0 = ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                        src1 = ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                        dst = and_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_50665420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__55558620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55558620 = block;
   block->owner = (Object)__55558180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55558620;

   return block;
};

Block __51747540;

void code__51747540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,clk_51659840_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,ack_51659820_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rst_51659800_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,z__value_49203340_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,z__value_48119060_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_58712520_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51747540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51747540 = block;
   block->owner = (Object)__56106660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51747540;

   return block;
};

Block __51747420;

void code__51747420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,value__a0_51678080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,value__a1_46088600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51747420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51747420 = block;
   block->owner = (Object)__56106500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51747420;

   return block;
};

Block __51341500;

Block __51562100;

void code__51562100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,make_ref_rangeS(mem_51083540_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340,value2integer(abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value),value2integer(abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51562100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51562100 = block;
   block->owner = (Object)__51341500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51562100;

   return block;
};

void code__51341500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51083540_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51562100();
   }
      }
   }
}

Block make__51341500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51341500 = block;
   block->owner = (Object)__45894740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51341500;

   return block;
};

Block __56105660;

void code__56105660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56105660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56105660 = block;
   block->owner = (Object)__56105400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56105660;

   return block;
};

Block __56105320;

void code__56105320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56105320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56105320 = block;
   block->owner = (Object)__56104980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56105320;

   return block;
};

Block __56104440;

void code__56104440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56104440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56104440 = block;
   block->owner = (Object)__56104160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56104440;

   return block;
};

Block __56104120;

void code__56104120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56104120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56104120 = block;
   block->owner = (Object)__56103960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56104120;

   return block;
};

Block __56103600;

void code__56103600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56103600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56103600 = block;
   block->owner = (Object)__56103400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56103600;

   return block;
};

Block __56103360;

void code__56103360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56103360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56103360 = block;
   block->owner = (Object)__56103160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56103360;

   return block;
};

Block __56102620;

void code__56102620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56102620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56102620 = block;
   block->owner = (Object)__56102260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56102620;

   return block;
};

Block __56102200;

void code__56102200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56102200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56102200 = block;
   block->owner = (Object)__56101880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56102200;

   return block;
};

Block __56101360;

void code__56101360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56101360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56101360 = block;
   block->owner = (Object)__56101140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56101360;

   return block;
};

Block __56101100;

void code__56101100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56101100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56101100 = block;
   block->owner = (Object)__56100940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56101100;

   return block;
};

Block __56100500;

void code__56100500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56100500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56100500 = block;
   block->owner = (Object)__56100280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56100500;

   return block;
};

Block __56100240;

void code__56100240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56100240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56100240 = block;
   block->owner = (Object)__56100040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56100240;

   return block;
};

Block __49674380;

Block __50153160;

void code__50153160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,make_ref_rangeS(mem_48296480_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340,value2integer(abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value),value2integer(abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50153160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50153160 = block;
   block->owner = (Object)__49674380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50153160;

   return block;
};

void code__49674380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48296480_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50153160();
   }
      }
   }
}

Block make__49674380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49674380 = block;
   block->owner = (Object)__50741560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49674380;

   return block;
};

Block __56122300;

void code__56122300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56122300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56122300 = block;
   block->owner = (Object)__56122120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56122300;

   return block;
};

Block __56122080;

void code__56122080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56122080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56122080 = block;
   block->owner = (Object)__56121880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56122080;

   return block;
};

Block __56121260;

void code__56121260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56121260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56121260 = block;
   block->owner = (Object)__56120940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56121260;

   return block;
};

Block __56120900;

void code__56120900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56120900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56120900 = block;
   block->owner = (Object)__56120640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56120900;

   return block;
};

Block __56119860;

void code__56119860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56119860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56119860 = block;
   block->owner = (Object)__56119640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56119860;

   return block;
};

Block __56119460;

void code__56119460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56119460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56119460 = block;
   block->owner = (Object)__56119080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56119460;

   return block;
};

Block __56118160;

void code__56118160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56118160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56118160 = block;
   block->owner = (Object)__56117940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56118160;

   return block;
};

Block __56117840;

void code__56117840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56117840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56117840 = block;
   block->owner = (Object)__56117600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56117840;

   return block;
};

Block __56117120;

void code__56117120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56117120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56117120 = block;
   block->owner = (Object)__56116860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56117120;

   return block;
};

Block __56116800;

void code__56116800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56116800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56116800 = block;
   block->owner = (Object)__56116580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56116800;

   return block;
};

Block __56116160;

void code__56116160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56116160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56116160 = block;
   block->owner = (Object)__56115820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56116160;

   return block;
};

Block __56115780;

void code__56115780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56115780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56115780 = block;
   block->owner = (Object)__56483180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56115780;

   return block;
};

Block __56479580;

void code__56479580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56479580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56479580 = block;
   block->owner = (Object)__56479380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56479580;

   return block;
};

Block __56479260;

void code__56479260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56479260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56479260 = block;
   block->owner = (Object)__56479000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56479260;

   return block;
};

Block __56478560;

void code__56478560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56478560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56478560 = block;
   block->owner = (Object)__56478240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56478560;

   return block;
};

Block __56478160;

void code__56478160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56478160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56478160 = block;
   block->owner = (Object)__56477980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56478160;

   return block;
};

Block __51631480;

Block __51631260;

Block __51630940;

void code__51630940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56857700(),_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51630940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51630940 = block;
   block->owner = (Object)__51631260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51630940;

   return block;
};

void code__51631260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56857920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51630940();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56857620(),_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51631260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51631260 = block;
   block->owner = (Object)__51631480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51631260;

   return block;
};

Block __51630300;

Block __51629760;

void code__51629760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56857280(),_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51629760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51629760 = block;
   block->owner = (Object)__51630300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51629760;

   return block;
};

void code__51630300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56857460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51629760();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56857140(),_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51630300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51630300 = block;
   block->owner = (Object)__51631480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51630300;

   return block;
};

Block __51629040;

Block __51628720;

void code__51628720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856660(),_5814_58712400_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51628720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628720 = block;
   block->owner = (Object)__51629040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628720;

   return block;
};

void code__51629040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56857000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51628720();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856600(),_5813_58712500_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51629040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51629040 = block;
   block->owner = (Object)__51631480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51629040;

   return block;
};

Block __51627600;

void code__51627600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856300(),rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856240(),lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856180(),wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856120(),lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856060(),wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51627600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51627600 = block;
   block->owner = (Object)__51631480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51627600;

   return block;
};

Block __46414700;

Block __46413920;

Block __46413640;

Block __46413200;

Block __46358700;

Block __46488380;

void code__46488380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5815_58712560_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rv_51631760_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56855240(),rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__46488380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46488380 = block;
   block->owner = (Object)__46358700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46488380;

   return block;
};

void code__46358700() {
 code__46488380();
}

Block make__46358700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46358700 = block;
   block->owner = (Object)__46413200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46358700;

   return block;
};

Block __46412880;

void code__46412880() {
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
                  src0 = _5814_58712400_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56855080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_58712400_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56854960(),_5813_58712500_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__46412880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46412880 = block;
   block->owner = (Object)__46413200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46412880;

   return block;
};

void code__46413200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_58712500_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56855540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46358700();
   }
   else {
  code__46412880();
   }
      }
   }
}

Block make__46413200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46413200 = block;
   block->owner = (Object)__46413640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46413200;

   return block;
};

void code__46413640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56855700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46413200();
   }
      }
   }
}

Block make__46413640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46413640 = block;
   block->owner = (Object)__46413920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46413640;

   return block;
};

void code__46413920() {
 code__46413640();
}

Block make__46413920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46413920 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46413920;

   return block;
};

Block __48214380;

Block __48214200;

Block __48213580;

Block __48234400;

Block __48234200;

void code__48234200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,lv0_51325360_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56854180(),lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__48234200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48234200 = block;
   block->owner = (Object)__48234400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48234200;

   return block;
};

void code__48234400() {
 code__48234200();
}

Block make__48234400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48234400 = block;
   block->owner = (Object)__48213580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48234400;

   return block;
};

Block __48212300;

void code__48212300() {
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
                  src0 = _5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56854060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56853920(),_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__48212300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48212300 = block;
   block->owner = (Object)__48213580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48212300;

   return block;
};

void code__48213580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56854400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48234400();
   }
   else {
  code__48212300();
   }
      }
   }
}

Block make__48213580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48213580 = block;
   block->owner = (Object)__48214200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48213580;

   return block;
};

void code__48214200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56854680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48213580();
   }
      }
   }
}

Block make__48214200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48214200 = block;
   block->owner = (Object)__48214380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48214200;

   return block;
};

void code__48214380() {
 code__48214200();
}

Block make__48214380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48214380 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48214380;

   return block;
};

Block __49437220;

Block __49436640;

Block __49436480;

void code__49436480() {
}

Block make__49436480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49436480 = block;
   block->owner = (Object)__49436640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49436480;

   return block;
};

Block __50137020;

void code__50137020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51459320_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56852720(),wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__50137020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50137020 = block;
   block->owner = (Object)__49436640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50137020;

   return block;
};

void code__49436640() {
 code__49436480();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_51459320_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
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
                              src0 = lv0_51325360_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51631760_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56852980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51459320_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__50137020();
}

Block make__49436640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49436640 = block;
   block->owner = (Object)__49437220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49436640;

   return block;
};

void code__49437220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56853580(),ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56853520(),run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__49436640();
}

Block make__49437220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49437220 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49437220;

   return block;
};

Block __50698120;

void code__50698120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56893320(),wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56893220(),wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56893080(),lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56892960(),lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56892900(),rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__50698120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50698120 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50698120;

   return block;
};

Block __50696740;

Block __50696580;

Block __50696260;

Block __50694940;

Block __50694740;

void code__50694740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,lv1_51392800_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56892360(),lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__50694740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50694740 = block;
   block->owner = (Object)__50694940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50694740;

   return block;
};

void code__50694940() {
 code__50694740();
}

Block make__50694940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50694940 = block;
   block->owner = (Object)__50696260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50694940;

   return block;
};

Block __50696080;

void code__50696080() {
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
                  src0 = _58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56892180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56892020(),_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__50696080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50696080 = block;
   block->owner = (Object)__50696260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50696080;

   return block;
};

void code__50696260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56892580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50694940();
   }
   else {
  code__50696080();
   }
      }
   }
}

Block make__50696260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50696260 = block;
   block->owner = (Object)__50696580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50696260;

   return block;
};

void code__50696580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56892700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50696260();
   }
      }
   }
}

Block make__50696580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50696580 = block;
   block->owner = (Object)__50696740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50696580;

   return block;
};

void code__50696740() {
 code__50696580();
}

Block make__50696740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50696740 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50696740;

   return block;
};

Block __50888040;

Block __50887440;

Block __50887240;

void code__50887240() {
}

Block make__50887240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50887240 = block;
   block->owner = (Object)__50887440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50887240;

   return block;
};

Block __51314180;

void code__51314180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_51565820_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890840(),wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51314180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51314180 = block;
   block->owner = (Object)__50887440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51314180;

   return block;
};

void code__50887440() {
 code__50887240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_51565820_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
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
                              src0 = lv1_51392800_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51631760_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56891140();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_51565820_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__51314180();
}

Block make__50887440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50887440 = block;
   block->owner = (Object)__50888040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50887440;

   return block;
};

void code__50888040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56891740(),ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56891660(),run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__50887440();
}

Block make__50888040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50888040 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50888040;

   return block;
};

Block __51445300;

void code__51445300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890520(),wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890460(),wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890380(),lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890260(),lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890180(),rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51445300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51445300 = block;
   block->owner = (Object)__46414700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51445300;

   return block;
};

void code__46414700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56855900(),run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46413920();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48214380();
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
               src0 = lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               src1 = rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49437220();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50698120();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50696740();
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
               src0 = lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               src1 = rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50888040();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51445300();
   }
      }
   }
}

Block make__46414700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46414700 = block;
   block->owner = (Object)__51631480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46414700;

   return block;
};

Block __51626460;

void code__51626460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890120(),av0_51459320_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56890040(),av1_51565820_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51626460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51626460 = block;
   block->owner = (Object)__51631480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51626460;

   return block;
};

void code__51631480() {
 code__51631260();
 code__51630300();
 code__51629040();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856520(),ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56856420(),run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51627600();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_50665520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46414700();
   }
   else {
  code__51626460();
   }
      }
   }
}

Block make__51631480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51631480 = block;
   block->owner = (Object)__51443760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51631480;

   return block;
};

Block __56532620;

void code__56532620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56532620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56532620 = block;
   block->owner = (Object)__56532300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56532620;

   return block;
};

Block __56532260;

void code__56532260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56532260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56532260 = block;
   block->owner = (Object)__56532020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56532260;

   return block;
};

Block __56531500;

void code__56531500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56531500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56531500 = block;
   block->owner = (Object)__56531280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56531500;

   return block;
};

Block __56531240;

void code__56531240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56531240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56531240 = block;
   block->owner = (Object)__56531080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56531240;

   return block;
};

Block __56530740;

void code__56530740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56530740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56530740 = block;
   block->owner = (Object)__56530500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56530740;

   return block;
};

Block __56530420;

void code__56530420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56530420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56530420 = block;
   block->owner = (Object)__56530140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56530420;

   return block;
};

Block __56529640;

void code__56529640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56529640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56529640 = block;
   block->owner = (Object)__56529320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56529640;

   return block;
};

Block __56529280;

void code__56529280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56529280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56529280 = block;
   block->owner = (Object)__56529060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56529280;

   return block;
};

Block __56526340;

void code__56526340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56526340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56526340 = block;
   block->owner = (Object)__56526080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56526340;

   return block;
};

Block __56526040;

void code__56526040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56526040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56526040 = block;
   block->owner = (Object)__56525620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56526040;

   return block;
};

Block __56564880;

void code__56564880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56564880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56564880 = block;
   block->owner = (Object)__56564680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56564880;

   return block;
};

Block __56564640;

void code__56564640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56564640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56564640 = block;
   block->owner = (Object)__56564380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56564640;

   return block;
};

Block __56563880;

void code__56563880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56563880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56563880 = block;
   block->owner = (Object)__56563620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56563880;

   return block;
};

Block __56563580;

void code__56563580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56563580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56563580 = block;
   block->owner = (Object)__56563320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56563580;

   return block;
};

Block __51226380;

Block __51249040;

Block __51248540;

void code__51248540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,lv0_50966900_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56887060(),lvok0_51226580_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51248540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51248540 = block;
   block->owner = (Object)__51249040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51248540;

   return block;
};

Block __51375720;

void code__51375720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rv0_51131940_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56886880(),rvok0_51226540_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51375720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51375720 = block;
   block->owner = (Object)__51249040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51375720;

   return block;
};

Block __51561340;

Block __51560820;

void code__51560820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_50966900_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = rv0_51131940_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51560820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51560820 = block;
   block->owner = (Object)__51561340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51560820;

   return block;
};

void code__51561340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56886500(),run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56886400(),ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__51560820();
}

Block make__51561340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51561340 = block;
   block->owner = (Object)__51249040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51561340;

   return block;
};

Block __48145060;

void code__48145060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,lv1_51068180_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56909780(),lvok1_51226560_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__48145060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48145060 = block;
   block->owner = (Object)__51249040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48145060;

   return block;
};

Block __48709480;

void code__48709480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rv1_51226600_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56909620(),rvok1_51226520_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__48709480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48709480 = block;
   block->owner = (Object)__51249040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48709480;

   return block;
};

Block __49659380;

Block __49658700;

void code__49658700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_51068180_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = rv1_51226600_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__49658700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49658700 = block;
   block->owner = (Object)__49659380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49658700;

   return block;
};

void code__49659380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56909240(),run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56909180(),ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__49658700();
}

Block make__49659380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49659380 = block;
   block->owner = (Object)__51249040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49659380;

   return block;
};

void code__51249040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56887240(),run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__51248540();
 code__51375720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51226580_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = rvok0_51226540_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51561340();
   }
      }
   }
 code__48145060();
 code__48709480();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_51226560_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = rvok1_51226520_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49659380();
   }
      }
   }
}

Block make__51249040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51249040 = block;
   block->owner = (Object)__51226380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51249040;

   return block;
};

Block __51225800;

void code__51225800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56908840(),lvok0_51226580_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56908780(),rvok0_51226540_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56908680(),lvok1_51226560_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56908580(),rvok1_51226520_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51225800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51225800 = block;
   block->owner = (Object)__51226380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51225800;

   return block;
};

void code__51226380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56887460(),ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56887400(),run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51249040();
   }
   else {
  code__51225800();
   }
      }
   }
}

Block make__51226380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51226380 = block;
   block->owner = (Object)__50665680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51226380;

   return block;
};

Value make__56908220() {
   static unsigned long long data[] = { 21ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56908200() {
   static unsigned long long data[] = { 4294967273ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56908000() {
   static unsigned long long data[] = { 30ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56907980() {
   static unsigned long long data[] = { 4294967261ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56907780() {
   static unsigned long long data[] = { 4294967289ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56907760() {
   static unsigned long long data[] = { 19ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56857920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56857700() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56857620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56857460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56857280() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56857140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56857000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56856660() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56856600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56856060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56855900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56855700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56855540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56855240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56855080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56854960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56854680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56854400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56854180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56854060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56853920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56853580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56853520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56852980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56852720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56893320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56893220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56893080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56892960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56892900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56892700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56892580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56892360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56892180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56892020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56891740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56891660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56891140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56890840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56890520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56890460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56890380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56890260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56890180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56890120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56890040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56887460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56887400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56887240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56887060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56886880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56886500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56886400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56909780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56909620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56909240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56909180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56908840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56908780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56908680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56908580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56905440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56905380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56905320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56905120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56904880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56904760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56904680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56904480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56904400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56903920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56903660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56903380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56903300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56903220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56903140() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56903080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56903000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56902920() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56902860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56902760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56902660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56902580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56902500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56902340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56902180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56901840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56901660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56925860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56925500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56925200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56925020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56924860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56924380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56924140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56924000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56923780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56923080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56922920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56922740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56922640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56922460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56922320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56922200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56922060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_50792900;

SignalI req__mac_50665520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereq__mac_50665520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_50665520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack_50665500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__mac_50665480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__add_50665460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50665460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI fill__channel_50665420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makefill__channel_50665420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_50665420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5897_50748800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5895_50748780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5896_50748440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58143_50827120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58144_50965460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58126_51064940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58124_51064920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58125_51064840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58182_51150460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58183_51242000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58212_51328040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58213_51389640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makevalue__z0_51535140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makevalue__z1_51596260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI value__a0_51678080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makevalue__a0_51678080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_51678080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI value__a1_46088600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makevalue__a1_46088600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_46088600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI flag__z0_46088540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeflag__z0_46088540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_46088540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI flag__z1_46088520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeflag__z1_46088520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_46088520_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__a0_46153480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__a1_46152840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress__weights0_46149000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_46149000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress__weights1_46148880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights1_46148880_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress__bias_46148300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_46148300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__weights0_46148240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__weights1_46148200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__bias_46148160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58197_48082660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58198_48247960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58199_48247780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI w0_49977700_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makew0_49977700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_49977700_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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
         src0 = make__56908220();
         src1 = make__56908200();
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

SignalI w1_50998300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makew1_50998300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w1_50998300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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
         src0 = make__56908000();
         src1 = make__56907980();
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

SignalI b_51444540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeb_51444540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_51444540_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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
         src0 = make__56907780();
         src1 = make__56907760();
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

SignalI _5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5899_51444420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58100_51444060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58101_51564080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58128_51564060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58129_51563980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SignalI _58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58130_51642920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer0_58_84_50792900;
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

SystemI counter_51658960;

SystemI makecounter_51658960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_51658960 = systemI;
   systemI->owner = (Object)layer0_58_84_50792900;
   systemI->name = "counter";
   systemI->system = counter_58_841_51662300;

   return systemI;
};

SystemI func0_50713340;

SystemI makefunc0_50713340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_50713340 = systemI;
   systemI->owner = (Object)layer0_58_84_50792900;
   systemI->name = "func0";
   systemI->system = func0_58_841_49960740;

   return systemI;
};

SystemI func1_48525740;

SystemI makefunc1_48525740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_48525740 = systemI;
   systemI->owner = (Object)layer0_58_84_50792900;
   systemI->name = "func1";
   systemI->system = func1_58_840_59816640;

   return systemI;
};

Scope channel__w0_5883_50792600;

SignalI trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI maketrig__r_50809920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

SignalI trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI maketrig__w_50809900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

SignalI dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makedbus__r_50918260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

SignalI dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makedbus__w_51015600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

SignalI abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_51015520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

SignalI abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_51015440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

SignalI mem_51083540_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makemem_51083540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51083540_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_5883_50792600;
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

Scope raddr_5884_50792300;

Scope makeraddr_5884_50792300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_50792300 = scope;
   scope->owner = (Object)channel__w0_5883_50792600;
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

Scope waddr_5889_50812960;

Scope makewaddr_5889_50812960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_50812960 = scope;
   scope->owner = (Object)channel__w0_5883_50792600;
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

Scope rinc_5894_50811720;

Scope makerinc_5894_50811720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_50811720 = scope;
   scope->owner = (Object)channel__w0_5883_50792600;
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

Scope winc_5898_50811300;

Scope makewinc_5898_50811300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_50811300 = scope;
   scope->owner = (Object)channel__w0_5883_50792600;
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

Scope rdec_58102_50810880;

Scope makerdec_58102_50810880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_50810880 = scope;
   scope->owner = (Object)channel__w0_5883_50792600;
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

Scope wdec_58107_50810420;

Scope makewdec_58107_50810420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_50810420 = scope;
   scope->owner = (Object)channel__w0_5883_50792600;
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

Behavior __45894740;

Behavior make__45894740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45894740 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg-1] = (Object)behavior;
   behavior->block = make__51341500();

   return behavior;
}

Behavior __56105400;

Behavior make__56105400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56105400 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[dbus__r_50918260_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56105660();

   return behavior;
}

Behavior __56104980;

Behavior make__56104980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56104980 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_5897_50748800_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56105320();

   return behavior;
}

Behavior __56104160;

Behavior make__56104160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56104160 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[trig__r_50809920_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56104440();

   return behavior;
}

Behavior __56103960;

Behavior make__56103960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56103960 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_5895_50748780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56104120();

   return behavior;
}

Behavior __56103400;

Behavior make__56103400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56103400 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__r_51015520_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56103600();

   return behavior;
}

Behavior __56103160;

Behavior make__56103160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56103160 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_5896_50748440_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56103360();

   return behavior;
}

Behavior __56102260;

Behavior make__56102260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56102260 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[trig__w_50809900_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56102620();

   return behavior;
}

Behavior __56101880;

Behavior make__56101880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56101880 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_5899_51444420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56102200();

   return behavior;
}

Behavior __56101140;

Behavior make__56101140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56101140 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__w_51015440_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56101360();

   return behavior;
}

Behavior __56100940;

Behavior make__56100940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56100940 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58100_51444060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56101100();

   return behavior;
}

Behavior __56100280;

Behavior make__56100280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56100280 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[dbus__w_51015600_channel__w0_5883_50792600_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56100500();

   return behavior;
}

Behavior __56100040;

Behavior make__56100040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56100040 = behavior;
   behavior->owner = (Object)channel__w0_5883_50792600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58101_51564080_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56100240();

   return behavior;
}

Scope makechannel__w0_5883_50792600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_50792600 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50809920();
   scope->inners[1] = maketrig__w_50809900();
   scope->inners[2] = makedbus__r_50918260();
   scope->inners[3] = makedbus__w_51015600();
   scope->inners[4] = makeabus__r_51015520();
   scope->inners[5] = makeabus__w_51015440();
   scope->inners[6] = makemem_51083540();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_50792300();
   scope->scopes[1] = makewaddr_5889_50812960();
   scope->scopes[2] = makerinc_5894_50811720();
   scope->scopes[3] = makewinc_5898_50811300();
   scope->scopes[4] = makerdec_58102_50810880();
   scope->scopes[5] = makewdec_58107_50810420();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45894740();
   scope->behaviors[1] = make__56105400();
   scope->behaviors[2] = make__56104980();
   scope->behaviors[3] = make__56104160();
   scope->behaviors[4] = make__56103960();
   scope->behaviors[5] = make__56103400();
   scope->behaviors[6] = make__56103160();
   scope->behaviors[7] = make__56102260();
   scope->behaviors[8] = make__56101880();
   scope->behaviors[9] = make__56101140();
   scope->behaviors[10] = make__56100940();
   scope->behaviors[11] = make__56100280();
   scope->behaviors[12] = make__56100040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_45946660;

SignalI trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI maketrig__r_46096300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

SignalI trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI maketrig__w_46096280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

SignalI dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makedbus__r_47980700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

SignalI dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makedbus__w_48164700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

SignalI abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_48164580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

SignalI abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_48164340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

SignalI mem_48296480_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makemem_48296480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48296480_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45946660;
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

Scope raddr_58113_45994960;

Scope makeraddr_58113_45994960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_45994960 = scope;
   scope->owner = (Object)channel__w1_58112_45946660;
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

Scope waddr_58118_45990880;

Scope makewaddr_58118_45990880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_45990880 = scope;
   scope->owner = (Object)channel__w1_58112_45946660;
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

Scope rinc_58123_46044360;

Scope makerinc_58123_46044360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_46044360 = scope;
   scope->owner = (Object)channel__w1_58112_45946660;
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

Scope winc_58127_46041720;

Scope makewinc_58127_46041720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_46041720 = scope;
   scope->owner = (Object)channel__w1_58112_45946660;
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

Scope rdec_58131_46040320;

Scope makerdec_58131_46040320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_46040320 = scope;
   scope->owner = (Object)channel__w1_58112_45946660;
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

Scope wdec_58136_46079900;

Scope makewdec_58136_46079900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_46079900 = scope;
   scope->owner = (Object)channel__w1_58112_45946660;
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

Behavior __50741560;

Behavior make__50741560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50741560 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg-1] = (Object)behavior;
   behavior->block = make__49674380();

   return behavior;
}

Behavior __56122120;

Behavior make__56122120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56122120 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[dbus__r_47980700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56122300();

   return behavior;
}

Behavior __56121880;

Behavior make__56121880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56121880 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58126_51064940_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56122080();

   return behavior;
}

Behavior __56120940;

Behavior make__56120940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56120940 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[trig__r_46096300_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56121260();

   return behavior;
}

Behavior __56120640;

Behavior make__56120640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56120640 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58124_51064920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56120900();

   return behavior;
}

Behavior __56119640;

Behavior make__56119640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56119640 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__r_48164580_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56119860();

   return behavior;
}

Behavior __56119080;

Behavior make__56119080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56119080 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58125_51064840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56119460();

   return behavior;
}

Behavior __56117940;

Behavior make__56117940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56117940 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[trig__w_46096280_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56118160();

   return behavior;
}

Behavior __56117600;

Behavior make__56117600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56117600 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58128_51564060_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56117840();

   return behavior;
}

Behavior __56116860;

Behavior make__56116860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56116860 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__w_48164340_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56117120();

   return behavior;
}

Behavior __56116580;

Behavior make__56116580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56116580 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58129_51563980_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56116800();

   return behavior;
}

Behavior __56115820;

Behavior make__56115820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56115820 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[dbus__w_48164700_channel__w1_58112_45946660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56116160();

   return behavior;
}

Behavior __56483180;

Behavior make__56483180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56483180 = behavior;
   behavior->owner = (Object)channel__w1_58112_45946660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58130_51642920_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56115780();

   return behavior;
}

Scope makechannel__w1_58112_45946660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_45946660 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_46096300();
   scope->inners[1] = maketrig__w_46096280();
   scope->inners[2] = makedbus__r_47980700();
   scope->inners[3] = makedbus__w_48164700();
   scope->inners[4] = makeabus__r_48164580();
   scope->inners[5] = makeabus__w_48164340();
   scope->inners[6] = makemem_48296480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_45994960();
   scope->scopes[1] = makewaddr_58118_45990880();
   scope->scopes[2] = makerinc_58123_46044360();
   scope->scopes[3] = makewinc_58127_46041720();
   scope->scopes[4] = makerdec_58131_46040320();
   scope->scopes[5] = makewdec_58136_46079900();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50741560();
   scope->behaviors[1] = make__56122120();
   scope->behaviors[2] = make__56121880();
   scope->behaviors[3] = make__56120940();
   scope->behaviors[4] = make__56120640();
   scope->behaviors[5] = make__56119640();
   scope->behaviors[6] = make__56119080();
   scope->behaviors[7] = make__56117940();
   scope->behaviors[8] = make__56117600();
   scope->behaviors[9] = make__56116860();
   scope->behaviors[10] = make__56116580();
   scope->behaviors[11] = make__56115820();
   scope->behaviors[12] = make__56483180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_50741420;

SignalI reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__0_50870440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__accum_58141_50741420;
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

SignalI reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__1_50970140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__accum_58141_50741420;
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

Scope anum_58142_50765620;

Scope makeanum_58142_50765620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_50765620 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
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

Scope raddr_58145_50765200;

Scope makeraddr_58145_50765200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_50765200 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
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

Scope waddr_58149_50764780;

Scope makewaddr_58149_50764780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_50764780 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
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

Scope rinc_58153_50764340;

SignalI abus__r_50763780_rinc_58153_50764340_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_50763780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50763780_rinc_58153_50764340_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rinc_58153_50764340;
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

Scope makerinc_58153_50764340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_50764340 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50763780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_50763660;

SignalI abus__w_50763280_winc_58158_50763660_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_50763280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50763280_winc_58158_50763660_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)winc_58158_50763660;
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

Scope makewinc_58158_50763660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_50763660 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50763280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_50763160;

SignalI abus__r_50762780_rdec_58163_50763160_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_50762780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50762780_rdec_58163_50763160_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rdec_58163_50763160;
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

Scope makerdec_58163_50763160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_50763160 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50762780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_50762660;

SignalI abus__w_50762280_wdec_58168_50762660_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_50762280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50762280_wdec_58168_50762660_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)wdec_58168_50762660;
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

Scope makewdec_58168_50762660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_50762660 = scope;
   scope->owner = (Object)channel__accum_58141_50741420;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50762280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56479380;

Behavior make__56479380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56479380 = behavior;
   behavior->owner = (Object)channel__accum_58141_50741420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_50870440_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56479580();

   return behavior;
}

Behavior __56479000;

Behavior make__56479000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56479000 = behavior;
   behavior->owner = (Object)channel__accum_58141_50741420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58143_50827120_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56479260();

   return behavior;
}

Behavior __56478240;

Behavior make__56478240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56478240 = behavior;
   behavior->owner = (Object)channel__accum_58141_50741420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__1_50970140_channel__accum_58141_50741420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56478560();

   return behavior;
}

Behavior __56477980;

Behavior make__56477980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56477980 = behavior;
   behavior->owner = (Object)channel__accum_58141_50741420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58144_50965460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56478160();

   return behavior;
}

Scope makechannel__accum_58141_50741420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_50741420 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50870440();
   scope->inners[1] = makereg__1_50970140();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_50765620();
   scope->scopes[1] = makeraddr_58145_50765200();
   scope->scopes[2] = makewaddr_58149_50764780();
   scope->scopes[3] = makerinc_58153_50764340();
   scope->scopes[4] = makewinc_58158_50763660();
   scope->scopes[5] = makerdec_58163_50763160();
   scope->scopes[6] = makewdec_58168_50762660();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56479380();
   scope->behaviors[1] = make__56479000();
   scope->behaviors[2] = make__56478240();
   scope->behaviors[3] = make__56477980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_51258160;

SignalI lv0_51325360_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelv0_51325360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51325360_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI lv1_51392800_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelv1_51392800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51392800_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI av0_51459320_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeav0_51459320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51459320_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI av1_51565820_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeav1_51565820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_51565820_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI rv_51631760_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerv_51631760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51631760_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelvok0_51631740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51631740_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelvok1_51631720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_51631720_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makervok_51631700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51631700_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makewok0_51631660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_51631660_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makewok1_51631640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_51631640_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

SignalI run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerun_51631620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51631620_mac__n1_58173_51258160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58173_51258160;
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

Behavior __51443760;

Behavior make__51443760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51443760 = behavior;
   behavior->owner = (Object)mac__n1_58173_51258160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__51631480();

   return behavior;
}

Scope makemac__n1_58173_51258160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_51258160 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51325360();
   scope->inners[1] = makelv1_51392800();
   scope->inners[2] = makeav0_51459320();
   scope->inners[3] = makeav1_51565820();
   scope->inners[4] = makerv_51631760();
   scope->inners[5] = makelvok0_51631740();
   scope->inners[6] = makelvok1_51631720();
   scope->inners[7] = makervok_51631700();
   scope->inners[8] = makewok0_51631660();
   scope->inners[9] = makewok1_51631640();
   scope->inners[10] = makerun_51631620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51443760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_51443580;

SignalI reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__0_51567380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__bias_58180_51443580;
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

SignalI reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__1_51631880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__bias_58180_51443580;
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

Scope anum_58181_51443280;

Scope makeanum_58181_51443280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_51443280 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
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

Scope raddr_58184_51442760;

Scope makeraddr_58184_51442760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_51442760 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
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

Scope waddr_58188_51442340;

Scope makewaddr_58188_51442340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_51442340 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
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

Scope rinc_58192_51441780;

SignalI abus__r_51441120_rinc_58192_51441780_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_51441120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51441120_rinc_58192_51441780_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rinc_58192_51441780;
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

Scope makerinc_58192_51441780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_51441780 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51441120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_51440980;

SignalI abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_51440560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)winc_58196_51440980;
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

Behavior __56526080;

Behavior make__56526080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56526080 = behavior;
   behavior->owner = (Object)winc_58196_51440980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__w_51440560_winc_58196_51440980_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56526340();

   return behavior;
}

Behavior __56525620;

Behavior make__56525620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56525620 = behavior;
   behavior->owner = (Object)winc_58196_51440980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58199_48247780_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56526040();

   return behavior;
}

Scope makewinc_58196_51440980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_51440980 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51440560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56526080();
   scope->behaviors[1] = make__56525620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_51440100;

SignalI abus__r_51439680_rdec_58200_51440100_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_51439680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51439680_rdec_58200_51440100_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rdec_58200_51440100;
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

Scope makerdec_58200_51440100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_51440100 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51439680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_51439520;

SignalI abus__w_51439020_wdec_58205_51439520_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_51439020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51439020_wdec_58205_51439520_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)wdec_58205_51439520;
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

Scope makewdec_58205_51439520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_51439520 = scope;
   scope->owner = (Object)channel__bias_58180_51443580;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51439020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56532300;

Behavior make__56532300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56532300 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56532620();

   return behavior;
}

Behavior __56532020;

Behavior make__56532020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56532020 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58182_51150460_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56532260();

   return behavior;
}

Behavior __56531280;

Behavior make__56531280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56531280 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56531500();

   return behavior;
}

Behavior __56531080;

Behavior make__56531080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56531080 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58183_51242000_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56531240();

   return behavior;
}

Behavior __56530500;

Behavior make__56530500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56530500 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_51567380_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56530740();

   return behavior;
}

Behavior __56530140;

Behavior make__56530140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56530140 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58197_48082660_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56530420();

   return behavior;
}

Behavior __56529320;

Behavior make__56529320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56529320 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__1_51631880_channel__bias_58180_51443580_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56529640();

   return behavior;
}

Behavior __56529060;

Behavior make__56529060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56529060 = behavior;
   behavior->owner = (Object)channel__bias_58180_51443580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58198_48247960_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56529280();

   return behavior;
}

Scope makechannel__bias_58180_51443580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_51443580 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51567380();
   scope->inners[1] = makereg__1_51631880();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_51443280();
   scope->scopes[1] = makeraddr_58184_51442760();
   scope->scopes[2] = makewaddr_58188_51442340();
   scope->scopes[3] = makerinc_58192_51441780();
   scope->scopes[4] = makewinc_58196_51440980();
   scope->scopes[5] = makerdec_58200_51440100();
   scope->scopes[6] = makewdec_58205_51439520();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56532300();
   scope->behaviors[1] = make__56532020();
   scope->behaviors[2] = make__56531280();
   scope->behaviors[3] = make__56531080();
   scope->behaviors[4] = make__56530500();
   scope->behaviors[5] = make__56530140();
   scope->behaviors[6] = make__56529320();
   scope->behaviors[7] = make__56529060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_49672280;

SignalI reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__0_49852760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__z_58210_49672280;
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

SignalI reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__1_50023560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__z_58210_49672280;
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

Scope anum_58211_49671860;

Scope makeanum_58211_49671860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_49671860 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
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

Scope raddr_58214_49671380;

Scope makeraddr_58214_49671380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_49671380 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
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

Scope waddr_58218_49670960;

Scope makewaddr_58218_49670960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_49670960 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
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

Scope rinc_58222_49670420;

SignalI abus__r_49669900_rinc_58222_49670420_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_49669900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49669900_rinc_58222_49670420_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rinc_58222_49670420;
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

Scope makerinc_58222_49670420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_49670420 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49669900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_49669700;

SignalI abus__w_49669000_winc_58226_49669700_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_49669000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49669000_winc_58226_49669700_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)winc_58226_49669700;
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

Scope makewinc_58226_49669700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_49669700 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49669000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_49668880;

SignalI abus__r_49668500_rdec_58230_49668880_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_49668500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49668500_rdec_58230_49668880_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rdec_58230_49668880;
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

Scope makerdec_58230_49668880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_49668880 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49668500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_49668380;

SignalI abus__w_49692160_wdec_58235_49668380_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_49692160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49692160_wdec_58235_49668380_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)wdec_58235_49668380;
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

Scope makewdec_58235_49668380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_49668380 = scope;
   scope->owner = (Object)channel__z_58210_49672280;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49692160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56564680;

Behavior make__56564680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56564680 = behavior;
   behavior->owner = (Object)channel__z_58210_49672280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_49852760_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56564880();

   return behavior;
}

Behavior __56564380;

Behavior make__56564380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56564380 = behavior;
   behavior->owner = (Object)channel__z_58210_49672280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58212_51328040_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56564640();

   return behavior;
}

Behavior __56563620;

Behavior make__56563620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56563620 = behavior;
   behavior->owner = (Object)channel__z_58210_49672280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__1_50023560_channel__z_58210_49672280_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56563880();

   return behavior;
}

Behavior __56563320;

Behavior make__56563320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56563320 = behavior;
   behavior->owner = (Object)channel__z_58210_49672280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58213_51389640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__56563580();

   return behavior;
}

Scope makechannel__z_58210_49672280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_49672280 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49852760();
   scope->inners[1] = makereg__1_50023560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_49671860();
   scope->scopes[1] = makeraddr_58214_49671380();
   scope->scopes[2] = makewaddr_58218_49670960();
   scope->scopes[3] = makerinc_58222_49670420();
   scope->scopes[4] = makewinc_58226_49669700();
   scope->scopes[5] = makerdec_58230_49668880();
   scope->scopes[6] = makewdec_58235_49668380();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56564680();
   scope->behaviors[1] = make__56564380();
   scope->behaviors[2] = make__56563620();
   scope->behaviors[3] = make__56563320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_50824420;

SignalI lv0_50966900_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelv0_50966900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50966900_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI lv1_51068180_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelv1_51068180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51068180_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI rv0_51131940_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerv0_51131940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_51131940_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI rv1_51226600_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerv1_51226600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_51226600_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI lvok0_51226580_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelvok0_51226580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51226580_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI lvok1_51226560_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelvok1_51226560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_51226560_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI rvok0_51226540_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makervok0_51226540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_51226540_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI rvok1_51226520_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makervok1_51226520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_51226520_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

SignalI run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerun_51226500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51226500_add__n_58240_50824420_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58240_50824420;
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

Behavior __50665680;

Behavior make__50665680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50665680 = behavior;
   behavior->owner = (Object)add__n_58240_50824420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__51226380();

   return behavior;
}

Scope makeadd__n_58240_50824420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_50824420 = scope;
   scope->owner = (Object)layer0_58_84_50792900;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50966900();
   scope->inners[1] = makelv1_51068180();
   scope->inners[2] = makerv0_51131940();
   scope->inners[3] = makerv1_51226600();
   scope->inners[4] = makelvok0_51226580();
   scope->inners[5] = makelvok1_51226560();
   scope->inners[6] = makervok0_51226540();
   scope->inners[7] = makervok1_51226520();
   scope->inners[8] = makerun_51226500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50665680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51280360;

Behavior make__51280360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51280360 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__51258260();

   return behavior;
}

Behavior __56119900;

Behavior make__56119900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56119900 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__51280160();

   return behavior;
}

Behavior __56920940;

Behavior make__56920940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56920940 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__56119780();

   return behavior;
}

Behavior __58631180;

Behavior make__58631180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58631180 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__56920820();

   return behavior;
}

Behavior __51746560;

Behavior make__51746560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51746560 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[req_58653080_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__mac_50665480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__51747040();

   return behavior;
}

Behavior __55558180;

Behavior make__55558180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55558180 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[fill_58653100_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__weights0_46148240_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__weights1_46148200_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__bias_46148160_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__55558620();

   return behavior;
}

Behavior __56106660;

Behavior make__56106660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56106660 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[clk_58653140_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack_50665500_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[rst_58653120_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[value__z0_51535140_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[value__z1_51596260_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__a0_46153480_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__a1_46152840_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__51747540();

   return behavior;
}

Behavior __56106500;

Behavior make__56106500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56106500 = behavior;
   behavior->owner = (Object)layer0_58_84_50792900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__mac_51659760_counter_58_841_51662300_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[a_50713780_func0_58_841_49960740_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[a_48526500_func1_58_840_59816640_layer0_58_84_50792900_layer0_58_840_58630860_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__51747420();

   return behavior;
}

Scope makelayer0_58_84_50792900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_50792900 = scope;
   scope->owner = (Object)layer0_58_840_58630860;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_51658960();
   scope->systemIs[1] = makefunc0_50713340();
   scope->systemIs[2] = makefunc1_48525740();
   scope->num_inners = 43;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_50665520();
   scope->inners[1] = makeack_50665500();
   scope->inners[2] = makeack__mac_50665480();
   scope->inners[3] = makeack__add_50665460();
   scope->inners[4] = makefill__channel_50665420();
   scope->inners[5] = make_5897_50748800();
   scope->inners[6] = make_5895_50748780();
   scope->inners[7] = make_5896_50748440();
   scope->inners[8] = make_58143_50827120();
   scope->inners[9] = make_58144_50965460();
   scope->inners[10] = make_58126_51064940();
   scope->inners[11] = make_58124_51064920();
   scope->inners[12] = make_58125_51064840();
   scope->inners[13] = make_58182_51150460();
   scope->inners[14] = make_58183_51242000();
   scope->inners[15] = make_58212_51328040();
   scope->inners[16] = make_58213_51389640();
   scope->inners[17] = makevalue__z0_51535140();
   scope->inners[18] = makevalue__z1_51596260();
   scope->inners[19] = makevalue__a0_51678080();
   scope->inners[20] = makevalue__a1_46088600();
   scope->inners[21] = makeflag__z0_46088540();
   scope->inners[22] = makeflag__z1_46088520();
   scope->inners[23] = makeack__a0_46153480();
   scope->inners[24] = makeack__a1_46152840();
   scope->inners[25] = makeaddress__weights0_46149000();
   scope->inners[26] = makeaddress__weights1_46148880();
   scope->inners[27] = makeaddress__bias_46148300();
   scope->inners[28] = makeack__weights0_46148240();
   scope->inners[29] = makeack__weights1_46148200();
   scope->inners[30] = makeack__bias_46148160();
   scope->inners[31] = make_58197_48082660();
   scope->inners[32] = make_58198_48247960();
   scope->inners[33] = make_58199_48247780();
   scope->inners[34] = makew0_49977700();
   scope->inners[35] = makew1_50998300();
   scope->inners[36] = makeb_51444540();
   scope->inners[37] = make_5899_51444420();
   scope->inners[38] = make_58100_51444060();
   scope->inners[39] = make_58101_51564080();
   scope->inners[40] = make_58128_51564060();
   scope->inners[41] = make_58129_51563980();
   scope->inners[42] = make_58130_51642920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_50792600();
   scope->scopes[1] = makechannel__w1_58112_45946660();
   scope->scopes[2] = makechannel__accum_58141_50741420();
   scope->scopes[3] = makemac__n1_58173_51258160();
   scope->scopes[4] = makechannel__bias_58180_51443580();
   scope->scopes[5] = makechannel__z_58210_49672280();
   scope->scopes[6] = makeadd__n_58240_50824420();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51280360();
   scope->behaviors[1] = make__56119900();
   scope->behaviors[2] = make__56920940();
   scope->behaviors[3] = make__58631180();
   scope->behaviors[4] = make__51746560();
   scope->behaviors[5] = make__55558180();
   scope->behaviors[6] = make__56106660();
   scope->behaviors[7] = make__56106500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_58630860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_58630860 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58653140();
   systemT->inputs[1] = makerst_58653120();
   systemT->inputs[2] = makefill_58653100();
   systemT->inputs[3] = makereq_58653080();
   systemT->inputs[4] = make_5815_58712560();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_58712520();
   systemT->outputs[1] = make_5813_58712500();
   systemT->outputs[2] = make_5814_58712400();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_58829200();
   systemT->inouts[1] = make_5856_58946060();

   systemT->scope = makelayer0_58_84_50792900();

   return systemT;
}