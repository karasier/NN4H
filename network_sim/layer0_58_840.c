#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_57466040;

SignalI clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeclk_57464040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerst_57464020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makefill_57463980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereq_57463960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI _5815_57580540_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5815_57580540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_57580540_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI ack__layer_57580500_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__layer_57580500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57580500_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI _5813_57580480_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5813_57580480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_57580480_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI _5814_57580400_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5814_57580400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_57580400_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI _5855_57639820_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5855_57639820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_57639820_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

SignalI _5856_57846540_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5856_57846540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_57846540_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_840_57466040;
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

Block __59944600;

Block __59944340;

void code__59944340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50074200(),ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50073420(),ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50072580(),ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59944340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59944340 = block;
   block->owner = (Object)__59944600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59944340;

   return block;
};

void code__59944600() {
   {
      Value cond = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59944340();
   }
      }
   }
}

Block make__59944600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59944600 = block;
   block->owner = (Object)__59943260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59944600;

   return block;
};

Block __59943140;

Block __59942400;

Block __59942080;

void code__59942080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50071360(),flag__z0_49672220_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59942080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59942080 = block;
   block->owner = (Object)__59942400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59942080;

   return block;
};

Block __48076580;

void code__48076580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50071100(),flag__z1_49672060_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48076580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48076580 = block;
   block->owner = (Object)__59942400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48076580;

   return block;
};

void code__59942400() {
 code__59942080();
 code__48076580();
}

Block make__59942400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59942400 = block;
   block->owner = (Object)__59943140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59942400;

   return block;
};

Block __59942980;

void code__59942980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50071020(),flag__z0_49672220_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50070580(),flag__z1_49672060_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59942980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59942980 = block;
   block->owner = (Object)__59943140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59942980;

   return block;
};

void code__59943140() {
   {
      Value cond = ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59942400();
   }
   else {
  code__59942980();
   }
      }
   }
}

Block make__59943140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59943140 = block;
   block->owner = (Object)__49775940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59943140;

   return block;
};

Block __49775720;

Block __49775340;

void code__49775340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50070320(),ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50069600(),ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49775340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49775340 = block;
   block->owner = (Object)__49775720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49775340;

   return block;
};

Block __49793700;

Block __49793460;

void code__49793460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_49291660_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5855_57639820_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50091020(),ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49793460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49793460 = block;
   block->owner = (Object)__49793700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49793460;

   return block;
};

Block __49327580;

void code__49327580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_49672240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5856_57846540_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50090520(),ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49327580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49327580 = block;
   block->owner = (Object)__49793700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49327580;

   return block;
};

void code__49793700() {
 code__49793460();
 code__49327580();
}

Block make__49793700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49793700 = block;
   block->owner = (Object)__49775720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49793700;

   return block;
};

void code__49775720() {
   {
      Value cond = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49775340();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_49672220_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = flag__z1_49672060_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__49793700();
   }
      }
   }
}

Block make__49775720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49775720 = block;
   block->owner = (Object)__50930980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49775720;

   return block;
};

Block __50930620;

Block __50930240;

Block __50953100;

void code__50953100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50089960(),_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50953100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50953100 = block;
   block->owner = (Object)__50930240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50953100;

   return block;
};

void code__50930240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50090080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50953100();
   }
      }
   }
}

Block make__50930240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50930240 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50930240;

   return block;
};

Block __50951940;

Block __50951060;

void code__50951060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50089500(),_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50951060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50951060 = block;
   block->owner = (Object)__50951940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50951060;

   return block;
};

void code__50951940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50089740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50951060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50089420(),_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50951940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50951940 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50951940;

   return block;
};

Block __50949160;

Block __50948440;

void code__50948440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50089080(),_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50948440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50948440 = block;
   block->owner = (Object)__50949160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50948440;

   return block;
};

void code__50949160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50089240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50948440();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50088960(),_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50949160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50949160 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50949160;

   return block;
};

Block __50946220;

void code__50946220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50088800(),address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50088680(),ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50088620(),address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50088460(),ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50088260(),address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50087420(),ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50946220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50946220 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50946220;

   return block;
};

Block __50966140;

Block __50965600;

Block __50965260;

Block __50962880;

void code__50962880() {
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
                  src0 = _58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50110020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50109020(),_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
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
            ref = w0_50953720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50962880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50962880 = block;
   block->owner = (Object)__50965260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50962880;

   return block;
};

void code__50965260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50086380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50962880();
   }
      }
   }
}

Block make__50965260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50965260 = block;
   block->owner = (Object)__50965600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50965260;

   return block;
};

void code__50965600() {
 code__50965260();
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
                  src0 = address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50108200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50965600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50965600 = block;
   block->owner = (Object)__50966140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50965600;

   return block;
};

Block __51499580;

Block __51498960;

Block __51498220;

void code__51498220() {
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
                  src0 = _58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50107600();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50107480(),_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
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
            ref = w1_51483680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51498220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51498220 = block;
   block->owner = (Object)__51498960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51498220;

   return block;
};

void code__51498960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50107920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51498220();
   }
      }
   }
}

Block make__51498960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51498960 = block;
   block->owner = (Object)__51499580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51498960;

   return block;
};

void code__51499580() {
 code__51498960();
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
                  src0 = address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50106040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51499580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51499580 = block;
   block->owner = (Object)__50966140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51499580;

   return block;
};

Block __56600960;

Block __56600800;

Block __56600480;

Block __56599960;

void code__56599960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_47603500_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56599960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56599960 = block;
   block->owner = (Object)__56600480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56599960;

   return block;
};

Block __56989240;

void code__56989240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_47603500_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56989240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56989240 = block;
   block->owner = (Object)__56600480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56989240;

   return block;
};

void code__56600480() {
{
      Value value = _58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__50102440())) {
    code__56599960();
         }
         else if (value2integer(value) == value2integer(make__50716280())) {
    code__56989240();
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
                  src0 = _58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50715420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56600480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56600480 = block;
   block->owner = (Object)__56600800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56600480;

   return block;
};

void code__56600800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50104020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56600480();
   }
      }
   }
}

Block make__56600800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56600800 = block;
   block->owner = (Object)__56600960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56600800;

   return block;
};

void code__56600960() {
 code__56600800();
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
                  src0 = address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50714320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56600960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56600960 = block;
   block->owner = (Object)__50966140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56600960;

   return block;
};

void code__50966140() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50965600();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51499580();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56600960();
   }
      }
   }
}

Block make__50966140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50966140 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50966140;

   return block;
};

Block __57452100;

void code__57452100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50713900(),ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57452100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57452100 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57452100;

   return block;
};

Block __57451280;

void code__57451280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50713460(),ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57451280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57451280 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57451280;

   return block;
};

Block __57450660;

void code__57450660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50713020(),ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57450660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57450660 = block;
   block->owner = (Object)__50930620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57450660;

   return block;
};

void code__50930620() {
 code__50930240();
 code__50951940();
 code__50949160();
   {
      Value cond = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50946220();
   }
      }
   }
   {
      Value cond = fill__channel_51168700_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50966140();
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
               src0 = address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50714040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57452100();
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
               src0 = address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50713780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57451280();
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
               src0 = address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50713140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57450660();
   }
      }
   }
}

Block make__50930620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50930620 = block;
   block->owner = (Object)__57466400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50930620;

   return block;
};

Block __46429340;

void code__46429340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_51168800_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__46429340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46429340 = block;
   block->owner = (Object)__46427480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46429340;

   return block;
};

Block __47534640;

void code__47534640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
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
                        src0 = ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                        src1 = ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                        dst = and_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_51168700_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47534640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47534640 = block;
   block->owner = (Object)__47532700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47534640;

   return block;
};

Block __46431940;

void code__46431940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,clk_49210400_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,ack_49210280_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rst_49210260_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,z__value_50120760_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,z__value_59030280_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_57580500_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__46431940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46431940 = block;
   block->owner = (Object)__47531560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46431940;

   return block;
};

Block __46431680;

void code__46431680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,value__a0_49291660_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,value__a1_49672240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__46431680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46431680 = block;
   block->owner = (Object)__47530720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46431680;

   return block;
};

Block __51735460;

Block __47579620;

void code__47579620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,make_ref_rangeS(mem_51446420_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700,value2integer(abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value),value2integer(abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47579620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47579620 = block;
   block->owner = (Object)__51735460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47579620;

   return block;
};

void code__51735460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51446420_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47579620();
   }
      }
   }
}

Block make__51735460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51735460 = block;
   block->owner = (Object)__49178300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51735460;

   return block;
};

Block __47552140;

void code__47552140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47552140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47552140 = block;
   block->owner = (Object)__47551760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47552140;

   return block;
};

Block __47551540;

void code__47551540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47551540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47551540 = block;
   block->owner = (Object)__47551220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47551540;

   return block;
};

Block __47550640;

void code__47550640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47550640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47550640 = block;
   block->owner = (Object)__47550280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47550640;

   return block;
};

Block __47549960;

void code__47549960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47549960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47549960 = block;
   block->owner = (Object)__47547880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47549960;

   return block;
};

Block __47547120;

void code__47547120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47547120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47547120 = block;
   block->owner = (Object)__47546760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47547120;

   return block;
};

Block __47546520;

void code__47546520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47546520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47546520 = block;
   block->owner = (Object)__47569840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47546520;

   return block;
};

Block __47568840;

void code__47568840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47568840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47568840 = block;
   block->owner = (Object)__47568440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47568840;

   return block;
};

Block __47568340;

void code__47568340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47568340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47568340 = block;
   block->owner = (Object)__47564860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47568340;

   return block;
};

Block __47579500;

void code__47579500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47579500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47579500 = block;
   block->owner = (Object)__47601460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47579500;

   return block;
};

Block __47601300;

void code__47601300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47601300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47601300 = block;
   block->owner = (Object)__47600780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47601300;

   return block;
};

Block __47599020;

void code__47599020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47599020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47599020 = block;
   block->owner = (Object)__47597800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47599020;

   return block;
};

Block __47597520;

void code__47597520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47597520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47597520 = block;
   block->owner = (Object)__47844840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47597520;

   return block;
};

Block __49326680;

Block __50868540;

void code__50868540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,make_ref_rangeS(mem_49831300_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700,value2integer(abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value),value2integer(abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50868540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50868540 = block;
   block->owner = (Object)__49326680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50868540;

   return block;
};

void code__49326680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49831300_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50868540();
   }
      }
   }
}

Block make__49326680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49326680 = block;
   block->owner = (Object)__51107140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49326680;

   return block;
};

Block __47860780;

void code__47860780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47860780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47860780 = block;
   block->owner = (Object)__47860220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47860780;

   return block;
};

Block __47860000;

void code__47860000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47860000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47860000 = block;
   block->owner = (Object)__47880520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47860000;

   return block;
};

Block __47877120;

void code__47877120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47877120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47877120 = block;
   block->owner = (Object)__47876740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47877120;

   return block;
};

Block __47876520;

void code__47876520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47876520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47876520 = block;
   block->owner = (Object)__47876120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47876520;

   return block;
};

Block __47897800;

void code__47897800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47897800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47897800 = block;
   block->owner = (Object)__47909100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47897800;

   return block;
};

Block __47907800;

void code__47907800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47907800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47907800 = block;
   block->owner = (Object)__47924720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47907800;

   return block;
};

Block __47923280;

void code__47923280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47923280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47923280 = block;
   block->owner = (Object)__47947280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47923280;

   return block;
};

Block __47947220;

void code__47947220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47947220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47947220 = block;
   block->owner = (Object)__47946820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47947220;

   return block;
};

Block __47959080;

void code__47959080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47959080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47959080 = block;
   block->owner = (Object)__47957840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47959080;

   return block;
};

Block __47957500;

void code__47957500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47957500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47957500 = block;
   block->owner = (Object)__47979720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47957500;

   return block;
};

Block __47994060;

void code__47994060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47994060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47994060 = block;
   block->owner = (Object)__47993460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47994060;

   return block;
};

Block __47993380;

void code__47993380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47993380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47993380 = block;
   block->owner = (Object)__47991720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47993380;

   return block;
};

Block __48029260;

void code__48029260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48029260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48029260 = block;
   block->owner = (Object)__48028920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48029260;

   return block;
};

Block __48028860;

void code__48028860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48028860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48028860 = block;
   block->owner = (Object)__48028200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48028860;

   return block;
};

Block __48026780;

void code__48026780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48026780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48026780 = block;
   block->owner = (Object)__48025940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48026780;

   return block;
};

Block __48025780;

void code__48025780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48025780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48025780 = block;
   block->owner = (Object)__48025480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48025780;

   return block;
};

Block __47875120;

Block __47874920;

Block __47874120;

void code__47874120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49895460(),_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47874120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47874120 = block;
   block->owner = (Object)__47874920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47874120;

   return block;
};

void code__47874920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49895680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47874120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49895360(),_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47874920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47874920 = block;
   block->owner = (Object)__47875120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47874920;

   return block;
};

Block __47894120;

Block __47913800;

void code__47913800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49894780(),_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47913800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47913800 = block;
   block->owner = (Object)__47894120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47913800;

   return block;
};

void code__47894120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49894940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47913800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49894280(),_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47894120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47894120 = block;
   block->owner = (Object)__47875120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47894120;

   return block;
};

Block __47908660;

Block __47907380;

void code__47907380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49893800(),_5814_57580400_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47907380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47907380 = block;
   block->owner = (Object)__47908660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47907380;

   return block;
};

void code__47908660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49893920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47907380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49893520(),_5813_57580480_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47908660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47908660 = block;
   block->owner = (Object)__47875120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47908660;

   return block;
};

Block __47929180;

void code__47929180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49893160(),rvok_47875480_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49893040(),lvok0_47875700_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49892900(),av0_46117500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49892800(),lvok1_47875500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49892680(),av1_47052580_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47929180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47929180 = block;
   block->owner = (Object)__47875120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47929180;

   return block;
};

Block __49397800;

Block __49004160;

Block __49003300;

Block __49002360;

void code__49002360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_57580540_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rv_47875720_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49890320(),rvok_47875480_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49002360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49002360 = block;
   block->owner = (Object)__49003300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49002360;

   return block;
};

void code__49003300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_57580480_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49890940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49002360();
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
                  src0 = _5814_57580400_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49912460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_57580400_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49912240(),_5813_57580480_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49003300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49003300 = block;
   block->owner = (Object)__49004160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49003300;

   return block;
};

void code__49004160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49891340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49003300();
   }
      }
   }
}

Block make__49004160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49004160 = block;
   block->owner = (Object)__49397800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49004160;

   return block;
};

Block __49637260;

Block __49636880;

Block __49636520;

void code__49636520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,lv0_51661540_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49911640(),lvok0_47875700_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49636520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49636520 = block;
   block->owner = (Object)__49636880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49636520;

   return block;
};

void code__49636880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49911920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49636520();
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
                  src0 = _5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49909720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49908480(),_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49636880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49636880 = block;
   block->owner = (Object)__49637260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49636880;

   return block;
};

void code__49637260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49912040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49636880();
   }
      }
   }
}

Block make__49637260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49637260 = block;
   block->owner = (Object)__49397800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49637260;

   return block;
};

Block __49939620;

Block __49939040;

Block __49938600;

void code__49938600() {
}

Block make__49938600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49938600 = block;
   block->owner = (Object)__49939040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49938600;

   return block;
};

Block __50963960;

void code__50963960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_46117500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50963960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50963960 = block;
   block->owner = (Object)__49939040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50963960;

   return block;
};

void code__49939040() {
 code__49938600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_46117500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
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
                              src0 = lv0_51661540_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47875720_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49940360();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_46117500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__50963960();
}

Block make__49939040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49939040 = block;
   block->owner = (Object)__49939620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49939040;

   return block;
};

void code__49939620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49929740(),ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49927100(),run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__49939040();
}

Block make__49939620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49939620 = block;
   block->owner = (Object)__49397800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49939620;

   return block;
};

Block __51137720;

Block __51137320;

Block __51136960;

void code__51136960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,lv1_51753080_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49958200(),lvok1_47875500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51136960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51136960 = block;
   block->owner = (Object)__51137320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51136960;

   return block;
};

void code__51137320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49958560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51136960();
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
                  src0 = _58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49958020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49957860(),_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51137320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51137320 = block;
   block->owner = (Object)__51137720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51137320;

   return block;
};

void code__51137720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49959740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51137320();
   }
      }
   }
}

Block make__51137720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51137720 = block;
   block->owner = (Object)__49397800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51137720;

   return block;
};

Block __51265580;

Block __51289640;

Block __51289480;

void code__51289480() {
}

Block make__51289480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51289480 = block;
   block->owner = (Object)__51289640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51289480;

   return block;
};

Block __47050740;

void code__47050740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_47052580_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47050740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47050740 = block;
   block->owner = (Object)__51289640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47050740;

   return block;
};

void code__51289640() {
 code__51289480();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_47052580_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
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
                              src0 = lv1_51753080_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47875720_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49956320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_47052580_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__47050740();
}

Block make__51289640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51289640 = block;
   block->owner = (Object)__51265580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51289640;

   return block;
};

void code__51265580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49957620(),ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49957540(),run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__51289640();
}

Block make__51265580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51265580 = block;
   block->owner = (Object)__49397800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51265580;

   return block;
};

void code__49397800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49891540(),run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__49004160();
 code__49637260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47875700_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = rvok_47875480_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49939620();
   }
      }
   }
 code__51137720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47875500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = rvok_47875480_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51265580();
   }
      }
   }
}

Block make__49397800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49397800 = block;
   block->owner = (Object)__47875120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49397800;

   return block;
};

void code__47875120() {
 code__47874920();
 code__47894120();
 code__47908660();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49893360(),ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49893280(),run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47929180();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_51168800_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49397800();
   }
      }
   }
}

Block make__47875120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47875120 = block;
   block->owner = (Object)__48159880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47875120;

   return block;
};

Block __48043460;

void code__48043460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48043460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48043460 = block;
   block->owner = (Object)__48043200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48043460;

   return block;
};

Block __48043140;

void code__48043140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48043140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48043140 = block;
   block->owner = (Object)__48042800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48043140;

   return block;
};

Block __48041160;

void code__48041160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48041160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48041160 = block;
   block->owner = (Object)__48040260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48041160;

   return block;
};

Block __48040160;

void code__48040160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48040160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48040160 = block;
   block->owner = (Object)__48038400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48040160;

   return block;
};

Block __48060800;

void code__48060800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48060800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48060800 = block;
   block->owner = (Object)__48060340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48060800;

   return block;
};

Block __48060240;

void code__48060240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48060240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48060240 = block;
   block->owner = (Object)__48059240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48060240;

   return block;
};

Block __48058420;

void code__48058420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48058420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48058420 = block;
   block->owner = (Object)__48058100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48058420;

   return block;
};

Block __48058060;

void code__48058060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48058060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48058060 = block;
   block->owner = (Object)__48057700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48058060;

   return block;
};

Block __48091080;

void code__48091080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48091080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48091080 = block;
   block->owner = (Object)__48090780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48091080;

   return block;
};

Block __48090680;

void code__48090680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48090680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48090680 = block;
   block->owner = (Object)__48089820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48090680;

   return block;
};

Block __48139300;

void code__48139300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48139300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139300 = block;
   block->owner = (Object)__48138000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139300;

   return block;
};

Block __48137640;

void code__48137640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48137640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48137640 = block;
   block->owner = (Object)__48136840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48137640;

   return block;
};

Block __48156960;

void code__48156960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48156960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48156960 = block;
   block->owner = (Object)__48156140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48156960;

   return block;
};

Block __48155460;

void code__48155460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48155460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48155460 = block;
   block->owner = (Object)__48154500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48155460;

   return block;
};

Block __45527440;

Block __45568300;

Block __45587740;

void code__45587740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,lv0_51550100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49972340(),lvok0_45529160_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__45587740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45587740 = block;
   block->owner = (Object)__45568300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45587740;

   return block;
};

Block __47845600;

void code__47845600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rv0_51700600_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49971900(),rvok0_45528760_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__47845600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47845600 = block;
   block->owner = (Object)__45568300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47845600;

   return block;
};

Block __49000580;

Block __48999400;

void code__48999400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51550100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = rv0_51700600_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__48999400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48999400 = block;
   block->owner = (Object)__49000580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48999400;

   return block;
};

void code__49000580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49971500(),run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49971220(),ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__48999400();
}

Block make__49000580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49000580 = block;
   block->owner = (Object)__45568300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49000580;

   return block;
};

Block __49990280;

void code__49990280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,lv1_51613560_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49994920(),lvok1_45529000_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49990280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49990280 = block;
   block->owner = (Object)__45568300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49990280;

   return block;
};

Block __50119680;

void code__50119680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rv1_45530100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49994620(),rvok1_45528700_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50119680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50119680 = block;
   block->owner = (Object)__45568300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50119680;

   return block;
};

Block __50816880;

Block __50816280;

void code__50816280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_51613560_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = rv1_45530100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50816280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50816280 = block;
   block->owner = (Object)__50816880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50816280;

   return block;
};

void code__50816880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49993200(),run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49991920(),ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__50816280();
}

Block make__50816880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50816880 = block;
   block->owner = (Object)__45568300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50816880;

   return block;
};

void code__45568300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49972600(),run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__45587740();
 code__47845600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_45529160_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = rvok0_45528760_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49000580();
   }
      }
   }
 code__49990280();
 code__50119680();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_45529000_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = rvok1_45528700_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50816880();
   }
      }
   }
}

Block make__45568300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45568300 = block;
   block->owner = (Object)__45527440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45568300;

   return block;
};

Block __45545700;

void code__45545700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49990620(),lvok0_45529160_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49989780(),rvok0_45528760_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49989560(),lvok1_45529000_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49989220(),rvok1_45528700_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__45545700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45545700 = block;
   block->owner = (Object)__45527440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45545700;

   return block;
};

void code__45527440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49973140(),ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49972940(),run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45568300();
   }
   else {
  code__45545700();
   }
      }
   }
}

Block make__45527440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45527440 = block;
   block->owner = (Object)__51169060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45527440;

   return block;
};

Value make__49988640() {
   static unsigned long long data[] = { 21ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49988560() {
   static unsigned long long data[] = { 233ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49988220() {
   static unsigned long long data[] = { 30ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49988200() {
   static unsigned long long data[] = { 221ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50011800() {
   static unsigned long long data[] = { 249ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50011760() {
   static unsigned long long data[] = { 19ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49895680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49895460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49895360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49894940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49894780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49894280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49893920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49893800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49893520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49893360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49893280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49893160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49893040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49892900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49892800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49892680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49891540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49891340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49890940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49890320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49912460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49912240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49912040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49911920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49911640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49909720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49908480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49929740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49927100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49940360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49959740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49958560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49958200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49958020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49957860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49957620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49957540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49956320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49973140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49972940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49972600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49972340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49971900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49971500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49971220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49994920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49994620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49993200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49991920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49990620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49989780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49989560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49989220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50074200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50073420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50072580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50071360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50071100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50071020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50070580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50070320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50069600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50091020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50090520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50090080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50089960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50089740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50089500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50089420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50089240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50089080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50088960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50088800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50088680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50088620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50088460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50088260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50087420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50086380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50110020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50109020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50108200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50107920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50107600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50107480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50106040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50104020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50102440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50716280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50715420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50714320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50714040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50713900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50713780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50713460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50713140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50713020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_51190840;

SignalI req__mac_51168800_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereq__mac_51168800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_51168800_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack_51168760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__mac_51168740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__add_51168720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_51168720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI fill__channel_51168700_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makefill__channel_51168700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_51168700_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5897_51253420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5895_51253400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5896_51253320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58143_51401200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58144_51499240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58126_51577780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58124_51577760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58125_51577640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58182_51661940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58183_43593560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58212_46201640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58213_47567340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makevalue__z0_48059740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makevalue__z1_49400140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI value__a0_49291660_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makevalue__a0_49291660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_49291660_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI value__a1_49672240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makevalue__a1_49672240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_49672240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI flag__z0_49672220_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeflag__z0_49672220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_49672220_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI flag__z1_49672060_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeflag__z1_49672060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_49672060_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__a0_49672040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__a1_49672020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress__weights0_49671940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_49671940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress__weights1_49671860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights1_49671860_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress__bias_49671640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_49671640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__weights0_49671620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__weights1_49671580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__bias_49671560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58197_49859340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58198_50007140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58199_50007000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI w0_50953720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makew0_50953720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_50953720_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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
         src0 = make__49988640();
         src1 = make__49988560();
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

SignalI w1_51483680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makew1_51483680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w1_51483680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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
         src0 = make__49988220();
         src1 = make__49988200();
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

SignalI b_47603500_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeb_47603500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_47603500_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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
         src0 = make__50011800();
         src1 = make__50011760();
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

SignalI _5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5899_47603340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58100_47602840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58101_48077280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58128_48077260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58129_48077180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SignalI _58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58130_49037680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer0_58_84_51190840;
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

SystemI counter_49210040;

SystemI makecounter_49210040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_49210040 = systemI;
   systemI->owner = (Object)layer0_58_84_51190840;
   systemI->name = "counter";
   systemI->system = counter_58_841_49193440;

   return systemI;
};

SystemI func0_50869800;

SystemI makefunc0_50869800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_50869800 = systemI;
   systemI->owner = (Object)layer0_58_84_51190840;
   systemI->name = "func0";
   systemI->system = func0_58_841_49825140;

   return systemI;
};

SystemI func1_59091320;

SystemI makefunc1_59091320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_59091320 = systemI;
   systemI->owner = (Object)layer0_58_84_51190840;
   systemI->name = "func1";
   systemI->system = func1_58_840_58749840;

   return systemI;
};

Scope channel__w0_5883_51190540;

SignalI trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI maketrig__r_51187600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

SignalI trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI maketrig__w_51187580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

SignalI dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makedbus__r_51256800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

SignalI dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makedbus__w_51299320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

SignalI abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_51299120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

SignalI abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_51299040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

SignalI mem_51446420_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makemem_51446420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51446420_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_5883_51190540;
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

Scope raddr_5884_51190240;

Scope makeraddr_5884_51190240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_51190240 = scope;
   scope->owner = (Object)channel__w0_5883_51190540;
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

Scope waddr_5889_51189820;

Scope makewaddr_5889_51189820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_51189820 = scope;
   scope->owner = (Object)channel__w0_5883_51190540;
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

Scope rinc_5894_51189380;

Scope makerinc_5894_51189380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_51189380 = scope;
   scope->owner = (Object)channel__w0_5883_51190540;
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

Scope winc_5898_51188880;

Scope makewinc_5898_51188880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_51188880 = scope;
   scope->owner = (Object)channel__w0_5883_51190540;
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

Scope rdec_58102_51188460;

Scope makerdec_58102_51188460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_51188460 = scope;
   scope->owner = (Object)channel__w0_5883_51190540;
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

Scope wdec_58107_51188040;

Scope makewdec_58107_51188040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_51188040 = scope;
   scope->owner = (Object)channel__w0_5883_51190540;
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

Behavior __49178300;

Behavior make__49178300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49178300 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg-1] = (Object)behavior;
   behavior->block = make__51735460();

   return behavior;
}

Behavior __47551760;

Behavior make__47551760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47551760 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[dbus__r_51256800_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47552140();

   return behavior;
}

Behavior __47551220;

Behavior make__47551220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47551220 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_5897_51253420_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47551540();

   return behavior;
}

Behavior __47550280;

Behavior make__47550280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47550280 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[trig__r_51187600_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47550640();

   return behavior;
}

Behavior __47547880;

Behavior make__47547880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47547880 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_5895_51253400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47549960();

   return behavior;
}

Behavior __47546760;

Behavior make__47546760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47546760 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__r_51299120_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47547120();

   return behavior;
}

Behavior __47569840;

Behavior make__47569840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47569840 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_5896_51253320_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47546520();

   return behavior;
}

Behavior __47568440;

Behavior make__47568440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47568440 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[trig__w_51187580_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47568840();

   return behavior;
}

Behavior __47564860;

Behavior make__47564860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47564860 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_5899_47603340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47568340();

   return behavior;
}

Behavior __47601460;

Behavior make__47601460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47601460 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__w_51299040_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47579500();

   return behavior;
}

Behavior __47600780;

Behavior make__47600780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47600780 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58100_47602840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47601300();

   return behavior;
}

Behavior __47597800;

Behavior make__47597800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47597800 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[dbus__w_51299320_channel__w0_5883_51190540_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47599020();

   return behavior;
}

Behavior __47844840;

Behavior make__47844840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47844840 = behavior;
   behavior->owner = (Object)channel__w0_5883_51190540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58101_48077280_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47597520();

   return behavior;
}

Scope makechannel__w0_5883_51190540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_51190540 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51187600();
   scope->inners[1] = maketrig__w_51187580();
   scope->inners[2] = makedbus__r_51256800();
   scope->inners[3] = makedbus__w_51299320();
   scope->inners[4] = makeabus__r_51299120();
   scope->inners[5] = makeabus__w_51299040();
   scope->inners[6] = makemem_51446420();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_51190240();
   scope->scopes[1] = makewaddr_5889_51189820();
   scope->scopes[2] = makerinc_5894_51189380();
   scope->scopes[3] = makewinc_5898_51188880();
   scope->scopes[4] = makerdec_58102_51188460();
   scope->scopes[5] = makewdec_58107_51188040();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49178300();
   scope->behaviors[1] = make__47551760();
   scope->behaviors[2] = make__47551220();
   scope->behaviors[3] = make__47550280();
   scope->behaviors[4] = make__47547880();
   scope->behaviors[5] = make__47546760();
   scope->behaviors[6] = make__47569840();
   scope->behaviors[7] = make__47568440();
   scope->behaviors[8] = make__47564860();
   scope->behaviors[9] = make__47601460();
   scope->behaviors[10] = make__47600780();
   scope->behaviors[11] = make__47597800();
   scope->behaviors[12] = make__47844840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49178100;

SignalI trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI maketrig__r_49197400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

SignalI trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI maketrig__w_49197380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

SignalI dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makedbus__r_49461360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

SignalI dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makedbus__w_49653980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

SignalI abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_49653880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

SignalI abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_49653740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

SignalI mem_49831300_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makemem_49831300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49831300_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w1_58112_49178100;
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

Scope raddr_58113_49177800;

Scope makeraddr_58113_49177800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49177800 = scope;
   scope->owner = (Object)channel__w1_58112_49178100;
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

Scope waddr_58118_49177020;

Scope makewaddr_58118_49177020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49177020 = scope;
   scope->owner = (Object)channel__w1_58112_49178100;
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

Scope rinc_58123_49200860;

Scope makerinc_58123_49200860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49200860 = scope;
   scope->owner = (Object)channel__w1_58112_49178100;
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

Scope winc_58127_49200060;

Scope makewinc_58127_49200060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49200060 = scope;
   scope->owner = (Object)channel__w1_58112_49178100;
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

Scope rdec_58131_49198620;

Scope makerdec_58131_49198620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49198620 = scope;
   scope->owner = (Object)channel__w1_58112_49178100;
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

Scope wdec_58136_49198000;

Scope makewdec_58136_49198000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49198000 = scope;
   scope->owner = (Object)channel__w1_58112_49178100;
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

Behavior __51107140;

Behavior make__51107140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51107140 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg-1] = (Object)behavior;
   behavior->block = make__49326680();

   return behavior;
}

Behavior __47860220;

Behavior make__47860220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47860220 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[dbus__r_49461360_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47860780();

   return behavior;
}

Behavior __47880520;

Behavior make__47880520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47880520 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58126_51577780_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47860000();

   return behavior;
}

Behavior __47876740;

Behavior make__47876740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47876740 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[trig__r_49197400_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47877120();

   return behavior;
}

Behavior __47876120;

Behavior make__47876120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47876120 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58124_51577760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47876520();

   return behavior;
}

Behavior __47909100;

Behavior make__47909100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47909100 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__r_49653880_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47897800();

   return behavior;
}

Behavior __47924720;

Behavior make__47924720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47924720 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58125_51577640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47907800();

   return behavior;
}

Behavior __47947280;

Behavior make__47947280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47947280 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[trig__w_49197380_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47923280();

   return behavior;
}

Behavior __47946820;

Behavior make__47946820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47946820 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58128_48077260_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47947220();

   return behavior;
}

Behavior __47957840;

Behavior make__47957840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47957840 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__w_49653740_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47959080();

   return behavior;
}

Behavior __47979720;

Behavior make__47979720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47979720 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58129_48077180_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47957500();

   return behavior;
}

Behavior __47993460;

Behavior make__47993460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47993460 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[dbus__w_49653980_channel__w1_58112_49178100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47994060();

   return behavior;
}

Behavior __47991720;

Behavior make__47991720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47991720 = behavior;
   behavior->owner = (Object)channel__w1_58112_49178100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58130_49037680_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47993380();

   return behavior;
}

Scope makechannel__w1_58112_49178100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49178100 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49197400();
   scope->inners[1] = maketrig__w_49197380();
   scope->inners[2] = makedbus__r_49461360();
   scope->inners[3] = makedbus__w_49653980();
   scope->inners[4] = makeabus__r_49653880();
   scope->inners[5] = makeabus__w_49653740();
   scope->inners[6] = makemem_49831300();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49177800();
   scope->scopes[1] = makewaddr_58118_49177020();
   scope->scopes[2] = makerinc_58123_49200860();
   scope->scopes[3] = makewinc_58127_49200060();
   scope->scopes[4] = makerdec_58131_49198620();
   scope->scopes[5] = makewdec_58136_49198000();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51107140();
   scope->behaviors[1] = make__47860220();
   scope->behaviors[2] = make__47880520();
   scope->behaviors[3] = make__47876740();
   scope->behaviors[4] = make__47876120();
   scope->behaviors[5] = make__47909100();
   scope->behaviors[6] = make__47924720();
   scope->behaviors[7] = make__47947280();
   scope->behaviors[8] = make__47946820();
   scope->behaviors[9] = make__47957840();
   scope->behaviors[10] = make__47979720();
   scope->behaviors[11] = make__47993460();
   scope->behaviors[12] = make__47991720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_51107020;

SignalI reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__0_51169780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__accum_58141_51107020;
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

SignalI reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__1_51235460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__accum_58141_51107020;
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

Scope anum_58142_51106720;

Scope makeanum_58142_51106720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_51106720 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
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

Scope raddr_58145_51106200;

Scope makeraddr_58145_51106200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_51106200 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
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

Scope waddr_58149_51105780;

Scope makewaddr_58149_51105780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_51105780 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
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

Scope rinc_58153_51105320;

SignalI abus__r_51104880_rinc_58153_51105320_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_51104880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51104880_rinc_58153_51105320_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rinc_58153_51105320;
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

Scope makerinc_58153_51105320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_51105320 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51104880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_51104760;

SignalI abus__w_51104340_winc_58158_51104760_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_51104340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51104340_winc_58158_51104760_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)winc_58158_51104760;
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

Scope makewinc_58158_51104760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_51104760 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51104340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_51104200;

SignalI abus__r_51103780_rdec_58163_51104200_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_51103780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51103780_rdec_58163_51104200_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rdec_58163_51104200;
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

Scope makerdec_58163_51104200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_51104200 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51103780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_51103660;

SignalI abus__w_51103260_wdec_58168_51103660_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_51103260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51103260_wdec_58168_51103660_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)wdec_58168_51103660;
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

Scope makewdec_58168_51103660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_51103660 = scope;
   scope->owner = (Object)channel__accum_58141_51107020;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51103260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48028920;

Behavior make__48028920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48028920 = behavior;
   behavior->owner = (Object)channel__accum_58141_51107020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_51169780_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48029260();

   return behavior;
}

Behavior __48028200;

Behavior make__48028200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48028200 = behavior;
   behavior->owner = (Object)channel__accum_58141_51107020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58143_51401200_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48028860();

   return behavior;
}

Behavior __48025940;

Behavior make__48025940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48025940 = behavior;
   behavior->owner = (Object)channel__accum_58141_51107020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__1_51235460_channel__accum_58141_51107020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48026780();

   return behavior;
}

Behavior __48025480;

Behavior make__48025480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48025480 = behavior;
   behavior->owner = (Object)channel__accum_58141_51107020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58144_51499240_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48025780();

   return behavior;
}

Scope makechannel__accum_58141_51107020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_51107020 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51169780();
   scope->inners[1] = makereg__1_51235460();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_51106720();
   scope->scopes[1] = makeraddr_58145_51106200();
   scope->scopes[2] = makewaddr_58149_51105780();
   scope->scopes[3] = makerinc_58153_51105320();
   scope->scopes[4] = makewinc_58158_51104760();
   scope->scopes[5] = makerdec_58163_51104200();
   scope->scopes[6] = makewdec_58168_51103660();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48028920();
   scope->behaviors[1] = make__48028200();
   scope->behaviors[2] = make__48025940();
   scope->behaviors[3] = make__48025480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_51595400;

SignalI lv0_51661540_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelv0_51661540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51661540_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI lv1_51753080_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelv1_51753080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51753080_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI av0_46117500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeav0_46117500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_46117500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI av1_47052580_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeav1_47052580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_47052580_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI rv_47875720_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerv_47875720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_47875720_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI lvok0_47875700_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelvok0_47875700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47875700_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI lvok1_47875500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelvok1_47875500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47875500_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI rvok_47875480_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makervok_47875480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_47875480_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

SignalI run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerun_47875460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47875460_mac__n1_58173_51595400_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58173_51595400;
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

Behavior __48159880;

Behavior make__48159880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48159880 = behavior;
   behavior->owner = (Object)mac__n1_58173_51595400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__47875120();

   return behavior;
}

Scope makemac__n1_58173_51595400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_51595400 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51661540();
   scope->inners[1] = makelv1_51753080();
   scope->inners[2] = makeav0_46117500();
   scope->inners[3] = makeav1_47052580();
   scope->inners[4] = makerv_47875720();
   scope->inners[5] = makelvok0_47875700();
   scope->inners[6] = makelvok1_47875500();
   scope->inners[7] = makervok_47875480();
   scope->inners[8] = makerun_47875460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48159880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_48159600;

SignalI reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__0_49198040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__bias_58180_48159600;
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

SignalI reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__1_49478660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__bias_58180_48159600;
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

Scope anum_58181_48158840;

Scope makeanum_58181_48158840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_48158840 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
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

Scope raddr_58184_48157960;

Scope makeraddr_58184_48157960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_48157960 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
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

Scope waddr_58188_48157380;

Scope makewaddr_58188_48157380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_48157380 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
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

Scope rinc_58192_48156780;

SignalI abus__r_48156280_rinc_58192_48156780_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_48156280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48156280_rinc_58192_48156780_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rinc_58192_48156780;
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

Scope makerinc_58192_48156780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_48156780 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48156280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_48156060;

SignalI abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_48155180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)winc_58196_48156060;
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

Behavior __48090780;

Behavior make__48090780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48090780 = behavior;
   behavior->owner = (Object)winc_58196_48156060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__w_48155180_winc_58196_48156060_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48091080();

   return behavior;
}

Behavior __48089820;

Behavior make__48089820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48089820 = behavior;
   behavior->owner = (Object)winc_58196_48156060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58199_50007000_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48090680();

   return behavior;
}

Scope makewinc_58196_48156060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_48156060 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48155180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48090780();
   scope->behaviors[1] = make__48089820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_48154740;

SignalI abus__r_48154300_rdec_58200_48154740_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_48154300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48154300_rdec_58200_48154740_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rdec_58200_48154740;
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

Scope makerdec_58200_48154740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_48154740 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48154300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_48154120;

SignalI abus__w_48153700_wdec_58205_48154120_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_48153700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48153700_wdec_58205_48154120_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)wdec_58205_48154120;
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

Scope makewdec_58205_48154120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_48154120 = scope;
   scope->owner = (Object)channel__bias_58180_48159600;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48153700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48043200;

Behavior make__48043200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48043200 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48043460();

   return behavior;
}

Behavior __48042800;

Behavior make__48042800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48042800 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58182_51661940_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48043140();

   return behavior;
}

Behavior __48040260;

Behavior make__48040260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48040260 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48041160();

   return behavior;
}

Behavior __48038400;

Behavior make__48038400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48038400 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58183_43593560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48040160();

   return behavior;
}

Behavior __48060340;

Behavior make__48060340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48060340 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_49198040_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48060800();

   return behavior;
}

Behavior __48059240;

Behavior make__48059240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48059240 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58197_49859340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48060240();

   return behavior;
}

Behavior __48058100;

Behavior make__48058100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48058100 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__1_49478660_channel__bias_58180_48159600_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48058420();

   return behavior;
}

Behavior __48057700;

Behavior make__48057700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48057700 = behavior;
   behavior->owner = (Object)channel__bias_58180_48159600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58198_50007140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48058060();

   return behavior;
}

Scope makechannel__bias_58180_48159600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_48159600 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49198040();
   scope->inners[1] = makereg__1_49478660();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_48158840();
   scope->scopes[1] = makeraddr_58184_48157960();
   scope->scopes[2] = makewaddr_58188_48157380();
   scope->scopes[3] = makerinc_58192_48156780();
   scope->scopes[4] = makewinc_58196_48156060();
   scope->scopes[5] = makerdec_58200_48154740();
   scope->scopes[6] = makewdec_58205_48154120();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48043200();
   scope->behaviors[1] = make__48042800();
   scope->behaviors[2] = make__48040260();
   scope->behaviors[3] = make__48038400();
   scope->behaviors[4] = make__48060340();
   scope->behaviors[5] = make__48059240();
   scope->behaviors[6] = make__48058100();
   scope->behaviors[7] = make__48057700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_50865100;

SignalI reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__0_50965040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__z_58210_50865100;
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

SignalI reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__1_51073420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__z_58210_50865100;
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

Scope anum_58211_50864800;

Scope makeanum_58211_50864800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_50864800 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
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

Scope raddr_58214_50864380;

Scope makeraddr_58214_50864380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_50864380 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
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

Scope waddr_58218_50888320;

Scope makewaddr_58218_50888320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_50888320 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
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

Scope rinc_58222_50887780;

SignalI abus__r_50887400_rinc_58222_50887780_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_50887400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50887400_rinc_58222_50887780_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rinc_58222_50887780;
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

Scope makerinc_58222_50887780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_50887780 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50887400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_50887280;

SignalI abus__w_50886900_winc_58226_50887280_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_50886900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50886900_winc_58226_50887280_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)winc_58226_50887280;
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

Scope makewinc_58226_50887280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_50887280 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50886900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_50886780;

SignalI abus__r_50886340_rdec_58230_50886780_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_50886340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50886340_rdec_58230_50886780_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rdec_58230_50886780;
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

Scope makerdec_58230_50886780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_50886780 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50886340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_50886100;

SignalI abus__w_50885600_wdec_58235_50886100_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_50885600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50885600_wdec_58235_50886100_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)wdec_58235_50886100;
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

Scope makewdec_58235_50886100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_50886100 = scope;
   scope->owner = (Object)channel__z_58210_50865100;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50885600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48138000;

Behavior make__48138000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48138000 = behavior;
   behavior->owner = (Object)channel__z_58210_50865100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_50965040_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48139300();

   return behavior;
}

Behavior __48136840;

Behavior make__48136840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48136840 = behavior;
   behavior->owner = (Object)channel__z_58210_50865100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58212_46201640_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48137640();

   return behavior;
}

Behavior __48156140;

Behavior make__48156140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48156140 = behavior;
   behavior->owner = (Object)channel__z_58210_50865100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__1_51073420_channel__z_58210_50865100_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48156960();

   return behavior;
}

Behavior __48154500;

Behavior make__48154500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48154500 = behavior;
   behavior->owner = (Object)channel__z_58210_50865100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58213_47567340_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__48155460();

   return behavior;
}

Scope makechannel__z_58210_50865100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_50865100 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50965040();
   scope->inners[1] = makereg__1_51073420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_50864800();
   scope->scopes[1] = makeraddr_58214_50864380();
   scope->scopes[2] = makewaddr_58218_50888320();
   scope->scopes[3] = makerinc_58222_50887780();
   scope->scopes[4] = makewinc_58226_50887280();
   scope->scopes[5] = makerdec_58230_50886780();
   scope->scopes[6] = makewdec_58235_50886100();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48138000();
   scope->behaviors[1] = make__48136840();
   scope->behaviors[2] = make__48156140();
   scope->behaviors[3] = make__48154500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_51448040;

SignalI lv0_51550100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelv0_51550100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51550100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI lv1_51613560_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelv1_51613560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51613560_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI rv0_51700600_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerv0_51700600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_51700600_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI rv1_45530100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerv1_45530100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_45530100_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI lvok0_45529160_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelvok0_45529160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_45529160_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI lvok1_45529000_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelvok1_45529000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_45529000_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI rvok0_45528760_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makervok0_45528760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_45528760_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI rvok1_45528700_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makervok1_45528700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_45528700_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

SignalI run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerun_45528020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_45528020_add__n_58240_51448040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58240_51448040;
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

Behavior __51169060;

Behavior make__51169060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51169060 = behavior;
   behavior->owner = (Object)add__n_58240_51448040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__45527440();

   return behavior;
}

Scope makeadd__n_58240_51448040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_51448040 = scope;
   scope->owner = (Object)layer0_58_84_51190840;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51550100();
   scope->inners[1] = makelv1_51613560();
   scope->inners[2] = makerv0_51700600();
   scope->inners[3] = makerv1_45530100();
   scope->inners[4] = makelvok0_45529160();
   scope->inners[5] = makelvok1_45529000();
   scope->inners[6] = makervok0_45528760();
   scope->inners[7] = makervok1_45528700();
   scope->inners[8] = makerun_45528020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51169060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59943260;

Behavior make__59943260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59943260 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__59944600();

   return behavior;
}

Behavior __49775940;

Behavior make__49775940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49775940 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__59943140();

   return behavior;
}

Behavior __50930980;

Behavior make__50930980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50930980 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__49775720();

   return behavior;
}

Behavior __57466400;

Behavior make__57466400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57466400 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__50930620();

   return behavior;
}

Behavior __46427480;

Behavior make__46427480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46427480 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[req_57463960_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__mac_51168740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__46429340();

   return behavior;
}

Behavior __47532700;

Behavior make__47532700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47532700 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[fill_57463980_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__weights0_49671620_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__weights1_49671580_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__bias_49671560_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__47534640();

   return behavior;
}

Behavior __47531560;

Behavior make__47531560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47531560 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[clk_57464040_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack_51168760_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[rst_57464020_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[value__z0_48059740_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[value__z1_49400140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__a0_49672040_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__a1_49672020_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__46431940();

   return behavior;
}

Behavior __47530720;

Behavior make__47530720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47530720 = behavior;
   behavior->owner = (Object)layer0_58_84_51190840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__mac_49210200_counter_58_841_49193440_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[a_50870000_func0_58_841_49825140_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[a_59091460_func1_58_840_58749840_layer0_58_84_51190840_layer0_58_840_57466040_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__46431680();

   return behavior;
}

Scope makelayer0_58_84_51190840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_51190840 = scope;
   scope->owner = (Object)layer0_58_840_57466040;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_49210040();
   scope->systemIs[1] = makefunc0_50869800();
   scope->systemIs[2] = makefunc1_59091320();
   scope->num_inners = 43;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_51168800();
   scope->inners[1] = makeack_51168760();
   scope->inners[2] = makeack__mac_51168740();
   scope->inners[3] = makeack__add_51168720();
   scope->inners[4] = makefill__channel_51168700();
   scope->inners[5] = make_5897_51253420();
   scope->inners[6] = make_5895_51253400();
   scope->inners[7] = make_5896_51253320();
   scope->inners[8] = make_58143_51401200();
   scope->inners[9] = make_58144_51499240();
   scope->inners[10] = make_58126_51577780();
   scope->inners[11] = make_58124_51577760();
   scope->inners[12] = make_58125_51577640();
   scope->inners[13] = make_58182_51661940();
   scope->inners[14] = make_58183_43593560();
   scope->inners[15] = make_58212_46201640();
   scope->inners[16] = make_58213_47567340();
   scope->inners[17] = makevalue__z0_48059740();
   scope->inners[18] = makevalue__z1_49400140();
   scope->inners[19] = makevalue__a0_49291660();
   scope->inners[20] = makevalue__a1_49672240();
   scope->inners[21] = makeflag__z0_49672220();
   scope->inners[22] = makeflag__z1_49672060();
   scope->inners[23] = makeack__a0_49672040();
   scope->inners[24] = makeack__a1_49672020();
   scope->inners[25] = makeaddress__weights0_49671940();
   scope->inners[26] = makeaddress__weights1_49671860();
   scope->inners[27] = makeaddress__bias_49671640();
   scope->inners[28] = makeack__weights0_49671620();
   scope->inners[29] = makeack__weights1_49671580();
   scope->inners[30] = makeack__bias_49671560();
   scope->inners[31] = make_58197_49859340();
   scope->inners[32] = make_58198_50007140();
   scope->inners[33] = make_58199_50007000();
   scope->inners[34] = makew0_50953720();
   scope->inners[35] = makew1_51483680();
   scope->inners[36] = makeb_47603500();
   scope->inners[37] = make_5899_47603340();
   scope->inners[38] = make_58100_47602840();
   scope->inners[39] = make_58101_48077280();
   scope->inners[40] = make_58128_48077260();
   scope->inners[41] = make_58129_48077180();
   scope->inners[42] = make_58130_49037680();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_51190540();
   scope->scopes[1] = makechannel__w1_58112_49178100();
   scope->scopes[2] = makechannel__accum_58141_51107020();
   scope->scopes[3] = makemac__n1_58173_51595400();
   scope->scopes[4] = makechannel__bias_58180_48159600();
   scope->scopes[5] = makechannel__z_58210_50865100();
   scope->scopes[6] = makeadd__n_58240_51448040();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59943260();
   scope->behaviors[1] = make__49775940();
   scope->behaviors[2] = make__50930980();
   scope->behaviors[3] = make__57466400();
   scope->behaviors[4] = make__46427480();
   scope->behaviors[5] = make__47532700();
   scope->behaviors[6] = make__47531560();
   scope->behaviors[7] = make__47530720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_57466040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_57466040 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57464040();
   systemT->inputs[1] = makerst_57464020();
   systemT->inputs[2] = makefill_57463980();
   systemT->inputs[3] = makereq_57463960();
   systemT->inputs[4] = make_5815_57580540();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57580500();
   systemT->outputs[1] = make_5813_57580480();
   systemT->outputs[2] = make_5814_57580400();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_57639820();
   systemT->inouts[1] = make_5856_57846540();

   systemT->scope = makelayer0_58_84_51190840();

   return systemT;
}