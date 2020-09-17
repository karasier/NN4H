#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_51791280;

SignalI clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeclk_51845580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerst_51845560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI fill_51845520_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makefill_51845520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_51845520_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereq_51845500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI _5815_52018160_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5815_52018160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_52018160_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack__layer_52018020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI _5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5813_52017940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI _5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5814_52017860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI _5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5832_52352860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
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

SignalI _5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5833_52545100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_840_51791280;
   signalI->name = ":33";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __53071520;

Block __53070180;

Block __53069940;

void code__53069940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60557160(),flag__z0_52239680_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53069940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53069940 = block;
   block->owner = (Object)__53070180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53069940;

   return block;
};

Block __53455980;

void code__53455980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556980(),flag__z1_52239660_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53455980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53455980 = block;
   block->owner = (Object)__53070180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53455980;

   return block;
};

void code__53070180() {
 code__53069940();
 code__53455980();
}

Block make__53070180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53070180 = block;
   block->owner = (Object)__53071520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53070180;

   return block;
};

Block __53071260;

void code__53071260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556920(),flag__z0_52239680_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556840(),flag__z1_52239660_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53071260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53071260 = block;
   block->owner = (Object)__53071520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53071260;

   return block;
};

void code__53071520() {
   {
      Value cond = ack__add_47955520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53070180();
   }
   else {
  code__53071260();
   }
      }
   }
}

Block make__53071520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53071520 = block;
   block->owner = (Object)__54083260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53071520;

   return block;
};

Block __54083060;

Block __54082620;

Block __54082300;

void code__54082300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_52016280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556560(),ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__54082300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54082300 = block;
   block->owner = (Object)__54082620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54082300;

   return block;
};

Block __47523740;

void code__47523740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_52239700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556420(),ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__47523740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47523740 = block;
   block->owner = (Object)__54082620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47523740;

   return block;
};

void code__54082620() {
 code__54082300();
 code__47523740();
}

Block make__54082620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54082620 = block;
   block->owner = (Object)__54083060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54082620;

   return block;
};

void code__54083060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52239680_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = flag__z1_52239660_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54082620();
   }
      }
   }
}

Block make__54083060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54083060 = block;
   block->owner = (Object)__48695440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54083060;

   return block;
};

Block __48695160;

Block __48694600;

Block __48693300;

void code__48693300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556240(),_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48693300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48693300 = block;
   block->owner = (Object)__48694600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48693300;

   return block;
};

void code__48694600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60556340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48693300();
   }
      }
   }
}

Block make__48694600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48694600 = block;
   block->owner = (Object)__48695160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48694600;

   return block;
};

Block __49121480;

Block __49142620;

void code__49142620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60556040(),_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49142620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49142620 = block;
   block->owner = (Object)__49121480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49142620;

   return block;
};

void code__49121480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60556140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49142620();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60555940(),_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49121480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49121480 = block;
   block->owner = (Object)__48695160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49121480;

   return block;
};

Block __49138900;

Block __49137440;

void code__49137440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60555780(),_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49137440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49137440 = block;
   block->owner = (Object)__49138900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49137440;

   return block;
};

void code__49138900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60555860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49137440();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60555720(),_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49138900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49138900 = block;
   block->owner = (Object)__48695160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49138900;

   return block;
};

Block __49159280;

Block __49156420;

Block __49153360;

void code__49153360() {
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
                  src0 = _58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60555460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60555360(),_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60555300(),_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49153360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49153360 = block;
   block->owner = (Object)__49156420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49153360;

   return block;
};

void code__49156420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60555600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49153360();
   }
      }
   }
}

Block make__49156420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49156420 = block;
   block->owner = (Object)__49159280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49156420;

   return block;
};

Block __49382560;

Block __49403760;

void code__49403760() {
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
                  src0 = _58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60940060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939960(),_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939880(),_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49403760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49403760 = block;
   block->owner = (Object)__49382560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49403760;

   return block;
};

void code__49382560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60940200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49403760();
   }
      }
   }
}

Block make__49382560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49382560 = block;
   block->owner = (Object)__49159280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49382560;

   return block;
};

Block __49639040;

Block __49636500;

Block __49659200;

void code__49659200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939540(),_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49659200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49659200 = block;
   block->owner = (Object)__49636500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49659200;

   return block;
};

Block __49893920;

void code__49893920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60939460(),_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49893920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49893920 = block;
   block->owner = (Object)__49636500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49893920;

   return block;
};

void code__49636500() {
{
      Value value = _58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60939640())) {
    code__49659200();
         }
         else if (value2integer(value) == value2integer(make__60939520())) {
    code__49893920();
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
                  src0 = _58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60939340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49636500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49636500 = block;
   block->owner = (Object)__49639040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49636500;

   return block;
};

void code__49639040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60939780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49636500();
   }
      }
   }
}

Block make__49639040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49639040 = block;
   block->owner = (Object)__49159280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49639040;

   return block;
};

void code__49159280() {
 code__49156420();
 code__49382560();
 code__49639040();
}

Block make__49159280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49159280 = block;
   block->owner = (Object)__48695160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49159280;

   return block;
};

void code__48695160() {
 code__48694600();
 code__49121480();
 code__49138900();
   {
      Value cond = fill_51845520_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49159280();
   }
      }
   }
}

Block make__48695160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48695160 = block;
   block->owner = (Object)__51791980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48695160;

   return block;
};

Block __60215400;

void code__60215400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_47931580_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60215400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215400 = block;
   block->owner = (Object)__60215160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215400;

   return block;
};

Block __60215680;

void code__60215680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,clk_52794300_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,ack_52794280_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,rst_52794260_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,z__value_52613780_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,z__value_49531520_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      src1 = ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60215680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215680 = block;
   block->owner = (Object)__60232720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215680;

   return block;
};

Block __60215600;

void code__60215600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,value__a0_52016280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,value__a1_52239700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60215600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60215600 = block;
   block->owner = (Object)__60232540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60215600;

   return block;
};

Block __49721060;

Block __47526520;

void code__47526520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,make_ref_rangeS(mem_49306280_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240,value2integer(abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value),value2integer(abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47526520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47526520 = block;
   block->owner = (Object)__49721060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47526520;

   return block;
};

void code__49721060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49306280_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47526520();
   }
      }
   }
}

Block make__49721060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49721060 = block;
   block->owner = (Object)__49084940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49721060;

   return block;
};

Block __60231760;

void code__60231760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60231760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60231760 = block;
   block->owner = (Object)__60231560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60231760;

   return block;
};

Block __60231520;

void code__60231520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60231520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60231520 = block;
   block->owner = (Object)__60231300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60231520;

   return block;
};

Block __60231000;

void code__60231000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60231000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60231000 = block;
   block->owner = (Object)__60230840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60231000;

   return block;
};

Block __60230800;

void code__60230800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60230800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60230800 = block;
   block->owner = (Object)__60230620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60230800;

   return block;
};

Block __60230240;

void code__60230240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60230240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60230240 = block;
   block->owner = (Object)__60230080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60230240;

   return block;
};

Block __60230040;

void code__60230040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60230040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60230040 = block;
   block->owner = (Object)__60229880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60230040;

   return block;
};

Block __60229580;

void code__60229580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60229580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60229580 = block;
   block->owner = (Object)__60229380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60229580;

   return block;
};

Block __60229340;

void code__60229340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60229340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60229340 = block;
   block->owner = (Object)__60229120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60229340;

   return block;
};

Block __60228820;

void code__60228820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60228820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60228820 = block;
   block->owner = (Object)__60228660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60228820;

   return block;
};

Block __60228620;

void code__60228620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60228620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60228620 = block;
   block->owner = (Object)__60228420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60228620;

   return block;
};

Block __60228060;

void code__60228060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60228060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60228060 = block;
   block->owner = (Object)__60227900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60228060;

   return block;
};

Block __60227860;

void code__60227860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60227860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60227860 = block;
   block->owner = (Object)__60227700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60227860;

   return block;
};

Block __49778340;

Block __48612580;

void code__48612580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,make_ref_rangeS(mem_49372440_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240,value2integer(abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value),value2integer(abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48612580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48612580 = block;
   block->owner = (Object)__49778340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48612580;

   return block;
};

void code__49778340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49372440_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48612580();
   }
      }
   }
}

Block make__49778340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49778340 = block;
   block->owner = (Object)__49736680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49778340;

   return block;
};

Block __60250520;

void code__60250520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60250520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250520 = block;
   block->owner = (Object)__60250360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250520;

   return block;
};

Block __60250320;

void code__60250320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60250320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60250320 = block;
   block->owner = (Object)__60250160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60250320;

   return block;
};

Block __60249860;

void code__60249860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60249860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60249860 = block;
   block->owner = (Object)__60249680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60249860;

   return block;
};

Block __60249640;

void code__60249640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60249640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60249640 = block;
   block->owner = (Object)__60249460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60249640;

   return block;
};

Block __60249100;

void code__60249100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60249100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60249100 = block;
   block->owner = (Object)__60248920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60249100;

   return block;
};

Block __60248860;

void code__60248860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60248860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60248860 = block;
   block->owner = (Object)__60248680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60248860;

   return block;
};

Block __60248340;

void code__60248340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60248340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60248340 = block;
   block->owner = (Object)__60248180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60248340;

   return block;
};

Block __60248140;

void code__60248140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60248140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60248140 = block;
   block->owner = (Object)__60247980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60248140;

   return block;
};

Block __60247680;

void code__60247680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60247680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60247680 = block;
   block->owner = (Object)__60247500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60247680;

   return block;
};

Block __60247460;

void code__60247460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60247460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60247460 = block;
   block->owner = (Object)__60247280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60247460;

   return block;
};

Block __60246920;

void code__60246920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60246920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60246920 = block;
   block->owner = (Object)__60246720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60246920;

   return block;
};

Block __60246680;

void code__60246680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60246680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60246680 = block;
   block->owner = (Object)__60246460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60246680;

   return block;
};

Block __60244620;

void code__60244620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60244620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60244620 = block;
   block->owner = (Object)__60244400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60244620;

   return block;
};

Block __60244360;

void code__60244360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60244360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60244360 = block;
   block->owner = (Object)__60244200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60244360;

   return block;
};

Block __60268440;

void code__60268440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60268440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60268440 = block;
   block->owner = (Object)__60268280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60268440;

   return block;
};

Block __60268240;

void code__60268240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60268240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60268240 = block;
   block->owner = (Object)__60268080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60268240;

   return block;
};

Block __48986960;

Block __48986780;

Block __48986400;

void code__48986400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60552660(),_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48986400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48986400 = block;
   block->owner = (Object)__48986780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48986400;

   return block;
};

void code__48986780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60552740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48986400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60552580(),_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48986780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48986780 = block;
   block->owner = (Object)__48986960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48986780;

   return block;
};

Block __48985460;

Block __48985120;

void code__48985120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60552400(),_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48985120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48985120 = block;
   block->owner = (Object)__48985460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48985120;

   return block;
};

void code__48985460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60552480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48985120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60552280(),_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48985460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48985460 = block;
   block->owner = (Object)__48986960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48985460;

   return block;
};

Block __48984320;

Block __48983960;

void code__48983960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60552080(),_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48983960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48983960 = block;
   block->owner = (Object)__48984320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48983960;

   return block;
};

void code__48984320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60552180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48983960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60552020(),_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48984320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48984320 = block;
   block->owner = (Object)__48986960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48984320;

   return block;
};

Block __49251020;

Block __49274800;

Block __49274380;

Block __49274000;

void code__49274000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_52018160_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,rv_48987540_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60551340(),rvok_48987480_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49274000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49274000 = block;
   block->owner = (Object)__49274380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49274000;

   return block;
};

void code__49274380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60551500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49274000();
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
                  src0 = _5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60551220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60551120(),_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49274380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49274380 = block;
   block->owner = (Object)__49274800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49274380;

   return block;
};

void code__49274800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60551600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49274380();
   }
      }
   }
}

Block make__49274800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49274800 = block;
   block->owner = (Object)__49251020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49274800;

   return block;
};

Block __49512840;

Block __49536980;

Block __49536340;

void code__49536340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,lv0_46453700_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60550780(),lvok0_48987520_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49536340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49536340 = block;
   block->owner = (Object)__49536980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49536340;

   return block;
};

void code__49536980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60550940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49536340();
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
                  src0 = _5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60550660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60550540(),_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49536980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49536980 = block;
   block->owner = (Object)__49512840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49536980;

   return block;
};

void code__49512840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60551040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49536980();
   }
      }
   }
}

Block make__49512840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49512840 = block;
   block->owner = (Object)__49251020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49512840;

   return block;
};

Block __49782240;

Block __49780760;

Block __49780500;

void code__49780500() {
}

Block make__49780500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49780500 = block;
   block->owner = (Object)__49780760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49780500;

   return block;
};

Block __52398740;

void code__52398740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47906620_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52398740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52398740 = block;
   block->owner = (Object)__49780760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52398740;

   return block;
};

void code__49780760() {
 code__49780500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47906620_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
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
                              src0 = lv0_46453700_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48987540_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60549860();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47906620_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__52398740();
}

Block make__49780760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49780760 = block;
   block->owner = (Object)__49782240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49780760;

   return block;
};

void code__49782240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60550360(),ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60550280(),run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__49780760();
}

Block make__49782240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49782240 = block;
   block->owner = (Object)__49251020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49782240;

   return block;
};

Block __52614000;

Block __52613680;

Block __52613360;

void code__52613360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,lv1_47421140_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60549340(),lvok1_48987500_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52613360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52613360 = block;
   block->owner = (Object)__52613680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52613360;

   return block;
};

void code__52613680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60549500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52613360();
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
                  src0 = _58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60549220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60549120(),_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52613680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52613680 = block;
   block->owner = (Object)__52614000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52613680;

   return block;
};

void code__52614000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60549600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52613680();
   }
      }
   }
}

Block make__52614000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52614000 = block;
   block->owner = (Object)__49251020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52614000;

   return block;
};

Block __52844060;

Block __52843580;

Block __52843420;

void code__52843420() {
}

Block make__52843420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52843420 = block;
   block->owner = (Object)__52843580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52843420;

   return block;
};

Block __53609700;

void code__53609700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48592300_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53609700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53609700 = block;
   block->owner = (Object)__52843580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53609700;

   return block;
};

void code__52843580() {
 code__52843420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48592300_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
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
                              src0 = lv1_47421140_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48987540_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60548560();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48592300_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__53609700();
}

Block make__52843580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52843580 = block;
   block->owner = (Object)__52844060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52843580;

   return block;
};

void code__52844060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60548960(),ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60548900(),run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__52843580();
}

Block make__52844060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52844060 = block;
   block->owner = (Object)__49251020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52844060;

   return block;
};

void code__49251020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60551680(),run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__49274800();
 code__49512840();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48987520_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = rvok_48987480_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49782240();
   }
      }
   }
 code__52614000();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48987500_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = rvok_48987480_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52844060();
   }
      }
   }
}

Block make__49251020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49251020 = block;
   block->owner = (Object)__48986960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49251020;

   return block;
};

Block __48982740;

void code__48982740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60548340(),rvok_48987480_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60548280(),lvok0_48987520_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60548200(),av0_47906620_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60548000(),lvok1_48987500_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60547900(),av1_48592300_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__48982740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48982740 = block;
   block->owner = (Object)__48986960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48982740;

   return block;
};

void code__48986960() {
 code__48986780();
 code__48985460();
 code__48984320();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60551960(),ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60551840(),run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_47931580_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49251020();
   }
   else {
  code__48982740();
   }
      }
   }
}

Block make__48986960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48986960 = block;
   block->owner = (Object)__54029420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48986960;

   return block;
};

Block __60266020;

void code__60266020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60266020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60266020 = block;
   block->owner = (Object)__60265860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60266020;

   return block;
};

Block __60265820;

void code__60265820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60265820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60265820 = block;
   block->owner = (Object)__60265660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60265820;

   return block;
};

Block __60265360;

void code__60265360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60265360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60265360 = block;
   block->owner = (Object)__60265200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60265360;

   return block;
};

Block __60265160;

void code__60265160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60265160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60265160 = block;
   block->owner = (Object)__60264940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60265160;

   return block;
};

Block __60264500;

void code__60264500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60264500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60264500 = block;
   block->owner = (Object)__60264340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60264500;

   return block;
};

Block __60264300;

void code__60264300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60264300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60264300 = block;
   block->owner = (Object)__60264140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60264300;

   return block;
};

Block __60263840;

void code__60263840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60263840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60263840 = block;
   block->owner = (Object)__60263680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60263840;

   return block;
};

Block __60263640;

void code__60263640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60263640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60263640 = block;
   block->owner = (Object)__60263480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60263640;

   return block;
};

Block __60261700;

void code__60261700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60261700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60261700 = block;
   block->owner = (Object)__60261540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60261700;

   return block;
};

Block __60261500;

void code__60261500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60261500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60261500 = block;
   block->owner = (Object)__60261340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60261500;

   return block;
};

Block __60325520;

void code__60325520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60325520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60325520 = block;
   block->owner = (Object)__60325360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60325520;

   return block;
};

Block __60325320;

void code__60325320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60325320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60325320 = block;
   block->owner = (Object)__60325160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60325320;

   return block;
};

Block __60324860;

void code__60324860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60324860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60324860 = block;
   block->owner = (Object)__60324700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60324860;

   return block;
};

Block __60324660;

void code__60324660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60324660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60324660 = block;
   block->owner = (Object)__60324500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60324660;

   return block;
};

Block __52548860;

Block __52547340;

Block __52547020;

void code__52547020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,lv0_52029880_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60560100(),lvok0_52549060_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52547020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52547020 = block;
   block->owner = (Object)__52547340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52547020;

   return block;
};

Block __52742260;

void code__52742260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,rv0_52381620_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559960(),rvok0_52549020_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52742260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52742260 = block;
   block->owner = (Object)__52547340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52742260;

   return block;
};

Block __52944560;

Block __52944080;

void code__52944080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52029880_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      src1 = rv0_52381620_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52944080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52944080 = block;
   block->owner = (Object)__52944560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52944080;

   return block;
};

void code__52944560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559800(),run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559740(),ack__add_47955520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__52944080();
}

Block make__52944560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52944560 = block;
   block->owner = (Object)__52547340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52944560;

   return block;
};

Block __53385040;

void code__53385040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,lv1_52336860_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559420(),lvok1_52549040_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53385040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53385040 = block;
   block->owner = (Object)__52547340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53385040;

   return block;
};

Block __53662340;

void code__53662340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,rv1_52549080_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559260(),rvok1_52549000_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53662340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53662340 = block;
   block->owner = (Object)__52547340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53662340;

   return block;
};

Block __54076920;

Block __54076400;

void code__54076400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52336860_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      src1 = rv1_52549080_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__54076400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54076400 = block;
   block->owner = (Object)__54076920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54076400;

   return block;
};

void code__54076920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559080(),run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60559000(),ack__add_47955520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__54076400();
}

Block make__54076920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54076920 = block;
   block->owner = (Object)__52547340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54076920;

   return block;
};

void code__52547340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60560300(),run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__52547020();
 code__52742260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52549060_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = rvok0_52549020_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52944560();
   }
      }
   }
 code__53385040();
 code__53662340();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52549040_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = rvok1_52549000_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54076920();
   }
      }
   }
}

Block make__52547340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52547340 = block;
   block->owner = (Object)__52548860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52547340;

   return block;
};

Block __52548380;

void code__52548380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60558720(),lvok0_52549060_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60558660(),rvok0_52549020_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60558600(),lvok1_52549040_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60558540(),rvok1_52549000_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52548380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52548380 = block;
   block->owner = (Object)__52548860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52548380;

   return block;
};

void code__52548860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60560560(),ack__add_47955520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60560500(),run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         src1 = run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52547340();
   }
   else {
  code__52548380();
   }
      }
   }
}

Block make__52548860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52548860 = block;
   block->owner = (Object)__47935200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52548860;

   return block;
};

Value make__60552740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60552660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60552580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60552480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60552400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60552280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60552180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60552080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60552020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60551960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60551840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60551680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60551600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60551220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60551120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60551040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60550660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60550540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60550360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60550280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60549860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60549600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60549500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60549340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60549220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60549120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60548960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60548900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60548560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60548340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60548280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60548200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60548000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60547900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60560560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60560500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60560300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60560100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60559000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60558720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60558660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60558600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60558540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60557160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60556980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60556920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60556840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60556560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60556420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60556340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60556240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60556140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60556040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60555940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60555860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60555780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60555720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60555600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60555460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60555360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60555300() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60940200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60940060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60939880() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60939780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60939640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60939540() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60939520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60939460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60939340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_49083920;

SignalI req__mac_47931580_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereq__mac_47931580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_47931580_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack_47931460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack__mac_47955880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI ack__add_47955520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack__add_47955520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_47955520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5897_48885320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5895_48885280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5896_48885200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58143_48666620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58144_49218520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58126_49388700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58124_49388620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58125_49388500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58182_49496380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58183_49655960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58212_49777840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58213_49101940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makevalue__z0_51766620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makevalue__z1_51916020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI value__a0_52016280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makevalue__a0_52016280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_52016280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI value__a1_52239700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makevalue__a1_52239700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_52239700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI flag__z0_52239680_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeflag__z0_52239680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52239680_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI flag__z1_52239660_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeflag__z1_52239660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52239660_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack__a0_52239640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeack__a1_52239620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58197_52364720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58198_52465000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58199_52464920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_5899_52464900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58100_52464820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58101_52596480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58128_52596460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58129_52596360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SignalI _58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI make_58130_52745480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer0_58_84_49083920;
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

SystemI counter_52794080;

SystemI makecounter_52794080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_52794080 = systemI;
   systemI->owner = (Object)layer0_58_84_49083920;
   systemI->name = "counter";
   systemI->system = counter_58_841_52796340;

   return systemI;
};

SystemI func0_52809820;

SystemI makefunc0_52809820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52809820 = systemI;
   systemI->owner = (Object)layer0_58_84_49083920;
   systemI->name = "func0";
   systemI->system = func0_58_841_52466180;

   return systemI;
};

SystemI func1_49717660;

SystemI makefunc1_49717660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_49717660 = systemI;
   systemI->owner = (Object)layer0_58_84_49083920;
   systemI->name = "func1";
   systemI->system = func1_58_840_49283940;

   return systemI;
};

Scope channel__w0_5883_49083620;

SignalI trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI maketrig__r_49080540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

SignalI trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI maketrig__w_49080520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

SignalI dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makedbus__r_48679540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

SignalI dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makedbus__w_49222660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

SignalI abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49222580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

SignalI abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49222500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

SignalI mem_49306280_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makemem_49306280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49306280_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_5883_49083620;
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

Scope raddr_5884_49083320;

Scope makeraddr_5884_49083320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49083320 = scope;
   scope->owner = (Object)channel__w0_5883_49083620;
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

Scope waddr_5889_49082860;

Scope makewaddr_5889_49082860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49082860 = scope;
   scope->owner = (Object)channel__w0_5883_49083620;
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

Scope rinc_5894_49082380;

Scope makerinc_5894_49082380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49082380 = scope;
   scope->owner = (Object)channel__w0_5883_49083620;
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

Scope winc_5898_49081960;

Scope makewinc_5898_49081960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49081960 = scope;
   scope->owner = (Object)channel__w0_5883_49083620;
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

Scope rdec_58102_49081500;

Scope makerdec_58102_49081500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49081500 = scope;
   scope->owner = (Object)channel__w0_5883_49083620;
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

Scope wdec_58107_49081080;

Scope makewdec_58107_49081080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49081080 = scope;
   scope->owner = (Object)channel__w0_5883_49083620;
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

Behavior __49084940;

Behavior make__49084940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49084940 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg-1] = (Object)behavior;
   behavior->block = make__49721060();

   return behavior;
}

Behavior __60231560;

Behavior make__60231560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60231560 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[dbus__r_48679540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60231760();

   return behavior;
}

Behavior __60231300;

Behavior make__60231300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60231300 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5897_48885320_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60231520();

   return behavior;
}

Behavior __60230840;

Behavior make__60230840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60230840 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[trig__r_49080540_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60231000();

   return behavior;
}

Behavior __60230620;

Behavior make__60230620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60230620 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5895_48885280_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60230800();

   return behavior;
}

Behavior __60230080;

Behavior make__60230080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60230080 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[abus__r_49222580_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60230240();

   return behavior;
}

Behavior __60229880;

Behavior make__60229880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229880 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5896_48885200_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60230040();

   return behavior;
}

Behavior __60229380;

Behavior make__60229380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229380 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[trig__w_49080520_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60229580();

   return behavior;
}

Behavior __60229120;

Behavior make__60229120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60229120 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5899_52464900_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60229340();

   return behavior;
}

Behavior __60228660;

Behavior make__60228660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60228660 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[abus__w_49222500_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60228820();

   return behavior;
}

Behavior __60228420;

Behavior make__60228420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60228420 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58100_52464820_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60228620();

   return behavior;
}

Behavior __60227900;

Behavior make__60227900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60227900 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[dbus__w_49222660_channel__w0_5883_49083620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60228060();

   return behavior;
}

Behavior __60227700;

Behavior make__60227700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60227700 = behavior;
   behavior->owner = (Object)channel__w0_5883_49083620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58101_52596480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60227860();

   return behavior;
}

Scope makechannel__w0_5883_49083620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49083620 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49080540();
   scope->inners[1] = maketrig__w_49080520();
   scope->inners[2] = makedbus__r_48679540();
   scope->inners[3] = makedbus__w_49222660();
   scope->inners[4] = makeabus__r_49222580();
   scope->inners[5] = makeabus__w_49222500();
   scope->inners[6] = makemem_49306280();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49083320();
   scope->scopes[1] = makewaddr_5889_49082860();
   scope->scopes[2] = makerinc_5894_49082380();
   scope->scopes[3] = makewinc_5898_49081960();
   scope->scopes[4] = makerdec_58102_49081500();
   scope->scopes[5] = makewdec_58107_49081080();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49084940();
   scope->behaviors[1] = make__60231560();
   scope->behaviors[2] = make__60231300();
   scope->behaviors[3] = make__60230840();
   scope->behaviors[4] = make__60230620();
   scope->behaviors[5] = make__60230080();
   scope->behaviors[6] = make__60229880();
   scope->behaviors[7] = make__60229380();
   scope->behaviors[8] = make__60229120();
   scope->behaviors[9] = make__60228660();
   scope->behaviors[10] = make__60228420();
   scope->behaviors[11] = make__60227900();
   scope->behaviors[12] = make__60227700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_49084760;

SignalI trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI maketrig__r_48987340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

SignalI trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI maketrig__w_48987320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

SignalI dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makedbus__r_48698280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

SignalI dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makedbus__w_49240700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

SignalI abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49240620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

SignalI abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49240540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

SignalI mem_49372440_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makemem_49372440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49372440_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w1_58112_49084760;
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

Scope raddr_58113_49084420;

Scope makeraddr_58113_49084420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_49084420 = scope;
   scope->owner = (Object)channel__w1_58112_49084760;
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

Scope waddr_58118_49083060;

Scope makewaddr_58118_49083060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_49083060 = scope;
   scope->owner = (Object)channel__w1_58112_49084760;
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

Scope rinc_58123_49082200;

Scope makerinc_58123_49082200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_49082200 = scope;
   scope->owner = (Object)channel__w1_58112_49084760;
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

Scope winc_58127_49081560;

Scope makewinc_58127_49081560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49081560 = scope;
   scope->owner = (Object)channel__w1_58112_49084760;
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

Scope rdec_58131_49080740;

Scope makerdec_58131_49080740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49080740 = scope;
   scope->owner = (Object)channel__w1_58112_49084760;
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

Scope wdec_58136_49079020;

Scope makewdec_58136_49079020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49079020 = scope;
   scope->owner = (Object)channel__w1_58112_49084760;
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

Behavior __49736680;

Behavior make__49736680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49736680 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->neg[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_neg-1] = (Object)behavior;
   behavior->block = make__49778340();

   return behavior;
}

Behavior __60250360;

Behavior make__60250360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60250360 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[dbus__r_48698280_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60250520();

   return behavior;
}

Behavior __60250160;

Behavior make__60250160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60250160 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58126_49388700_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60250320();

   return behavior;
}

Behavior __60249680;

Behavior make__60249680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60249680 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[trig__r_48987340_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60249860();

   return behavior;
}

Behavior __60249460;

Behavior make__60249460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60249460 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58124_49388620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60249640();

   return behavior;
}

Behavior __60248920;

Behavior make__60248920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60248920 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[abus__r_49240620_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60249100();

   return behavior;
}

Behavior __60248680;

Behavior make__60248680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60248680 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58125_49388500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60248860();

   return behavior;
}

Behavior __60248180;

Behavior make__60248180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60248180 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[trig__w_48987320_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60248340();

   return behavior;
}

Behavior __60247980;

Behavior make__60247980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247980 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58128_52596460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60248140();

   return behavior;
}

Behavior __60247500;

Behavior make__60247500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247500 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[abus__w_49240540_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60247680();

   return behavior;
}

Behavior __60247280;

Behavior make__60247280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60247280 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58129_52596360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60247460();

   return behavior;
}

Behavior __60246720;

Behavior make__60246720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60246720 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[dbus__w_49240700_channel__w1_58112_49084760_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60246920();

   return behavior;
}

Behavior __60246460;

Behavior make__60246460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60246460 = behavior;
   behavior->owner = (Object)channel__w1_58112_49084760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58130_52745480_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60246680();

   return behavior;
}

Scope makechannel__w1_58112_49084760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_49084760 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48987340();
   scope->inners[1] = maketrig__w_48987320();
   scope->inners[2] = makedbus__r_48698280();
   scope->inners[3] = makedbus__w_49240700();
   scope->inners[4] = makeabus__r_49240620();
   scope->inners[5] = makeabus__w_49240540();
   scope->inners[6] = makemem_49372440();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_49084420();
   scope->scopes[1] = makewaddr_58118_49083060();
   scope->scopes[2] = makerinc_58123_49082200();
   scope->scopes[3] = makewinc_58127_49081560();
   scope->scopes[4] = makerdec_58131_49080740();
   scope->scopes[5] = makewdec_58136_49079020();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49736680();
   scope->behaviors[1] = make__60250360();
   scope->behaviors[2] = make__60250160();
   scope->behaviors[3] = make__60249680();
   scope->behaviors[4] = make__60249460();
   scope->behaviors[5] = make__60248920();
   scope->behaviors[6] = make__60248680();
   scope->behaviors[7] = make__60248180();
   scope->behaviors[8] = make__60247980();
   scope->behaviors[9] = make__60247500();
   scope->behaviors[10] = make__60247280();
   scope->behaviors[11] = make__60246720();
   scope->behaviors[12] = make__60246460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49736500;

SignalI reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereg__0_47807460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__accum_58141_49736500;
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

SignalI reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereg__1_49045540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__accum_58141_49736500;
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

Scope anum_58142_49735660;

Scope makeanum_58142_49735660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49735660 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
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

Scope raddr_58145_49734880;

Scope makeraddr_58145_49734880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49734880 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
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

Scope waddr_58149_49734400;

Scope makewaddr_58149_49734400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49734400 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
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

Scope rinc_58153_49733980;

SignalI abus__r_45735460_rinc_58153_49733980_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_45735460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45735460_rinc_58153_49733980_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_58153_49733980;
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

Scope makerinc_58153_49733980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49733980 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45735460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_45735100;

SignalI abus__w_45733900_winc_58158_45735100_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_45733900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45733900_winc_58158_45735100_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_58158_45735100;
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

Scope makewinc_58158_45735100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_45735100 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45733900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_45733500;

SignalI abus__r_45731360_rdec_58163_45733500_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_45731360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45731360_rdec_58163_45733500_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_58163_45733500;
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

Scope makerdec_58163_45733500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_45733500 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45731360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_45730040;

SignalI abus__w_45598640_wdec_58168_45730040_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_45598640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45598640_wdec_58168_45730040_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_58168_45730040;
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

Scope makewdec_58168_45730040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_45730040 = scope;
   scope->owner = (Object)channel__accum_58141_49736500;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45598640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60244400;

Behavior make__60244400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60244400 = behavior;
   behavior->owner = (Object)channel__accum_58141_49736500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__0_47807460_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60244620();

   return behavior;
}

Behavior __60244200;

Behavior make__60244200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60244200 = behavior;
   behavior->owner = (Object)channel__accum_58141_49736500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58143_48666620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60244360();

   return behavior;
}

Behavior __60268280;

Behavior make__60268280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60268280 = behavior;
   behavior->owner = (Object)channel__accum_58141_49736500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__1_49045540_channel__accum_58141_49736500_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60268440();

   return behavior;
}

Behavior __60268080;

Behavior make__60268080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60268080 = behavior;
   behavior->owner = (Object)channel__accum_58141_49736500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58144_49218520_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60268240();

   return behavior;
}

Scope makechannel__accum_58141_49736500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49736500 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47807460();
   scope->inners[1] = makereg__1_49045540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49735660();
   scope->scopes[1] = makeraddr_58145_49734880();
   scope->scopes[2] = makewaddr_58149_49734400();
   scope->scopes[3] = makerinc_58153_49733980();
   scope->scopes[4] = makewinc_58158_45735100();
   scope->scopes[5] = makerdec_58163_45733500();
   scope->scopes[6] = makewdec_58168_45730040();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60244400();
   scope->behaviors[1] = make__60244200();
   scope->behaviors[2] = make__60268280();
   scope->behaviors[3] = make__60268080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_51489840;

SignalI lv0_46453700_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelv0_46453700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_46453700_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI lv1_47421140_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelv1_47421140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47421140_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI av0_47906620_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeav0_47906620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47906620_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI av1_48592300_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeav1_48592300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48592300_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI rv_48987540_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerv_48987540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48987540_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI lvok0_48987520_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelvok0_48987520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48987520_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI lvok1_48987500_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelvok1_48987500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48987500_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI rvok_48987480_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makervok_48987480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48987480_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

SignalI run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerun_48987460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48987460_mac__n1_58173_51489840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58173_51489840;
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

Behavior __54029420;

Behavior make__54029420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54029420 = behavior;
   behavior->owner = (Object)mac__n1_58173_51489840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__48986960();

   return behavior;
}

Scope makemac__n1_58173_51489840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_51489840 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_46453700();
   scope->inners[1] = makelv1_47421140();
   scope->inners[2] = makeav0_47906620();
   scope->inners[3] = makeav1_48592300();
   scope->inners[4] = makerv_48987540();
   scope->inners[5] = makelvok0_48987520();
   scope->inners[6] = makelvok1_48987500();
   scope->inners[7] = makervok_48987480();
   scope->inners[8] = makerun_48987460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54029420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_54029300;

SignalI reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereg__0_54186500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__bias_58180_54029300;
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

SignalI reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereg__1_54248740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__bias_58180_54029300;
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

Scope anum_58181_54029000;

Scope makeanum_58181_54029000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_54029000 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
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

Scope raddr_58184_54028580;

Scope makeraddr_58184_54028580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_54028580 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
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

Scope waddr_58188_54028160;

Scope makewaddr_58188_54028160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_54028160 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
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

Scope rinc_58192_54027740;

SignalI abus__r_54027360_rinc_58192_54027740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_54027360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54027360_rinc_58192_54027740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_58192_54027740;
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

Scope makerinc_58192_54027740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_54027740 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54027360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_54027240;

SignalI abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_54026860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_58196_54027240;
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

Behavior __60261540;

Behavior make__60261540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60261540 = behavior;
   behavior->owner = (Object)winc_58196_54027240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[abus__w_54026860_winc_58196_54027240_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60261700();

   return behavior;
}

Behavior __60261340;

Behavior make__60261340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60261340 = behavior;
   behavior->owner = (Object)winc_58196_54027240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58199_52464920_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60261500();

   return behavior;
}

Scope makewinc_58196_54027240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_54027240 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54026860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60261540();
   scope->behaviors[1] = make__60261340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_54026480;

SignalI abus__r_54050620_rdec_58200_54026480_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_54050620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54050620_rdec_58200_54026480_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_58200_54026480;
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

Scope makerdec_58200_54026480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_54026480 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54050620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_54050500;

SignalI abus__w_54050120_wdec_58205_54050500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_54050120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54050120_wdec_58205_54050500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_58205_54050500;
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

Scope makewdec_58205_54050500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_54050500 = scope;
   scope->owner = (Object)channel__bias_58180_54029300;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54050120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60265860;

Behavior make__60265860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60265860 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60266020();

   return behavior;
}

Behavior __60265660;

Behavior make__60265660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60265660 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58182_49496380_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60265820();

   return behavior;
}

Behavior __60265200;

Behavior make__60265200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60265200 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60265360();

   return behavior;
}

Behavior __60264940;

Behavior make__60264940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60264940 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58183_49655960_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60265160();

   return behavior;
}

Behavior __60264340;

Behavior make__60264340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60264340 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__0_54186500_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60264500();

   return behavior;
}

Behavior __60264140;

Behavior make__60264140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60264140 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58197_52364720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60264300();

   return behavior;
}

Behavior __60263680;

Behavior make__60263680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60263680 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__1_54248740_channel__bias_58180_54029300_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60263840();

   return behavior;
}

Behavior __60263480;

Behavior make__60263480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60263480 = behavior;
   behavior->owner = (Object)channel__bias_58180_54029300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58198_52465000_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60263640();

   return behavior;
}

Scope makechannel__bias_58180_54029300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_54029300 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54186500();
   scope->inners[1] = makereg__1_54248740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_54029000();
   scope->scopes[1] = makeraddr_58184_54028580();
   scope->scopes[2] = makewaddr_58188_54028160();
   scope->scopes[3] = makerinc_58192_54027740();
   scope->scopes[4] = makewinc_58196_54027240();
   scope->scopes[5] = makerdec_58200_54026480();
   scope->scopes[6] = makewdec_58205_54050500();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60265860();
   scope->behaviors[1] = make__60265660();
   scope->behaviors[2] = make__60265200();
   scope->behaviors[3] = make__60264940();
   scope->behaviors[4] = make__60264340();
   scope->behaviors[5] = make__60264140();
   scope->behaviors[6] = make__60263680();
   scope->behaviors[7] = make__60263480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_49447720;

SignalI reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereg__0_49608900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__z_58210_49447720;
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

SignalI reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makereg__1_49724980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__z_58210_49447720;
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

Scope anum_58211_49447400;

Scope makeanum_58211_49447400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_49447400 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
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

Scope raddr_58214_49470780;

Scope makeraddr_58214_49470780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_49470780 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
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

Scope waddr_58218_49470220;

Scope makewaddr_58218_49470220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_49470220 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
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

Scope rinc_58222_49469720;

SignalI abus__r_49469340_rinc_58222_49469720_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49469340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49469340_rinc_58222_49469720_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_58222_49469720;
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

Scope makerinc_58222_49469720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_49469720 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49469340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_49469180;

SignalI abus__w_49468540_winc_58226_49469180_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49468540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49468540_winc_58226_49469180_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_58226_49469180;
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

Scope makewinc_58226_49469180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_49469180 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49468540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_49468280;

SignalI abus__r_49467820_rdec_58230_49468280_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49467820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49467820_rdec_58230_49468280_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_58230_49468280;
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

Scope makerdec_58230_49468280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_49468280 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49467820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_49467680;

SignalI abus__w_49467240_wdec_58235_49467680_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49467240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49467240_wdec_58235_49467680_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_58235_49467680;
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

Scope makewdec_58235_49467680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_49467680 = scope;
   scope->owner = (Object)channel__z_58210_49447720;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49467240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60325360;

Behavior make__60325360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60325360 = behavior;
   behavior->owner = (Object)channel__z_58210_49447720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__0_49608900_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60325520();

   return behavior;
}

Behavior __60325160;

Behavior make__60325160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60325160 = behavior;
   behavior->owner = (Object)channel__z_58210_49447720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58212_49777840_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60325320();

   return behavior;
}

Behavior __60324700;

Behavior make__60324700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60324700 = behavior;
   behavior->owner = (Object)channel__z_58210_49447720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[reg__1_49724980_channel__z_58210_49447720_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60324860();

   return behavior;
}

Behavior __60324500;

Behavior make__60324500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60324500 = behavior;
   behavior->owner = (Object)channel__z_58210_49447720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_58213_49101940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60324660();

   return behavior;
}

Scope makechannel__z_58210_49447720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_49447720 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49608900();
   scope->inners[1] = makereg__1_49724980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_49447400();
   scope->scopes[1] = makeraddr_58214_49470780();
   scope->scopes[2] = makewaddr_58218_49470220();
   scope->scopes[3] = makerinc_58222_49469720();
   scope->scopes[4] = makewinc_58226_49469180();
   scope->scopes[5] = makerdec_58230_49468280();
   scope->scopes[6] = makewdec_58235_49467680();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60325360();
   scope->behaviors[1] = make__60325160();
   scope->behaviors[2] = make__60324700();
   scope->behaviors[3] = make__60324500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_51985360;

SignalI lv0_52029880_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelv0_52029880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52029880_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI lv1_52336860_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelv1_52336860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52336860_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI rv0_52381620_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerv0_52381620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52381620_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI rv1_52549080_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerv1_52549080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52549080_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI lvok0_52549060_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelvok0_52549060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52549060_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI lvok1_52549040_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makelvok1_52549040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52549040_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI rvok0_52549020_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makervok0_52549020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52549020_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI rvok1_52549000_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makervok1_52549000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52549000_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

SignalI run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240;

SignalI makerun_52548980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52548980_add__n_58240_51985360_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58240_51985360;
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

Behavior __47935200;

Behavior make__47935200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47935200 = behavior;
   behavior->owner = (Object)add__n_58240_51985360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__52548860();

   return behavior;
}

Scope makeadd__n_58240_51985360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_51985360 = scope;
   scope->owner = (Object)layer0_58_84_49083920;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52029880();
   scope->inners[1] = makelv1_52336860();
   scope->inners[2] = makerv0_52381620();
   scope->inners[3] = makerv1_52549080();
   scope->inners[4] = makelvok0_52549060();
   scope->inners[5] = makelvok1_52549040();
   scope->inners[6] = makervok0_52549020();
   scope->inners[7] = makervok1_52549000();
   scope->inners[8] = makerun_52548980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47935200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54083260;

Behavior make__54083260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54083260 = behavior;
   behavior->owner = (Object)layer0_58_84_49083920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__53071520();

   return behavior;
}

Behavior __48695440;

Behavior make__48695440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48695440 = behavior;
   behavior->owner = (Object)layer0_58_84_49083920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__54083060();

   return behavior;
}

Behavior __51791980;

Behavior make__51791980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51791980 = behavior;
   behavior->owner = (Object)layer0_58_84_49083920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->pos[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__48695160();

   return behavior;
}

Behavior __60215160;

Behavior make__60215160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60215160 = behavior;
   behavior->owner = (Object)layer0_58_84_49083920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[ack__mac_47955880_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60215400();

   return behavior;
}

Behavior __60232720;

Behavior make__60232720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60232720 = behavior;
   behavior->owner = (Object)layer0_58_84_49083920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[ack_47931460_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[value__z0_51766620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[value__z1_51916020_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[ack__a0_52239640_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[ack__a1_52239620_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60215680();

   return behavior;
}

Behavior __60232540;

Behavior make__60232540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60232540 = behavior;
   behavior->owner = (Object)layer0_58_84_49083920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[ack__mac_52794220_counter_58_841_52796340_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[a_52810000_func0_58_841_52466180_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[a_49717900_func1_58_840_49283940_layer0_58_84_49083920_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60215600();

   return behavior;
}

Scope makelayer0_58_84_49083920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49083920 = scope;
   scope->owner = (Object)layer0_58_840_51791280;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_52794080();
   scope->systemIs[1] = makefunc0_52809820();
   scope->systemIs[2] = makefunc1_49717660();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_47931580();
   scope->inners[1] = makeack_47931460();
   scope->inners[2] = makeack__mac_47955880();
   scope->inners[3] = makeack__add_47955520();
   scope->inners[4] = make_5897_48885320();
   scope->inners[5] = make_5895_48885280();
   scope->inners[6] = make_5896_48885200();
   scope->inners[7] = make_58143_48666620();
   scope->inners[8] = make_58144_49218520();
   scope->inners[9] = make_58126_49388700();
   scope->inners[10] = make_58124_49388620();
   scope->inners[11] = make_58125_49388500();
   scope->inners[12] = make_58182_49496380();
   scope->inners[13] = make_58183_49655960();
   scope->inners[14] = make_58212_49777840();
   scope->inners[15] = make_58213_49101940();
   scope->inners[16] = makevalue__z0_51766620();
   scope->inners[17] = makevalue__z1_51916020();
   scope->inners[18] = makevalue__a0_52016280();
   scope->inners[19] = makevalue__a1_52239700();
   scope->inners[20] = makeflag__z0_52239680();
   scope->inners[21] = makeflag__z1_52239660();
   scope->inners[22] = makeack__a0_52239640();
   scope->inners[23] = makeack__a1_52239620();
   scope->inners[24] = make_58197_52364720();
   scope->inners[25] = make_58198_52465000();
   scope->inners[26] = make_58199_52464920();
   scope->inners[27] = make_5899_52464900();
   scope->inners[28] = make_58100_52464820();
   scope->inners[29] = make_58101_52596480();
   scope->inners[30] = make_58128_52596460();
   scope->inners[31] = make_58129_52596360();
   scope->inners[32] = make_58130_52745480();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49083620();
   scope->scopes[1] = makechannel__w1_58112_49084760();
   scope->scopes[2] = makechannel__accum_58141_49736500();
   scope->scopes[3] = makemac__n1_58173_51489840();
   scope->scopes[4] = makechannel__bias_58180_54029300();
   scope->scopes[5] = makechannel__z_58210_49447720();
   scope->scopes[6] = makeadd__n_58240_51985360();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54083260();
   scope->behaviors[1] = make__48695440();
   scope->behaviors[2] = make__51791980();
   scope->behaviors[3] = make__60215160();
   scope->behaviors[4] = make__60232720();
   scope->behaviors[5] = make__60232540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_51791280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_51791280 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51845580();
   systemT->inputs[1] = makerst_51845560();
   systemT->inputs[2] = makefill_51845520();
   systemT->inputs[3] = makereq_51845500();
   systemT->inputs[4] = make_5815_52018160();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_52018020();
   systemT->outputs[1] = make_5813_52017940();
   systemT->outputs[2] = make_5814_52017860();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5832_52352860();
   systemT->inouts[1] = make_5833_52545100();

   systemT->scope = makelayer0_58_84_49083920();

   return systemT;
}