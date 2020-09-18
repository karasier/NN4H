#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59711580;

SignalI clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeclk_59733980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makerst_59733960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI fill_59733940_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makefill_59733940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59733940_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makereq_59733920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI _5843_59914760_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_5843_59914760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_59914760_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI _5844_60109780_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_5844_60109780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_60109780_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack__layer_60109740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI _5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_5845_60109620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

SignalI _5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_5862_60183840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_840_59711580;
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

Block __58852900;

Block __58852160;

Block __58851980;

void code__58851980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52212220(),flag__z0_57724460_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58851980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58851980 = block;
   block->owner = (Object)__58852160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58851980;

   return block;
};

void code__58852160() {
 code__58851980();
}

Block make__58852160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58852160 = block;
   block->owner = (Object)__58852900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58852160;

   return block;
};

Block __58852740;

void code__58852740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52211900(),flag__z0_57724460_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58852740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58852740 = block;
   block->owner = (Object)__58852900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58852740;

   return block;
};

void code__58852900() {
   {
      Value cond = ack__add_53065740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58852160();
   }
   else {
  code__58852740();
   }
      }
   }
}

Block make__58852900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58852900 = block;
   block->owner = (Object)__59284360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58852900;

   return block;
};

Block __59284240;

Block __59284020;

Block __59283860;

void code__59283860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_57724480_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52211060(),ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59283860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59283860 = block;
   block->owner = (Object)__59284020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59283860;

   return block;
};

void code__59284020() {
 code__59283860();
}

Block make__59284020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59284020 = block;
   block->owner = (Object)__59284240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59284020;

   return block;
};

void code__59284240() {
   {
      Value cond = flag__z0_57724460_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59284020();
   }
      }
   }
}

Block make__59284240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59284240 = block;
   block->owner = (Object)__59537380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59284240;

   return block;
};

Block __59537260;

Block __59537040;

Block __59536660;

void code__59536660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52210240(),_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59536660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59536660 = block;
   block->owner = (Object)__59537040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59536660;

   return block;
};

void code__59537040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52210480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59536660();
   }
      }
   }
}

Block make__59537040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59537040 = block;
   block->owner = (Object)__59537260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59537040;

   return block;
};

Block __59536120;

Block __59535740;

void code__59535740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52209480(),_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59535740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59535740 = block;
   block->owner = (Object)__59536120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59535740;

   return block;
};

void code__59536120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52209900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59535740();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52209360(),_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59536120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59536120 = block;
   block->owner = (Object)__59537260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59536120;

   return block;
};

Block __59535020;

Block __59534760;

Block __59534380;

void code__59534380() {
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
                  src0 = _58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52208760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52208400(),_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52208120(),_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59534380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59534380 = block;
   block->owner = (Object)__59534760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59534380;

   return block;
};

void code__59534760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52209120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59534380();
   }
      }
   }
}

Block make__59534760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59534760 = block;
   block->owner = (Object)__59535020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59534760;

   return block;
};

Block __59599260;

Block __59598860;

Block __59598320;

void code__59598320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52248160(),_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59598320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59598320 = block;
   block->owner = (Object)__59598860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59598320;

   return block;
};

void code__59598860() {
{
      Value value = _58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__52248360())) {
    code__59598320();
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
                  src0 = _58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52247460();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59598860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59598860 = block;
   block->owner = (Object)__59599260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59598860;

   return block;
};

void code__59599260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52248500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59598860();
   }
      }
   }
}

Block make__59599260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59599260 = block;
   block->owner = (Object)__59535020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59599260;

   return block;
};

void code__59535020() {
 code__59534760();
 code__59599260();
}

Block make__59535020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59535020 = block;
   block->owner = (Object)__59537260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59535020;

   return block;
};

void code__59537260() {
 code__59537040();
 code__59536120();
   {
      Value cond = fill_59733940_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59535020();
   }
      }
   }
}

Block make__59537260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59537260 = block;
   block->owner = (Object)__59711900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59537260;

   return block;
};

Block __51555240;

void code__51555240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53065880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51555240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51555240 = block;
   block->owner = (Object)__51554840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51555240;

   return block;
};

Block __51555860;

void code__51555860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,clk_57970320_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,ack_57970300_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,rst_57970280_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,z__value_58185140_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51555860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51555860 = block;
   block->owner = (Object)__51595860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51555860;

   return block;
};

Block __51555740;

void code__51555740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,value__a0_57724480_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51555740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51555740 = block;
   block->owner = (Object)__51595520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51555740;

   return block;
};

Block __52175900;

Block __52986920;

void code__52986920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,make_ref_rangeS(mem_49753420_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680,value2integer(abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value),value2integer(abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__52986920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52986920 = block;
   block->owner = (Object)__52175900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52986920;

   return block;
};

void code__52175900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49753420_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52986920();
   }
      }
   }
}

Block make__52175900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52175900 = block;
   block->owner = (Object)__55352360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52175900;

   return block;
};

Block __51593220;

void code__51593220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51593220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51593220 = block;
   block->owner = (Object)__51617440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51593220;

   return block;
};

Block __51617380;

void code__51617380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51617380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51617380 = block;
   block->owner = (Object)__51617100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51617380;

   return block;
};

Block __51616560;

void code__51616560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51616560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51616560 = block;
   block->owner = (Object)__51616260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51616560;

   return block;
};

Block __51616100;

void code__51616100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51616100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51616100 = block;
   block->owner = (Object)__51615680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51616100;

   return block;
};

Block __51614920;

void code__51614920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51614920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51614920 = block;
   block->owner = (Object)__51614600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51614920;

   return block;
};

Block __51614500;

void code__51614500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51614500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51614500 = block;
   block->owner = (Object)__51614120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51614500;

   return block;
};

Block __51613000;

void code__51613000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51613000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51613000 = block;
   block->owner = (Object)__51612820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51613000;

   return block;
};

Block __51612780;

void code__51612780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51612780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51612780 = block;
   block->owner = (Object)__51612340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51612780;

   return block;
};

Block __51611680;

void code__51611680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51611680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51611680 = block;
   block->owner = (Object)__51611160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51611680;

   return block;
};

Block __51610720;

void code__51610720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51610720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51610720 = block;
   block->owner = (Object)__51610500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51610720;

   return block;
};

Block __51610040;

void code__51610040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51610040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51610040 = block;
   block->owner = (Object)__51658180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51610040;

   return block;
};

Block __51658100;

void code__51658100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51658100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51658100 = block;
   block->owner = (Object)__51657400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51658100;

   return block;
};

Block __51653100;

void code__51653100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51653100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51653100 = block;
   block->owner = (Object)__51652380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51653100;

   return block;
};

Block __51652220;

void code__51652220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51652220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51652220 = block;
   block->owner = (Object)__51651460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51652220;

   return block;
};

Block __57985480;

Block __57985320;

Block __57985000;

void code__57985000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52122340(),_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57985000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57985000 = block;
   block->owner = (Object)__57985320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57985000;

   return block;
};

void code__57985320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52122440();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57985000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52122240(),_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57985320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57985320 = block;
   block->owner = (Object)__57985480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57985320;

   return block;
};

Block __57984380;

Block __57984060;

void code__57984060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52121940(),_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57984060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57984060 = block;
   block->owner = (Object)__57984380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57984060;

   return block;
};

void code__57984380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52122040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57984060();
   }
      }
   }
}

Block make__57984380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57984380 = block;
   block->owner = (Object)__57985480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57984380;

   return block;
};

Block __57983200;

void code__57983200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52121060(),rvok_57985620_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52120940(),lvok0_57985640_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52120660(),av0_57931080_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__57983200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57983200 = block;
   block->owner = (Object)__57985480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57983200;

   return block;
};

Block __58151580;

Block __58151260;

Block __58150940;

Block __58150480;

void code__58150480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_59914760_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,rv_57985660_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58150480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58150480 = block;
   block->owner = (Object)__58150940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58150480;

   return block;
};

Block __58357500;

void code__58357500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_60109780_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,rv_57985660_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58357500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58357500 = block;
   block->owner = (Object)__58150940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58357500;

   return block;
};

void code__58150940() {
{
      Value value = _5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__52119840())) {
    code__58150480();
         }
         else if (value2integer(value) == value2integer(make__52119740())) {
    code__58357500();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52119540(),rvok_57985620_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
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
                  src0 = _5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52119360();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58150940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58150940 = block;
   block->owner = (Object)__58151260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58150940;

   return block;
};

void code__58151260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52120080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58150940();
   }
      }
   }
}

Block make__58151260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58151260 = block;
   block->owner = (Object)__58151580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58151260;

   return block;
};

Block __58686800;

Block __58686480;

Block __58686160;

void code__58686160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,lv0_57835600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52182980(),lvok0_57985640_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58686160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58686160 = block;
   block->owner = (Object)__58686480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58686160;

   return block;
};

void code__58686480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52117960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58686160();
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
                  src0 = _58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52182400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52181560(),_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__58686480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58686480 = block;
   block->owner = (Object)__58686800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58686480;

   return block;
};

void code__58686800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52118380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58686480();
   }
      }
   }
}

Block make__58686800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58686800 = block;
   block->owner = (Object)__58151580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58686800;

   return block;
};

Block __58859480;

Block __58859000;

Block __58858840;

void code__58858840() {
}

Block make__58858840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58858840 = block;
   block->owner = (Object)__58859000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58858840;

   return block;
};

Block __59682560;

void code__59682560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_57931080_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__59682560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59682560 = block;
   block->owner = (Object)__58859000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59682560;

   return block;
};

void code__58859000() {
 code__58858840();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_57931080_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
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
                              src0 = lv0_57835600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_57985660_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52180060();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_57931080_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__59682560();
}

Block make__58859000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58859000 = block;
   block->owner = (Object)__58859480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58859000;

   return block;
};

void code__58859480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52180900(),ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52180780(),run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__58859000();
}

Block make__58859480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58859480 = block;
   block->owner = (Object)__58151580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58859480;

   return block;
};

void code__58151580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52120240(),run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__58151260();
 code__58686800();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57985640_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         src1 = rvok_57985620_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58859480();
   }
      }
   }
}

Block make__58151580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58151580 = block;
   block->owner = (Object)__57985480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58151580;

   return block;
};

void code__57985480() {
 code__57985320();
 code__57984380();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52121780(),ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52121520(),run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57983200();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53065880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         src1 = run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58151580();
   }
      }
   }
}

Block make__57985480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57985480 = block;
   block->owner = (Object)__59913880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57985480;

   return block;
};

Block __51677640;

void code__51677640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51677640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51677640 = block;
   block->owner = (Object)__51677280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51677640;

   return block;
};

Block __51677220;

void code__51677220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51677220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51677220 = block;
   block->owner = (Object)__51677040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51677220;

   return block;
};

Block __51676520;

void code__51676520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51676520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51676520 = block;
   block->owner = (Object)__51676200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51676520;

   return block;
};

Block __51676040;

void code__51676040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51676040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51676040 = block;
   block->owner = (Object)__51675500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51676040;

   return block;
};

Block __51712720;

void code__51712720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51712720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51712720 = block;
   block->owner = (Object)__51712040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51712720;

   return block;
};

Block __51711960;

void code__51711960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51711960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51711960 = block;
   block->owner = (Object)__51711480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51711960;

   return block;
};

Block __51709440;

void code__51709440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51709440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51709440 = block;
   block->owner = (Object)__51708640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51709440;

   return block;
};

Block __51708420;

void code__51708420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51708420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51708420 = block;
   block->owner = (Object)__51732320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51708420;

   return block;
};

Block __49281480;

Block __49275980;

Block __49299200;

void code__49299200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,lv0_48765480_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52175060(),lvok0_49281920_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49299200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49299200 = block;
   block->owner = (Object)__49275980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49299200;

   return block;
};

Block __51302280;

void code__51302280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,rv0_49282120_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52215680(),rvok0_49281820_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51302280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51302280 = block;
   block->owner = (Object)__49275980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51302280;

   return block;
};

Block __51852440;

Block __51851800;

void code__51851800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_48765480_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      src1 = rv0_49282120_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51851800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51851800 = block;
   block->owner = (Object)__51852440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51851800;

   return block;
};

void code__51852440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52215280(),run_49281800_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52215100(),ack__add_53065740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__51851800();
}

Block make__51852440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51852440 = block;
   block->owner = (Object)__49275980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51852440;

   return block;
};

void code__49275980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52175680(),run_49281800_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__49299200();
 code__51302280();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49281920_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         src1 = rvok0_49281820_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51852440();
   }
      }
   }
}

Block make__49275980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49275980 = block;
   block->owner = (Object)__49281480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49275980;

   return block;
};

Block __49280340;

void code__49280340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52214540(),lvok0_49281920_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52214440(),rvok0_49281820_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49280340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49280340 = block;
   block->owner = (Object)__49281480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49280340;

   return block;
};

void code__49281480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52176720(),ack__add_53065740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52176540(),run_49281800_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         src1 = run_49281800_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49275980();
   }
   else {
  code__49280340();
   }
      }
   }
}

Block make__49281480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49281480 = block;
   block->owner = (Object)__53066100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49281480;

   return block;
};

Value make__52122440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52122340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52122240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52122040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52121940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52121780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52121520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52121060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52120940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52120660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52120240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52120080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52119840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52119740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52119540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52119360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52118380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52117960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52182980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52182400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52181560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52180900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52180780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52180060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52176720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52176540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52175680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52175060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52215680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52215280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52215100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52214540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52214440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52212220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52211900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52211060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52210480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52210240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52209900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52209480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52209360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52209120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52208760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52208400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52208120() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52248500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52248360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52248160() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52247460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_48492040;

SignalI req__mac_53065880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makereq__mac_53065880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53065880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack_53065860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack__mac_53065760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI ack__add_53065740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack__add_53065740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53065740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58266_53324100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58264_53324040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58265_53323880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58283_51001800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58313_55345620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58336_55824600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makevalue__z0_57638980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI value__a0_57724480_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makevalue__a0_57724480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_57724480_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI flag__z0_57724460_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeflag__z0_57724460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_57724460_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeack__a0_57724440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58324_57900280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58325_57900200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58268_57900180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58269_57900100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SignalI _58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI make_58270_57944920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer1_58_84_48492040;
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

SystemI counter_57970100;

SystemI makecounter_57970100() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_57970100 = systemI;
   systemI->owner = (Object)layer1_58_84_48492040;
   systemI->name = "counter";
   systemI->system = counter_58_8400_57972260;

   return systemI;
};

SystemI func0_58265980;

SystemI makefunc0_58265980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58265980 = systemI;
   systemI->owner = (Object)layer1_58_84_48492040;
   systemI->name = "func0";
   systemI->system = func0_58_8400_58023740;

   return systemI;
};

Scope channel__w0_58252_48491580;

SignalI trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI maketrig__r_48550160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

SignalI trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI maketrig__w_48550080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

SignalI dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makedbus__r_48814280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

SignalI dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makedbus__w_49330500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

SignalI abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_49330160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

SignalI abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_49329980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

SignalI mem_49753420_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makemem_49753420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49753420_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_58252_48491580;
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

Scope raddr_58253_48490900;

Scope makeraddr_58253_48490900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_48490900 = scope;
   scope->owner = (Object)channel__w0_58252_48491580;
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

Scope waddr_58258_48489040;

Scope makewaddr_58258_48489040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_48489040 = scope;
   scope->owner = (Object)channel__w0_58252_48491580;
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

Scope rinc_58263_48553540;

Scope makerinc_58263_48553540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_48553540 = scope;
   scope->owner = (Object)channel__w0_58252_48491580;
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

Scope winc_58267_48552860;

Scope makewinc_58267_48552860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_48552860 = scope;
   scope->owner = (Object)channel__w0_58252_48491580;
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

Scope rdec_58271_48551820;

Scope makerdec_58271_48551820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_48551820 = scope;
   scope->owner = (Object)channel__w0_58252_48491580;
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

Scope wdec_58276_48550640;

Scope makewdec_58276_48550640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_48550640 = scope;
   scope->owner = (Object)channel__w0_58252_48491580;
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

Behavior __55352360;

Behavior make__55352360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55352360 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_neg += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->neg = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->neg,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_neg*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->neg[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_neg-1] = (Object)behavior;
   behavior->block = make__52175900();

   return behavior;
}

Behavior __51617440;

Behavior make__51617440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51617440 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[dbus__r_48814280_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51593220();

   return behavior;
}

Behavior __51617100;

Behavior make__51617100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51617100 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58266_53324100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51617380();

   return behavior;
}

Behavior __51616260;

Behavior make__51616260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51616260 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[trig__r_48550160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51616560();

   return behavior;
}

Behavior __51615680;

Behavior make__51615680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51615680 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58264_53324040_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51616100();

   return behavior;
}

Behavior __51614600;

Behavior make__51614600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51614600 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[abus__r_49330160_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51614920();

   return behavior;
}

Behavior __51614120;

Behavior make__51614120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51614120 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58265_53323880_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51614500();

   return behavior;
}

Behavior __51612820;

Behavior make__51612820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51612820 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[trig__w_48550080_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51613000();

   return behavior;
}

Behavior __51612340;

Behavior make__51612340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51612340 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58268_57900180_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51612780();

   return behavior;
}

Behavior __51611160;

Behavior make__51611160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51611160 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[abus__w_49329980_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51611680();

   return behavior;
}

Behavior __51610500;

Behavior make__51610500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51610500 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58269_57900100_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51610720();

   return behavior;
}

Behavior __51658180;

Behavior make__51658180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51658180 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[dbus__w_49330500_channel__w0_58252_48491580_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51610040();

   return behavior;
}

Behavior __51657400;

Behavior make__51657400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51657400 = behavior;
   behavior->owner = (Object)channel__w0_58252_48491580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58270_57944920_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51658100();

   return behavior;
}

Scope makechannel__w0_58252_48491580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_48491580 = scope;
   scope->owner = (Object)layer1_58_84_48492040;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48550160();
   scope->inners[1] = maketrig__w_48550080();
   scope->inners[2] = makedbus__r_48814280();
   scope->inners[3] = makedbus__w_49330500();
   scope->inners[4] = makeabus__r_49330160();
   scope->inners[5] = makeabus__w_49329980();
   scope->inners[6] = makemem_49753420();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_48490900();
   scope->scopes[1] = makewaddr_58258_48489040();
   scope->scopes[2] = makerinc_58263_48553540();
   scope->scopes[3] = makewinc_58267_48552860();
   scope->scopes[4] = makerdec_58271_48551820();
   scope->scopes[5] = makewdec_58276_48550640();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55352360();
   scope->behaviors[1] = make__51617440();
   scope->behaviors[2] = make__51617100();
   scope->behaviors[3] = make__51616260();
   scope->behaviors[4] = make__51615680();
   scope->behaviors[5] = make__51614600();
   scope->behaviors[6] = make__51614120();
   scope->behaviors[7] = make__51612820();
   scope->behaviors[8] = make__51612340();
   scope->behaviors[9] = make__51611160();
   scope->behaviors[10] = make__51610500();
   scope->behaviors[11] = make__51658180();
   scope->behaviors[12] = make__51657400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_55352240;

SignalI reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makereg__0_57557760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__accum_58281_55352240;
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

Scope anum_58282_55351940;

Scope makeanum_58282_55351940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_55351940 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
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

Scope raddr_58284_55351520;

Scope makeraddr_58284_55351520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_55351520 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
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

Scope waddr_58287_55351100;

Scope makewaddr_58287_55351100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_55351100 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
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

Scope rinc_58290_55350680;

SignalI abus__r_55350300_rinc_58290_55350680_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_55350300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55350300_rinc_58290_55350680_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_58290_55350680;
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

Scope makerinc_58290_55350680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_55350680 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55350300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_55350180;

SignalI abus__w_55349800_winc_58294_55350180_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_55349800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55349800_winc_58294_55350180_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_58294_55350180;
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

Scope makewinc_58294_55350180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_55350180 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55349800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_55349680;

SignalI abus__r_55349300_rdec_58298_55349680_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_55349300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55349300_rdec_58298_55349680_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_58298_55349680;
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

Scope makerdec_58298_55349680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_55349680 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55349300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_55349180;

SignalI abus__w_55348800_wdec_58302_55349180_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_55348800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55348800_wdec_58302_55349180_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_58302_55349180;
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

Scope makewdec_58302_55349180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_55349180 = scope;
   scope->owner = (Object)channel__accum_58281_55352240;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55348800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51652380;

Behavior make__51652380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51652380 = behavior;
   behavior->owner = (Object)channel__accum_58281_55352240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[reg__0_57557760_channel__accum_58281_55352240_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51653100();

   return behavior;
}

Behavior __51651460;

Behavior make__51651460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51651460 = behavior;
   behavior->owner = (Object)channel__accum_58281_55352240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58283_51001800_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51652220();

   return behavior;
}

Scope makechannel__accum_58281_55352240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_55352240 = scope;
   scope->owner = (Object)layer1_58_84_48492040;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57557760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_55351940();
   scope->scopes[1] = makeraddr_58284_55351520();
   scope->scopes[2] = makewaddr_58287_55351100();
   scope->scopes[3] = makerinc_58290_55350680();
   scope->scopes[4] = makewinc_58294_55350180();
   scope->scopes[5] = makerdec_58298_55349680();
   scope->scopes[6] = makewdec_58302_55349180();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51652380();
   scope->behaviors[1] = make__51651460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_57707600;

SignalI lv0_57835600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makelv0_57835600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57835600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58306_57707600;
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

SignalI av0_57931080_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeav0_57931080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_57931080_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58306_57707600;
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

SignalI rv_57985660_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makerv_57985660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_57985660_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58306_57707600;
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

SignalI lvok0_57985640_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makelvok0_57985640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57985640_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58306_57707600;
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

SignalI rvok_57985620_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makervok_57985620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_57985620_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58306_57707600;
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

SignalI run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makerun_57985600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57985600_mac__n1_58306_57707600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58306_57707600;
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

Behavior __59913880;

Behavior make__59913880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59913880 = behavior;
   behavior->owner = (Object)mac__n1_58306_57707600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__57985480();

   return behavior;
}

Scope makemac__n1_58306_57707600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_57707600 = scope;
   scope->owner = (Object)layer1_58_84_48492040;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57835600();
   scope->inners[1] = makeav0_57931080();
   scope->inners[2] = makerv_57985660();
   scope->inners[3] = makelvok0_57985640();
   scope->inners[4] = makervok_57985620();
   scope->inners[5] = makerun_57985600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59913880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_59913760;

SignalI reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makereg__0_60111920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__bias_58311_59913760;
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

Scope anum_58312_59913460;

Scope makeanum_58312_59913460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_59913460 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
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

Scope raddr_58314_59913040;

Scope makeraddr_58314_59913040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_59913040 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
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

Scope waddr_58317_59912620;

Scope makewaddr_58317_59912620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_59912620 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
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

Scope rinc_58320_59912200;

SignalI abus__r_59911820_rinc_58320_59912200_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_59911820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59911820_rinc_58320_59912200_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_58320_59912200;
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

Scope makerinc_58320_59912200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_59912200 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59911820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_59911700;

SignalI abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_59911320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_58323_59911700;
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

Behavior __51712040;

Behavior make__51712040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51712040 = behavior;
   behavior->owner = (Object)winc_58323_59911700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[abus__w_59911320_winc_58323_59911700_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51712720();

   return behavior;
}

Behavior __51711480;

Behavior make__51711480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51711480 = behavior;
   behavior->owner = (Object)winc_58323_59911700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58325_57900200_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51711960();

   return behavior;
}

Scope makewinc_58323_59911700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_59911700 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59911320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51712040();
   scope->behaviors[1] = make__51711480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_59910940;

SignalI abus__r_59910560_rdec_58326_59910940_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_59910560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59910560_rdec_58326_59910940_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_58326_59910940;
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

Scope makerdec_58326_59910940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_59910940 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59910560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_59910440;

SignalI abus__w_59910060_wdec_58330_59910440_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_59910060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59910060_wdec_58330_59910440_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_58330_59910440;
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

Scope makewdec_58330_59910440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_59910440 = scope;
   scope->owner = (Object)channel__bias_58311_59913760;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59910060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51677280;

Behavior make__51677280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51677280 = behavior;
   behavior->owner = (Object)channel__bias_58311_59913760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51677640();

   return behavior;
}

Behavior __51677040;

Behavior make__51677040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51677040 = behavior;
   behavior->owner = (Object)channel__bias_58311_59913760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58313_55345620_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51677220();

   return behavior;
}

Behavior __51676200;

Behavior make__51676200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51676200 = behavior;
   behavior->owner = (Object)channel__bias_58311_59913760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[reg__0_60111920_channel__bias_58311_59913760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51676520();

   return behavior;
}

Behavior __51675500;

Behavior make__51675500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51675500 = behavior;
   behavior->owner = (Object)channel__bias_58311_59913760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58324_57900280_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51676040();

   return behavior;
}

Scope makechannel__bias_58311_59913760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_59913760 = scope;
   scope->owner = (Object)layer1_58_84_48492040;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_60111920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_59913460();
   scope->scopes[1] = makeraddr_58314_59913040();
   scope->scopes[2] = makewaddr_58317_59912620();
   scope->scopes[3] = makerinc_58320_59912200();
   scope->scopes[4] = makewinc_58323_59911700();
   scope->scopes[5] = makerdec_58326_59910940();
   scope->scopes[6] = makewdec_58330_59910440();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51677280();
   scope->behaviors[1] = make__51677040();
   scope->behaviors[2] = make__51676200();
   scope->behaviors[3] = make__51675500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_60583780;

SignalI reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makereg__0_60855780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__z_58334_60583780;
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

Scope anum_58335_60583480;

Scope makeanum_58335_60583480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_60583480 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
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

Scope raddr_58337_60583060;

Scope makeraddr_58337_60583060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_60583060 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
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

Scope waddr_58340_60582640;

Scope makewaddr_58340_60582640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_60582640 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
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

Scope rinc_58343_60582220;

SignalI abus__r_60581840_rinc_58343_60582220_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_60581840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60581840_rinc_58343_60582220_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_58343_60582220;
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

Scope makerinc_58343_60582220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_60582220 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60581840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_60581720;

SignalI abus__w_60581340_winc_58346_60581720_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_60581340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60581340_winc_58346_60581720_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_58346_60581720;
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

Scope makewinc_58346_60581720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_60581720 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60581340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_60581220;

SignalI abus__r_60580840_rdec_58349_60581220_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__r_60580840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60580840_rdec_58349_60581220_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_58349_60581220;
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

Scope makerdec_58349_60581220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_60581220 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60580840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_60580720;

SignalI abus__w_60580340_wdec_58353_60580720_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makeabus__w_60580340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60580340_wdec_58353_60580720_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_58353_60580720;
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

Scope makewdec_58353_60580720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_60580720 = scope;
   scope->owner = (Object)channel__z_58334_60583780;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60580340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51708640;

Behavior make__51708640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51708640 = behavior;
   behavior->owner = (Object)channel__z_58334_60583780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[reg__0_60855780_channel__z_58334_60583780_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51709440();

   return behavior;
}

Behavior __51732320;

Behavior make__51732320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51732320 = behavior;
   behavior->owner = (Object)channel__z_58334_60583780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_58336_55824600_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51708420();

   return behavior;
}

Scope makechannel__z_58334_60583780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_60583780 = scope;
   scope->owner = (Object)layer1_58_84_48492040;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_60855780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_60583480();
   scope->scopes[1] = makeraddr_58337_60583060();
   scope->scopes[2] = makewaddr_58340_60582640();
   scope->scopes[3] = makerinc_58343_60582220();
   scope->scopes[4] = makewinc_58346_60581720();
   scope->scopes[5] = makerdec_58349_60581220();
   scope->scopes[6] = makewdec_58353_60580720();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51708640();
   scope->behaviors[1] = make__51732320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_48053640;

SignalI lv0_48765480_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makelv0_48765480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48765480_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58357_48053640;
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

SignalI rv0_49282120_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makerv0_49282120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49282120_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58357_48053640;
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

SignalI lvok0_49281920_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makelvok0_49281920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49281920_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58357_48053640;
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

SignalI rvok0_49281820_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makervok0_49281820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49281820_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58357_48053640;
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

SignalI run_49281800_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680;

SignalI makerun_49281800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49281800_add__n_58357_48053640_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58357_48053640;
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

Behavior __53066100;

Behavior make__53066100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53066100 = behavior;
   behavior->owner = (Object)add__n_58357_48053640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__49281480();

   return behavior;
}

Scope makeadd__n_58357_48053640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_48053640 = scope;
   scope->owner = (Object)layer1_58_84_48492040;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48765480();
   scope->inners[1] = makerv0_49282120();
   scope->inners[2] = makelvok0_49281920();
   scope->inners[3] = makervok0_49281820();
   scope->inners[4] = makerun_49281800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53066100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59284360;

Behavior make__59284360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59284360 = behavior;
   behavior->owner = (Object)layer1_58_84_48492040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__58852900();

   return behavior;
}

Behavior __59537380;

Behavior make__59537380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59537380 = behavior;
   behavior->owner = (Object)layer1_58_84_48492040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__59284240();

   return behavior;
}

Behavior __59711900;

Behavior make__59711900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59711900 = behavior;
   behavior->owner = (Object)layer1_58_84_48492040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->pos[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__59537260();

   return behavior;
}

Behavior __51554840;

Behavior make__51554840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51554840 = behavior;
   behavior->owner = (Object)layer1_58_84_48492040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[ack__mac_53065760_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51555240();

   return behavior;
}

Behavior __51595860;

Behavior make__51595860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51595860 = behavior;
   behavior->owner = (Object)layer1_58_84_48492040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[ack_53065860_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[value__z0_57638980_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[ack__a0_57724440_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51555860();

   return behavior;
}

Behavior __51595520;

Behavior make__51595520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51595520 = behavior;
   behavior->owner = (Object)layer1_58_84_48492040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[ack__mac_57970240_counter_58_8400_57972260_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[a_58266160_func0_58_8400_58023740_layer1_58_84_48492040_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__51555740();

   return behavior;
}

Scope makelayer1_58_84_48492040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_48492040 = scope;
   scope->owner = (Object)layer1_58_840_59711580;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_57970100();
   scope->systemIs[1] = makefunc0_58265980();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53065880();
   scope->inners[1] = makeack_53065860();
   scope->inners[2] = makeack__mac_53065760();
   scope->inners[3] = makeack__add_53065740();
   scope->inners[4] = make_58266_53324100();
   scope->inners[5] = make_58264_53324040();
   scope->inners[6] = make_58265_53323880();
   scope->inners[7] = make_58283_51001800();
   scope->inners[8] = make_58313_55345620();
   scope->inners[9] = make_58336_55824600();
   scope->inners[10] = makevalue__z0_57638980();
   scope->inners[11] = makevalue__a0_57724480();
   scope->inners[12] = makeflag__z0_57724460();
   scope->inners[13] = makeack__a0_57724440();
   scope->inners[14] = make_58324_57900280();
   scope->inners[15] = make_58325_57900200();
   scope->inners[16] = make_58268_57900180();
   scope->inners[17] = make_58269_57900100();
   scope->inners[18] = make_58270_57944920();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_48491580();
   scope->scopes[1] = makechannel__accum_58281_55352240();
   scope->scopes[2] = makemac__n1_58306_57707600();
   scope->scopes[3] = makechannel__bias_58311_59913760();
   scope->scopes[4] = makechannel__z_58334_60583780();
   scope->scopes[5] = makeadd__n_58357_48053640();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59284360();
   scope->behaviors[1] = make__59537380();
   scope->behaviors[2] = make__59711900();
   scope->behaviors[3] = make__51554840();
   scope->behaviors[4] = make__51595860();
   scope->behaviors[5] = make__51595520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59711580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59711580 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59733980();
   systemT->inputs[1] = makerst_59733960();
   systemT->inputs[2] = makefill_59733940();
   systemT->inputs[3] = makereq_59733920();
   systemT->inputs[4] = make_5843_59914760();
   systemT->inputs[5] = make_5844_60109780();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_60109740();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5845_60109620();
   systemT->inouts[1] = make_5862_60183840();

   systemT->scope = makelayer1_58_84_48492040();

   return systemT;
}