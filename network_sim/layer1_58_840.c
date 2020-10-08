#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_58217260;

SignalI clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeclk_58213760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
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

SignalI rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerst_58213740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
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

SignalI fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makefill_58213680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
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

SignalI req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereq_58213660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
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

SignalI _5866_58328740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5866_58328740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_58328740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
   signalI->name = ":66";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5867_58736120_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5867_58736120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_58736120_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
   signalI->name = ":67";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_58736080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__layer_58736080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_58736080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
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

SignalI _5868_58735920_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5868_58735920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_58735920_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
   signalI->name = ":68";
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

SignalI _5832_59029120_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_5832_59029120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_59029120_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_840_58217260;
   signalI->name = ":32";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __51517920;

Block __51516400;

void code__51516400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51304940(),ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51304740(),ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51304060(),ack__add_49478580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51516400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51516400 = block;
   block->owner = (Object)__51517920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51516400;

   return block;
};

void code__51517920() {
   {
      Value cond = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51516400();
   }
      }
   }
}

Block make__51517920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51517920 = block;
   block->owner = (Object)__51514040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51517920;

   return block;
};

Block __51513600;

Block __51512600;

Block __51511480;

void code__51511480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51303620(),flag__z0_51253060_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51511480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51511480 = block;
   block->owner = (Object)__51512600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51511480;

   return block;
};

void code__51512600() {
 code__51511480();
}

Block make__51512600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51512600 = block;
   block->owner = (Object)__51513600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51512600;

   return block;
};

Block __51513300;

void code__51513300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51303520(),flag__z0_51253060_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51513300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51513300 = block;
   block->owner = (Object)__51513600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51513300;

   return block;
};

void code__51513600() {
   {
      Value cond = ack__add_49478580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51512600();
   }
   else {
  code__51513300();
   }
      }
   }
}

Block make__51513600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51513600 = block;
   block->owner = (Object)__56605980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51513600;

   return block;
};

Block __56605860;

Block __56605600;

void code__56605600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51303260(),ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56605600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56605600 = block;
   block->owner = (Object)__56605860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56605600;

   return block;
};

Block __56604980;

Block __56604820;

void code__56604820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_51253080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_5832_59029120_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51302720(),ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56604820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56604820 = block;
   block->owner = (Object)__56604980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56604820;

   return block;
};

void code__56604980() {
 code__56604820();
}

Block make__56604980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56604980 = block;
   block->owner = (Object)__56605860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56604980;

   return block;
};

void code__56605860() {
   {
      Value cond = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56605600();
   }
   else if (value2integer(flag__z0_51253060_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value)) {
  code__56604980();
   }
      }
   }
}

Block make__56605860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56605860 = block;
   block->owner = (Object)__56902880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56605860;

   return block;
};

Block __56902760;

Block __56902580;

Block __56901640;

void code__56901640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51302160(),_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56901640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56901640 = block;
   block->owner = (Object)__56902580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56901640;

   return block;
};

void code__56902580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51302360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56901640();
   }
      }
   }
}

Block make__56902580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56902580 = block;
   block->owner = (Object)__56902760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56902580;

   return block;
};

Block __56974700;

Block __56974320;

void code__56974320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51301700(),_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56974320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56974320 = block;
   block->owner = (Object)__56974700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56974320;

   return block;
};

void code__56974700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51302040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56974320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51301500(),_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56974700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56974700 = block;
   block->owner = (Object)__56902760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56974700;

   return block;
};

Block __56973480;

void code__56973480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51300340(),address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51299680(),ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51321280(),address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51315200(),ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56973480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56973480 = block;
   block->owner = (Object)__56902760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56973480;

   return block;
};

Block __56971880;

Block __56971640;

Block __56971460;

Block __56970860;

void code__56970860() {
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
                  src0 = _58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51369020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51368780(),_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
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
            ref = w0_56902040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56970860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56970860 = block;
   block->owner = (Object)__56971460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56970860;

   return block;
};

void code__56971460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51369480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56970860();
   }
      }
   }
}

Block make__56971460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56971460 = block;
   block->owner = (Object)__56971640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56971460;

   return block;
};

void code__56971640() {
 code__56971460();
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
                  src0 = address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51367560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__56971640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56971640 = block;
   block->owner = (Object)__56971880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56971640;

   return block;
};

Block __57546180;

Block __57546000;

Block __57545460;

Block __57544720;

void code__57544720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_57451940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57544720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57544720 = block;
   block->owner = (Object)__57545460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57544720;

   return block;
};

void code__57545460() {
{
      Value value = _58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__51366940())) {
    code__57544720();
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
                  src0 = _58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51366300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57545460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57545460 = block;
   block->owner = (Object)__57546000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57545460;

   return block;
};

void code__57546000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51367080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57545460();
   }
      }
   }
}

Block make__57546000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57546000 = block;
   block->owner = (Object)__57546180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57546000;

   return block;
};

void code__57546180() {
 code__57546000();
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
                  src0 = address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51365700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57546180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57546180 = block;
   block->owner = (Object)__56971880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57546180;

   return block;
};

void code__56971880() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56971640();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57546180();
   }
      }
   }
}

Block make__56971880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56971880 = block;
   block->owner = (Object)__56902760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56971880;

   return block;
};

Block __58219480;

void code__58219480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51365120(),ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__58219480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58219480 = block;
   block->owner = (Object)__56902760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58219480;

   return block;
};

Block __58218580;

void code__58218580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51386980(),ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__58218580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58218580 = block;
   block->owner = (Object)__56902760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58218580;

   return block;
};

void code__56902760() {
 code__56902580();
 code__56974700();
   {
      Value cond = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56973480();
   }
      }
   }
   {
      Value cond = fill__channel_49478560_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56971880();
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
               src0 = address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51365400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58219480();
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
               src0 = address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51364440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58218580();
   }
      }
   }
}

Block make__56902760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56902760 = block;
   block->owner = (Object)__58217680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56902760;

   return block;
};

Block __50885000;

void code__50885000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49478840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50885000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50885000 = block;
   block->owner = (Object)__50883880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50885000;

   return block;
};

Block __50915280;

void code__50915280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  src1 = ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_49478560_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50915280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50915280 = block;
   block->owner = (Object)__50913720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50915280;

   return block;
};

Block __50885500;

void code__50885500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,clk_57610520_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,ack_57610500_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rst_57610480_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,ack__layer_58736080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50885500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50885500 = block;
   block->owner = (Object)__50937280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50885500;

   return block;
};

Block __50885340;

void code__50885340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,value__a0_51253080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50885340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50885340 = block;
   block->owner = (Object)__50935340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50885340;

   return block;
};

Block __59075000;

Block __59407580;

void code__59407580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,make_ref_rangeS(mem_58299220_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700,value2integer(abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value),value2integer(abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__59407580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59407580 = block;
   block->owner = (Object)__59075000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59407580;

   return block;
};

void code__59075000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58299220_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            idx = value2integer(abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59407580();
   }
      }
   }
}

Block make__59075000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59075000 = block;
   block->owner = (Object)__59772400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59075000;

   return block;
};

Block __50931480;

void code__50931480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50931480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50931480 = block;
   block->owner = (Object)__50930540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50931480;

   return block;
};

Block __50930420;

void code__50930420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50930420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50930420 = block;
   block->owner = (Object)__50929700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50930420;

   return block;
};

Block __50951500;

void code__50951500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50951500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50951500 = block;
   block->owner = (Object)__50950760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50951500;

   return block;
};

Block __50950000;

void code__50950000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50950000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50950000 = block;
   block->owner = (Object)__50947920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50950000;

   return block;
};

Block __50967280;

void code__50967280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50967280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50967280 = block;
   block->owner = (Object)__50965820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50967280;

   return block;
};

Block __50965480;

void code__50965480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50965480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50965480 = block;
   block->owner = (Object)__50964320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50965480;

   return block;
};

Block __50984840;

void code__50984840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50984840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50984840 = block;
   block->owner = (Object)__50984140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50984840;

   return block;
};

Block __50984060;

void code__50984060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50984060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50984060 = block;
   block->owner = (Object)__50983260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50984060;

   return block;
};

Block __50981740;

void code__50981740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50981740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50981740 = block;
   block->owner = (Object)__50980720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50981740;

   return block;
};

Block __50980660;

void code__50980660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50980660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50980660 = block;
   block->owner = (Object)__50979900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50980660;

   return block;
};

Block __51003320;

void code__51003320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51003320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51003320 = block;
   block->owner = (Object)__51002840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51003320;

   return block;
};

Block __51002760;

void code__51002760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51002760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51002760 = block;
   block->owner = (Object)__51002460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51002760;

   return block;
};

Block __50998200;

void code__50998200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50998200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50998200 = block;
   block->owner = (Object)__50997940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50998200;

   return block;
};

Block __50997880;

void code__50997880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50997880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50997880 = block;
   block->owner = (Object)__50997460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50997880;

   return block;
};

Block __49908880;

Block __49908300;

Block __49930120;

void code__49930120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51233480(),_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49930120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49930120 = block;
   block->owner = (Object)__49908300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49930120;

   return block;
};

void code__49908300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51233980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49930120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51233000(),_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49908300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49908300 = block;
   block->owner = (Object)__49908880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49908300;

   return block;
};

Block __49926500;

Block __49942080;

void code__49942080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51254840(),_5868_58735920_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49942080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49942080 = block;
   block->owner = (Object)__49926500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49942080;

   return block;
};

void code__49926500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51256160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49942080();
   }
      }
   }
}

Block make__49926500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49926500 = block;
   block->owner = (Object)__49908880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49926500;

   return block;
};

Block __49962700;

void code__49962700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51254180(),rvok_49910080_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51254080(),lvok0_49910200_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51253920(),av0_49570620_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49962700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49962700 = block;
   block->owner = (Object)__49908880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49962700;

   return block;
};

Block __49739980;

Block __49739320;

Block __49738500;

Block __50044880;

void code__50044880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_58328740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rv_49910900_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50044880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50044880 = block;
   block->owner = (Object)__49738500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50044880;

   return block;
};

Block __50897580;

void code__50897580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_58736120_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rv_49910900_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__50897580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50897580 = block;
   block->owner = (Object)__49738500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50897580;

   return block;
};

void code__49738500() {
{
      Value value = _5868_58735920_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__51252140())) {
    code__50044880();
         }
         else if (value2integer(value) == value2integer(make__51251840())) {
    code__50897580();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51251480(),rvok_49910080_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
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
                  src0 = _5868_58735920_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51251200();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_58735920_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__49738500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49738500 = block;
   block->owner = (Object)__49739320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49738500;

   return block;
};

void code__49739320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51252480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49738500();
   }
      }
   }
}

Block make__49739320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49739320 = block;
   block->owner = (Object)__49739980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49739320;

   return block;
};

Block __51233120;

Block __51256480;

Block __51255780;

void code__51255780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,lv0_48207360_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51271220(),lvok0_49910200_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51255780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51255780 = block;
   block->owner = (Object)__51256480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51255780;

   return block;
};

void code__51256480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51249920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51255780();
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
                  src0 = _58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51270980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51270640(),_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51256480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51256480 = block;
   block->owner = (Object)__51233120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51256480;

   return block;
};

void code__51233120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51250920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51256480();
   }
      }
   }
}

Block make__51233120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51233120 = block;
   block->owner = (Object)__49739980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51233120;

   return block;
};

Block __51644660;

Block __51643700;

Block __51643240;

void code__51643240() {
}

Block make__51643240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51643240 = block;
   block->owner = (Object)__51643700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51643240;

   return block;
};

Block __57372660;

void code__57372660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49570620_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__57372660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57372660 = block;
   block->owner = (Object)__51643700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57372660;

   return block;
};

void code__51643700() {
 code__51643240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49570620_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
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
                              src0 = lv0_48207360_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49910900_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51268720();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49570620_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__57372660();
}

Block make__51643700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51643700 = block;
   block->owner = (Object)__51644660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51643700;

   return block;
};

void code__51644660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51270240(),ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51269980(),run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__51643700();
}

Block make__51644660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51644660 = block;
   block->owner = (Object)__49739980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51644660;

   return block;
};

void code__49739980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51253540(),run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__49739320();
 code__51233120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49910200_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = rvok_49910080_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51644660();
   }
      }
   }
}

Block make__49739980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49739980 = block;
   block->owner = (Object)__49908880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49739980;

   return block;
};

void code__49908880() {
 code__49908300();
 code__49926500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51254640(),ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51254500(),run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49962700();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49478840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49739980();
   }
      }
   }
}

Block make__49908880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49908880 = block;
   block->owner = (Object)__57630660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49908880;

   return block;
};

Block __51017000;

void code__51017000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51017000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51017000 = block;
   block->owner = (Object)__51016640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51017000;

   return block;
};

Block __51016560;

void code__51016560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51016560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51016560 = block;
   block->owner = (Object)__51016160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51016560;

   return block;
};

Block __51015120;

void code__51015120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51015120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51015120 = block;
   block->owner = (Object)__51014660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51015120;

   return block;
};

Block __51014460;

void code__51014460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51014460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51014460 = block;
   block->owner = (Object)__51013860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51014460;

   return block;
};

Block __51058360;

void code__51058360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51058360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51058360 = block;
   block->owner = (Object)__51057780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51058360;

   return block;
};

Block __51057700;

void code__51057700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51057700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51057700 = block;
   block->owner = (Object)__51057340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51057700;

   return block;
};

Block __51053120;

void code__51053120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51053120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51053120 = block;
   block->owner = (Object)__51052800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51053120;

   return block;
};

Block __51052720;

void code__51052720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51052720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51052720 = block;
   block->owner = (Object)__51076720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51052720;

   return block;
};

Block __59355660;

Block __59354360;

Block __59354000;

void code__59354000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,lv0_59240660_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51287560(),lvok0_59355820_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59354000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59354000 = block;
   block->owner = (Object)__59354360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59354000;

   return block;
};

Block __59516740;

void code__59516740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,rv0_59355840_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51287140(),rvok0_59355800_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59516740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59516740 = block;
   block->owner = (Object)__59354360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59516740;

   return block;
};

Block __59874860;

Block __59874220;

void code__59874220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59240660_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      src1 = rv0_59355840_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59874220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59874220 = block;
   block->owner = (Object)__59874860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59874220;

   return block;
};

void code__59874860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51286920(),run_59355780_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51286760(),ack__add_49478580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__59874220();
}

Block make__59874860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59874860 = block;
   block->owner = (Object)__59354360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59874860;

   return block;
};

void code__59354360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51287860(),run_59355780_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
 code__59354000();
 code__59516740();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59355820_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = rvok0_59355800_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59874860();
   }
      }
   }
}

Block make__59354360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59354360 = block;
   block->owner = (Object)__59355660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59354360;

   return block;
};

Block __59355040;

void code__59355040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51285960(),lvok0_59355820_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51285480(),rvok0_59355800_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__59355040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59355040 = block;
   block->owner = (Object)__59355660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59355040;

   return block;
};

void code__59355660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51289380(),ack__add_49478580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51289020(),run_59355780_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         src1 = run_59355780_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59354360();
   }
   else {
  code__59355040();
   }
      }
   }
}

Block make__59355660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59355660 = block;
   block->owner = (Object)__49456640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59355660;

   return block;
};

Value make__51285120() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51285100() {
   static unsigned long long data[] = { 231ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51284680() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51233980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51233480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51233000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51256160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51254840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51254640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51254500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51254180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51254080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51253920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51253540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51252480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51252140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51251840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51251480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51251200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51250920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51249920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51271220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51270980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51270640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51270240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51269980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51268720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51289380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51289020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51287860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51287560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51287140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51286920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51286760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51285960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51285480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51304940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51304740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51304060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51303620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51303520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51303260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51302720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51302360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51302160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51302040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51301700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51301500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51300340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51299680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51321280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51315200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51369480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51369020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51368780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51367560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51367080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51366940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__51366300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51365700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51365400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51365120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51364440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51386980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_57846080;

SignalI req__mac_49478840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereq__mac_49478840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49478840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack_49478640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__mac_49478620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI ack__add_49478580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__add_49478580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49478580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI fill__channel_49478560_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makefill__channel_49478560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_49478560_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI _58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58266_49874960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":266";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58264_49874940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":264";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58265_49874860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":265";
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

SignalI _58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58283_49437540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI _58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58313_50632840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":313";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58336_50902680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":336";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makevalue__z0_51108080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI value__a0_51253080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makevalue__a0_51253080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_51253080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI flag__z0_51253060_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeflag__z0_51253060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51253060_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__a0_51253040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress__weights0_51252940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_51252940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress__bias_51252840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_51252840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = "address_bias";
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

SignalI ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__weights0_51252820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeack__bias_51252800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI _58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58324_51517540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":324";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58325_51517380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = ":325";
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

SignalI w0_56902040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makew0_56902040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_56902040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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
         src0 = make__51285120();
         src1 = make__51285100();
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

SignalI b_57451940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeb_57451940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_57451940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__51284680();
         concat_value(1,1,dst,src0);
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

SignalI _58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58268_57451920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI _58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58269_57451580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SignalI _58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI make_58270_57578460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)layer1_58_84_57846080;
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

SystemI counter_57610300;

SystemI makecounter_57610300() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_57610300 = systemI;
   systemI->owner = (Object)layer1_58_84_57846080;
   systemI->name = "counter";
   systemI->system = counter_58_8400_57612760;

   return systemI;
};

SystemI func0_50041440;

SystemI makefunc0_50041440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_50041440 = systemI;
   systemI->owner = (Object)layer1_58_84_57846080;
   systemI->name = "func0";
   systemI->system = func0_58_8400_49264580;

   return systemI;
};

Scope channel__w0_58252_57845740;

SignalI trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI maketrig__r_57908100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

SignalI trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI maketrig__w_57908080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

SignalI dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makedbus__r_57967600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

SignalI dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makedbus__w_58199080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

SignalI abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_58199000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

SignalI abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_58198920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

SignalI mem_58299220_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makemem_58299220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58299220_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__w0_58252_57845740;
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

Scope raddr_58253_57845380;

Scope makeraddr_58253_57845380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_57845380 = scope;
   scope->owner = (Object)channel__w0_58252_57845740;
   scope->name = "raddr:253";
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

Scope waddr_58258_57844960;

Scope makewaddr_58258_57844960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_57844960 = scope;
   scope->owner = (Object)channel__w0_58252_57845740;
   scope->name = "waddr:258";
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

Scope rinc_58263_57844440;

Scope makerinc_58263_57844440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_57844440 = scope;
   scope->owner = (Object)channel__w0_58252_57845740;
   scope->name = "rinc:263";
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

Scope winc_58267_57844020;

Scope makewinc_58267_57844020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_57844020 = scope;
   scope->owner = (Object)channel__w0_58252_57845740;
   scope->name = "winc:267";
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

Scope rdec_58271_57909000;

Scope makerdec_58271_57909000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_57909000 = scope;
   scope->owner = (Object)channel__w0_58252_57845740;
   scope->name = "rdec:271";
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

Scope wdec_58276_57908580;

Scope makewdec_58276_57908580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_57908580 = scope;
   scope->owner = (Object)channel__w0_58252_57845740;
   scope->name = "wdec:276";
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

Behavior __59772400;

Behavior make__59772400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59772400 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->neg[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_neg-1] = (Object)behavior;
   behavior->block = make__59075000();

   return behavior;
}

Behavior __50930540;

Behavior make__50930540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50930540 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[dbus__r_57967600_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50931480();

   return behavior;
}

Behavior __50929700;

Behavior make__50929700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50929700 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58266_49874960_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50930420();

   return behavior;
}

Behavior __50950760;

Behavior make__50950760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50950760 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[trig__r_57908100_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50951500();

   return behavior;
}

Behavior __50947920;

Behavior make__50947920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50947920 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58264_49874940_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50950000();

   return behavior;
}

Behavior __50965820;

Behavior make__50965820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50965820 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__r_58199000_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50967280();

   return behavior;
}

Behavior __50964320;

Behavior make__50964320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50964320 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58265_49874860_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50965480();

   return behavior;
}

Behavior __50984140;

Behavior make__50984140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50984140 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[trig__w_57908080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50984840();

   return behavior;
}

Behavior __50983260;

Behavior make__50983260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50983260 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58268_57451920_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50984060();

   return behavior;
}

Behavior __50980720;

Behavior make__50980720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50980720 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__w_58198920_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50981740();

   return behavior;
}

Behavior __50979900;

Behavior make__50979900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50979900 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58269_57451580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50980660();

   return behavior;
}

Behavior __51002840;

Behavior make__51002840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51002840 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[dbus__w_58199080_channel__w0_58252_57845740_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51003320();

   return behavior;
}

Behavior __51002460;

Behavior make__51002460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51002460 = behavior;
   behavior->owner = (Object)channel__w0_58252_57845740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58270_57578460_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51002760();

   return behavior;
}

Scope makechannel__w0_58252_57845740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_57845740 = scope;
   scope->owner = (Object)layer1_58_84_57846080;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_57908100();
   scope->inners[1] = maketrig__w_57908080();
   scope->inners[2] = makedbus__r_57967600();
   scope->inners[3] = makedbus__w_58199080();
   scope->inners[4] = makeabus__r_58199000();
   scope->inners[5] = makeabus__w_58198920();
   scope->inners[6] = makemem_58299220();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_57845380();
   scope->scopes[1] = makewaddr_58258_57844960();
   scope->scopes[2] = makerinc_58263_57844440();
   scope->scopes[3] = makewinc_58267_57844020();
   scope->scopes[4] = makerdec_58271_57909000();
   scope->scopes[5] = makewdec_58276_57908580();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59772400();
   scope->behaviors[1] = make__50930540();
   scope->behaviors[2] = make__50929700();
   scope->behaviors[3] = make__50950760();
   scope->behaviors[4] = make__50947920();
   scope->behaviors[5] = make__50965820();
   scope->behaviors[6] = make__50964320();
   scope->behaviors[7] = make__50984140();
   scope->behaviors[8] = make__50983260();
   scope->behaviors[9] = make__50980720();
   scope->behaviors[10] = make__50979900();
   scope->behaviors[11] = make__51002840();
   scope->behaviors[12] = make__51002460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_59772240;

SignalI reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__0_59900980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__accum_58281_59772240;
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

Scope anum_58282_59771940;

Scope makeanum_58282_59771940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_59771940 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
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

Scope raddr_58284_59771520;

Scope makeraddr_58284_59771520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_59771520 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
   scope->name = "raddr:284";
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

Scope waddr_58287_59771100;

Scope makewaddr_58287_59771100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_59771100 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
   scope->name = "waddr:287";
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

Scope rinc_58290_59770640;

SignalI abus__r_59770100_rinc_58290_59770640_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_59770100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59770100_rinc_58290_59770640_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rinc_58290_59770640;
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

Scope makerinc_58290_59770640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_59770640 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59770100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_59769980;

SignalI abus__w_59769600_winc_58294_59769980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_59769600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59769600_winc_58294_59769980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)winc_58294_59769980;
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

Scope makewinc_58294_59769980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_59769980 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59769600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_59769480;

SignalI abus__r_59769100_rdec_58298_59769480_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_59769100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59769100_rdec_58298_59769480_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rdec_58298_59769480;
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

Scope makerdec_58298_59769480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_59769480 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59769100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_59768980;

SignalI abus__w_59809480_wdec_58302_59768980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_59809480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59809480_wdec_58302_59768980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)wdec_58302_59768980;
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

Scope makewdec_58302_59768980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_59768980 = scope;
   scope->owner = (Object)channel__accum_58281_59772240;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59809480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50997940;

Behavior make__50997940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50997940 = behavior;
   behavior->owner = (Object)channel__accum_58281_59772240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_59900980_channel__accum_58281_59772240_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50998200();

   return behavior;
}

Behavior __50997460;

Behavior make__50997460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50997460 = behavior;
   behavior->owner = (Object)channel__accum_58281_59772240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58283_49437540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50997880();

   return behavior;
}

Scope makechannel__accum_58281_59772240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_59772240 = scope;
   scope->owner = (Object)layer1_58_84_57846080;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59900980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_59771940();
   scope->scopes[1] = makeraddr_58284_59771520();
   scope->scopes[2] = makewaddr_58287_59771100();
   scope->scopes[3] = makerinc_58290_59770640();
   scope->scopes[4] = makewinc_58294_59769980();
   scope->scopes[5] = makerdec_58298_59769480();
   scope->scopes[6] = makewdec_58302_59768980();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50997940();
   scope->behaviors[1] = make__50997460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_47600040;

SignalI lv0_48207360_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelv0_48207360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48207360_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58306_47600040;
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

SignalI av0_49570620_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeav0_49570620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49570620_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58306_47600040;
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

SignalI rv_49910900_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerv_49910900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49910900_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58306_47600040;
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

SignalI lvok0_49910200_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelvok0_49910200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49910200_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58306_47600040;
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

SignalI rvok_49910080_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makervok_49910080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49910080_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58306_47600040;
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

SignalI run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerun_49909960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49909960_mac__n1_58306_47600040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)mac__n1_58306_47600040;
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

Behavior __57630660;

Behavior make__57630660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57630660 = behavior;
   behavior->owner = (Object)mac__n1_58306_47600040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__49908880();

   return behavior;
}

Scope makemac__n1_58306_47600040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_47600040 = scope;
   scope->owner = (Object)layer1_58_84_57846080;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48207360();
   scope->inners[1] = makeav0_49570620();
   scope->inners[2] = makerv_49910900();
   scope->inners[3] = makelvok0_49910200();
   scope->inners[4] = makervok_49910080();
   scope->inners[5] = makerun_49909960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57630660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_57630540;

SignalI reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__0_57749280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__bias_58311_57630540;
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

Scope anum_58312_57630200;

Scope makeanum_58312_57630200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_57630200 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "anum:312";
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

Scope raddr_58314_57629660;

Scope makeraddr_58314_57629660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_57629660 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "raddr:314";
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

Scope waddr_58317_57629100;

Scope makewaddr_58317_57629100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_57629100 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "waddr:317";
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

Scope rinc_58320_57628680;

SignalI abus__r_57628300_rinc_58320_57628680_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_57628300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57628300_rinc_58320_57628680_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rinc_58320_57628680;
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

Scope makerinc_58320_57628680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_57628680 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57628300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_57628160;

SignalI abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_57627700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)winc_58323_57628160;
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

Behavior __51057780;

Behavior make__51057780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51057780 = behavior;
   behavior->owner = (Object)winc_58323_57628160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[abus__w_57627700_winc_58323_57628160_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51058360();

   return behavior;
}

Behavior __51057340;

Behavior make__51057340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51057340 = behavior;
   behavior->owner = (Object)winc_58323_57628160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58325_51517380_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51057700();

   return behavior;
}

Scope makewinc_58323_57628160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_57628160 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57627700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51057780();
   scope->behaviors[1] = make__51057340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_57627180;

SignalI abus__r_57626740_rdec_58326_57627180_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_57626740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57626740_rdec_58326_57627180_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rdec_58326_57627180;
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

Scope makerdec_58326_57627180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_57627180 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57626740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_57626620;

SignalI abus__w_57626240_wdec_58330_57626620_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_57626240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57626240_wdec_58330_57626620_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)wdec_58330_57626620;
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

Scope makewdec_58330_57626620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_57626620 = scope;
   scope->owner = (Object)channel__bias_58311_57630540;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57626240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51016640;

Behavior make__51016640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51016640 = behavior;
   behavior->owner = (Object)channel__bias_58311_57630540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51017000();

   return behavior;
}

Behavior __51016160;

Behavior make__51016160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51016160 = behavior;
   behavior->owner = (Object)channel__bias_58311_57630540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58313_50632840_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51016560();

   return behavior;
}

Behavior __51014660;

Behavior make__51014660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51014660 = behavior;
   behavior->owner = (Object)channel__bias_58311_57630540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_57749280_channel__bias_58311_57630540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51015120();

   return behavior;
}

Behavior __51013860;

Behavior make__51013860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51013860 = behavior;
   behavior->owner = (Object)channel__bias_58311_57630540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58324_51517540_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51014460();

   return behavior;
}

Scope makechannel__bias_58311_57630540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_57630540 = scope;
   scope->owner = (Object)layer1_58_84_57846080;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57749280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_57630200();
   scope->scopes[1] = makeraddr_58314_57629660();
   scope->scopes[2] = makewaddr_58317_57629100();
   scope->scopes[3] = makerinc_58320_57628680();
   scope->scopes[4] = makewinc_58323_57628160();
   scope->scopes[5] = makerdec_58326_57627180();
   scope->scopes[6] = makewdec_58330_57626620();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51016640();
   scope->behaviors[1] = make__51016160();
   scope->behaviors[2] = make__51014660();
   scope->behaviors[3] = make__51013860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_58346320;

SignalI reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makereg__0_58735020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)channel__z_58334_58346320;
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

Scope anum_58335_58345980;

Scope makeanum_58335_58345980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_58345980 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "anum:335";
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

Scope raddr_58337_58345500;

Scope makeraddr_58337_58345500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_58345500 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "raddr:337";
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

Scope waddr_58340_58345080;

Scope makewaddr_58340_58345080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_58345080 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "waddr:340";
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

Scope rinc_58343_58344520;

SignalI abus__r_58344060_rinc_58343_58344520_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_58344060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58344060_rinc_58343_58344520_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rinc_58343_58344520;
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

Scope makerinc_58343_58344520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_58344520 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58344060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_58343920;

SignalI abus__w_58343480_winc_58346_58343920_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_58343480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58343480_winc_58346_58343920_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)winc_58346_58343920;
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

Scope makewinc_58346_58343920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_58343920 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58343480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_58417040;

SignalI abus__r_58416660_rdec_58349_58417040_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__r_58416660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58416660_rdec_58349_58417040_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)rdec_58349_58417040;
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

Scope makerdec_58349_58417040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_58417040 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58416660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_58416540;

SignalI abus__w_58416020_wdec_58353_58416540_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeabus__w_58416020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58416020_wdec_58353_58416540_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)wdec_58353_58416540;
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

Scope makewdec_58353_58416540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_58416540 = scope;
   scope->owner = (Object)channel__z_58334_58346320;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58416020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51052800;

Behavior make__51052800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51052800 = behavior;
   behavior->owner = (Object)channel__z_58334_58346320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[reg__0_58735020_channel__z_58334_58346320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51053120();

   return behavior;
}

Behavior __51076720;

Behavior make__51076720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51076720 = behavior;
   behavior->owner = (Object)channel__z_58334_58346320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   _58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   _58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[_58336_50902680_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51052720();

   return behavior;
}

Scope makechannel__z_58334_58346320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_58346320 = scope;
   scope->owner = (Object)layer1_58_84_57846080;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58735020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_58345980();
   scope->scopes[1] = makeraddr_58337_58345500();
   scope->scopes[2] = makewaddr_58340_58345080();
   scope->scopes[3] = makerinc_58343_58344520();
   scope->scopes[4] = makewinc_58346_58343920();
   scope->scopes[5] = makerdec_58349_58417040();
   scope->scopes[6] = makewdec_58353_58416540();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51052800();
   scope->behaviors[1] = make__51076720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_59094320;

SignalI lv0_59240660_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelv0_59240660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59240660_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58357_59094320;
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

SignalI rv0_59355840_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerv0_59355840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59355840_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58357_59094320;
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

SignalI lvok0_59355820_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makelvok0_59355820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59355820_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58357_59094320;
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

SignalI rvok0_59355800_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makervok0_59355800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59355800_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58357_59094320;
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

SignalI run_59355780_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makerun_59355780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59355780_add__n_58357_59094320_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)add__n_58357_59094320;
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

Behavior __49456640;

Behavior make__49456640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49456640 = behavior;
   behavior->owner = (Object)add__n_58357_59094320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__59355660();

   return behavior;
}

Scope makeadd__n_58357_59094320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_59094320 = scope;
   scope->owner = (Object)layer1_58_84_57846080;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59240660();
   scope->inners[1] = makerv0_59355840();
   scope->inners[2] = makelvok0_59355820();
   scope->inners[3] = makervok0_59355800();
   scope->inners[4] = makerun_59355780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49456640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51514040;

Behavior make__51514040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51514040 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__51517920();

   return behavior;
}

Behavior __56605980;

Behavior make__56605980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56605980 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__51513600();

   return behavior;
}

Behavior __56902880;

Behavior make__56902880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56902880 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__56605860();

   return behavior;
}

Behavior __58217680;

Behavior make__58217680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58217680 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->pos[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_pos-1] = (Object)behavior;
   behavior->block = make__56902760();

   return behavior;
}

Behavior __50883880;

Behavior make__50883880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50883880 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[req_58213660_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__mac_49478620_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50885000();

   return behavior;
}

Behavior __50913720;

Behavior make__50913720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50913720 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[fill_58213680_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__weights0_51252820_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__bias_51252800_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50915280();

   return behavior;
}

Behavior __50937280;

Behavior make__50937280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50937280 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[clk_58213760_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack_49478640_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[rst_58213740_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[value__z0_51108080_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__a0_51253040_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50885500();

   return behavior;
}

Behavior __50935340;

Behavior make__50935340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50935340 = behavior;
   behavior->owner = (Object)layer1_58_84_57846080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[ack__mac_57610440_counter_58_8400_57612760_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__50885340();

   return behavior;
}

Scope makelayer1_58_84_57846080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_57846080 = scope;
   scope->owner = (Object)layer1_58_840_58217260;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_57610300();
   scope->systemIs[1] = makefunc0_50041440();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49478840();
   scope->inners[1] = makeack_49478640();
   scope->inners[2] = makeack__mac_49478620();
   scope->inners[3] = makeack__add_49478580();
   scope->inners[4] = makefill__channel_49478560();
   scope->inners[5] = make_58266_49874960();
   scope->inners[6] = make_58264_49874940();
   scope->inners[7] = make_58265_49874860();
   scope->inners[8] = make_58283_49437540();
   scope->inners[9] = make_58313_50632840();
   scope->inners[10] = make_58336_50902680();
   scope->inners[11] = makevalue__z0_51108080();
   scope->inners[12] = makevalue__a0_51253080();
   scope->inners[13] = makeflag__z0_51253060();
   scope->inners[14] = makeack__a0_51253040();
   scope->inners[15] = makeaddress__weights0_51252940();
   scope->inners[16] = makeaddress__bias_51252840();
   scope->inners[17] = makeack__weights0_51252820();
   scope->inners[18] = makeack__bias_51252800();
   scope->inners[19] = make_58324_51517540();
   scope->inners[20] = make_58325_51517380();
   scope->inners[21] = makew0_56902040();
   scope->inners[22] = makeb_57451940();
   scope->inners[23] = make_58268_57451920();
   scope->inners[24] = make_58269_57451580();
   scope->inners[25] = make_58270_57578460();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_57845740();
   scope->scopes[1] = makechannel__accum_58281_59772240();
   scope->scopes[2] = makemac__n1_58306_47600040();
   scope->scopes[3] = makechannel__bias_58311_57630540();
   scope->scopes[4] = makechannel__z_58334_58346320();
   scope->scopes[5] = makeadd__n_58357_59094320();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51514040();
   scope->behaviors[1] = make__56605980();
   scope->behaviors[2] = make__56902880();
   scope->behaviors[3] = make__58217680();
   scope->behaviors[4] = make__50883880();
   scope->behaviors[5] = make__50913720();
   scope->behaviors[6] = make__50937280();
   scope->behaviors[7] = make__50935340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_58217260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_58217260 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58213760();
   systemT->inputs[1] = makerst_58213740();
   systemT->inputs[2] = makefill_58213680();
   systemT->inputs[3] = makereq_58213660();
   systemT->inputs[4] = make_5866_58328740();
   systemT->inputs[5] = make_5867_58736120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_58736080();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_58735920();
   systemT->inouts[1] = make_5832_59029120();

   systemT->scope = makelayer1_58_84_57846080();

   return systemT;
}