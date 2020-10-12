#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_57916920;

SignalI clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeclk_57914900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerst_57914860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makefill_57914840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereq_57914780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI _5815_57982460_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5815_57982460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_57982460_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__layer_57982420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI _5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5813_57982400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI _5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5814_57982320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI _5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5855_58115540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

SignalI _5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5856_58314320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_840_57916920;
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

Block __50478880;

Block __50478640;

void code__50478640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56523160(),ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56523100(),ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56523040(),ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50478640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50478640 = block;
   block->owner = (Object)__50478880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50478640;

   return block;
};

void code__50478880() {
   {
      Value cond = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50478640();
   }
      }
   }
}

Block make__50478880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50478880 = block;
   block->owner = (Object)__50476620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50478880;

   return block;
};

Block __50476500;

Block __50475520;

Block __50475220;

void code__50475220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56522840(),flag__z0_50345440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50475220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50475220 = block;
   block->owner = (Object)__50475520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50475220;

   return block;
};

Block __50793940;

void code__50793940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56522660(),flag__z1_50345420_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50793940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50793940 = block;
   block->owner = (Object)__50475520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50793940;

   return block;
};

void code__50475520() {
 code__50475220();
 code__50793940();
}

Block make__50475520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50475520 = block;
   block->owner = (Object)__50476500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50475520;

   return block;
};

Block __50476260;

void code__50476260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56522560(),flag__z0_50345440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56522460(),flag__z1_50345420_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50476260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50476260 = block;
   block->owner = (Object)__50476500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50476260;

   return block;
};

void code__50476500() {
   {
      Value cond = ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50475520();
   }
   else {
  code__50476260();
   }
      }
   }
}

Block make__50476500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50476500 = block;
   block->owner = (Object)__54734460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50476500;

   return block;
};

Block __54734340;

Block __54734120;

void code__54734120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56522300(),ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56522220(),ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54734120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54734120 = block;
   block->owner = (Object)__54734340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54734120;

   return block;
};

Block __54733360;

Block __54733160;

void code__54733160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50230620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5855_58115540_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56521800(),ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__54733160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54733160 = block;
   block->owner = (Object)__54733360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54733160;

   return block;
};

Block __56145760;

void code__56145760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_50345460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5856_58314320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56521500(),ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56145760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56145760 = block;
   block->owner = (Object)__54733360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56145760;

   return block;
};

void code__54733360() {
 code__54733160();
 code__56145760();
}

Block make__54733360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54733360 = block;
   block->owner = (Object)__54734340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54733360;

   return block;
};

void code__54734340() {
   {
      Value cond = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54734120();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_50345440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = flag__z1_50345420_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__54733360();
   }
      }
   }
}

Block make__54734340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54734340 = block;
   block->owner = (Object)__56305220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54734340;

   return block;
};

Block __56305100;

Block __56304940;

Block __56304620;

void code__56304620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56521100(),_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56304620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56304620 = block;
   block->owner = (Object)__56304940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56304620;

   return block;
};

void code__56304940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56521200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56304620();
   }
      }
   }
}

Block make__56304940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56304940 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56304940;

   return block;
};

Block __56303960;

Block __56303640;

void code__56303640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520900(),_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56303640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56303640 = block;
   block->owner = (Object)__56303960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56303640;

   return block;
};

void code__56303960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56521000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56303640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520800(),_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56303960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56303960 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56303960;

   return block;
};

Block __56327560;

Block __56327240;

void code__56327240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520640(),_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56327240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56327240 = block;
   block->owner = (Object)__56327560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56327240;

   return block;
};

void code__56327560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56520720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56327240();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520580(),_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56327560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56327560 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56327560;

   return block;
};

Block __56326400;

void code__56326400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520460(),address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520380(),ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520300(),address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520200(),ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520100(),address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56520020(),ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56326400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56326400 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56326400;

   return block;
};

Block __56324920;

Block __56324640;

Block __56324380;

Block __56324000;

void code__56324000() {
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
                  src0 = _58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56519620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56519420(),_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
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
            ref = w0_45215920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56324000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56324000 = block;
   block->owner = (Object)__56324380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56324000;

   return block;
};

void code__56324380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56519780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56324000();
   }
      }
   }
}

Block make__56324380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56324380 = block;
   block->owner = (Object)__56324640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56324380;

   return block;
};

void code__56324640() {
 code__56324380();
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
                  src0 = address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56518920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56324640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56324640 = block;
   block->owner = (Object)__56324920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56324640;

   return block;
};

Block __56638480;

Block __56638300;

Block __56637900;

void code__56637900() {
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
                  src0 = _58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56518420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56518280(),_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
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
            ref = w1_49018580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56637900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56637900 = block;
   block->owner = (Object)__56638300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56637900;

   return block;
};

void code__56638300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56518660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56637900();
   }
      }
   }
}

Block make__56638300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56638300 = block;
   block->owner = (Object)__56638480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56638300;

   return block;
};

void code__56638480() {
 code__56638300();
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
                  src0 = address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56517580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56638480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56638480 = block;
   block->owner = (Object)__56324920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56638480;

   return block;
};

Block __57142220;

Block __57142040;

Block __57141680;

Block __57141220;

void code__57141220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_50079440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57141220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57141220 = block;
   block->owner = (Object)__57141680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57141220;

   return block;
};

Block __57579060;

void code__57579060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_50079440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57579060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57579060 = block;
   block->owner = (Object)__57141680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57579060;

   return block;
};

void code__57141680() {
{
      Value value = _58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__56517140())) {
    code__57141220();
         }
         else if (value2integer(value) == value2integer(make__56516940())) {
    code__57579060();
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
                  src0 = _58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56541080();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57141680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57141680 = block;
   block->owner = (Object)__57142040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57141680;

   return block;
};

void code__57142040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56517280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57141680();
   }
      }
   }
}

Block make__57142040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57142040 = block;
   block->owner = (Object)__57142220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57142040;

   return block;
};

void code__57142220() {
 code__57142040();
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
                  src0 = address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56540860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57142220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57142220 = block;
   block->owner = (Object)__56324920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57142220;

   return block;
};

void code__56324920() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56324640();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56638480();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57142220();
   }
      }
   }
}

Block make__56324920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56324920 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56324920;

   return block;
};

Block __57812900;

void code__57812900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56540540(),ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57812900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57812900 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57812900;

   return block;
};

Block __57812180;

void code__57812180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56540320(),ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57812180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57812180 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57812180;

   return block;
};

Block __57811520;

void code__57811520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56540060(),ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__57811520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57811520 = block;
   block->owner = (Object)__56305100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57811520;

   return block;
};

void code__56305100() {
 code__56304940();
 code__56303960();
 code__56327560();
   {
      Value cond = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56326400();
   }
      }
   }
   {
      Value cond = fill__channel_47342500_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56324920();
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
               src0 = address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56540720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57812900();
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
               src0 = address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56540460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57812180();
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
               src0 = address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56540200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57811520();
   }
      }
   }
}

Block make__56305100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56305100 = block;
   block->owner = (Object)__57917300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56305100;

   return block;
};

Block __56002660;

void code__56002660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_47342580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56002660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56002660 = block;
   block->owner = (Object)__56002240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56002660;

   return block;
};

Block __56034060;

void code__56034060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
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
                        src0 = ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                        src1 = ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                        dst = and_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_47342500_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56034060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56034060 = block;
   block->owner = (Object)__56033480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56034060;

   return block;
};

Block __56003020;

void code__56003020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,clk_50328580_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,ack_50328460_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,rst_50328440_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,z__value_45601760_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      src1 = ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_57982420_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56003020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56003020 = block;
   block->owner = (Object)__56074120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56003020;

   return block;
};

Block __56002960;

void code__56002960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,value__a0_50230620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,value__a1_50345460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56002960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56002960 = block;
   block->owner = (Object)__56073760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56002960;

   return block;
};

Block __48999600;

Block __50001880;

void code__50001880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,make_ref_rangeS(mem_47501200_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640,value2integer(abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value),value2integer(abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50001880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50001880 = block;
   block->owner = (Object)__48999600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50001880;

   return block;
};

void code__48999600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47501200_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50001880();
   }
      }
   }
}

Block make__48999600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48999600 = block;
   block->owner = (Object)__49700020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48999600;

   return block;
};

Block __56072900;

void code__56072900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56072900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56072900 = block;
   block->owner = (Object)__56072660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56072900;

   return block;
};

Block __56072620;

void code__56072620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56072620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56072620 = block;
   block->owner = (Object)__56072300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56072620;

   return block;
};

Block __56071720;

void code__56071720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56071720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56071720 = block;
   block->owner = (Object)__56071180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56071720;

   return block;
};

Block __56070880;

void code__56070880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56070880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56070880 = block;
   block->owner = (Object)__56069600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56070880;

   return block;
};

Block __56068500;

void code__56068500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56068500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56068500 = block;
   block->owner = (Object)__56068100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56068500;

   return block;
};

Block __56068060;

void code__56068060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56068060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56068060 = block;
   block->owner = (Object)__56067840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56068060;

   return block;
};

Block __56067500;

void code__56067500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56067500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56067500 = block;
   block->owner = (Object)__56067280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56067500;

   return block;
};

Block __56067240;

void code__56067240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56067240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56067240 = block;
   block->owner = (Object)__56067020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56067240;

   return block;
};

Block __56066360;

void code__56066360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56066360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56066360 = block;
   block->owner = (Object)__56147840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56066360;

   return block;
};

Block __56147440;

void code__56147440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56147440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56147440 = block;
   block->owner = (Object)__56146660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56147440;

   return block;
};

Block __56144800;

void code__56144800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56144800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56144800 = block;
   block->owner = (Object)__56144360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56144800;

   return block;
};

Block __56144200;

void code__56144200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56144200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56144200 = block;
   block->owner = (Object)__56143740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56144200;

   return block;
};

Block __50508480;

Block __50741420;

void code__50741420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,make_ref_rangeS(mem_50228580_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640,value2integer(abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value),value2integer(abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50741420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50741420 = block;
   block->owner = (Object)__50508480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50741420;

   return block;
};

void code__50508480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50228580_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            idx = value2integer(abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50741420();
   }
      }
   }
}

Block make__50508480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50508480 = block;
   block->owner = (Object)__44640480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50508480;

   return block;
};

Block __56141520;

void code__56141520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56141520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56141520 = block;
   block->owner = (Object)__56141260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56141520;

   return block;
};

Block __56141200;

void code__56141200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56141200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56141200 = block;
   block->owner = (Object)__56141000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56141200;

   return block;
};

Block __56140420;

void code__56140420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56140420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56140420 = block;
   block->owner = (Object)__56139960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56140420;

   return block;
};

Block __56139920;

void code__56139920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56139920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56139920 = block;
   block->owner = (Object)__56164180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56139920;

   return block;
};

Block __56162600;

void code__56162600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56162600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56162600 = block;
   block->owner = (Object)__56161700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56162600;

   return block;
};

Block __56161660;

void code__56161660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56161660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56161660 = block;
   block->owner = (Object)__56161020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56161660;

   return block;
};

Block __56160540;

void code__56160540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56160540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56160540 = block;
   block->owner = (Object)__56160320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56160540;

   return block;
};

Block __56160260;

void code__56160260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56160260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56160260 = block;
   block->owner = (Object)__56160080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56160260;

   return block;
};

Block __56159700;

void code__56159700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56159700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56159700 = block;
   block->owner = (Object)__56159360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56159700;

   return block;
};

Block __56159280;

void code__56159280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56159280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56159280 = block;
   block->owner = (Object)__56159100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56159280;

   return block;
};

Block __56158520;

void code__56158520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56158520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56158520 = block;
   block->owner = (Object)__56158260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56158520;

   return block;
};

Block __56158120;

void code__56158120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56158120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56158120 = block;
   block->owner = (Object)__56157720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56158120;

   return block;
};

Block __56212840;

void code__56212840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56212840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56212840 = block;
   block->owner = (Object)__56212600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56212840;

   return block;
};

Block __56212540;

void code__56212540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56212540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56212540 = block;
   block->owner = (Object)__56212340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56212540;

   return block;
};

Block __56211980;

void code__56211980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56211980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56211980 = block;
   block->owner = (Object)__56211660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56211980;

   return block;
};

Block __56211500;

void code__56211500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56211500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56211500 = block;
   block->owner = (Object)__56211240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56211500;

   return block;
};

Block __49852560;

Block __49852400;

Block __49852080;

void code__49852080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56403200(),_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49852080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49852080 = block;
   block->owner = (Object)__49852400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49852080;

   return block;
};

void code__49852400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56403280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49852080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56403120(),_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49852400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49852400 = block;
   block->owner = (Object)__49852560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49852400;

   return block;
};

Block __49851420;

Block __49850940;

void code__49850940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402940(),_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49850940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49850940 = block;
   block->owner = (Object)__49851420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49850940;

   return block;
};

void code__49851420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56403020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49850940();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402760(),_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49851420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49851420 = block;
   block->owner = (Object)__49852560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49851420;

   return block;
};

Block __49850320;

Block __49850000;

void code__49850000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402520(),_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49850000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49850000 = block;
   block->owner = (Object)__49850320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49850000;

   return block;
};

void code__49850320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56402660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49850000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402440(),_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49850320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49850320 = block;
   block->owner = (Object)__49852560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49850320;

   return block;
};

Block __49848740;

void code__49848740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402100(),rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56401980(),lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56442840(),wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56442760(),lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56442700(),wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49848740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49848740 = block;
   block->owner = (Object)__49852560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49848740;

   return block;
};

Block __50098820;

Block __50098340;

Block __50098180;

Block __50097860;

Block __50096680;

Block __50096480;

void code__50096480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5815_57982460_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,rv_49852800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56441260(),rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50096480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50096480 = block;
   block->owner = (Object)__50096680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50096480;

   return block;
};

void code__50096680() {
 code__50096480();
}

Block make__50096680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50096680 = block;
   block->owner = (Object)__50097860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50096680;

   return block;
};

Block __50097700;

void code__50097700() {
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
                  src0 = _5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56441140();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_57982320_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56440980(),_5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50097700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50097700 = block;
   block->owner = (Object)__50097860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50097700;

   return block;
};

void code__50097860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_57982400_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56441520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50096680();
   }
   else {
  code__50097700();
   }
      }
   }
}

Block make__50097860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50097860 = block;
   block->owner = (Object)__50098180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50097860;

   return block;
};

void code__50098180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56441620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50097860();
   }
      }
   }
}

Block make__50098180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50098180 = block;
   block->owner = (Object)__50098340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50098180;

   return block;
};

void code__50098340() {
 code__50098180();
}

Block make__50098340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50098340 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50098340;

   return block;
};

Block __50243000;

Block __50242840;

Block __50242520;

Block __50265940;

Block __50265680;

void code__50265680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,lv0_49117360_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56440480(),lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50265680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50265680 = block;
   block->owner = (Object)__50265940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50265680;

   return block;
};

void code__50265940() {
 code__50265680();
}

Block make__50265940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50265940 = block;
   block->owner = (Object)__50242520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50265940;

   return block;
};

Block __50242360;

void code__50242360() {
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
                  src0 = _5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56440320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56440180(),_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50242360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50242360 = block;
   block->owner = (Object)__50242520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50242360;

   return block;
};

void code__50242520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56440700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50265940();
   }
   else {
  code__50242360();
   }
      }
   }
}

Block make__50242520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50242520 = block;
   block->owner = (Object)__50242840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50242520;

   return block;
};

void code__50242840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56440800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50242520();
   }
      }
   }
}

Block make__50242840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50242840 = block;
   block->owner = (Object)__50243000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50242840;

   return block;
};

void code__50243000() {
 code__50242840();
}

Block make__50243000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50243000 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50243000;

   return block;
};

Block __50428320;

Block __50427740;

Block __50427580;

void code__50427580() {
}

Block make__50427580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50427580 = block;
   block->owner = (Object)__50427740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50427580;

   return block;
};

Block __50812200;

void code__50812200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49396800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56438800(),wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50812200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50812200 = block;
   block->owner = (Object)__50427740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50812200;

   return block;
};

void code__50427740() {
 code__50427580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_49396800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
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
                              src0 = lv0_49117360_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49852800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56439080();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49396800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__50812200();
}

Block make__50427740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50427740 = block;
   block->owner = (Object)__50428320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50427740;

   return block;
};

void code__50428320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56439640(),ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56439520(),run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__50427740();
}

Block make__50428320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50428320 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50428320;

   return block;
};

Block __44622420;

void code__44622420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56438600(),wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56438540(),wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56438480(),lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56438420(),lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56438360(),rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__44622420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44622420 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44622420;

   return block;
};

Block __44774880;

Block __44774460;

Block __44744420;

Block __44656860;

Block __44655780;

void code__44655780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,lv1_49227460_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56437720(),lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__44655780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44655780 = block;
   block->owner = (Object)__44656860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44655780;

   return block;
};

void code__44656860() {
 code__44655780();
}

Block make__44656860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44656860 = block;
   block->owner = (Object)__44744420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44656860;

   return block;
};

Block __44737580;

void code__44737580() {
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
                  src0 = _58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56437540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56437440(),_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__44737580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44737580 = block;
   block->owner = (Object)__44744420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44737580;

   return block;
};

void code__44744420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56438020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44656860();
   }
   else {
  code__44737580();
   }
      }
   }
}

Block make__44744420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44744420 = block;
   block->owner = (Object)__44774460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44744420;

   return block;
};

void code__44774460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56438140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44744420();
   }
      }
   }
}

Block make__44774460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44774460 = block;
   block->owner = (Object)__44774880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44774460;

   return block;
};

void code__44774880() {
 code__44774460();
}

Block make__44774880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44774880 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44774880;

   return block;
};

Block __47429840;

Block __47429020;

Block __47428780;

void code__47428780() {
}

Block make__47428780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47428780 = block;
   block->owner = (Object)__47429020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47428780;

   return block;
};

Block __49184460;

void code__49184460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49244960_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56436120(),wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49184460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49184460 = block;
   block->owner = (Object)__47429020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49184460;

   return block;
};

void code__47429020() {
 code__47428780();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_49244960_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
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
                              src0 = lv1_49227460_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49852800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56436320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49244960_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__49184460();
}

Block make__47429020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47429020 = block;
   block->owner = (Object)__47429840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47429020;

   return block;
};

void code__47429840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56437080(),ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56436880(),run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__47429020();
}

Block make__47429840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47429840 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47429840;

   return block;
};

Block __48946760;

void code__48946760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435940(),wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435820(),wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435760(),lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435680(),lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435580(),rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48946760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48946760 = block;
   block->owner = (Object)__50098820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48946760;

   return block;
};

void code__50098820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56441980(),run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50098340();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50243000();
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
               src0 = lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               src1 = rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50428320();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44622420();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__44774880();
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
               src0 = lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               src1 = rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47429840();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48946760();
   }
      }
   }
}

Block make__50098820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50098820 = block;
   block->owner = (Object)__49852560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50098820;

   return block;
};

Block __49871940;

void code__49871940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435500(),av0_49396800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56435420(),av1_49244960_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49871940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49871940 = block;
   block->owner = (Object)__49852560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49871940;

   return block;
};

void code__49852560() {
 code__49852400();
 code__49851420();
 code__49850320();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402320(),ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56402240(),run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49848740();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_47342580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50098820();
   }
   else {
  code__49871940();
   }
      }
   }
}

Block make__49852560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49852560 = block;
   block->owner = (Object)__48944960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49852560;

   return block;
};

Block __56208600;

void code__56208600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56208600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56208600 = block;
   block->owner = (Object)__56208400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56208600;

   return block;
};

Block __56208360;

void code__56208360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56208360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56208360 = block;
   block->owner = (Object)__56208200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56208360;

   return block;
};

Block __56207900;

void code__56207900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56207900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56207900 = block;
   block->owner = (Object)__56207720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56207900;

   return block;
};

Block __56207660;

void code__56207660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56207660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56207660 = block;
   block->owner = (Object)__56207380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56207660;

   return block;
};

Block __56206780;

void code__56206780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56206780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56206780 = block;
   block->owner = (Object)__56206520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56206780;

   return block;
};

Block __56206460;

void code__56206460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56206460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56206460 = block;
   block->owner = (Object)__56206180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56206460;

   return block;
};

Block __56205820;

void code__56205820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56205820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56205820 = block;
   block->owner = (Object)__56205620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56205820;

   return block;
};

Block __56205580;

void code__56205580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56205580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56205580 = block;
   block->owner = (Object)__56205400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56205580;

   return block;
};

Block __56243820;

void code__56243820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56243820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56243820 = block;
   block->owner = (Object)__56243460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56243820;

   return block;
};

Block __56243420;

void code__56243420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56243420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56243420 = block;
   block->owner = (Object)__56243260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56243420;

   return block;
};

Block __56241560;

void code__56241560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56241560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56241560 = block;
   block->owner = (Object)__56241140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56241560;

   return block;
};

Block __56241100;

void code__56241100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56241100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56241100 = block;
   block->owner = (Object)__56240920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56241100;

   return block;
};

Block __56240500;

void code__56240500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56240500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56240500 = block;
   block->owner = (Object)__56240240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56240500;

   return block;
};

Block __56240200;

void code__56240200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56240200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56240200 = block;
   block->owner = (Object)__56239940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56240200;

   return block;
};

Block __49166600;

Block __49164780;

Block __49164420;

void code__49164420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,lv0_48595860_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56471460(),lvok0_49166800_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49164420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49164420 = block;
   block->owner = (Object)__49164780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49164420;

   return block;
};

Block __48939940;

void code__48939940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,rv0_48923580_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56471220(),rvok0_49166760_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__48939940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48939940 = block;
   block->owner = (Object)__49164780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48939940;

   return block;
};

Block __49696300;

Block __49695400;

void code__49695400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_48595860_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      src1 = rv0_48923580_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49695400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49695400 = block;
   block->owner = (Object)__49696300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49695400;

   return block;
};

void code__49696300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56471040(),run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56470940(),ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__49695400();
}

Block make__49696300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49696300 = block;
   block->owner = (Object)__49164780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49696300;

   return block;
};

Block __50375320;

void code__50375320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,lv1_48733040_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56470340(),lvok1_49166780_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50375320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50375320 = block;
   block->owner = (Object)__49164780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50375320;

   return block;
};

Block __50524300;

void code__50524300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,rv1_49166820_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56470120(),rvok1_49166740_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50524300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50524300 = block;
   block->owner = (Object)__49164780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50524300;

   return block;
};

Block __50727140;

Block __50726660;

void code__50726660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_48733040_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      src1 = rv1_49166820_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__50726660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50726660 = block;
   block->owner = (Object)__50727140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50726660;

   return block;
};

void code__50727140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56469920(),run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56469860(),ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__50726660();
}

Block make__50727140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50727140 = block;
   block->owner = (Object)__49164780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50727140;

   return block;
};

void code__49164780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56471780(),run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
 code__49164420();
 code__48939940();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49166800_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = rvok0_49166760_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49696300();
   }
      }
   }
 code__50375320();
 code__50524300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49166780_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = rvok1_49166740_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50727140();
   }
      }
   }
}

Block make__49164780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49164780 = block;
   block->owner = (Object)__49166600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49164780;

   return block;
};

Block __49166040;

void code__49166040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56469580(),lvok0_49166800_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56469500(),rvok0_49166760_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56469360(),lvok1_49166780_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56469300(),rvok1_49166740_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__49166040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49166040 = block;
   block->owner = (Object)__49166600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49166040;

   return block;
};

void code__49166600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56473100(),ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56472700(),run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         src1 = run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49164780();
   }
   else {
  code__49166040();
   }
      }
   }
}

Block make__49166600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49166600 = block;
   block->owner = (Object)__47342780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49166600;

   return block;
};

Value make__56469020() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56469000() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56468620() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56468600() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56468340() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56468320() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56403280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56403200() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56403120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56403020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56402940() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56402760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56402660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56402520() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56402440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56402320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56402240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56402100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56401980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56442840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56442760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56442700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56441980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56441620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56441520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56441260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56441140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56440980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56440800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56440700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56440480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56440320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56440180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56439640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56439520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56439080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56438800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56438600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56438540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56438480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56438420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56438360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56438140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56438020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56437720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56437540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56437440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56437080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56436880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56436320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56436120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56435940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56435820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56435760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56435680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56435580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56435500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56435420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56473100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56472700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56471780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56471460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56471220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56471040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56470940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56470340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56470120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56469920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56469860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56469580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56469500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56469360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56469300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56523160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56523100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56523040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56522840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56522660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56522560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56522460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56522300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56522220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56521800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56521500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56521200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56521100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56521000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56520900() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56520800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56520720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56520640() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56520580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56520460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56520380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56520300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56520200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56520100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56520020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56519780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56519620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56519420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56518920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56518660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56518420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56518280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56517580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56517280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56517140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56516940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56541080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56540860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56540720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56540540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56540460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56540320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56540200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56540060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_42172200;

SignalI req__mac_47342580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereq__mac_47342580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_47342580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack_47342560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__mac_47342540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__add_47342520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_47342520_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI fill__channel_47342500_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makefill__channel_47342500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_47342500_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5897_47514560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5895_47514480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5896_47514160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58143_48676880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58144_48710080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58126_48970840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58124_48970780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58125_48969620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58182_49180480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58183_49360000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58212_49243700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58213_49867580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makevalue__z0_49710400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makevalue__z1_50130460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI value__a0_50230620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makevalue__a0_50230620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50230620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI value__a1_50345460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makevalue__a1_50345460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_50345460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI flag__z0_50345440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeflag__z0_50345440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50345440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI flag__z1_50345420_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeflag__z1_50345420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_50345420_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__a0_50345380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__a1_50345340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress__weights0_50345220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_50345220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress__weights1_50345100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights1_50345100_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress__bias_50345000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_50345000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__weights0_50344940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__weights1_50344920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeack__bias_50344900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58197_50429620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58198_50490340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58199_50490220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI w0_45215920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makew0_45215920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_45215920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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
         src0 = make__56469020();
         src1 = make__56469000();
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

SignalI w1_49018580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makew1_49018580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w1_49018580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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
         src0 = make__56468620();
         src1 = make__56468600();
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

SignalI b_50079440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeb_50079440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_50079440_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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
         src0 = make__56468340();
         src1 = make__56468320();
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

SignalI _5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_5899_50079400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58100_50079280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58101_50183780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58128_50183760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58129_50183680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SignalI _58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI make_58130_50312340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)layer0_58_84_42172200;
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

SystemI counter_50328160;

SystemI makecounter_50328160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_50328160 = systemI;
   systemI->owner = (Object)layer0_58_84_42172200;
   systemI->name = "counter";
   systemI->system = counter_58_841_50331200;

   return systemI;
};

SystemI func0_49242900;

SystemI makefunc0_49242900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49242900 = systemI;
   systemI->owner = (Object)layer0_58_84_42172200;
   systemI->name = "func0";
   systemI->system = func0_58_841_49015620;

   return systemI;
};

SystemI func1_47431760;

SystemI makefunc1_47431760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_47431760 = systemI;
   systemI->owner = (Object)layer0_58_84_42172200;
   systemI->name = "func1";
   systemI->system = func1_58_840_58947620;

   return systemI;
};

Scope channel__w0_5883_42169780;

SignalI trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI maketrig__r_43210340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

SignalI trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI maketrig__w_43210320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

SignalI dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makedbus__r_47042800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

SignalI dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makedbus__w_47359420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

SignalI abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_47359220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

SignalI abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_47359040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

SignalI mem_47501200_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makemem_47501200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47501200_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w0_5883_42169780;
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

Scope raddr_5884_42165060;

Scope makeraddr_5884_42165060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_42165060 = scope;
   scope->owner = (Object)channel__w0_5883_42169780;
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

Scope waddr_5889_42784380;

Scope makewaddr_5889_42784380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_42784380 = scope;
   scope->owner = (Object)channel__w0_5883_42169780;
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

Scope rinc_5894_42879980;

Scope makerinc_5894_42879980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_42879980 = scope;
   scope->owner = (Object)channel__w0_5883_42169780;
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

Scope winc_5898_43135120;

Scope makewinc_5898_43135120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_43135120 = scope;
   scope->owner = (Object)channel__w0_5883_42169780;
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

Scope rdec_58102_43191820;

Scope makerdec_58102_43191820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_43191820 = scope;
   scope->owner = (Object)channel__w0_5883_42169780;
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

Scope wdec_58107_43189700;

Scope makewdec_58107_43189700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_43189700 = scope;
   scope->owner = (Object)channel__w0_5883_42169780;
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

Behavior __49700020;

Behavior make__49700020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49700020 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg-1] = (Object)behavior;
   behavior->block = make__48999600();

   return behavior;
}

Behavior __56072660;

Behavior make__56072660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56072660 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[dbus__r_47042800_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56072900();

   return behavior;
}

Behavior __56072300;

Behavior make__56072300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56072300 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5897_47514560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56072620();

   return behavior;
}

Behavior __56071180;

Behavior make__56071180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56071180 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[trig__r_43210340_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56071720();

   return behavior;
}

Behavior __56069600;

Behavior make__56069600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56069600 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5895_47514480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56070880();

   return behavior;
}

Behavior __56068100;

Behavior make__56068100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56068100 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__r_47359220_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56068500();

   return behavior;
}

Behavior __56067840;

Behavior make__56067840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56067840 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5896_47514160_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56068060();

   return behavior;
}

Behavior __56067280;

Behavior make__56067280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56067280 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[trig__w_43210320_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56067500();

   return behavior;
}

Behavior __56067020;

Behavior make__56067020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56067020 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_5899_50079400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56067240();

   return behavior;
}

Behavior __56147840;

Behavior make__56147840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56147840 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__w_47359040_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56066360();

   return behavior;
}

Behavior __56146660;

Behavior make__56146660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56146660 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58100_50079280_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56147440();

   return behavior;
}

Behavior __56144360;

Behavior make__56144360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56144360 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[dbus__w_47359420_channel__w0_5883_42169780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56144800();

   return behavior;
}

Behavior __56143740;

Behavior make__56143740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56143740 = behavior;
   behavior->owner = (Object)channel__w0_5883_42169780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58101_50183780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56144200();

   return behavior;
}

Scope makechannel__w0_5883_42169780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_42169780 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_43210340();
   scope->inners[1] = maketrig__w_43210320();
   scope->inners[2] = makedbus__r_47042800();
   scope->inners[3] = makedbus__w_47359420();
   scope->inners[4] = makeabus__r_47359220();
   scope->inners[5] = makeabus__w_47359040();
   scope->inners[6] = makemem_47501200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_42165060();
   scope->scopes[1] = makewaddr_5889_42784380();
   scope->scopes[2] = makerinc_5894_42879980();
   scope->scopes[3] = makewinc_5898_43135120();
   scope->scopes[4] = makerdec_58102_43191820();
   scope->scopes[5] = makewdec_58107_43189700();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49700020();
   scope->behaviors[1] = make__56072660();
   scope->behaviors[2] = make__56072300();
   scope->behaviors[3] = make__56071180();
   scope->behaviors[4] = make__56069600();
   scope->behaviors[5] = make__56068100();
   scope->behaviors[6] = make__56067840();
   scope->behaviors[7] = make__56067280();
   scope->behaviors[8] = make__56067020();
   scope->behaviors[9] = make__56147840();
   scope->behaviors[10] = make__56146660();
   scope->behaviors[11] = make__56144360();
   scope->behaviors[12] = make__56143740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49699900;

SignalI trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI maketrig__r_49696960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

SignalI trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI maketrig__w_49696940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

SignalI dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makedbus__r_50101860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

SignalI dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makedbus__w_50144040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

SignalI abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_50143960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

SignalI abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_50143880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

SignalI mem_50228580_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makemem_50228580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50228580_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__w1_58112_49699900;
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

Scope raddr_58113_49699600;

Scope makeraddr_58113_49699600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49699600 = scope;
   scope->owner = (Object)channel__w1_58112_49699900;
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

Scope waddr_58118_49699180;

Scope makewaddr_58118_49699180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49699180 = scope;
   scope->owner = (Object)channel__w1_58112_49699900;
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

Scope rinc_58123_49698760;

Scope makerinc_58123_49698760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49698760 = scope;
   scope->owner = (Object)channel__w1_58112_49699900;
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

Scope winc_58127_49698240;

Scope makewinc_58127_49698240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49698240 = scope;
   scope->owner = (Object)channel__w1_58112_49699900;
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

Scope rdec_58131_49697820;

Scope makerdec_58131_49697820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49697820 = scope;
   scope->owner = (Object)channel__w1_58112_49699900;
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

Scope wdec_58136_49697400;

Scope makewdec_58136_49697400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49697400 = scope;
   scope->owner = (Object)channel__w1_58112_49699900;
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

Behavior __44640480;

Behavior make__44640480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44640480 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->neg[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_neg-1] = (Object)behavior;
   behavior->block = make__50508480();

   return behavior;
}

Behavior __56141260;

Behavior make__56141260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56141260 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[dbus__r_50101860_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56141520();

   return behavior;
}

Behavior __56141000;

Behavior make__56141000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56141000 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58126_48970840_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56141200();

   return behavior;
}

Behavior __56139960;

Behavior make__56139960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56139960 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[trig__r_49696960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56140420();

   return behavior;
}

Behavior __56164180;

Behavior make__56164180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56164180 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58124_48970780_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56139920();

   return behavior;
}

Behavior __56161700;

Behavior make__56161700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56161700 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__r_50143960_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56162600();

   return behavior;
}

Behavior __56161020;

Behavior make__56161020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56161020 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58125_48969620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56161660();

   return behavior;
}

Behavior __56160320;

Behavior make__56160320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56160320 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[trig__w_49696940_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56160540();

   return behavior;
}

Behavior __56160080;

Behavior make__56160080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56160080 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58128_50183760_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56160260();

   return behavior;
}

Behavior __56159360;

Behavior make__56159360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56159360 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__w_50143880_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56159700();

   return behavior;
}

Behavior __56159100;

Behavior make__56159100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56159100 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58129_50183680_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56159280();

   return behavior;
}

Behavior __56158260;

Behavior make__56158260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56158260 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[dbus__w_50144040_channel__w1_58112_49699900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56158520();

   return behavior;
}

Behavior __56157720;

Behavior make__56157720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56157720 = behavior;
   behavior->owner = (Object)channel__w1_58112_49699900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58130_50312340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56158120();

   return behavior;
}

Scope makechannel__w1_58112_49699900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49699900 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49696960();
   scope->inners[1] = maketrig__w_49696940();
   scope->inners[2] = makedbus__r_50101860();
   scope->inners[3] = makedbus__w_50144040();
   scope->inners[4] = makeabus__r_50143960();
   scope->inners[5] = makeabus__w_50143880();
   scope->inners[6] = makemem_50228580();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49699600();
   scope->scopes[1] = makewaddr_58118_49699180();
   scope->scopes[2] = makerinc_58123_49698760();
   scope->scopes[3] = makewinc_58127_49698240();
   scope->scopes[4] = makerdec_58131_49697820();
   scope->scopes[5] = makewdec_58136_49697400();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44640480();
   scope->behaviors[1] = make__56141260();
   scope->behaviors[2] = make__56141000();
   scope->behaviors[3] = make__56139960();
   scope->behaviors[4] = make__56164180();
   scope->behaviors[5] = make__56161700();
   scope->behaviors[6] = make__56161020();
   scope->behaviors[7] = make__56160320();
   scope->behaviors[8] = make__56160080();
   scope->behaviors[9] = make__56159360();
   scope->behaviors[10] = make__56159100();
   scope->behaviors[11] = make__56158260();
   scope->behaviors[12] = make__56157720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_44640240;

SignalI reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__0_47255160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__accum_58141_44640240;
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

SignalI reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__1_47410920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__accum_58141_44640240;
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

Scope anum_58142_44639600;

Scope makeanum_58142_44639600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_44639600 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
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

Scope raddr_58145_44776080;

Scope makeraddr_58145_44776080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_44776080 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
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

Scope waddr_58149_44774320;

Scope makewaddr_58149_44774320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_44774320 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
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

Scope rinc_58153_44772580;

SignalI abus__r_44738500_rinc_58153_44772580_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_44738500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44738500_rinc_58153_44772580_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rinc_58153_44772580;
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

Scope makerinc_58153_44772580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_44772580 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_44738500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_44737200;

SignalI abus__w_44661720_winc_58158_44737200_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_44661720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44661720_winc_58158_44737200_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)winc_58158_44737200;
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

Scope makewinc_58158_44737200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_44737200 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_44661720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_44661320;

SignalI abus__r_44659980_rdec_58163_44661320_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_44659980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_44659980_rdec_58163_44661320_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rdec_58163_44661320;
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

Scope makerdec_58163_44661320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_44661320 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_44659980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_44659700;

SignalI abus__w_44657520_wdec_58168_44659700_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_44657520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_44657520_wdec_58168_44659700_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)wdec_58168_44659700;
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

Scope makewdec_58168_44659700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_44659700 = scope;
   scope->owner = (Object)channel__accum_58141_44640240;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_44657520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56212600;

Behavior make__56212600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56212600 = behavior;
   behavior->owner = (Object)channel__accum_58141_44640240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_47255160_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56212840();

   return behavior;
}

Behavior __56212340;

Behavior make__56212340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56212340 = behavior;
   behavior->owner = (Object)channel__accum_58141_44640240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58143_48676880_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56212540();

   return behavior;
}

Behavior __56211660;

Behavior make__56211660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56211660 = behavior;
   behavior->owner = (Object)channel__accum_58141_44640240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__1_47410920_channel__accum_58141_44640240_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56211980();

   return behavior;
}

Behavior __56211240;

Behavior make__56211240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56211240 = behavior;
   behavior->owner = (Object)channel__accum_58141_44640240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58144_48710080_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56211500();

   return behavior;
}

Scope makechannel__accum_58141_44640240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_44640240 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47255160();
   scope->inners[1] = makereg__1_47410920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_44639600();
   scope->scopes[1] = makeraddr_58145_44776080();
   scope->scopes[2] = makewaddr_58149_44774320();
   scope->scopes[3] = makerinc_58153_44772580();
   scope->scopes[4] = makewinc_58158_44737200();
   scope->scopes[5] = makerdec_58163_44661320();
   scope->scopes[6] = makewdec_58168_44659700();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56212600();
   scope->behaviors[1] = make__56212340();
   scope->behaviors[2] = make__56211660();
   scope->behaviors[3] = make__56211240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_48897740;

SignalI lv0_49117360_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelv0_49117360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49117360_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI lv1_49227460_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelv1_49227460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49227460_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI av0_49396800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeav0_49396800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49396800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI av1_49244960_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeav1_49244960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49244960_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI rv_49852800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerv_49852800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49852800_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelvok0_49852780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49852780_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelvok1_49852760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49852760_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makervok_49852740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49852740_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makewok0_49852720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49852720_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makewok1_49852700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_49852700_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

SignalI run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerun_49852680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49852680_mac__n1_58173_48897740_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)mac__n1_58173_48897740;
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

Behavior __48944960;

Behavior make__48944960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48944960 = behavior;
   behavior->owner = (Object)mac__n1_58173_48897740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__49852560();

   return behavior;
}

Scope makemac__n1_58173_48897740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_48897740 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49117360();
   scope->inners[1] = makelv1_49227460();
   scope->inners[2] = makeav0_49396800();
   scope->inners[3] = makeav1_49244960();
   scope->inners[4] = makerv_49852800();
   scope->inners[5] = makelvok0_49852780();
   scope->inners[6] = makelvok1_49852760();
   scope->inners[7] = makervok_49852740();
   scope->inners[8] = makewok0_49852720();
   scope->inners[9] = makewok1_49852700();
   scope->inners[10] = makerun_49852680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48944960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_48944820;

SignalI reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__0_49471760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__bias_58180_48944820;
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

SignalI reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__1_49677100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__bias_58180_48944820;
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

Scope anum_58181_48944420;

Scope makeanum_58181_48944420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_48944420 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
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

Scope raddr_58184_48943520;

Scope makeraddr_58184_48943520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_48943520 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
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

Scope waddr_58188_48942760;

Scope makewaddr_58188_48942760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_48942760 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
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

Scope rinc_58192_48942060;

SignalI abus__r_48941300_rinc_58192_48942060_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_48941300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48941300_rinc_58192_48942060_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rinc_58192_48942060;
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

Scope makerinc_58192_48942060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_48942060 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48941300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_48941120;

SignalI abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_48940680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)winc_58196_48941120;
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

Behavior __56243460;

Behavior make__56243460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56243460 = behavior;
   behavior->owner = (Object)winc_58196_48941120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[abus__w_48940680_winc_58196_48941120_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56243820();

   return behavior;
}

Behavior __56243260;

Behavior make__56243260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56243260 = behavior;
   behavior->owner = (Object)winc_58196_48941120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58199_50490220_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56243420();

   return behavior;
}

Scope makewinc_58196_48941120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_48941120 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48940680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56243460();
   scope->behaviors[1] = make__56243260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_48940260;

SignalI abus__r_48939780_rdec_58200_48940260_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_48939780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48939780_rdec_58200_48940260_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rdec_58200_48940260;
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

Scope makerdec_58200_48940260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_48940260 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48939780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_48939660;

SignalI abus__w_48939240_wdec_58205_48939660_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_48939240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48939240_wdec_58205_48939660_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)wdec_58205_48939660;
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

Scope makewdec_58205_48939660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_48939660 = scope;
   scope->owner = (Object)channel__bias_58180_48944820;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48939240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56208400;

Behavior make__56208400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56208400 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56208600();

   return behavior;
}

Behavior __56208200;

Behavior make__56208200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56208200 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58182_49180480_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56208360();

   return behavior;
}

Behavior __56207720;

Behavior make__56207720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56207720 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56207900();

   return behavior;
}

Behavior __56207380;

Behavior make__56207380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56207380 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58183_49360000_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56207660();

   return behavior;
}

Behavior __56206520;

Behavior make__56206520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56206520 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_49471760_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56206780();

   return behavior;
}

Behavior __56206180;

Behavior make__56206180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56206180 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58197_50429620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56206460();

   return behavior;
}

Behavior __56205620;

Behavior make__56205620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56205620 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__1_49677100_channel__bias_58180_48944820_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56205820();

   return behavior;
}

Behavior __56205400;

Behavior make__56205400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56205400 = behavior;
   behavior->owner = (Object)channel__bias_58180_48944820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58198_50490340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56205580();

   return behavior;
}

Scope makechannel__bias_58180_48944820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_48944820 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49471760();
   scope->inners[1] = makereg__1_49677100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_48944420();
   scope->scopes[1] = makeraddr_58184_48943520();
   scope->scopes[2] = makewaddr_58188_48942760();
   scope->scopes[3] = makerinc_58192_48942060();
   scope->scopes[4] = makewinc_58196_48941120();
   scope->scopes[5] = makerdec_58200_48940260();
   scope->scopes[6] = makewdec_58205_48939660();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56208400();
   scope->behaviors[1] = make__56208200();
   scope->behaviors[2] = make__56207720();
   scope->behaviors[3] = make__56207380();
   scope->behaviors[4] = make__56206520();
   scope->behaviors[5] = make__56206180();
   scope->behaviors[6] = make__56205620();
   scope->behaviors[7] = make__56205400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_50676920;

SignalI reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__0_50758340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__z_58210_50676920;
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

SignalI reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makereg__1_50861980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)channel__z_58210_50676920;
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

Scope anum_58211_50676560;

Scope makeanum_58211_50676560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_50676560 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
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

Scope raddr_58214_50675860;

Scope makeraddr_58214_50675860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_50675860 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
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

Scope waddr_58218_50699940;

Scope makewaddr_58218_50699940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_50699940 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
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

Scope rinc_58222_50699440;

SignalI abus__r_50698940_rinc_58222_50699440_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_50698940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50698940_rinc_58222_50699440_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rinc_58222_50699440;
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

Scope makerinc_58222_50699440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_50699440 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50698940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_50698800;

SignalI abus__w_50698120_winc_58226_50698800_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_50698120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50698120_winc_58226_50698800_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)winc_58226_50698800;
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

Scope makewinc_58226_50698800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_50698800 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50698120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_50697980;

SignalI abus__r_50697500_rdec_58230_50697980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__r_50697500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50697500_rdec_58230_50697980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)rdec_58230_50697980;
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

Scope makerdec_58230_50697980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_50697980 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50697500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_50697380;

SignalI abus__w_50697000_wdec_58235_50697380_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeabus__w_50697000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50697000_wdec_58235_50697380_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)wdec_58235_50697380;
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

Scope makewdec_58235_50697380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_50697380 = scope;
   scope->owner = (Object)channel__z_58210_50676920;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50697000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56241140;

Behavior make__56241140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56241140 = behavior;
   behavior->owner = (Object)channel__z_58210_50676920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__0_50758340_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56241560();

   return behavior;
}

Behavior __56240920;

Behavior make__56240920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56240920 = behavior;
   behavior->owner = (Object)channel__z_58210_50676920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58212_49243700_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56241100();

   return behavior;
}

Behavior __56240240;

Behavior make__56240240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56240240 = behavior;
   behavior->owner = (Object)channel__z_58210_50676920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[reg__1_50861980_channel__z_58210_50676920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56240500();

   return behavior;
}

Behavior __56239940;

Behavior make__56239940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56239940 = behavior;
   behavior->owner = (Object)channel__z_58210_50676920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   _58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   _58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[_58213_49867580_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56240200();

   return behavior;
}

Scope makechannel__z_58210_50676920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_50676920 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50758340();
   scope->inners[1] = makereg__1_50861980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_50676560();
   scope->scopes[1] = makeraddr_58214_50675860();
   scope->scopes[2] = makewaddr_58218_50699940();
   scope->scopes[3] = makerinc_58222_50699440();
   scope->scopes[4] = makewinc_58226_50698800();
   scope->scopes[5] = makerdec_58230_50697980();
   scope->scopes[6] = makewdec_58235_50697380();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56241140();
   scope->behaviors[1] = make__56240920();
   scope->behaviors[2] = make__56240240();
   scope->behaviors[3] = make__56239940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_47551620;

SignalI lv0_48595860_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelv0_48595860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48595860_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI lv1_48733040_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelv1_48733040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_48733040_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI rv0_48923580_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerv0_48923580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_48923580_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI rv1_49166820_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerv1_49166820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_49166820_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI lvok0_49166800_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelvok0_49166800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49166800_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI lvok1_49166780_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makelvok1_49166780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49166780_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI rvok0_49166760_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makervok0_49166760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49166760_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI rvok1_49166740_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makervok1_49166740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_49166740_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

SignalI run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makerun_49166720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49166720_add__n_58240_47551620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)add__n_58240_47551620;
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

Behavior __47342780;

Behavior make__47342780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47342780 = behavior;
   behavior->owner = (Object)add__n_58240_47551620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__49166600();

   return behavior;
}

Scope makeadd__n_58240_47551620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_47551620 = scope;
   scope->owner = (Object)layer0_58_84_42172200;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48595860();
   scope->inners[1] = makelv1_48733040();
   scope->inners[2] = makerv0_48923580();
   scope->inners[3] = makerv1_49166820();
   scope->inners[4] = makelvok0_49166800();
   scope->inners[5] = makelvok1_49166780();
   scope->inners[6] = makervok0_49166760();
   scope->inners[7] = makervok1_49166740();
   scope->inners[8] = makerun_49166720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47342780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50476620;

Behavior make__50476620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50476620 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__50478880();

   return behavior;
}

Behavior __54734460;

Behavior make__54734460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54734460 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__50476500();

   return behavior;
}

Behavior __56305220;

Behavior make__56305220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56305220 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__54734340();

   return behavior;
}

Behavior __57917300;

Behavior make__57917300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57917300 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->pos[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_pos-1] = (Object)behavior;
   behavior->block = make__56305100();

   return behavior;
}

Behavior __56002240;

Behavior make__56002240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56002240 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[req_57914780_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__mac_47342540_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56002660();

   return behavior;
}

Behavior __56033480;

Behavior make__56033480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56033480 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[fill_57914840_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__weights0_50344940_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__weights1_50344920_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__bias_50344900_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56034060();

   return behavior;
}

Behavior __56074120;

Behavior make__56074120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56074120 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[clk_57914900_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack_47342560_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[rst_57914860_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[value__z0_49710400_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[value__z1_50130460_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__a0_50345380_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__a1_50345340_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56003020();

   return behavior;
}

Behavior __56073760;

Behavior make__56073760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56073760 = behavior;
   behavior->owner = (Object)layer0_58_84_42172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[ack__mac_50328400_counter_58_841_50331200_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[a_47432040_func1_58_840_58947620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56002960();

   return behavior;
}

Scope makelayer0_58_84_42172200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_42172200 = scope;
   scope->owner = (Object)layer0_58_840_57916920;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_50328160();
   scope->systemIs[1] = makefunc0_49242900();
   scope->systemIs[2] = makefunc1_47431760();
   scope->num_inners = 43;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_47342580();
   scope->inners[1] = makeack_47342560();
   scope->inners[2] = makeack__mac_47342540();
   scope->inners[3] = makeack__add_47342520();
   scope->inners[4] = makefill__channel_47342500();
   scope->inners[5] = make_5897_47514560();
   scope->inners[6] = make_5895_47514480();
   scope->inners[7] = make_5896_47514160();
   scope->inners[8] = make_58143_48676880();
   scope->inners[9] = make_58144_48710080();
   scope->inners[10] = make_58126_48970840();
   scope->inners[11] = make_58124_48970780();
   scope->inners[12] = make_58125_48969620();
   scope->inners[13] = make_58182_49180480();
   scope->inners[14] = make_58183_49360000();
   scope->inners[15] = make_58212_49243700();
   scope->inners[16] = make_58213_49867580();
   scope->inners[17] = makevalue__z0_49710400();
   scope->inners[18] = makevalue__z1_50130460();
   scope->inners[19] = makevalue__a0_50230620();
   scope->inners[20] = makevalue__a1_50345460();
   scope->inners[21] = makeflag__z0_50345440();
   scope->inners[22] = makeflag__z1_50345420();
   scope->inners[23] = makeack__a0_50345380();
   scope->inners[24] = makeack__a1_50345340();
   scope->inners[25] = makeaddress__weights0_50345220();
   scope->inners[26] = makeaddress__weights1_50345100();
   scope->inners[27] = makeaddress__bias_50345000();
   scope->inners[28] = makeack__weights0_50344940();
   scope->inners[29] = makeack__weights1_50344920();
   scope->inners[30] = makeack__bias_50344900();
   scope->inners[31] = make_58197_50429620();
   scope->inners[32] = make_58198_50490340();
   scope->inners[33] = make_58199_50490220();
   scope->inners[34] = makew0_45215920();
   scope->inners[35] = makew1_49018580();
   scope->inners[36] = makeb_50079440();
   scope->inners[37] = make_5899_50079400();
   scope->inners[38] = make_58100_50079280();
   scope->inners[39] = make_58101_50183780();
   scope->inners[40] = make_58128_50183760();
   scope->inners[41] = make_58129_50183680();
   scope->inners[42] = make_58130_50312340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_42169780();
   scope->scopes[1] = makechannel__w1_58112_49699900();
   scope->scopes[2] = makechannel__accum_58141_44640240();
   scope->scopes[3] = makemac__n1_58173_48897740();
   scope->scopes[4] = makechannel__bias_58180_48944820();
   scope->scopes[5] = makechannel__z_58210_50676920();
   scope->scopes[6] = makeadd__n_58240_47551620();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50476620();
   scope->behaviors[1] = make__54734460();
   scope->behaviors[2] = make__56305220();
   scope->behaviors[3] = make__57917300();
   scope->behaviors[4] = make__56002240();
   scope->behaviors[5] = make__56033480();
   scope->behaviors[6] = make__56074120();
   scope->behaviors[7] = make__56073760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_57916920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_57916920 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57914900();
   systemT->inputs[1] = makerst_57914860();
   systemT->inputs[2] = makefill_57914840();
   systemT->inputs[3] = makereq_57914780();
   systemT->inputs[4] = make_5815_57982460();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57982420();
   systemT->outputs[1] = make_5813_57982400();
   systemT->outputs[2] = make_5814_57982320();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_58115540();
   systemT->inouts[1] = make_5856_58314320();

   systemT->scope = makelayer0_58_84_42172200();

   return systemT;
}