#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__hidden_58_840_53373100;

SignalI clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeclk_53411220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_53373100;
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

SignalI rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerst_53411200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_53373100;
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

SignalI fill_53411180_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makefill_53411180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_53411180_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_53373100;
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

SignalI req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereq_53411160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_53373100;
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

SignalI ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack__0_53411120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_53373100;
   signalI->name = "ack_0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __48258940;

Block __48257680;

Block __48257320;

void code__48257320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60070700(),flag__z0_49711760_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__48257320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48257320 = block;
   block->owner = (Object)__48257680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48257320;

   return block;
};

Block __49166220;

void code__49166220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60070560(),flag__z1_49711740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49166220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49166220 = block;
   block->owner = (Object)__48257680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49166220;

   return block;
};

void code__48257680() {
 code__48257320();
 code__49166220();
}

Block make__48257680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48257680 = block;
   block->owner = (Object)__48258940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48257680;

   return block;
};

Block __48258700;

void code__48258700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60070500(),flag__z0_49711760_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60070440(),flag__z1_49711740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__48258700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48258700 = block;
   block->owner = (Object)__48258940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48258700;

   return block;
};

void code__48258940() {
   {
      Value cond = ack__add_54209200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48257680();
   }
   else {
  code__48258700();
   }
      }
   }
}

Block make__48258940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48258940 = block;
   block->owner = (Object)__49851700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48258940;

   return block;
};

Block __49851360;

Block __49850680;

Block __49849620;

void code__49849620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_49568820_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_5832_49696560______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60070200(),ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49849620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49849620 = block;
   block->owner = (Object)__49850680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49849620;

   return block;
};

Block __52232440;

void code__52232440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_49711780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_5833_49815100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60070060(),ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52232440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52232440 = block;
   block->owner = (Object)__49850680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52232440;

   return block;
};

void code__49850680() {
 code__49849620();
 code__52232440();
}

Block make__49850680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49850680 = block;
   block->owner = (Object)__49851360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49850680;

   return block;
};

void code__49851360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_49711760_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = flag__z1_49711740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49850680();
   }
      }
   }
}

Block make__49851360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49851360 = block;
   block->owner = (Object)__52543160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49851360;

   return block;
};

Block __52542880;

Block __52542520;

Block __52542120;

void code__52542120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60069900(),_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52542120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52542120 = block;
   block->owner = (Object)__52542520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52542120;

   return block;
};

void code__52542520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60069980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52542120();
   }
      }
   }
}

Block make__52542520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52542520 = block;
   block->owner = (Object)__52542880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52542520;

   return block;
};

Block __52541240;

Block __52540660;

void code__52540660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60069740(),_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52540660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52540660 = block;
   block->owner = (Object)__52541240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52540660;

   return block;
};

void code__52541240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60069820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52540660();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60069680(),_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52541240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52541240 = block;
   block->owner = (Object)__52542880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52541240;

   return block;
};

Block __52539800;

Block __52539260;

void code__52539260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60069440(),_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52539260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52539260 = block;
   block->owner = (Object)__52539800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52539260;

   return block;
};

void code__52539800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60069580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52539260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60069380(),_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52539800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52539800 = block;
   block->owner = (Object)__52542880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52539800;

   return block;
};

Block __52538100;

Block __52537840;

Block __52537460;

void code__52537460() {
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
                  src0 = _58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60069000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068900(),_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068840(),_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52537460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52537460 = block;
   block->owner = (Object)__52537840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52537460;

   return block;
};

void code__52537840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60069140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52537460();
   }
      }
   }
}

Block make__52537840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52537840 = block;
   block->owner = (Object)__52538100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52537840;

   return block;
};

Block __52750420;

Block __52749980;

void code__52749980() {
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
                  src0 = _58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60068620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068520(),_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068460(),_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52749980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52749980 = block;
   block->owner = (Object)__52750420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52749980;

   return block;
};

void code__52750420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60068760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52749980();
   }
      }
   }
}

Block make__52750420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52750420 = block;
   block->owner = (Object)__52538100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52750420;

   return block;
};

Block __52981680;

Block __52981220;

Block __52980660;

void code__52980660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068200(),_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52980660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52980660 = block;
   block->owner = (Object)__52981220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52980660;

   return block;
};

Block __53177520;

void code__53177520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068120(),_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53177520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53177520 = block;
   block->owner = (Object)__52981220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53177520;

   return block;
};

void code__52981220() {
{
      Value value = _58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60068260())) {
    code__52980660();
         }
         else if (value2integer(value) == value2integer(make__60068180())) {
    code__53177520();
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
                  src0 = _58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60068000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52981220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52981220 = block;
   block->owner = (Object)__52981680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52981220;

   return block;
};

void code__52981680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60068380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52981220();
   }
      }
   }
}

Block make__52981680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52981680 = block;
   block->owner = (Object)__52538100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52981680;

   return block;
};

void code__52538100() {
 code__52537840();
 code__52750420();
 code__52981680();
}

Block make__52538100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52538100 = block;
   block->owner = (Object)__52542880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52538100;

   return block;
};

void code__52542880() {
 code__52542520();
 code__52541240();
 code__52539800();
   {
      Value cond = fill_53411180_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52538100();
   }
      }
   }
}

Block make__52542880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52542880 = block;
   block->owner = (Object)__53373520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52542880;

   return block;
};

Block __59628940;

void code__59628940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54209260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59628940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59628940 = block;
   block->owner = (Object)__59628700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59628940;

   return block;
};

Block __59629220;

void code__59629220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,clk_52301580_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,ack_52301560_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,rst_52301540_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,z__value_53177620_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      src1 = ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59629220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59629220 = block;
   block->owner = (Object)__59621760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59629220;

   return block;
};

Block __59629160;

void code__59629160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,value__a00_49568820_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,value__a01_49711780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59629160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59629160 = block;
   block->owner = (Object)__59621600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59629160;

   return block;
};

Block __49380740;

Block __49746180;

void code__49746180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,make_ref_rangeS(mem_48885000_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220,value2integer(abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value),value2integer(abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49746180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49746180 = block;
   block->owner = (Object)__49380740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49746180;

   return block;
};

void code__49380740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48885000_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
            idx = value2integer(abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49746180();
   }
      }
   }
}

Block make__49380740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49380740 = block;
   block->owner = (Object)__45760360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49380740;

   return block;
};

Block __59776340;

void code__59776340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59776340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59776340 = block;
   block->owner = (Object)__59776140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59776340;

   return block;
};

Block __59776100;

void code__59776100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59776100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59776100 = block;
   block->owner = (Object)__59775940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59776100;

   return block;
};

Block __59775640;

void code__59775640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59775640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59775640 = block;
   block->owner = (Object)__59775480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59775640;

   return block;
};

Block __59775440;

void code__59775440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59775440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59775440 = block;
   block->owner = (Object)__59775280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59775440;

   return block;
};

Block __59774980;

void code__59774980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59774980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59774980 = block;
   block->owner = (Object)__59774820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59774980;

   return block;
};

Block __59774780;

void code__59774780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59774780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59774780 = block;
   block->owner = (Object)__59774600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59774780;

   return block;
};

Block __59774160;

void code__59774160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59774160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59774160 = block;
   block->owner = (Object)__59773960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59774160;

   return block;
};

Block __59773920;

void code__59773920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59773920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773920 = block;
   block->owner = (Object)__59773760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773920;

   return block;
};

Block __59773460;

void code__59773460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59773460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773460 = block;
   block->owner = (Object)__59773300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773460;

   return block;
};

Block __59773260;

void code__59773260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59773260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773260 = block;
   block->owner = (Object)__59773100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773260;

   return block;
};

Block __59772800;

void code__59772800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59772800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59772800 = block;
   block->owner = (Object)__59772640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59772800;

   return block;
};

Block __59772600;

void code__59772600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59772600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59772600 = block;
   block->owner = (Object)__59772400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59772600;

   return block;
};

Block __49375960;

Block __49777800;

void code__49777800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,make_ref_rangeS(mem_48888520_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220,value2integer(abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value),value2integer(abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49777800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49777800 = block;
   block->owner = (Object)__49375960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49777800;

   return block;
};

void code__49375960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48888520_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
            idx = value2integer(abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49777800();
   }
      }
   }
}

Block make__49375960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49375960 = block;
   block->owner = (Object)__48157320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49375960;

   return block;
};

Block __59770580;

void code__59770580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59770580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59770580 = block;
   block->owner = (Object)__59770400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59770580;

   return block;
};

Block __59770340;

void code__59770340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59770340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59770340 = block;
   block->owner = (Object)__59770160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59770340;

   return block;
};

Block __59769780;

void code__59769780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59769780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59769780 = block;
   block->owner = (Object)__59769600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59769780;

   return block;
};

Block __59769520;

void code__59769520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59769520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59769520 = block;
   block->owner = (Object)__59769360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59769520;

   return block;
};

Block __59769060;

void code__59769060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59769060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59769060 = block;
   block->owner = (Object)__59768900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59769060;

   return block;
};

Block __59768860;

void code__59768860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59768860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59768860 = block;
   block->owner = (Object)__59793240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59768860;

   return block;
};

Block __59792940;

void code__59792940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59792940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792940 = block;
   block->owner = (Object)__59792740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792940;

   return block;
};

Block __59792700;

void code__59792700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59792700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792700 = block;
   block->owner = (Object)__59792480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792700;

   return block;
};

Block __59792140;

void code__59792140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59792140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792140 = block;
   block->owner = (Object)__59791960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792140;

   return block;
};

Block __59791880;

void code__59791880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59791880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59791880 = block;
   block->owner = (Object)__59791720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59791880;

   return block;
};

Block __59791420;

void code__59791420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59791420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59791420 = block;
   block->owner = (Object)__59791260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59791420;

   return block;
};

Block __59791220;

void code__59791220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59791220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59791220 = block;
   block->owner = (Object)__59791060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59791220;

   return block;
};

Block __59789340;

void code__59789340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59789340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59789340 = block;
   block->owner = (Object)__59789180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59789340;

   return block;
};

Block __59789140;

void code__59789140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59789140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59789140 = block;
   block->owner = (Object)__59788980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59789140;

   return block;
};

Block __59788640;

void code__59788640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59788640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59788640 = block;
   block->owner = (Object)__59788460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59788640;

   return block;
};

Block __59788380;

void code__59788380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59788380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59788380 = block;
   block->owner = (Object)__59788220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59788380;

   return block;
};

Block __45283400;

Block __45283020;

Block __45281080;

void code__45281080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59958000(),_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45281080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45281080 = block;
   block->owner = (Object)__45283020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45281080;

   return block;
};

void code__45283020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59958080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45281080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957940(),_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45283020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45283020 = block;
   block->owner = (Object)__45283400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45283020;

   return block;
};

Block __45327180;

Block __45366120;

void code__45366120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957740(),_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45366120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45366120 = block;
   block->owner = (Object)__45327180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45366120;

   return block;
};

void code__45327180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59957840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45366120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957680(),_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45327180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45327180 = block;
   block->owner = (Object)__45283400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45327180;

   return block;
};

Block __45376780;

Block __45396960;

void code__45396960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957460(),_5814_49407020______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45396960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45396960 = block;
   block->owner = (Object)__45376780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45396960;

   return block;
};

void code__45376780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59957540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45396960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957400(),_5813_49407120______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45376780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45376780 = block;
   block->owner = (Object)__45283400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45376780;

   return block;
};

Block __48120480;

Block __48142320;

Block __48139480;

Block __48139120;

void code__48139120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49407140______58_84_49763560______58_840_59389220->c_value,rv_45284100_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59981220(),rvok_45283880_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__48139120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139120 = block;
   block->owner = (Object)__48139480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139120;

   return block;
};

void code__48139480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_49407120______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59981380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48139120();
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
                  src0 = _5814_49407020______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59981100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_49407020______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59981000(),_5813_49407120______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__48139480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48139480 = block;
   block->owner = (Object)__48142320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48139480;

   return block;
};

void code__48142320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59981480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48139480();
   }
      }
   }
}

Block make__48142320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48142320 = block;
   block->owner = (Object)__48120480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48142320;

   return block;
};

Block __49275840;

Block __49275300;

Block __49274980;

void code__49274980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,lv0_48943360_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59980660(),lvok0_45284040_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49274980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49274980 = block;
   block->owner = (Object)__49275300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49274980;

   return block;
};

void code__49275300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59980820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49274980();
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
                  src0 = _5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59980540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59980440(),_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__49275300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49275300 = block;
   block->owner = (Object)__49275840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49275300;

   return block;
};

void code__49275840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59980920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49275300();
   }
      }
   }
}

Block make__49275840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49275840 = block;
   block->owner = (Object)__48120480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49275840;

   return block;
};

Block __49146160;

Block __49145400;

Block __49145240;

void code__49145240() {
}

Block make__49145240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49145240 = block;
   block->owner = (Object)__49145400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49145240;

   return block;
};

Block __52304800;

void code__52304800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49599460_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52304800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52304800 = block;
   block->owner = (Object)__49145400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52304800;

   return block;
};

void code__49145400() {
 code__49145240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49599460_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
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
                              src0 = lv0_48943360_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_45284100_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59979760();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49599460_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__52304800();
}

Block make__49145400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49145400 = block;
   block->owner = (Object)__49146160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49145400;

   return block;
};

void code__49146160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59980280(),ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59980200(),run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__49145400();
}

Block make__49146160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49146160 = block;
   block->owner = (Object)__48120480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49146160;

   return block;
};

Block __52438180;

Block __52437860;

Block __52437540;

void code__52437540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,lv1_49411960_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59979220(),lvok1_45283920_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52437540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52437540 = block;
   block->owner = (Object)__52437860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52437540;

   return block;
};

void code__52437860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59979380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52437540();
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
                  src0 = _58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59979100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59979000(),_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52437860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52437860 = block;
   block->owner = (Object)__52438180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52437860;

   return block;
};

void code__52438180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59979520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52437860();
   }
      }
   }
}

Block make__52438180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52438180 = block;
   block->owner = (Object)__48120480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52438180;

   return block;
};

Block __52586280;

Block __52585800;

Block __52585640;

void code__52585640() {
}

Block make__52585640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585640 = block;
   block->owner = (Object)__52585800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585640;

   return block;
};

Block __53458460;

void code__53458460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49921480_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53458460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53458460 = block;
   block->owner = (Object)__52585800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53458460;

   return block;
};

void code__52585800() {
 code__52585640();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49921480_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
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
                              src0 = lv1_49411960_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_45284100_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59978440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49921480_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__53458460();
}

Block make__52585800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585800 = block;
   block->owner = (Object)__52586280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585800;

   return block;
};

void code__52586280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978840(),ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978780(),run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__52585800();
}

Block make__52586280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52586280 = block;
   block->owner = (Object)__48120480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52586280;

   return block;
};

void code__48120480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59981600(),run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__48142320();
 code__49275840();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_45284040_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = rvok_45283880_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49146160();
   }
      }
   }
 code__52438180();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_45283920_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = rvok_45283880_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52586280();
   }
      }
   }
}

Block make__48120480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48120480 = block;
   block->owner = (Object)__45283400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48120480;

   return block;
};

Block __45479100;

void code__45479100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978260(),rvok_45283880_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978200(),lvok0_45284040_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978140(),av0_49599460_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978060(),lvok1_45283920_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59978000(),av1_49921480_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__45479100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45479100 = block;
   block->owner = (Object)__45283400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45479100;

   return block;
};

void code__45283400() {
 code__45283020();
 code__45327180();
 code__45376780();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957320(),ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59957260(),run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54209260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48120480();
   }
   else {
  code__45479100();
   }
      }
   }
}

Block make__45283400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45283400 = block;
   block->owner = (Object)__53894580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45283400;

   return block;
};

Block __59786200;

void code__59786200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59786200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59786200 = block;
   block->owner = (Object)__59786000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59786200;

   return block;
};

Block __59785960;

void code__59785960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59785960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59785960 = block;
   block->owner = (Object)__59785800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59785960;

   return block;
};

Block __59785460;

void code__59785460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59785460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59785460 = block;
   block->owner = (Object)__59785280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59785460;

   return block;
};

Block __59834320;

void code__59834320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59834320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59834320 = block;
   block->owner = (Object)__59834160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59834320;

   return block;
};

Block __59833860;

void code__59833860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59833860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59833860 = block;
   block->owner = (Object)__59833700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59833860;

   return block;
};

Block __59833660;

void code__59833660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59833660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59833660 = block;
   block->owner = (Object)__59833480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59833660;

   return block;
};

Block __59833100;

void code__59833100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59833100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59833100 = block;
   block->owner = (Object)__59832940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59833100;

   return block;
};

Block __59832900;

void code__59832900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59832900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59832900 = block;
   block->owner = (Object)__59832740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59832900;

   return block;
};

Block __59830960;

void code__59830960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59830960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59830960 = block;
   block->owner = (Object)__59830800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59830960;

   return block;
};

Block __59830760;

void code__59830760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59830760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59830760 = block;
   block->owner = (Object)__59830600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59830760;

   return block;
};

Block __59829360;

void code__59829360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59829360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59829360 = block;
   block->owner = (Object)__59829180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59829360;

   return block;
};

Block __59829140;

void code__59829140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59829140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59829140 = block;
   block->owner = (Object)__59828920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59829140;

   return block;
};

Block __59828620;

void code__59828620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59828620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59828620 = block;
   block->owner = (Object)__59828460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59828620;

   return block;
};

Block __59828420;

void code__59828420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59828420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59828420 = block;
   block->owner = (Object)__59828260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59828420;

   return block;
};

Block __52142960;

Block __52239700;

Block __52239380;

void code__52239380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,lv0_49853200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975540(),lvok0_52143160_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52239380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52239380 = block;
   block->owner = (Object)__52239700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52239380;

   return block;
};

Block __52402160;

void code__52402160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,rv0_51918200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975300(),rvok0_52143120_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52402160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52402160 = block;
   block->owner = (Object)__52239700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52402160;

   return block;
};

Block __52572580;

Block __52572100;

void code__52572100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49853200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      src1 = rv0_51918200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52572100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52572100 = block;
   block->owner = (Object)__52572580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52572100;

   return block;
};

void code__52572580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975080(),run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975020(),ack__add_54209200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__52572100();
}

Block make__52572580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52572580 = block;
   block->owner = (Object)__52239700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52572580;

   return block;
};

Block __53118440;

void code__53118440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,lv1_49948940_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59974700(),lvok1_52143140_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53118440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53118440 = block;
   block->owner = (Object)__52239700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53118440;

   return block;
};

Block __53305720;

void code__53305720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,rv1_52143180_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59974560(),rvok1_52143100_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53305720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53305720 = block;
   block->owner = (Object)__52239700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53305720;

   return block;
};

Block __53746780;

Block __53746260;

void code__53746260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_49948940_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      src1 = rv1_52143180_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__53746260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53746260 = block;
   block->owner = (Object)__53746780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53746260;

   return block;
};

void code__53746780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59974400(),run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59974340(),ack__add_54209200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__53746260();
}

Block make__53746780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53746780 = block;
   block->owner = (Object)__52239700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53746780;

   return block;
};

void code__52239700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975700(),run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
 code__52239380();
 code__52402160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52143160_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = rvok0_52143120_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52572580();
   }
      }
   }
 code__53118440();
 code__53305720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52143140_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = rvok1_52143100_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53746780();
   }
      }
   }
}

Block make__52239700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52239700 = block;
   block->owner = (Object)__52142960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52239700;

   return block;
};

Block __52142480;

void code__52142480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59974100(),lvok0_52143160_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59974040(),rvok0_52143120_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59973980(),lvok1_52143140_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59973920(),rvok1_52143100_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__52142480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52142480 = block;
   block->owner = (Object)__52142960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52142480;

   return block;
};

void code__52142960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975940(),ack__add_54209200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59975880(),run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         src1 = run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52239700();
   }
   else {
  code__52142480();
   }
      }
   }
}

Block make__52142960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52142960 = block;
   block->owner = (Object)__54209400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52142960;

   return block;
};

Value make__59958080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59958000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59957940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59957840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59957740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59957680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59957540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59957460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59957400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59957320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59957260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59981600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59981480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59981380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59981220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59981100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59981000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59980920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59980820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59980660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59980540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59980440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59980280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59980200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59979760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59979520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59979380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59979220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59979100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59979000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59978840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59978780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59978440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59978260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59978200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59978140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59978060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59978000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59975940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59975880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59975700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59975540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59975300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59975080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59975020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59974700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59974560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59974400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59974340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59974100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59974040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59973980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59973920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60070700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60070560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60070500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60070440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60070200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60070060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60069980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60069900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60069820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60069740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60069680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60069580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60069440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60069380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60069140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60069000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60068900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60068840() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60068760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60068620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60068520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60068460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60068380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60068260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60068200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60068180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60068120() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60068000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__hidden_58_84_47504000;

SignalI req__mac_54209260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereq__mac_54209260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54209260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack_54209240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack__mac_54209220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI ack__add_54209200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack__add_54209200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54209200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_5897_54319540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_5895_54319500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_5896_54319400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58126_54388800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58124_54388780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58125_54388700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58143_54597280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58144_43575180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58176_47633460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = ":176";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58177_48103520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = ":177";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58206_48782380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58207_48946260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = ":207";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makevalue__z0_49100860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makevalue__z1_49375380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI value__a00_49568820_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makevalue__a00_49568820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_49568820_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = "value_a00";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__a01_49711780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makevalue__a01_49711780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_49711780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = "value_a01";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI flag__z0_49711760_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeflag__z0_49711760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_49711760_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI flag__z1_49711740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeflag__z1_49711740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_49711740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack__a00_49711720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = "ack_a00";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeack__a01_49711700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = "ack_a01";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_5899_49711680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58100_49711460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58101_49889200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58128_49889180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58129_49889060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58130_50004740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58191_52071440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
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

SignalI _58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58192_52252460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = ":192";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI make_58193_52252380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_47504000;
   signalI->name = ":193";
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

SystemI counter0_52301360;

SystemI makecounter0_52301360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter0_52301360 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_47504000;
   systemI->name = "counter0";
   systemI->system = counter0_58_840_52303620;

   return systemI;
};

SystemI func0_49681680;

SystemI makefunc0_49681680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49681680 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_47504000;
   systemI->name = "func0";
   systemI->system = func0_58_841_49114060;

   return systemI;
};

SystemI func1_53378640;

SystemI makefunc1_53378640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_53378640 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_47504000;
   systemI->name = "func1";
   systemI->system = func1_58_840_52978000;

   return systemI;
};

Scope channel__w0_5883_47502280;

SignalI trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI maketrig__r_47518900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

SignalI trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI maketrig__w_47518880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

SignalI dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makedbus__r_47947020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

SignalI dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makedbus__w_48154800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

SignalI abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_48154660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

SignalI abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_48154580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

SignalI mem_48885000_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makemem_48885000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48885000_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w0_5883_47502280;
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

Scope raddr_5884_47501420;

Scope makeraddr_5884_47501420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_47501420 = scope;
   scope->owner = (Object)channel__w0_5883_47502280;
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

Scope waddr_5889_47501000;

Scope makewaddr_5889_47501000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_47501000 = scope;
   scope->owner = (Object)channel__w0_5883_47502280;
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

Scope rinc_5894_47498500;

Scope makerinc_5894_47498500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_47498500 = scope;
   scope->owner = (Object)channel__w0_5883_47502280;
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

Scope winc_5898_47520840;

Scope makewinc_5898_47520840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_47520840 = scope;
   scope->owner = (Object)channel__w0_5883_47502280;
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

Scope rdec_58102_47520300;

Scope makerdec_58102_47520300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_47520300 = scope;
   scope->owner = (Object)channel__w0_5883_47502280;
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

Scope wdec_58107_47519720;

Scope makewdec_58107_47519720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_47519720 = scope;
   scope->owner = (Object)channel__w0_5883_47502280;
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

Behavior __45760360;

Behavior make__45760360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45760360 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg-1] = (Object)behavior;
   behavior->block = make__49380740();

   return behavior;
}

Behavior __59776140;

Behavior make__59776140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59776140 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[dbus__r_47947020_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59776340();

   return behavior;
}

Behavior __59775940;

Behavior make__59775940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59775940 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_5897_54319540_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59776100();

   return behavior;
}

Behavior __59775480;

Behavior make__59775480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59775480 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[trig__r_47518900_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59775640();

   return behavior;
}

Behavior __59775280;

Behavior make__59775280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59775280 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_5895_54319500_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59775440();

   return behavior;
}

Behavior __59774820;

Behavior make__59774820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59774820 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[abus__r_48154660_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59774980();

   return behavior;
}

Behavior __59774600;

Behavior make__59774600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59774600 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_5896_54319400_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59774780();

   return behavior;
}

Behavior __59773960;

Behavior make__59773960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773960 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[trig__w_47518880_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59774160();

   return behavior;
}

Behavior __59773760;

Behavior make__59773760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773760 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_5899_49711680_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59773920();

   return behavior;
}

Behavior __59773300;

Behavior make__59773300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773300 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[abus__w_48154580_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59773460();

   return behavior;
}

Behavior __59773100;

Behavior make__59773100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773100 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58100_49711460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59773260();

   return behavior;
}

Behavior __59772640;

Behavior make__59772640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59772640 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[dbus__w_48154800_channel__w0_5883_47502280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59772800();

   return behavior;
}

Behavior __59772400;

Behavior make__59772400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59772400 = behavior;
   behavior->owner = (Object)channel__w0_5883_47502280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58101_49889200_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59772600();

   return behavior;
}

Scope makechannel__w0_5883_47502280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_47502280 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47518900();
   scope->inners[1] = maketrig__w_47518880();
   scope->inners[2] = makedbus__r_47947020();
   scope->inners[3] = makedbus__w_48154800();
   scope->inners[4] = makeabus__r_48154660();
   scope->inners[5] = makeabus__w_48154580();
   scope->inners[6] = makemem_48885000();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_47501420();
   scope->scopes[1] = makewaddr_5889_47501000();
   scope->scopes[2] = makerinc_5894_47498500();
   scope->scopes[3] = makewinc_5898_47520840();
   scope->scopes[4] = makerdec_58102_47520300();
   scope->scopes[5] = makewdec_58107_47519720();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45760360();
   scope->behaviors[1] = make__59776140();
   scope->behaviors[2] = make__59775940();
   scope->behaviors[3] = make__59775480();
   scope->behaviors[4] = make__59775280();
   scope->behaviors[5] = make__59774820();
   scope->behaviors[6] = make__59774600();
   scope->behaviors[7] = make__59773960();
   scope->behaviors[8] = make__59773760();
   scope->behaviors[9] = make__59773300();
   scope->behaviors[10] = make__59773100();
   scope->behaviors[11] = make__59772640();
   scope->behaviors[12] = make__59772400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_45758480;

SignalI trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI maketrig__r_47032220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

SignalI trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI maketrig__w_47032140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

SignalI dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makedbus__r_47842320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

SignalI dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makedbus__w_48136360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

SignalI abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_48136200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

SignalI abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_48160620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

SignalI mem_48888520_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makemem_48888520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48888520_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__w1_58112_45758480;
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

Scope raddr_58113_45754820;

Scope makeraddr_58113_45754820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_45754820 = scope;
   scope->owner = (Object)channel__w1_58112_45758480;
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

Scope waddr_58118_45779720;

Scope makewaddr_58118_45779720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_45779720 = scope;
   scope->owner = (Object)channel__w1_58112_45758480;
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

Scope rinc_58123_45895240;

Scope makerinc_58123_45895240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_45895240 = scope;
   scope->owner = (Object)channel__w1_58112_45758480;
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

Scope winc_58127_45909400;

Scope makewinc_58127_45909400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_45909400 = scope;
   scope->owner = (Object)channel__w1_58112_45758480;
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

Scope rdec_58131_46661320;

Scope makerdec_58131_46661320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_46661320 = scope;
   scope->owner = (Object)channel__w1_58112_45758480;
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

Scope wdec_58136_46659920;

Scope makewdec_58136_46659920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_46659920 = scope;
   scope->owner = (Object)channel__w1_58112_45758480;
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

Behavior __48157320;

Behavior make__48157320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48157320 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->neg[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_neg-1] = (Object)behavior;
   behavior->block = make__49375960();

   return behavior;
}

Behavior __59770400;

Behavior make__59770400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59770400 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[dbus__r_47842320_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59770580();

   return behavior;
}

Behavior __59770160;

Behavior make__59770160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59770160 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58126_54388800_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59770340();

   return behavior;
}

Behavior __59769600;

Behavior make__59769600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59769600 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[trig__r_47032220_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59769780();

   return behavior;
}

Behavior __59769360;

Behavior make__59769360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59769360 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58124_54388780_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59769520();

   return behavior;
}

Behavior __59768900;

Behavior make__59768900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59768900 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[abus__r_48136200_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59769060();

   return behavior;
}

Behavior __59793240;

Behavior make__59793240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59793240 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58125_54388700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59768860();

   return behavior;
}

Behavior __59792740;

Behavior make__59792740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59792740 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[trig__w_47032140_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59792940();

   return behavior;
}

Behavior __59792480;

Behavior make__59792480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59792480 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58128_49889180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59792700();

   return behavior;
}

Behavior __59791960;

Behavior make__59791960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59791960 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[abus__w_48160620_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59792140();

   return behavior;
}

Behavior __59791720;

Behavior make__59791720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59791720 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58129_49889060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59791880();

   return behavior;
}

Behavior __59791260;

Behavior make__59791260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59791260 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[dbus__w_48136360_channel__w1_58112_45758480_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59791420();

   return behavior;
}

Behavior __59791060;

Behavior make__59791060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59791060 = behavior;
   behavior->owner = (Object)channel__w1_58112_45758480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58130_50004740_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59791220();

   return behavior;
}

Scope makechannel__w1_58112_45758480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_45758480 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47032220();
   scope->inners[1] = maketrig__w_47032140();
   scope->inners[2] = makedbus__r_47842320();
   scope->inners[3] = makedbus__w_48136360();
   scope->inners[4] = makeabus__r_48136200();
   scope->inners[5] = makeabus__w_48160620();
   scope->inners[6] = makemem_48888520();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_45754820();
   scope->scopes[1] = makewaddr_58118_45779720();
   scope->scopes[2] = makerinc_58123_45895240();
   scope->scopes[3] = makewinc_58127_45909400();
   scope->scopes[4] = makerdec_58131_46661320();
   scope->scopes[5] = makewdec_58136_46659920();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48157320();
   scope->behaviors[1] = make__59770400();
   scope->behaviors[2] = make__59770160();
   scope->behaviors[3] = make__59769600();
   scope->behaviors[4] = make__59769360();
   scope->behaviors[5] = make__59768900();
   scope->behaviors[6] = make__59793240();
   scope->behaviors[7] = make__59792740();
   scope->behaviors[8] = make__59792480();
   scope->behaviors[9] = make__59791960();
   scope->behaviors[10] = make__59791720();
   scope->behaviors[11] = make__59791260();
   scope->behaviors[12] = make__59791060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_48157180;

SignalI reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereg__0_49293580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__accum_58141_48157180;
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

SignalI reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereg__1_49166880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__accum_58141_48157180;
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

Scope anum_58142_48156660;

Scope makeanum_58142_48156660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_48156660 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
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

Scope raddr_58145_48156220;

Scope makeraddr_58145_48156220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_48156220 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
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

Scope waddr_58149_48155400;

Scope makewaddr_58149_48155400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_48155400 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
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

Scope rinc_58153_48154780;

SignalI abus__r_48154000_rinc_58153_48154780_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_48154000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48154000_rinc_58153_48154780_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_58153_48154780;
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

Scope makerinc_58153_48154780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_48154780 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48154000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_48153860;

SignalI abus__w_48153380_winc_58158_48153860_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_48153380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48153380_winc_58158_48153860_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_58158_48153860;
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

Scope makewinc_58158_48153860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_48153860 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48153380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_48153200;

SignalI abus__r_48193340_rdec_58163_48153200_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_48193340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48193340_rdec_58163_48153200_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_58163_48153200;
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

Scope makerdec_58163_48153200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_48153200 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48193340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_48193220;

SignalI abus__w_48192760_wdec_58168_48193220_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_48192760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48192760_wdec_58168_48193220_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_58168_48193220;
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

Scope makewdec_58168_48193220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_48193220 = scope;
   scope->owner = (Object)channel__accum_58141_48157180;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48192760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59789180;

Behavior make__59789180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59789180 = behavior;
   behavior->owner = (Object)channel__accum_58141_48157180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__0_49293580_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59789340();

   return behavior;
}

Behavior __59788980;

Behavior make__59788980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59788980 = behavior;
   behavior->owner = (Object)channel__accum_58141_48157180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58143_54597280_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59789140();

   return behavior;
}

Behavior __59788460;

Behavior make__59788460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59788460 = behavior;
   behavior->owner = (Object)channel__accum_58141_48157180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__1_49166880_channel__accum_58141_48157180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59788640();

   return behavior;
}

Behavior __59788220;

Behavior make__59788220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59788220 = behavior;
   behavior->owner = (Object)channel__accum_58141_48157180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58144_43575180_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59788380();

   return behavior;
}

Scope makechannel__accum_58141_48157180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_48157180 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49293580();
   scope->inners[1] = makereg__1_49166880();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_48156660();
   scope->scopes[1] = makeraddr_58145_48156220();
   scope->scopes[2] = makewaddr_58149_48155400();
   scope->scopes[3] = makerinc_58153_48154780();
   scope->scopes[4] = makewinc_58158_48153860();
   scope->scopes[5] = makerdec_58163_48153200();
   scope->scopes[6] = makewdec_58168_48193220();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59789180();
   scope->behaviors[1] = make__59788980();
   scope->behaviors[2] = make__59788460();
   scope->behaviors[3] = make__59788220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_48137460;

SignalI lv0_48943360_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelv0_48943360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48943360_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI lv1_49411960_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelv1_49411960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49411960_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI av0_49599460_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeav0_49599460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49599460_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI av1_49921480_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeav1_49921480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49921480_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI rv_45284100_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerv_45284100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_45284100_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI lvok0_45284040_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelvok0_45284040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_45284040_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI lvok1_45283920_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelvok1_45283920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_45283920_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI rvok_45283880_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makervok_45283880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_45283880_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

SignalI run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerun_45283860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_45283860_mac__n1_58173_48137460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)mac__n1_58173_48137460;
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

Behavior __53894580;

Behavior make__53894580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53894580 = behavior;
   behavior->owner = (Object)mac__n1_58173_48137460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__45283400();

   return behavior;
}

Scope makemac__n1_58173_48137460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_48137460 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48943360();
   scope->inners[1] = makelv1_49411960();
   scope->inners[2] = makeav0_49599460();
   scope->inners[3] = makeav1_49921480();
   scope->inners[4] = makerv_45284100();
   scope->inners[5] = makelvok0_45284040();
   scope->inners[6] = makelvok1_45283920();
   scope->inners[7] = makervok_45283880();
   scope->inners[8] = makerun_45283860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53894580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_53894460;

SignalI reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereg__0_54051720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__bias_58174_53894460;
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

SignalI reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereg__1_54147220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__bias_58174_53894460;
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

Scope anum_58175_53894160;

Scope makeanum_58175_53894160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_53894160 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "anum:175";
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

Scope raddr_58178_53893740;

Scope makeraddr_58178_53893740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_53893740 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "raddr:178";
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

Scope waddr_58182_53893320;

Scope makewaddr_58182_53893320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_53893320 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "waddr:182";
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

Scope rinc_58186_53892900;

SignalI abus__r_53892520_rinc_58186_53892900_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_53892520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53892520_rinc_58186_53892900_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_58186_53892900;
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

Scope makerinc_58186_53892900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_53892900 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53892520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_53892400;

SignalI abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_53892020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_58190_53892400;
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

Behavior __59830800;

Behavior make__59830800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59830800 = behavior;
   behavior->owner = (Object)winc_58190_53892400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[abus__w_53892020_winc_58190_53892400_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59830960();

   return behavior;
}

Behavior __59830600;

Behavior make__59830600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59830600 = behavior;
   behavior->owner = (Object)winc_58190_53892400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58193_52252380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59830760();

   return behavior;
}

Scope makewinc_58190_53892400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_53892400 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53892020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59830800();
   scope->behaviors[1] = make__59830600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_53891640;

SignalI abus__r_53891260_rdec_58194_53891640_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_53891260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53891260_rdec_58194_53891640_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_58194_53891640;
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

Scope makerdec_58194_53891640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_53891640 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53891260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_53891140;

SignalI abus__w_53890760_wdec_58199_53891140_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_53890760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53890760_wdec_58199_53891140_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_58199_53891140;
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

Scope makewdec_58199_53891140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_53891140 = scope;
   scope->owner = (Object)channel__bias_58174_53894460;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53890760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59786000;

Behavior make__59786000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59786000 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59786200();

   return behavior;
}

Behavior __59785800;

Behavior make__59785800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59785800 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58176_47633460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59785960();

   return behavior;
}

Behavior __59785280;

Behavior make__59785280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59785280 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59785460();

   return behavior;
}

Behavior __59834160;

Behavior make__59834160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59834160 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58177_48103520_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59834320();

   return behavior;
}

Behavior __59833700;

Behavior make__59833700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59833700 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__0_54051720_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59833860();

   return behavior;
}

Behavior __59833480;

Behavior make__59833480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59833480 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58191_52071440_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59833660();

   return behavior;
}

Behavior __59832940;

Behavior make__59832940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59832940 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__1_54147220_channel__bias_58174_53894460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59833100();

   return behavior;
}

Behavior __59832740;

Behavior make__59832740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59832740 = behavior;
   behavior->owner = (Object)channel__bias_58174_53894460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58192_52252460_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59832900();

   return behavior;
}

Scope makechannel__bias_58174_53894460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_53894460 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54051720();
   scope->inners[1] = makereg__1_54147220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_53894160();
   scope->scopes[1] = makeraddr_58178_53893740();
   scope->scopes[2] = makewaddr_58182_53893320();
   scope->scopes[3] = makerinc_58186_53892900();
   scope->scopes[4] = makewinc_58190_53892400();
   scope->scopes[5] = makerdec_58194_53891640();
   scope->scopes[6] = makewdec_58199_53891140();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59786000();
   scope->behaviors[1] = make__59785800();
   scope->behaviors[2] = make__59785280();
   scope->behaviors[3] = make__59834160();
   scope->behaviors[4] = make__59833700();
   scope->behaviors[5] = make__59833480();
   scope->behaviors[6] = make__59832940();
   scope->behaviors[7] = make__59832740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_48138860;

SignalI reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereg__0_48776980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__z_58204_48138860;
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

SignalI reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makereg__1_48945200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__z_58204_48138860;
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

Scope anum_58205_48138100;

Scope makeanum_58205_48138100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_48138100 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "anum:205";
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

Scope raddr_58208_48137180;

Scope makeraddr_58208_48137180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_48137180 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "raddr:208";
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

Scope waddr_58212_48136560;

Scope makewaddr_58212_48136560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_48136560 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "waddr:212";
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

Scope rinc_58216_48159980;

SignalI abus__r_48159460_rinc_58216_48159980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_48159460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48159460_rinc_58216_48159980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_58216_48159980;
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

Scope makerinc_58216_48159980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_48159980 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48159460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_48159320;

SignalI abus__w_48158900_winc_58220_48159320_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_48158900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48158900_winc_58220_48159320_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_58220_48159320;
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

Scope makewinc_58220_48159320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_48159320 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48158900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_48158760;

SignalI abus__r_48157840_rdec_58224_48158760_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__r_48157840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48157840_rdec_58224_48158760_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_58224_48158760;
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

Scope makerdec_58224_48158760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_48158760 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48157840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_48157480;

SignalI abus__w_48156340_wdec_58229_48157480_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeabus__w_48156340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48156340_wdec_58229_48157480_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_58229_48157480;
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

Scope makewdec_58229_48157480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_48157480 = scope;
   scope->owner = (Object)channel__z_58204_48138860;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48156340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59829180;

Behavior make__59829180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59829180 = behavior;
   behavior->owner = (Object)channel__z_58204_48138860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__0_48776980_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59829360();

   return behavior;
}

Behavior __59828920;

Behavior make__59828920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59828920 = behavior;
   behavior->owner = (Object)channel__z_58204_48138860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58206_48782380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59829140();

   return behavior;
}

Behavior __59828460;

Behavior make__59828460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59828460 = behavior;
   behavior->owner = (Object)channel__z_58204_48138860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[reg__1_48945200_channel__z_58204_48138860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59828620();

   return behavior;
}

Behavior __59828260;

Behavior make__59828260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59828260 = behavior;
   behavior->owner = (Object)channel__z_58204_48138860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   _58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   _58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[_58207_48946260_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59828420();

   return behavior;
}

Scope makechannel__z_58204_48138860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_48138860 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48776980();
   scope->inners[1] = makereg__1_48945200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_48138100();
   scope->scopes[1] = makeraddr_58208_48137180();
   scope->scopes[2] = makewaddr_58212_48136560();
   scope->scopes[3] = makerinc_58216_48159980();
   scope->scopes[4] = makewinc_58220_48159320();
   scope->scopes[5] = makerdec_58224_48158760();
   scope->scopes[6] = makewdec_58229_48157480();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59829180();
   scope->behaviors[1] = make__59828920();
   scope->behaviors[2] = make__59828460();
   scope->behaviors[3] = make__59828260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_49698080;

SignalI lv0_49853200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelv0_49853200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49853200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI lv1_49948940_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelv1_49948940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49948940_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI rv0_51918200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerv0_51918200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_51918200_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI rv1_52143180_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerv1_52143180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52143180_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI lvok0_52143160_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelvok0_52143160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52143160_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI lvok1_52143140_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makelvok1_52143140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52143140_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI rvok0_52143120_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makervok0_52143120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52143120_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI rvok1_52143100_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makervok1_52143100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52143100_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

SignalI run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makerun_52143080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52143080_add__n_58234_49698080_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)add__n_58234_49698080;
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

Behavior __54209400;

Behavior make__54209400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54209400 = behavior;
   behavior->owner = (Object)add__n_58234_49698080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__52142960();

   return behavior;
}

Scope makeadd__n_58234_49698080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_49698080 = scope;
   scope->owner = (Object)layer__hidden_58_84_47504000;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49853200();
   scope->inners[1] = makelv1_49948940();
   scope->inners[2] = makerv0_51918200();
   scope->inners[3] = makerv1_52143180();
   scope->inners[4] = makelvok0_52143160();
   scope->inners[5] = makelvok1_52143140();
   scope->inners[6] = makervok0_52143120();
   scope->inners[7] = makervok1_52143100();
   scope->inners[8] = makerun_52143080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54209400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49851700;

Behavior make__49851700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49851700 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_47504000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__48258940();

   return behavior;
}

Behavior __52543160;

Behavior make__52543160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52543160 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_47504000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__49851360();

   return behavior;
}

Behavior __53373520;

Behavior make__53373520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53373520 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_47504000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->pos[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__52542880();

   return behavior;
}

Behavior __59628700;

Behavior make__59628700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59628700 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_47504000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[ack__mac_54209220_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59628940();

   return behavior;
}

Behavior __59621760;

Behavior make__59621760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59621760 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_47504000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[ack_54209240_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[value__z0_49100860_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[value__z1_49375380_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[ack__a00_49711720_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[ack__a01_49711700_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59629220();

   return behavior;
}

Behavior __59621600;

Behavior make__59621600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59621600 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_47504000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[ack__mac_52301500_counter0_58_840_52303620_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[a_53378960_func1_58_840_52978000_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59629160();

   return behavior;
}

Scope makelayer__hidden_58_84_47504000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__hidden_58_84_47504000 = scope;
   scope->owner = (Object)layer__hidden_58_840_53373100;
   scope->name = "layer_hidden:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter0_52301360();
   scope->systemIs[1] = makefunc0_49681680();
   scope->systemIs[2] = makefunc1_53378640();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54209260();
   scope->inners[1] = makeack_54209240();
   scope->inners[2] = makeack__mac_54209220();
   scope->inners[3] = makeack__add_54209200();
   scope->inners[4] = make_5897_54319540();
   scope->inners[5] = make_5895_54319500();
   scope->inners[6] = make_5896_54319400();
   scope->inners[7] = make_58126_54388800();
   scope->inners[8] = make_58124_54388780();
   scope->inners[9] = make_58125_54388700();
   scope->inners[10] = make_58143_54597280();
   scope->inners[11] = make_58144_43575180();
   scope->inners[12] = make_58176_47633460();
   scope->inners[13] = make_58177_48103520();
   scope->inners[14] = make_58206_48782380();
   scope->inners[15] = make_58207_48946260();
   scope->inners[16] = makevalue__z0_49100860();
   scope->inners[17] = makevalue__z1_49375380();
   scope->inners[18] = makevalue__a00_49568820();
   scope->inners[19] = makevalue__a01_49711780();
   scope->inners[20] = makeflag__z0_49711760();
   scope->inners[21] = makeflag__z1_49711740();
   scope->inners[22] = makeack__a00_49711720();
   scope->inners[23] = makeack__a01_49711700();
   scope->inners[24] = make_5899_49711680();
   scope->inners[25] = make_58100_49711460();
   scope->inners[26] = make_58101_49889200();
   scope->inners[27] = make_58128_49889180();
   scope->inners[28] = make_58129_49889060();
   scope->inners[29] = make_58130_50004740();
   scope->inners[30] = make_58191_52071440();
   scope->inners[31] = make_58192_52252460();
   scope->inners[32] = make_58193_52252380();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_47502280();
   scope->scopes[1] = makechannel__w1_58112_45758480();
   scope->scopes[2] = makechannel__accum_58141_48157180();
   scope->scopes[3] = makemac__n1_58173_48137460();
   scope->scopes[4] = makechannel__bias_58174_53894460();
   scope->scopes[5] = makechannel__z_58204_48138860();
   scope->scopes[6] = makeadd__n_58234_49698080();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49851700();
   scope->behaviors[1] = make__52543160();
   scope->behaviors[2] = make__53373520();
   scope->behaviors[3] = make__59628700();
   scope->behaviors[4] = make__59621760();
   scope->behaviors[5] = make__59621600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__hidden_58_840_53373100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__hidden_58_840_53373100 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_hidden:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53411220();
   systemT->inputs[1] = makerst_53411200();
   systemT->inputs[2] = makefill_53411180();
   systemT->inputs[3] = makereq_53411160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_53411120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__hidden_58_84_47504000();

   return systemT;
}