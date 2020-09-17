#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_58721340;

SignalI clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeclk_58760280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makerst_58760240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI fill_58760220_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makefill_58760220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58760220_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makereq_58760160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI _5843_58828080_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_5843_58828080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_58828080_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI _5844_58895340_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_5844_58895340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_58895340_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack__layer_58895300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI _5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_5845_58895200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

SignalI _5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_5862_59012120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_840_58721340;
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

Block __53967340;

Block __53966080;

Block __53965640;

void code__53965640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60485480(),flag__z0_54256180_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53965640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53965640 = block;
   block->owner = (Object)__53966080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53965640;

   return block;
};

void code__53966080() {
 code__53965640();
}

Block make__53966080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53966080 = block;
   block->owner = (Object)__53967340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53966080;

   return block;
};

Block __53967060;

void code__53967060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60485420(),flag__z0_54256180_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53967060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53967060 = block;
   block->owner = (Object)__53967340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53967060;

   return block;
};

void code__53967340() {
   {
      Value cond = ack__add_52726780_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53966080();
   }
   else {
  code__53967060();
   }
      }
   }
}

Block make__53967340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53967340 = block;
   block->owner = (Object)__53410700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53967340;

   return block;
};

Block __53410580;

Block __53410360;

Block __53410200;

void code__53410200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54256200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60485180(),ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53410200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53410200 = block;
   block->owner = (Object)__53410360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53410200;

   return block;
};

void code__53410360() {
 code__53410200();
}

Block make__53410360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53410360 = block;
   block->owner = (Object)__53410580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53410360;

   return block;
};

void code__53410580() {
   {
      Value cond = flag__z0_54256180_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53410360();
   }
      }
   }
}

Block make__53410580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53410580 = block;
   block->owner = (Object)__58512480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53410580;

   return block;
};

Block __58512360;

Block __58512200;

Block __58511840;

void code__58511840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60485020(),_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__58511840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58511840 = block;
   block->owner = (Object)__58512200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58511840;

   return block;
};

void code__58512200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60485100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58511840();
   }
      }
   }
}

Block make__58512200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58512200 = block;
   block->owner = (Object)__58512360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58512200;

   return block;
};

Block __58511320;

Block __58510940;

void code__58510940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60484860(),_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__58510940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510940 = block;
   block->owner = (Object)__58511320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510940;

   return block;
};

void code__58511320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60484940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58510940();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60484800(),_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__58511320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58511320 = block;
   block->owner = (Object)__58512360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58511320;

   return block;
};

Block __58510220;

Block __58510060;

Block __58509700;

void code__58509700() {
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
                  src0 = _58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60484480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60484340(),_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60484280(),_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__58509700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58509700 = block;
   block->owner = (Object)__58510060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58509700;

   return block;
};

void code__58510060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60484640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58509700();
   }
      }
   }
}

Block make__58510060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510060 = block;
   block->owner = (Object)__58510220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510060;

   return block;
};

Block __58625360;

Block __58624940;

Block __58624420;

void code__58624420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60484020(),_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__58624420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58624420 = block;
   block->owner = (Object)__58624940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58624420;

   return block;
};

void code__58624940() {
{
      Value value = _58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60484080())) {
    code__58624420();
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
                  src0 = _58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60483900();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__58624940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58624940 = block;
   block->owner = (Object)__58625360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58624940;

   return block;
};

void code__58625360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60484200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58624940();
   }
      }
   }
}

Block make__58625360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58625360 = block;
   block->owner = (Object)__58510220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58625360;

   return block;
};

void code__58510220() {
 code__58510060();
 code__58625360();
}

Block make__58510220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58510220 = block;
   block->owner = (Object)__58512360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58510220;

   return block;
};

void code__58512360() {
 code__58512200();
 code__58511320();
   {
      Value cond = fill_58760220_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58510220();
   }
      }
   }
}

Block make__58512360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58512360 = block;
   block->owner = (Object)__58721740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58512360;

   return block;
};

Block __60260900;

void code__60260900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_52726860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60260900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60260900 = block;
   block->owner = (Object)__60260580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60260900;

   return block;
};

Block __60261140;

void code__60261140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,clk_51523300_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,ack_51523280_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,rst_51523260_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60261140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60261140 = block;
   block->owner = (Object)__60295940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60261140;

   return block;
};

Block __60261080;

void code__60261080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,value__a0_54256200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60261080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60261080 = block;
   block->owner = (Object)__60295780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60261080;

   return block;
};

Block __53027260;

Block __53787320;

void code__53787320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,make_ref_rangeS(mem_52277720_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340,value2integer(abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value),value2integer(abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__53787320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53787320 = block;
   block->owner = (Object)__53027260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53787320;

   return block;
};

void code__53027260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52277720_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53787320();
   }
      }
   }
}

Block make__53027260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53027260 = block;
   block->owner = (Object)__47325820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53027260;

   return block;
};

Block __60294960;

void code__60294960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60294960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60294960 = block;
   block->owner = (Object)__60294760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60294960;

   return block;
};

Block __60294720;

void code__60294720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60294720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60294720 = block;
   block->owner = (Object)__60294500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60294720;

   return block;
};

Block __60294200;

void code__60294200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60294200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60294200 = block;
   block->owner = (Object)__60294040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60294200;

   return block;
};

Block __60294000;

void code__60294000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60294000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60294000 = block;
   block->owner = (Object)__60293840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60294000;

   return block;
};

Block __60293520;

void code__60293520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60293520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60293520 = block;
   block->owner = (Object)__60293340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60293520;

   return block;
};

Block __60293300;

void code__60293300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60293300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60293300 = block;
   block->owner = (Object)__60334000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60293300;

   return block;
};

Block __60333700;

void code__60333700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60333700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60333700 = block;
   block->owner = (Object)__60333500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60333700;

   return block;
};

Block __60333460;

void code__60333460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60333460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60333460 = block;
   block->owner = (Object)__60333120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60333460;

   return block;
};

Block __60332780;

void code__60332780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60332780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60332780 = block;
   block->owner = (Object)__60332620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60332780;

   return block;
};

Block __60332580;

void code__60332580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60332580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60332580 = block;
   block->owner = (Object)__60332420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60332580;

   return block;
};

Block __60332020;

void code__60332020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60332020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60332020 = block;
   block->owner = (Object)__60331860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60332020;

   return block;
};

Block __60331820;

void code__60331820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60331820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60331820 = block;
   block->owner = (Object)__60331660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60331820;

   return block;
};

Block __60329940;

void code__60329940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60329940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60329940 = block;
   block->owner = (Object)__60329640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60329940;

   return block;
};

Block __60329600;

void code__60329600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60329600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60329600 = block;
   block->owner = (Object)__60329440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60329600;

   return block;
};

Block __51860940;

Block __51860660;

Block __51860220;

void code__51860220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60467060(),_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51860220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51860220 = block;
   block->owner = (Object)__51860660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51860220;

   return block;
};

void code__51860660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60467140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51860220();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60467000(),_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51860660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51860660 = block;
   block->owner = (Object)__51860940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51860660;

   return block;
};

Block __51859220;

Block __51858320;

void code__51858320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60466840(),_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51858320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51858320 = block;
   block->owner = (Object)__51859220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51858320;

   return block;
};

void code__51859220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60466920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51858320();
   }
      }
   }
}

Block make__51859220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51859220 = block;
   block->owner = (Object)__51860940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51859220;

   return block;
};

Block __52261520;

Block __52260940;

Block __52260460;

Block __52259540;

void code__52259540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_58828080_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,rv_51861420_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52259540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52259540 = block;
   block->owner = (Object)__52260460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52259540;

   return block;
};

Block __52736360;

void code__52736360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_58895340_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,rv_51861420_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52736360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52736360 = block;
   block->owner = (Object)__52260460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52736360;

   return block;
};

void code__52260460() {
{
      Value value = _5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60466320())) {
    code__52259540();
         }
         else if (value2integer(value) == value2integer(make__60466200())) {
    code__52736360();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60466020(),rvok_51861260_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
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
                  src0 = _5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60465900();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52260460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52260460 = block;
   block->owner = (Object)__52260940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52260460;

   return block;
};

void code__52260940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60466460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52260460();
   }
      }
   }
}

Block make__52260940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52260940 = block;
   block->owner = (Object)__52261520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52260940;

   return block;
};

Block __53061940;

Block __53060980;

Block __53060320;

void code__53060320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,lv0_49647020_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60465520(),lvok0_51861340_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53060320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53060320 = block;
   block->owner = (Object)__53060980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53060320;

   return block;
};

void code__53060980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60465680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53060320();
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
                  src0 = _58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60465360();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60465260(),_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53060980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53060980 = block;
   block->owner = (Object)__53061940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53060980;

   return block;
};

void code__53061940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60465780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53060980();
   }
      }
   }
}

Block make__53061940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53061940 = block;
   block->owner = (Object)__52261520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53061940;

   return block;
};

Block __53575640;

Block __53574640;

Block __53574400;

void code__53574400() {
}

Block make__53574400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53574400 = block;
   block->owner = (Object)__53574640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53574400;

   return block;
};

Block __52555920;

void code__52555920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51546540_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52555920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52555920 = block;
   block->owner = (Object)__53574640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52555920;

   return block;
};

void code__53574640() {
 code__53574400();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_51546540_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
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
                              src0 = lv0_49647020_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51861420_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60489180();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51546540_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__52555920();
}

Block make__53574640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53574640 = block;
   block->owner = (Object)__53575640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53574640;

   return block;
};

void code__53575640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60489580(),ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60489520(),run_51861240_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__53574640();
}

Block make__53575640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53575640 = block;
   block->owner = (Object)__52261520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53575640;

   return block;
};

void code__52261520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60466560(),run_51861240_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__52260940();
 code__53061940();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51861340_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         src1 = rvok_51861260_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53575640();
   }
      }
   }
}

Block make__52261520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52261520 = block;
   block->owner = (Object)__51860940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52261520;

   return block;
};

Block __51857100;

void code__51857100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60489000(),rvok_51861260_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60488920(),lvok0_51861340_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60488860(),av0_51546540_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51857100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51857100 = block;
   block->owner = (Object)__51860940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51857100;

   return block;
};

void code__51860940() {
 code__51860660();
 code__51859220();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60466780(),ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60466720(),run_51861240_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_52726860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         src1 = run_51861240_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52261520();
   }
   else {
  code__51857100();
   }
      }
   }
}

Block make__51860940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51860940 = block;
   block->owner = (Object)__53426560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51860940;

   return block;
};

Block __60327520;

void code__60327520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60327520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60327520 = block;
   block->owner = (Object)__60327360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60327520;

   return block;
};

Block __60327320;

void code__60327320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60327320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60327320 = block;
   block->owner = (Object)__60327160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60327320;

   return block;
};

Block __60326860;

void code__60326860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60326860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60326860 = block;
   block->owner = (Object)__60326680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60326860;

   return block;
};

Block __60326620;

void code__60326620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60326620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60326620 = block;
   block->owner = (Object)__60326440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60326620;

   return block;
};

Block __60414800;

void code__60414800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60414800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60414800 = block;
   block->owner = (Object)__60414620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60414800;

   return block;
};

Block __60414580;

void code__60414580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60414580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60414580 = block;
   block->owner = (Object)__60414400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60414580;

   return block;
};

Block __60413120;

void code__60413120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60413120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60413120 = block;
   block->owner = (Object)__60412960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60413120;

   return block;
};

Block __60412920;

void code__60412920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60412920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60412920 = block;
   block->owner = (Object)__60412760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60412920;

   return block;
};

Block __47264720;

Block __47261700;

Block __47279760;

void code__47279760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,lv0_54364500_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60487300(),lvok0_47265920_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47279760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47279760 = block;
   block->owner = (Object)__47261700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47279760;

   return block;
};

Block __49169300;

void code__49169300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,rv0_47266040_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60487160(),rvok0_47265740_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__49169300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49169300 = block;
   block->owner = (Object)__47261700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49169300;

   return block;
};

Block __49754520;

Block __49751680;

void code__49751680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_54364500_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      src1 = rv0_47266040_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__49751680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49751680 = block;
   block->owner = (Object)__49754520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49751680;

   return block;
};

void code__49754520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60487000(),run_47265520_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60486940(),ack__add_52726780_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__49751680();
}

Block make__49754520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49754520 = block;
   block->owner = (Object)__47261700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49754520;

   return block;
};

void code__47261700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60487440(),run_47265520_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__47279760();
 code__49169300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47265920_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         src1 = rvok0_47265740_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49754520();
   }
      }
   }
}

Block make__47261700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47261700 = block;
   block->owner = (Object)__47264720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47261700;

   return block;
};

Block __47262900;

void code__47262900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60486660(),lvok0_47265920_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60486580(),rvok0_47265740_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47262900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47262900 = block;
   block->owner = (Object)__47264720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47262900;

   return block;
};

void code__47264720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60487720(),ack__add_52726780_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60487660(),run_47265520_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         src1 = run_47265520_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47261700();
   }
   else {
  code__47262900();
   }
      }
   }
}

Block make__47264720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47264720 = block;
   block->owner = (Object)__52727060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47264720;

   return block;
};

Value make__60467140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60467060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60467000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60466920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60466840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60466780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60466720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60466560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60466460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60466320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60466200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60466020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60465900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60465780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60465680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60465520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60465360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60465260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60489580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60489520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60489180() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60489000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60488920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60488860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60487720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60487660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60487440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60487300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60487160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60487000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60486940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60486660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60486580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60485480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60485420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60485180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60485100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60485020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60484940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60484860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60484800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60484640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60484480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60484340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60484280() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60484200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60484080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__60484020() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60483900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_49755940;

SignalI req__mac_52726860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makereq__mac_52726860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_52726860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack_52726840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack__mac_52726820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI ack__add_52726780_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack__add_52726780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_52726780_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58266_52894860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58264_52894840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58265_52894480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58283_53129620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58313_53359900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58336_53621640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makevalue__z0_54025360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI value__a0_54256200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makevalue__a0_54256200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54256200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI flag__z0_54256180_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeflag__z0_54256180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54256180_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeack__a0_54256160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58324_52606500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58325_52606420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58268_52606400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58269_52606320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SignalI _58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI make_58270_55724680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer1_58_84_49755940;
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

SystemI counter_51523080;

SystemI makecounter_51523080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_51523080 = systemI;
   systemI->owner = (Object)layer1_58_84_49755940;
   systemI->name = "counter";
   systemI->system = counter_58_8400_51525140;

   return systemI;
};

SystemI func0_52733520;

SystemI makefunc0_52733520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52733520 = systemI;
   systemI->owner = (Object)layer1_58_84_49755940;
   systemI->name = "func0";
   systemI->system = func0_58_8400_51983520;

   return systemI;
};

Scope channel__w0_58252_49755100;

SignalI trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI maketrig__r_49772360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

SignalI trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI maketrig__w_49772340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

SignalI dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makedbus__r_51748500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

SignalI dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makedbus__w_51918480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

SignalI abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_51918380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

SignalI abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_51918240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

SignalI mem_52277720_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makemem_52277720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52277720_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_58252_49755100;
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

Scope raddr_58253_49754380;

Scope makeraddr_58253_49754380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_49754380 = scope;
   scope->owner = (Object)channel__w0_58252_49755100;
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

Scope waddr_58258_49753220;

Scope makewaddr_58258_49753220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_49753220 = scope;
   scope->owner = (Object)channel__w0_58252_49755100;
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

Scope rinc_58263_49752020;

Scope makerinc_58263_49752020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_49752020 = scope;
   scope->owner = (Object)channel__w0_58252_49755100;
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

Scope winc_58267_49751300;

Scope makewinc_58267_49751300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_49751300 = scope;
   scope->owner = (Object)channel__w0_58252_49755100;
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

Scope rdec_58271_49750600;

Scope makerdec_58271_49750600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_49750600 = scope;
   scope->owner = (Object)channel__w0_58252_49755100;
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

Scope wdec_58276_49774380;

Scope makewdec_58276_49774380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_49774380 = scope;
   scope->owner = (Object)channel__w0_58252_49755100;
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

Behavior __47325820;

Behavior make__47325820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47325820 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_neg += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->neg = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->neg,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_neg*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->neg[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_neg-1] = (Object)behavior;
   behavior->block = make__53027260();

   return behavior;
}

Behavior __60294760;

Behavior make__60294760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60294760 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[dbus__r_51748500_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60294960();

   return behavior;
}

Behavior __60294500;

Behavior make__60294500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60294500 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58266_52894860_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60294720();

   return behavior;
}

Behavior __60294040;

Behavior make__60294040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60294040 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[trig__r_49772360_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60294200();

   return behavior;
}

Behavior __60293840;

Behavior make__60293840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60293840 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58264_52894840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60294000();

   return behavior;
}

Behavior __60293340;

Behavior make__60293340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60293340 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[abus__r_51918380_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60293520();

   return behavior;
}

Behavior __60334000;

Behavior make__60334000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60334000 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58265_52894480_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60293300();

   return behavior;
}

Behavior __60333500;

Behavior make__60333500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60333500 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[trig__w_49772340_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60333700();

   return behavior;
}

Behavior __60333120;

Behavior make__60333120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60333120 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58268_52606400_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60333460();

   return behavior;
}

Behavior __60332620;

Behavior make__60332620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60332620 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[abus__w_51918240_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60332780();

   return behavior;
}

Behavior __60332420;

Behavior make__60332420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60332420 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58269_52606320_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60332580();

   return behavior;
}

Behavior __60331860;

Behavior make__60331860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60331860 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[dbus__w_51918480_channel__w0_58252_49755100_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60332020();

   return behavior;
}

Behavior __60331660;

Behavior make__60331660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60331660 = behavior;
   behavior->owner = (Object)channel__w0_58252_49755100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58270_55724680_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60331820();

   return behavior;
}

Scope makechannel__w0_58252_49755100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_49755100 = scope;
   scope->owner = (Object)layer1_58_84_49755940;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49772360();
   scope->inners[1] = maketrig__w_49772340();
   scope->inners[2] = makedbus__r_51748500();
   scope->inners[3] = makedbus__w_51918480();
   scope->inners[4] = makeabus__r_51918380();
   scope->inners[5] = makeabus__w_51918240();
   scope->inners[6] = makemem_52277720();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_49754380();
   scope->scopes[1] = makewaddr_58258_49753220();
   scope->scopes[2] = makerinc_58263_49752020();
   scope->scopes[3] = makewinc_58267_49751300();
   scope->scopes[4] = makerdec_58271_49750600();
   scope->scopes[5] = makewdec_58276_49774380();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47325820();
   scope->behaviors[1] = make__60294760();
   scope->behaviors[2] = make__60294500();
   scope->behaviors[3] = make__60294040();
   scope->behaviors[4] = make__60293840();
   scope->behaviors[5] = make__60293340();
   scope->behaviors[6] = make__60334000();
   scope->behaviors[7] = make__60333500();
   scope->behaviors[8] = make__60333120();
   scope->behaviors[9] = make__60332620();
   scope->behaviors[10] = make__60332420();
   scope->behaviors[11] = make__60331860();
   scope->behaviors[12] = make__60331660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_47325200;

SignalI reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makereg__0_47908000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__accum_58281_47325200;
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

Scope anum_58282_47342980;

Scope makeanum_58282_47342980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_47342980 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
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

Scope raddr_58284_47376920;

Scope makeraddr_58284_47376920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_47376920 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
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

Scope waddr_58287_47375120;

Scope makewaddr_58287_47375120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_47375120 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
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

Scope rinc_58290_47398760;

SignalI abus__r_47397180_rinc_58290_47398760_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47397180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47397180_rinc_58290_47398760_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_58290_47398760;
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

Scope makerinc_58290_47398760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_47398760 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47397180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_47396960;

SignalI abus__w_47392860_winc_58294_47396960_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_47392860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47392860_winc_58294_47396960_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_58294_47396960;
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

Scope makewinc_58294_47396960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_47396960 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47392860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_47392120;

SignalI abus__r_47410060_rdec_58298_47392120_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47410060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47410060_rdec_58298_47392120_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_58298_47392120;
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

Scope makerdec_58298_47392120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_47392120 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47410060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_47408660;

SignalI abus__w_47428380_wdec_58302_47408660_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_47428380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47428380_wdec_58302_47408660_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_58302_47408660;
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

Scope makewdec_58302_47408660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_47408660 = scope;
   scope->owner = (Object)channel__accum_58281_47325200;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47428380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60329640;

Behavior make__60329640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60329640 = behavior;
   behavior->owner = (Object)channel__accum_58281_47325200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[reg__0_47908000_channel__accum_58281_47325200_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60329940();

   return behavior;
}

Behavior __60329440;

Behavior make__60329440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60329440 = behavior;
   behavior->owner = (Object)channel__accum_58281_47325200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58283_53129620_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60329600();

   return behavior;
}

Scope makechannel__accum_58281_47325200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_47325200 = scope;
   scope->owner = (Object)layer1_58_84_49755940;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47908000();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_47342980();
   scope->scopes[1] = makeraddr_58284_47376920();
   scope->scopes[2] = makewaddr_58287_47375120();
   scope->scopes[3] = makerinc_58290_47398760();
   scope->scopes[4] = makewinc_58294_47396960();
   scope->scopes[5] = makerdec_58298_47392120();
   scope->scopes[6] = makewdec_58302_47408660();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60329640();
   scope->behaviors[1] = make__60329440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_49432080;

SignalI lv0_49647020_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makelv0_49647020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49647020_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58306_49432080;
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

SignalI av0_51546540_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeav0_51546540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51546540_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58306_49432080;
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

SignalI rv_51861420_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makerv_51861420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51861420_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58306_49432080;
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

SignalI lvok0_51861340_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makelvok0_51861340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51861340_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58306_49432080;
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

SignalI rvok_51861260_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makervok_51861260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51861260_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58306_49432080;
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

SignalI run_51861240_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makerun_51861240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51861240_mac__n1_58306_49432080_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58306_49432080;
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

Behavior __53426560;

Behavior make__53426560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53426560 = behavior;
   behavior->owner = (Object)mac__n1_58306_49432080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__51860940();

   return behavior;
}

Scope makemac__n1_58306_49432080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_49432080 = scope;
   scope->owner = (Object)layer1_58_84_49755940;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49647020();
   scope->inners[1] = makeav0_51546540();
   scope->inners[2] = makerv_51861420();
   scope->inners[3] = makelvok0_51861340();
   scope->inners[4] = makervok_51861260();
   scope->inners[5] = makerun_51861240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53426560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_53426280;

SignalI reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makereg__0_54054600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__bias_58311_53426280;
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

Scope anum_58312_53425620;

Scope makeanum_58312_53425620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_53425620 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
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

Scope raddr_58314_53424720;

Scope makeraddr_58314_53424720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_53424720 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
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

Scope waddr_58317_53424100;

Scope makewaddr_58317_53424100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_53424100 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
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

Scope rinc_58320_53423240;

SignalI abus__r_53422640_rinc_58320_53423240_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_53422640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53422640_rinc_58320_53423240_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_58320_53423240;
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

Scope makerinc_58320_53423240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_53423240 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53422640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_53422420;

SignalI abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_53421740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_58323_53422420;
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

Behavior __60414620;

Behavior make__60414620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60414620 = behavior;
   behavior->owner = (Object)winc_58323_53422420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[abus__w_53421740_winc_58323_53422420_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60414800();

   return behavior;
}

Behavior __60414400;

Behavior make__60414400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60414400 = behavior;
   behavior->owner = (Object)winc_58323_53422420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58325_52606420_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60414580();

   return behavior;
}

Scope makewinc_58323_53422420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_53422420 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53421740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60414620();
   scope->behaviors[1] = make__60414400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_53421000;

SignalI abus__r_53420080_rdec_58326_53421000_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_53420080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53420080_rdec_58326_53421000_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_58326_53421000;
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

Scope makerdec_58326_53421000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_53421000 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53420080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_53477180;

SignalI abus__w_53476520_wdec_58330_53477180_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_53476520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53476520_wdec_58330_53477180_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_58330_53477180;
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

Scope makewdec_58330_53477180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_53477180 = scope;
   scope->owner = (Object)channel__bias_58311_53426280;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53476520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60327360;

Behavior make__60327360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60327360 = behavior;
   behavior->owner = (Object)channel__bias_58311_53426280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60327520();

   return behavior;
}

Behavior __60327160;

Behavior make__60327160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60327160 = behavior;
   behavior->owner = (Object)channel__bias_58311_53426280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58313_53359900_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60327320();

   return behavior;
}

Behavior __60326680;

Behavior make__60326680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60326680 = behavior;
   behavior->owner = (Object)channel__bias_58311_53426280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[reg__0_54054600_channel__bias_58311_53426280_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60326860();

   return behavior;
}

Behavior __60326440;

Behavior make__60326440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60326440 = behavior;
   behavior->owner = (Object)channel__bias_58311_53426280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58324_52606500_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60326620();

   return behavior;
}

Scope makechannel__bias_58311_53426280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_53426280 = scope;
   scope->owner = (Object)layer1_58_84_49755940;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54054600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_53425620();
   scope->scopes[1] = makeraddr_58314_53424720();
   scope->scopes[2] = makewaddr_58317_53424100();
   scope->scopes[3] = makerinc_58320_53423240();
   scope->scopes[4] = makewinc_58323_53422420();
   scope->scopes[5] = makerdec_58326_53421000();
   scope->scopes[6] = makewdec_58330_53477180();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60327360();
   scope->behaviors[1] = make__60327160();
   scope->behaviors[2] = make__60326680();
   scope->behaviors[3] = make__60326440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_51981820;

SignalI reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makereg__0_52733100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__z_58334_51981820;
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

Scope anum_58335_51981140;

Scope makeanum_58335_51981140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_51981140 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
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

Scope raddr_58337_51980060;

Scope makeraddr_58337_51980060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_51980060 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
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

Scope waddr_58340_51979040;

Scope makewaddr_58340_51979040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_51979040 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
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

Scope rinc_58343_51978320;

SignalI abus__r_52452720_rinc_58343_51978320_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_52452720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52452720_rinc_58343_51978320_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_58343_51978320;
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

Scope makerinc_58343_51978320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_51978320 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52452720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_52452560;

SignalI abus__w_52452180_winc_58346_52452560_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_52452180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52452180_winc_58346_52452560_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_58346_52452560;
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

Scope makewinc_58346_52452560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_52452560 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52452180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_52452040;

SignalI abus__r_52451040_rdec_58349_52452040_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__r_52451040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52451040_rdec_58349_52452040_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_58349_52452040;
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

Scope makerdec_58349_52452040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_52452040 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52451040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_52450840;

SignalI abus__w_52450080_wdec_58353_52450840_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeabus__w_52450080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52450080_wdec_58353_52450840_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_58353_52450840;
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

Scope makewdec_58353_52450840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_52450840 = scope;
   scope->owner = (Object)channel__z_58334_51981820;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52450080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60412960;

Behavior make__60412960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60412960 = behavior;
   behavior->owner = (Object)channel__z_58334_51981820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[reg__0_52733100_channel__z_58334_51981820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60413120();

   return behavior;
}

Behavior __60412760;

Behavior make__60412760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60412760 = behavior;
   behavior->owner = (Object)channel__z_58334_51981820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_58336_53621640_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60412920();

   return behavior;
}

Scope makechannel__z_58334_51981820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_51981820 = scope;
   scope->owner = (Object)layer1_58_84_49755940;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52733100();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_51981140();
   scope->scopes[1] = makeraddr_58337_51980060();
   scope->scopes[2] = makewaddr_58340_51979040();
   scope->scopes[3] = makerinc_58343_51978320();
   scope->scopes[4] = makewinc_58346_52452560();
   scope->scopes[5] = makerdec_58349_52452040();
   scope->scopes[6] = makewdec_58353_52450840();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60412960();
   scope->behaviors[1] = make__60412760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_53456240;

SignalI lv0_54364500_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makelv0_54364500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54364500_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58357_53456240;
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

SignalI rv0_47266040_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makerv0_47266040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47266040_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58357_53456240;
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

SignalI lvok0_47265920_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makelvok0_47265920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47265920_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58357_53456240;
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

SignalI rvok0_47265740_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makervok0_47265740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47265740_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58357_53456240;
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

SignalI run_47265520_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makerun_47265520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47265520_add__n_58357_53456240_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58357_53456240;
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

Behavior __52727060;

Behavior make__52727060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52727060 = behavior;
   behavior->owner = (Object)add__n_58357_53456240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__47264720();

   return behavior;
}

Scope makeadd__n_58357_53456240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_53456240 = scope;
   scope->owner = (Object)layer1_58_84_49755940;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54364500();
   scope->inners[1] = makerv0_47266040();
   scope->inners[2] = makelvok0_47265920();
   scope->inners[3] = makervok0_47265740();
   scope->inners[4] = makerun_47265520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52727060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53410700;

Behavior make__53410700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53410700 = behavior;
   behavior->owner = (Object)layer1_58_84_49755940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__53967340();

   return behavior;
}

Behavior __58512480;

Behavior make__58512480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58512480 = behavior;
   behavior->owner = (Object)layer1_58_84_49755940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__53410580();

   return behavior;
}

Behavior __58721740;

Behavior make__58721740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58721740 = behavior;
   behavior->owner = (Object)layer1_58_84_49755940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->pos[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__58512360();

   return behavior;
}

Behavior __60260580;

Behavior make__60260580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60260580 = behavior;
   behavior->owner = (Object)layer1_58_84_49755940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[ack__mac_52726820_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60260900();

   return behavior;
}

Behavior __60295940;

Behavior make__60295940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60295940 = behavior;
   behavior->owner = (Object)layer1_58_84_49755940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[ack_52726840_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[value__z0_54025360_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[ack__a0_54256160_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60261140();

   return behavior;
}

Behavior __60295780;

Behavior make__60295780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60295780 = behavior;
   behavior->owner = (Object)layer1_58_84_49755940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[ack__mac_51523220_counter_58_8400_51525140_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60261080();

   return behavior;
}

Scope makelayer1_58_84_49755940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_49755940 = scope;
   scope->owner = (Object)layer1_58_840_58721340;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_51523080();
   scope->systemIs[1] = makefunc0_52733520();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_52726860();
   scope->inners[1] = makeack_52726840();
   scope->inners[2] = makeack__mac_52726820();
   scope->inners[3] = makeack__add_52726780();
   scope->inners[4] = make_58266_52894860();
   scope->inners[5] = make_58264_52894840();
   scope->inners[6] = make_58265_52894480();
   scope->inners[7] = make_58283_53129620();
   scope->inners[8] = make_58313_53359900();
   scope->inners[9] = make_58336_53621640();
   scope->inners[10] = makevalue__z0_54025360();
   scope->inners[11] = makevalue__a0_54256200();
   scope->inners[12] = makeflag__z0_54256180();
   scope->inners[13] = makeack__a0_54256160();
   scope->inners[14] = make_58324_52606500();
   scope->inners[15] = make_58325_52606420();
   scope->inners[16] = make_58268_52606400();
   scope->inners[17] = make_58269_52606320();
   scope->inners[18] = make_58270_55724680();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_49755100();
   scope->scopes[1] = makechannel__accum_58281_47325200();
   scope->scopes[2] = makemac__n1_58306_49432080();
   scope->scopes[3] = makechannel__bias_58311_53426280();
   scope->scopes[4] = makechannel__z_58334_51981820();
   scope->scopes[5] = makeadd__n_58357_53456240();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53410700();
   scope->behaviors[1] = make__58512480();
   scope->behaviors[2] = make__58721740();
   scope->behaviors[3] = make__60260580();
   scope->behaviors[4] = make__60295940();
   scope->behaviors[5] = make__60295780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_58721340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_58721340 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58760280();
   systemT->inputs[1] = makerst_58760240();
   systemT->inputs[2] = makefill_58760220();
   systemT->inputs[3] = makereq_58760160();
   systemT->inputs[4] = make_5843_58828080();
   systemT->inputs[5] = make_5844_58895340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_58895300();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5845_58895200();
   systemT->inouts[1] = make_5862_59012120();

   systemT->scope = makelayer1_58_84_49755940();

   return systemT;
}