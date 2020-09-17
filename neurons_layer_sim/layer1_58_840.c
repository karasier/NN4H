#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_60043460;

SignalI clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeclk_60041420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
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

SignalI rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makerst_60041400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
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

SignalI fill_60041380_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makefill_60041380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_60041380_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
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

SignalI req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makereq_60041360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
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

SignalI _5843_60157600_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_5843_60157600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_60157600_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
   signalI->name = ":43";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5844_60282760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_5844_60282760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_60282760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
   signalI->name = ":44";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack__layer_60282720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
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

SignalI _5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_5845_60282620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
   signalI->name = ":45";
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

SignalI _5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_5862_60366580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_840_60043460;
   signalI->name = ":62";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __59112740;

Block __59112120;

Block __59111940;

void code__59111940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47670720(),flag__z0_59125760_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59111940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59111940 = block;
   block->owner = (Object)__59112120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59111940;

   return block;
};

void code__59112120() {
 code__59111940();
}

Block make__59112120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59112120 = block;
   block->owner = (Object)__59112740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59112120;

   return block;
};

Block __59112560;

void code__59112560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47670440(),flag__z0_59125760_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59112560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59112560 = block;
   block->owner = (Object)__59112740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59112560;

   return block;
};

void code__59112740() {
   {
      Value cond = ack__add_58561120_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59112120();
   }
   else {
  code__59112560();
   }
      }
   }
}

Block make__59112740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59112740 = block;
   block->owner = (Object)__59311980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59112740;

   return block;
};

Block __59311860;

Block __59311640;

Block __59311480;

void code__59311480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_59125780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47692700(),ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59311480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59311480 = block;
   block->owner = (Object)__59311640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59311480;

   return block;
};

void code__59311640() {
 code__59311480();
}

Block make__59311640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59311640 = block;
   block->owner = (Object)__59311860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59311640;

   return block;
};

void code__59311860() {
   {
      Value cond = flag__z0_59125760_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59311640();
   }
      }
   }
}

Block make__59311860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59311860 = block;
   block->owner = (Object)__59474000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59311860;

   return block;
};

Block __59498400;

Block __59498240;

Block __59497920;

void code__59497920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47691360(),_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59497920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59497920 = block;
   block->owner = (Object)__59498240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59497920;

   return block;
};

void code__59498240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47692060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59497920();
   }
      }
   }
}

Block make__59498240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59498240 = block;
   block->owner = (Object)__59498400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59498240;

   return block;
};

Block __59497420;

Block __59497040;

void code__59497040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47688660(),_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59497040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59497040 = block;
   block->owner = (Object)__59497420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59497040;

   return block;
};

void code__59497420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47690280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59497040();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47686520(),_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59497420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59497420 = block;
   block->owner = (Object)__59498400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59497420;

   return block;
};

Block __59496260;

Block __59496100;

Block __59495780;

void code__59495780() {
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
                  src0 = _58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47709140();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47708660(),_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47708480(),_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59495780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59495780 = block;
   block->owner = (Object)__59496100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59495780;

   return block;
};

void code__59496100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47709460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59495780();
   }
      }
   }
}

Block make__59496100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59496100 = block;
   block->owner = (Object)__59496260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59496100;

   return block;
};

Block __59775200;

Block __59774880;

Block __59774360;

void code__59774360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47707580(),_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59774360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59774360 = block;
   block->owner = (Object)__59774880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59774360;

   return block;
};

void code__59774880() {
{
      Value value = _58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47707880())) {
    code__59774360();
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
                  src0 = _58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47706400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__59774880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59774880 = block;
   block->owner = (Object)__59775200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59774880;

   return block;
};

void code__59775200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47708200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59774880();
   }
      }
   }
}

Block make__59775200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59775200 = block;
   block->owner = (Object)__59496260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59775200;

   return block;
};

void code__59496260() {
 code__59496100();
 code__59775200();
}

Block make__59496260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59496260 = block;
   block->owner = (Object)__59498400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59496260;

   return block;
};

void code__59498400() {
 code__59498240();
 code__59497420();
   {
      Value cond = fill_60041380_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59496260();
   }
      }
   }
}

Block make__59498400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59498400 = block;
   block->owner = (Object)__60043840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59498400;

   return block;
};

Block __61836320;

void code__61836320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_58561180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61836320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61836320 = block;
   block->owner = (Object)__61836040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61836320;

   return block;
};

Block __61836580;

void code__61836580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,clk_59350420_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,ack_59350400_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,rst_59350380_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,z__value_58523960_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61836580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61836580 = block;
   block->owner = (Object)__61855020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61836580;

   return block;
};

Block __61836520;

void code__61836520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,value__a0_59125780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61836520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61836520 = block;
   block->owner = (Object)__61854840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61836520;

   return block;
};

Block __49687400;

Block __52032160;

void code__52032160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,make_ref_rangeS(mem_47611680_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080,value2integer(abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value),value2integer(abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__52032160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52032160 = block;
   block->owner = (Object)__49687400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52032160;

   return block;
};

void code__49687400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47611680_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52032160();
   }
      }
   }
}

Block make__49687400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49687400 = block;
   block->owner = (Object)__52728960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49687400;

   return block;
};

Block __61853900;

void code__61853900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61853900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61853900 = block;
   block->owner = (Object)__61853740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61853900;

   return block;
};

Block __61853700;

void code__61853700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61853700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61853700 = block;
   block->owner = (Object)__61853540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61853700;

   return block;
};

Block __61853140;

void code__61853140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61853140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61853140 = block;
   block->owner = (Object)__61852980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61853140;

   return block;
};

Block __61852940;

void code__61852940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61852940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61852940 = block;
   block->owner = (Object)__61852780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61852940;

   return block;
};

Block __61852440;

void code__61852440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61852440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61852440 = block;
   block->owner = (Object)__61852220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61852440;

   return block;
};

Block __61852180;

void code__61852180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61852180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61852180 = block;
   block->owner = (Object)__61852020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61852180;

   return block;
};

Block __61851720;

void code__61851720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61851720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61851720 = block;
   block->owner = (Object)__61851560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61851720;

   return block;
};

Block __61851520;

void code__61851520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61851520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61851520 = block;
   block->owner = (Object)__61851360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61851520;

   return block;
};

Block __61850960;

void code__61850960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61850960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61850960 = block;
   block->owner = (Object)__61850800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61850960;

   return block;
};

Block __61850760;

void code__61850760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61850760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61850760 = block;
   block->owner = (Object)__61850600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61850760;

   return block;
};

Block __61850200;

void code__61850200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61850200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61850200 = block;
   block->owner = (Object)__61850040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61850200;

   return block;
};

Block __61850000;

void code__61850000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61850000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61850000 = block;
   block->owner = (Object)__61849840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61850000;

   return block;
};

Block __61872640;

void code__61872640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61872640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61872640 = block;
   block->owner = (Object)__61872480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61872640;

   return block;
};

Block __61872440;

void code__61872440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61872440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61872440 = block;
   block->owner = (Object)__61872280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61872440;

   return block;
};

Block __47402520;

Block __47401620;

Block __47399280;

void code__47399280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47461820(),_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47399280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47399280 = block;
   block->owner = (Object)__47401620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47399280;

   return block;
};

void code__47401620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47462020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47399280();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47461640(),_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47401620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47401620 = block;
   block->owner = (Object)__47402520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47401620;

   return block;
};

Block __47480040;

Block __47477520;

void code__47477520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47459600(),_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47477520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47477520 = block;
   block->owner = (Object)__47480040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47477520;

   return block;
};

void code__47480040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47460480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47477520();
   }
      }
   }
}

Block make__47480040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47480040 = block;
   block->owner = (Object)__47402520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47480040;

   return block;
};

Block __49172080;

Block __49170000;

Block __49208240;

Block __49203320;

void code__49203320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_60157600_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,rv_47404560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__49203320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49203320 = block;
   block->owner = (Object)__49208240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49203320;

   return block;
};

Block __51909480;

void code__51909480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_60282760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,rv_47404560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__51909480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51909480 = block;
   block->owner = (Object)__49208240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51909480;

   return block;
};

void code__49208240() {
{
      Value value = _5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__47478940())) {
    code__49203320();
         }
         else if (value2integer(value) == value2integer(make__47476680())) {
    code__51909480();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47496580(),rvok_47403980_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
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
                  src0 = _5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47495740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__49208240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49208240 = block;
   block->owner = (Object)__49170000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49208240;

   return block;
};

void code__49170000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47458100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49208240();
   }
      }
   }
}

Block make__49170000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49170000 = block;
   block->owner = (Object)__49172080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49170000;

   return block;
};

Block __52877640;

Block __52877000;

Block __52876400;

void code__52876400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,lv0_53740560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47495060(),lvok0_47404220_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52876400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52876400 = block;
   block->owner = (Object)__52877000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52876400;

   return block;
};

void code__52877000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47495380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52876400();
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
                  src0 = _58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47494560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47494000(),_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52877000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52877000 = block;
   block->owner = (Object)__52877640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52877000;

   return block;
};

void code__52877640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47495560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52877000();
   }
      }
   }
}

Block make__52877640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52877640 = block;
   block->owner = (Object)__49172080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52877640;

   return block;
};

Block __54175560;

Block __54174620;

Block __54174340;

void code__54174340() {
}

Block make__54174340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54174340 = block;
   block->owner = (Object)__54174620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54174340;

   return block;
};

Block __53745860;

void code__53745860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_54179200_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53745860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53745860 = block;
   block->owner = (Object)__54174620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53745860;

   return block;
};

void code__54174620() {
 code__54174340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_54179200_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
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
                              src0 = lv0_53740560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_47404560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47491060();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_54179200_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__53745860();
}

Block make__54174620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54174620 = block;
   block->owner = (Object)__54175560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54174620;

   return block;
};

void code__54175560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47493560(),ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47493240(),run_47403860_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__54174620();
}

Block make__54175560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54175560 = block;
   block->owner = (Object)__49172080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54175560;

   return block;
};

void code__49172080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47458240(),run_47403860_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__49170000();
 code__52877640();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47404220_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         src1 = rvok_47403980_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54175560();
   }
      }
   }
}

Block make__49172080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49172080 = block;
   block->owner = (Object)__47402520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49172080;

   return block;
};

Block __47511680;

void code__47511680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47490400(),rvok_47403980_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47490280(),lvok0_47404220_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47490180(),av0_54179200_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__47511680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47511680 = block;
   block->owner = (Object)__47402520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47511680;

   return block;
};

void code__47402520() {
 code__47401620();
 code__47480040();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47459080(),ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47458940(),run_47403860_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_58561180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         src1 = run_47403860_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49172080();
   }
   else {
  code__47511680();
   }
      }
   }
}

Block make__47402520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47402520 = block;
   block->owner = (Object)__47127660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47402520;

   return block;
};

Block __61870360;

void code__61870360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61870360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61870360 = block;
   block->owner = (Object)__61870200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61870360;

   return block;
};

Block __61870160;

void code__61870160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61870160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61870160 = block;
   block->owner = (Object)__61870000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61870160;

   return block;
};

Block __61869700;

void code__61869700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61869700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61869700 = block;
   block->owner = (Object)__61869540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61869700;

   return block;
};

Block __61869500;

void code__61869500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61869500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61869500 = block;
   block->owner = (Object)__61869340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61869500;

   return block;
};

Block __61867560;

void code__61867560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61867560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61867560 = block;
   block->owner = (Object)__61867400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61867560;

   return block;
};

Block __61867360;

void code__61867360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61867360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61867360 = block;
   block->owner = (Object)__61867160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61867360;

   return block;
};

Block __61914740;

void code__61914740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61914740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61914740 = block;
   block->owner = (Object)__61914580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61914740;

   return block;
};

Block __61914540;

void code__61914540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__61914540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61914540 = block;
   block->owner = (Object)__61914380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61914540;

   return block;
};

Block __52926780;

Block __52921480;

Block __52960800;

void code__52960800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,lv0_52711540_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47587460(),lvok0_52927020_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52960800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52960800 = block;
   block->owner = (Object)__52921480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52960800;

   return block;
};

Block __53511980;

void code__53511980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,rv0_52927100_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47610880(),rvok0_52927000_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__53511980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53511980 = block;
   block->owner = (Object)__52921480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53511980;

   return block;
};

Block __54308200;

Block __54306460;

void code__54306460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52711540_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      src1 = rv0_52927100_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__54306460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54306460 = block;
   block->owner = (Object)__54308200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54306460;

   return block;
};

void code__54308200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47608260(),run_52926980_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47625360(),ack__add_58561120_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__54306460();
}

Block make__54308200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54308200 = block;
   block->owner = (Object)__52921480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54308200;

   return block;
};

void code__52921480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47588280(),run_52926980_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
 code__52960800();
 code__53511980();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52927020_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         src1 = rvok0_52927000_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54308200();
   }
      }
   }
}

Block make__52921480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52921480 = block;
   block->owner = (Object)__52926780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52921480;

   return block;
};

Block __52925120;

void code__52925120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47620880(),lvok0_52927020_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47644520(),rvok0_52927000_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__52925120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52925120 = block;
   block->owner = (Object)__52926780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52925120;

   return block;
};

void code__52926780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47589440(),ack__add_58561120_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47589340(),run_52926980_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         src1 = run_52926980_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52921480();
   }
   else {
  code__52925120();
   }
      }
   }
}

Block make__52926780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52926780 = block;
   block->owner = (Object)__58561320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52926780;

   return block;
};

Value make__47462020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47461820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47461640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47460480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47459600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47459080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47458940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47458240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47458100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47478940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47476680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47496580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47495740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47495560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47495380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47495060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47494560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47494000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47493560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47493240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47491060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47490400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47490280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47490180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47589440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47589340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47588280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47587460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47610880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47608260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47625360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47620880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47644520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47670720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47670440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47692700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47692060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47691360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47690280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47688660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47686520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47709460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47709140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47708660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47708480() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47708200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47707880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47707580() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47706400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_53727760;

SignalI req__mac_58561180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makereq__mac_58561180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_58561180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack_58561160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack__mac_58561140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI ack__add_58561120_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack__add_58561120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_58561120_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58266_58632060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58264_58632040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58265_58631960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58283_58719240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58313_58773780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58336_58902060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makevalue__z0_59030300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI value__a0_59125780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makevalue__a0_59125780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_59125780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI flag__z0_59125760_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeflag__z0_59125760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_59125760_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeack__a0_59125740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58324_59221280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58325_59221200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58268_59221180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58269_59221100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SignalI _58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI make_58270_59332920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)layer1_58_84_53727760;
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

SystemI counter_59350200;

SystemI makecounter_59350200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_59350200 = systemI;
   systemI->owner = (Object)layer1_58_84_53727760;
   systemI->name = "counter";
   systemI->system = counter_58_8400_59327720;

   return systemI;
};

SystemI func0_58632280;

SystemI makefunc0_58632280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58632280 = systemI;
   systemI->owner = (Object)layer1_58_84_53727760;
   systemI->name = "func0";
   systemI->system = func0_58_8400_58409440;

   return systemI;
};

Scope channel__w0_58252_53727020;

SignalI trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI maketrig__r_53746540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

SignalI trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI maketrig__w_53746520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

SignalI dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makedbus__r_54163440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

SignalI dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makedbus__w_45552420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

SignalI abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_45552180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

SignalI abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_45552100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

SignalI mem_47611680_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makemem_47611680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47611680_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__w0_58252_53727020;
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

Scope raddr_58253_53725920;

Scope makeraddr_58253_53725920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_53725920 = scope;
   scope->owner = (Object)channel__w0_58252_53727020;
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

Scope waddr_58258_53725500;

Scope makewaddr_58258_53725500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_53725500 = scope;
   scope->owner = (Object)channel__w0_58252_53727020;
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

Scope rinc_58263_53725080;

Scope makerinc_58263_53725080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_53725080 = scope;
   scope->owner = (Object)channel__w0_58252_53727020;
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

Scope winc_58267_53724280;

Scope makewinc_58267_53724280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_53724280 = scope;
   scope->owner = (Object)channel__w0_58252_53727020;
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

Scope rdec_58271_53747600;

Scope makerdec_58271_53747600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_53747600 = scope;
   scope->owner = (Object)channel__w0_58252_53727020;
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

Scope wdec_58276_53747140;

Scope makewdec_58276_53747140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_53747140 = scope;
   scope->owner = (Object)channel__w0_58252_53727020;
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

Behavior __52728960;

Behavior make__52728960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52728960 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_neg += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->neg = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->neg,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_neg*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->neg[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_neg-1] = (Object)behavior;
   behavior->block = make__49687400();

   return behavior;
}

Behavior __61853740;

Behavior make__61853740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61853740 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[dbus__r_54163440_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61853900();

   return behavior;
}

Behavior __61853540;

Behavior make__61853540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61853540 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58266_58632060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61853700();

   return behavior;
}

Behavior __61852980;

Behavior make__61852980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61852980 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[trig__r_53746540_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61853140();

   return behavior;
}

Behavior __61852780;

Behavior make__61852780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61852780 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58264_58632040_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61852940();

   return behavior;
}

Behavior __61852220;

Behavior make__61852220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61852220 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[abus__r_45552180_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61852440();

   return behavior;
}

Behavior __61852020;

Behavior make__61852020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61852020 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58265_58631960_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61852180();

   return behavior;
}

Behavior __61851560;

Behavior make__61851560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61851560 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[trig__w_53746520_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61851720();

   return behavior;
}

Behavior __61851360;

Behavior make__61851360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61851360 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58268_59221180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61851520();

   return behavior;
}

Behavior __61850800;

Behavior make__61850800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61850800 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[abus__w_45552100_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61850960();

   return behavior;
}

Behavior __61850600;

Behavior make__61850600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61850600 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58269_59221100_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61850760();

   return behavior;
}

Behavior __61850040;

Behavior make__61850040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61850040 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[dbus__w_45552420_channel__w0_58252_53727020_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61850200();

   return behavior;
}

Behavior __61849840;

Behavior make__61849840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61849840 = behavior;
   behavior->owner = (Object)channel__w0_58252_53727020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58270_59332920_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61850000();

   return behavior;
}

Scope makechannel__w0_58252_53727020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_53727020 = scope;
   scope->owner = (Object)layer1_58_84_53727760;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53746540();
   scope->inners[1] = maketrig__w_53746520();
   scope->inners[2] = makedbus__r_54163440();
   scope->inners[3] = makedbus__w_45552420();
   scope->inners[4] = makeabus__r_45552180();
   scope->inners[5] = makeabus__w_45552100();
   scope->inners[6] = makemem_47611680();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_53725920();
   scope->scopes[1] = makewaddr_58258_53725500();
   scope->scopes[2] = makerinc_58263_53725080();
   scope->scopes[3] = makewinc_58267_53724280();
   scope->scopes[4] = makerdec_58271_53747600();
   scope->scopes[5] = makewdec_58276_53747140();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52728960();
   scope->behaviors[1] = make__61853740();
   scope->behaviors[2] = make__61853540();
   scope->behaviors[3] = make__61852980();
   scope->behaviors[4] = make__61852780();
   scope->behaviors[5] = make__61852220();
   scope->behaviors[6] = make__61852020();
   scope->behaviors[7] = make__61851560();
   scope->behaviors[8] = make__61851360();
   scope->behaviors[9] = make__61850800();
   scope->behaviors[10] = make__61850600();
   scope->behaviors[11] = make__61850040();
   scope->behaviors[12] = make__61849840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_52728720;

SignalI reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makereg__0_52920640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__accum_58281_52728720;
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

Scope anum_58282_52728120;

Scope makeanum_58282_52728120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_52728120 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
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

Scope raddr_58284_52727600;

Scope makeraddr_58284_52727600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_52727600 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
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

Scope waddr_58287_52726480;

Scope makewaddr_58287_52726480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_52726480 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
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

Scope rinc_58290_52725940;

SignalI abus__r_52725020_rinc_58290_52725940_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_52725020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52725020_rinc_58290_52725940_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_58290_52725940;
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

Scope makerinc_58290_52725940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_52725940 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52725020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_52724780;

SignalI abus__w_52723860_winc_58294_52724780_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_52723860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52723860_winc_58294_52724780_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_58294_52724780;
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

Scope makewinc_58294_52724780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_52724780 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52723860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_52723720;

SignalI abus__r_52805160_rdec_58298_52723720_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_52805160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52805160_rdec_58298_52723720_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_58298_52723720;
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

Scope makerdec_58298_52723720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_52723720 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52805160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_52805040;

SignalI abus__w_52804640_wdec_58302_52805040_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_52804640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52804640_wdec_58302_52805040_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_58302_52805040;
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

Scope makewdec_58302_52805040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_52805040 = scope;
   scope->owner = (Object)channel__accum_58281_52728720;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52804640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61872480;

Behavior make__61872480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61872480 = behavior;
   behavior->owner = (Object)channel__accum_58281_52728720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[reg__0_52920640_channel__accum_58281_52728720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61872640();

   return behavior;
}

Behavior __61872280;

Behavior make__61872280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61872280 = behavior;
   behavior->owner = (Object)channel__accum_58281_52728720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58283_58719240_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61872440();

   return behavior;
}

Scope makechannel__accum_58281_52728720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_52728720 = scope;
   scope->owner = (Object)layer1_58_84_53727760;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52920640();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_52728120();
   scope->scopes[1] = makeraddr_58284_52727600();
   scope->scopes[2] = makewaddr_58287_52726480();
   scope->scopes[3] = makerinc_58290_52725940();
   scope->scopes[4] = makewinc_58294_52724780();
   scope->scopes[5] = makerdec_58298_52723720();
   scope->scopes[6] = makewdec_58302_52805040();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61872480();
   scope->behaviors[1] = make__61872280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_53500000;

SignalI lv0_53740560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makelv0_53740560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53740560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58306_53500000;
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

SignalI av0_54179200_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeav0_54179200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_54179200_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58306_53500000;
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

SignalI rv_47404560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makerv_47404560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_47404560_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58306_53500000;
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

SignalI lvok0_47404220_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makelvok0_47404220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47404220_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58306_53500000;
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

SignalI rvok_47403980_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makervok_47403980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_47403980_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58306_53500000;
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

SignalI run_47403860_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makerun_47403860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47403860_mac__n1_58306_53500000_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)mac__n1_58306_53500000;
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

Behavior __47127660;

Behavior make__47127660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47127660 = behavior;
   behavior->owner = (Object)mac__n1_58306_53500000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__47402520();

   return behavior;
}

Scope makemac__n1_58306_53500000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_53500000 = scope;
   scope->owner = (Object)layer1_58_84_53727760;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53740560();
   scope->inners[1] = makeav0_54179200();
   scope->inners[2] = makerv_47404560();
   scope->inners[3] = makelvok0_47404220();
   scope->inners[4] = makervok_47403980();
   scope->inners[5] = makerun_47403860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47127660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_47124880;

SignalI reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makereg__0_47954220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__bias_58311_47124880;
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

Scope anum_58312_47123820;

Scope makeanum_58312_47123820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_47123820 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
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

Scope raddr_58314_47122540;

Scope makeraddr_58314_47122540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_47122540 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
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

Scope waddr_58317_47373020;

Scope makewaddr_58317_47373020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_47373020 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
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

Scope rinc_58320_47371020;

SignalI abus__r_47368520_rinc_58320_47371020_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_47368520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47368520_rinc_58320_47371020_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_58320_47371020;
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

Scope makerinc_58320_47371020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_47371020 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47368520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_47368340;

SignalI abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_47367360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_58323_47368340;
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

Behavior __61867400;

Behavior make__61867400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61867400 = behavior;
   behavior->owner = (Object)winc_58323_47368340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[abus__w_47367360_winc_58323_47368340_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61867560();

   return behavior;
}

Behavior __61867160;

Behavior make__61867160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61867160 = behavior;
   behavior->owner = (Object)winc_58323_47368340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58325_59221200_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61867360();

   return behavior;
}

Scope makewinc_58323_47368340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_47368340 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47367360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61867400();
   scope->behaviors[1] = make__61867160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_47366560;

SignalI abus__r_47390340_rdec_58326_47366560_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_47390340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47390340_rdec_58326_47366560_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_58326_47366560;
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

Scope makerdec_58326_47366560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_47366560 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47390340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_47390040;

SignalI abus__w_47389020_wdec_58330_47390040_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_47389020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47389020_wdec_58330_47390040_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_58330_47390040;
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

Scope makewdec_58330_47390040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_47390040 = scope;
   scope->owner = (Object)channel__bias_58311_47124880;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47389020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61870200;

Behavior make__61870200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61870200 = behavior;
   behavior->owner = (Object)channel__bias_58311_47124880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61870360();

   return behavior;
}

Behavior __61870000;

Behavior make__61870000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61870000 = behavior;
   behavior->owner = (Object)channel__bias_58311_47124880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58313_58773780_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61870160();

   return behavior;
}

Behavior __61869540;

Behavior make__61869540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61869540 = behavior;
   behavior->owner = (Object)channel__bias_58311_47124880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[reg__0_47954220_channel__bias_58311_47124880_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61869700();

   return behavior;
}

Behavior __61869340;

Behavior make__61869340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61869340 = behavior;
   behavior->owner = (Object)channel__bias_58311_47124880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58324_59221280_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61869500();

   return behavior;
}

Scope makechannel__bias_58311_47124880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_47124880 = scope;
   scope->owner = (Object)layer1_58_84_53727760;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47954220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_47123820();
   scope->scopes[1] = makeraddr_58314_47122540();
   scope->scopes[2] = makewaddr_58317_47373020();
   scope->scopes[3] = makerinc_58320_47371020();
   scope->scopes[4] = makewinc_58323_47368340();
   scope->scopes[5] = makerdec_58326_47366560();
   scope->scopes[6] = makewdec_58330_47390040();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61870200();
   scope->behaviors[1] = make__61870000();
   scope->behaviors[2] = make__61869540();
   scope->behaviors[3] = make__61869340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_48850180;

SignalI reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makereg__0_51967160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__z_58334_48850180;
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

Scope anum_58335_48849380;

Scope makeanum_58335_48849380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_48849380 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
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

Scope raddr_58337_51617220;

Scope makeraddr_58337_51617220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_51617220 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
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

Scope waddr_58340_51616160;

Scope makewaddr_58340_51616160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_51616160 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
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

Scope rinc_58343_51615540;

SignalI abus__r_51614880_rinc_58343_51615540_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_51614880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51614880_rinc_58343_51615540_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_58343_51615540;
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

Scope makerinc_58343_51615540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_51615540 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51614880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_51613680;

SignalI abus__w_51613080_winc_58346_51613680_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_51613080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51613080_winc_58346_51613680_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_58346_51613680;
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

Scope makewinc_58346_51613680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_51613680 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51613080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_51612960;

SignalI abus__r_51612240_rdec_58349_51612960_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__r_51612240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51612240_rdec_58349_51612960_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_58349_51612960;
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

Scope makerdec_58349_51612960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_51612960 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51612240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_51611960;

SignalI abus__w_51610080_wdec_58353_51611960_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makeabus__w_51610080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51610080_wdec_58353_51611960_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_58353_51611960;
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

Scope makewdec_58353_51611960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_51611960 = scope;
   scope->owner = (Object)channel__z_58334_48850180;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51610080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61914580;

Behavior make__61914580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61914580 = behavior;
   behavior->owner = (Object)channel__z_58334_48850180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[reg__0_51967160_channel__z_58334_48850180_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61914740();

   return behavior;
}

Behavior __61914380;

Behavior make__61914380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61914380 = behavior;
   behavior->owner = (Object)channel__z_58334_48850180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_58336_58902060_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61914540();

   return behavior;
}

Scope makechannel__z_58334_48850180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_48850180 = scope;
   scope->owner = (Object)layer1_58_84_53727760;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51967160();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_48849380();
   scope->scopes[1] = makeraddr_58337_51617220();
   scope->scopes[2] = makewaddr_58340_51616160();
   scope->scopes[3] = makerinc_58343_51615540();
   scope->scopes[4] = makewinc_58346_51613680();
   scope->scopes[5] = makerdec_58349_51612960();
   scope->scopes[6] = makewdec_58353_51611960();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61914580();
   scope->behaviors[1] = make__61914380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_52519320;

SignalI lv0_52711540_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makelv0_52711540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52711540_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58357_52519320;
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

SignalI rv0_52927100_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makerv0_52927100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52927100_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58357_52519320;
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

SignalI lvok0_52927020_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makelvok0_52927020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52927020_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58357_52519320;
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

SignalI rvok0_52927000_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makervok0_52927000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52927000_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58357_52519320;
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

SignalI run_52926980_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080;

SignalI makerun_52926980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52926980_add__n_58357_52519320_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)add__n_58357_52519320;
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

Behavior __58561320;

Behavior make__58561320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58561320 = behavior;
   behavior->owner = (Object)add__n_58357_52519320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__52926780();

   return behavior;
}

Scope makeadd__n_58357_52519320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_52519320 = scope;
   scope->owner = (Object)layer1_58_84_53727760;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52711540();
   scope->inners[1] = makerv0_52927100();
   scope->inners[2] = makelvok0_52927020();
   scope->inners[3] = makervok0_52927000();
   scope->inners[4] = makerun_52926980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58561320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59311980;

Behavior make__59311980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59311980 = behavior;
   behavior->owner = (Object)layer1_58_84_53727760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__59112740();

   return behavior;
}

Behavior __59474000;

Behavior make__59474000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59474000 = behavior;
   behavior->owner = (Object)layer1_58_84_53727760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__59311860();

   return behavior;
}

Behavior __60043840;

Behavior make__60043840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60043840 = behavior;
   behavior->owner = (Object)layer1_58_84_53727760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->pos[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__59498400();

   return behavior;
}

Behavior __61836040;

Behavior make__61836040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61836040 = behavior;
   behavior->owner = (Object)layer1_58_84_53727760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[ack__mac_58561140_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61836320();

   return behavior;
}

Behavior __61855020;

Behavior make__61855020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61855020 = behavior;
   behavior->owner = (Object)layer1_58_84_53727760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[ack_58561160_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[value__z0_59030300_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[ack__a0_59125740_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61836580();

   return behavior;
}

Behavior __61854840;

Behavior make__61854840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61854840 = behavior;
   behavior->owner = (Object)layer1_58_84_53727760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[ack__mac_59350340_counter_58_8400_59327720_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[a_58632460_func0_58_8400_58409440_layer1_58_84_53727760_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__61836520();

   return behavior;
}

Scope makelayer1_58_84_53727760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_53727760 = scope;
   scope->owner = (Object)layer1_58_840_60043460;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_59350200();
   scope->systemIs[1] = makefunc0_58632280();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_58561180();
   scope->inners[1] = makeack_58561160();
   scope->inners[2] = makeack__mac_58561140();
   scope->inners[3] = makeack__add_58561120();
   scope->inners[4] = make_58266_58632060();
   scope->inners[5] = make_58264_58632040();
   scope->inners[6] = make_58265_58631960();
   scope->inners[7] = make_58283_58719240();
   scope->inners[8] = make_58313_58773780();
   scope->inners[9] = make_58336_58902060();
   scope->inners[10] = makevalue__z0_59030300();
   scope->inners[11] = makevalue__a0_59125780();
   scope->inners[12] = makeflag__z0_59125760();
   scope->inners[13] = makeack__a0_59125740();
   scope->inners[14] = make_58324_59221280();
   scope->inners[15] = make_58325_59221200();
   scope->inners[16] = make_58268_59221180();
   scope->inners[17] = make_58269_59221100();
   scope->inners[18] = make_58270_59332920();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_53727020();
   scope->scopes[1] = makechannel__accum_58281_52728720();
   scope->scopes[2] = makemac__n1_58306_53500000();
   scope->scopes[3] = makechannel__bias_58311_47124880();
   scope->scopes[4] = makechannel__z_58334_48850180();
   scope->scopes[5] = makeadd__n_58357_52519320();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59311980();
   scope->behaviors[1] = make__59474000();
   scope->behaviors[2] = make__60043840();
   scope->behaviors[3] = make__61836040();
   scope->behaviors[4] = make__61855020();
   scope->behaviors[5] = make__61854840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_60043460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_60043460 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60041420();
   systemT->inputs[1] = makerst_60041400();
   systemT->inputs[2] = makefill_60041380();
   systemT->inputs[3] = makereq_60041360();
   systemT->inputs[4] = make_5843_60157600();
   systemT->inputs[5] = make_5844_60282760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_60282720();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5845_60282620();
   systemT->inouts[1] = make_5862_60366580();

   systemT->scope = makelayer1_58_84_53727760();

   return systemT;
}