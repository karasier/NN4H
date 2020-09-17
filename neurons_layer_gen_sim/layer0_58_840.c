#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_48911000;

SignalI clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeclk_48906520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerst_48906500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI fill_48906460_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makefill_48906460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_48906460_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereq_48906360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI _5815_49240040_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5815_49240040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49240040_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack__layer_49239960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI _5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5813_49239760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI _5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5814_49239620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI _5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5832_49549040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

SignalI _5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5833_49756660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_840_48911000;
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

Block __52348840;

Block __52347440;

Block __52346940;

void code__52346940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60030320(),flag__z0_51506720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52346940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52346940 = block;
   block->owner = (Object)__52347440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52346940;

   return block;
};

Block __52754520;

void code__52754520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60030180(),flag__z1_51506700_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52754520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52754520 = block;
   block->owner = (Object)__52347440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52754520;

   return block;
};

void code__52347440() {
 code__52346940();
 code__52754520();
}

Block make__52347440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52347440 = block;
   block->owner = (Object)__52348840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52347440;

   return block;
};

Block __52348440;

void code__52348440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60030120(),flag__z0_51506720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60030060(),flag__z1_51506700_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52348440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52348440 = block;
   block->owner = (Object)__52348840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52348440;

   return block;
};

void code__52348840() {
   {
      Value cond = ack__add_54100920_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52347440();
   }
   else {
  code__52348440();
   }
      }
   }
}

Block make__52348840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52348840 = block;
   block->owner = (Object)__53028660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52348840;

   return block;
};

Block __53028520;

Block __53028080;

Block __53027660;

void code__53027660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_49788200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60029820(),ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53027660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53027660 = block;
   block->owner = (Object)__53028080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53027660;

   return block;
};

Block __53460280;

void code__53460280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_51506760_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60029680(),ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53460280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53460280 = block;
   block->owner = (Object)__53028080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53460280;

   return block;
};

void code__53028080() {
 code__53027660();
 code__53460280();
}

Block make__53028080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53028080 = block;
   block->owner = (Object)__53028520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53028080;

   return block;
};

void code__53028520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_51506720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = flag__z1_51506700_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53028080();
   }
      }
   }
}

Block make__53028520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53028520 = block;
   block->owner = (Object)__53977840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53028520;

   return block;
};

Block __53977700;

Block __53977500;

Block __53977140;

void code__53977140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60029500(),_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53977140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53977140 = block;
   block->owner = (Object)__53977500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53977140;

   return block;
};

void code__53977500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60029600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53977140();
   }
      }
   }
}

Block make__53977500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53977500 = block;
   block->owner = (Object)__53977700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53977500;

   return block;
};

Block __54001080;

Block __54000300;

void code__54000300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60029320(),_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__54000300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54000300 = block;
   block->owner = (Object)__54001080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54000300;

   return block;
};

void code__54001080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60029400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54000300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60029200(),_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__54001080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54001080 = block;
   block->owner = (Object)__53977700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54001080;

   return block;
};

Block __53999200;

Block __53998800;

void code__53998800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60029040(),_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53998800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53998800 = block;
   block->owner = (Object)__53999200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53998800;

   return block;
};

void code__53999200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60029120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53998800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60028980(),_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53999200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53999200 = block;
   block->owner = (Object)__53977700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53999200;

   return block;
};

Block __53997800;

Block __53997540;

Block __53996740;

void code__53996740() {
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
                  src0 = _58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60028680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60028520(),_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60028460(),_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53996740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53996740 = block;
   block->owner = (Object)__53997540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53996740;

   return block;
};

void code__53997540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60028840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53996740();
   }
      }
   }
}

Block make__53997540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53997540 = block;
   block->owner = (Object)__53997800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53997540;

   return block;
};

Block __54228700;

Block __54228120;

void code__54228120() {
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
                  src0 = _58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60028240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60028140(),_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60028080(),_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__54228120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54228120 = block;
   block->owner = (Object)__54228700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54228120;

   return block;
};

void code__54228700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60028380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54228120();
   }
      }
   }
}

Block make__54228700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54228700 = block;
   block->owner = (Object)__53997800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54228700;

   return block;
};

Block __47211040;

Block __47234160;

Block __47231980;

void code__47231980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60027820(),_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47231980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47231980 = block;
   block->owner = (Object)__47234160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47231980;

   return block;
};

Block __47747680;

void code__47747680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60027740(),_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47747680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47747680 = block;
   block->owner = (Object)__47234160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47747680;

   return block;
};

void code__47234160() {
{
      Value value = _58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__60027880())) {
    code__47231980();
         }
         else if (value2integer(value) == value2integer(make__60027800())) {
    code__47747680();
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
                  src0 = _58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60027620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47234160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47234160 = block;
   block->owner = (Object)__47211040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47234160;

   return block;
};

void code__47211040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60028000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47234160();
   }
      }
   }
}

Block make__47211040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47211040 = block;
   block->owner = (Object)__53997800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47211040;

   return block;
};

void code__53997800() {
 code__53997540();
 code__54228700();
 code__47211040();
}

Block make__53997800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53997800 = block;
   block->owner = (Object)__53977700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53997800;

   return block;
};

void code__53977700() {
 code__53977500();
 code__54001080();
 code__53999200();
   {
      Value cond = fill_48906460_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53997800();
   }
      }
   }
}

Block make__53977700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53977700 = block;
   block->owner = (Object)__48911700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53977700;

   return block;
};

Block __59719860;

void code__59719860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_54100980_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59719860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59719860 = block;
   block->owner = (Object)__59760480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59719860;

   return block;
};

Block __59720080;

void code__59720080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,clk_52365120_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,ack_52365100_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,rst_52365080_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,z__value_51918840_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,z__value_47185660_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      src1 = ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59720080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59720080 = block;
   block->owner = (Object)__59753360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59720080;

   return block;
};

Block __59720020;

void code__59720020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,value__a0_49788200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,value__a1_51506760_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59720020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59720020 = block;
   block->owner = (Object)__59753200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59720020;

   return block;
};

Block __49240440;

Block __49616160;

void code__49616160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,make_ref_rangeS(mem_47796080_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340,value2integer(abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value),value2integer(abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49616160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49616160 = block;
   block->owner = (Object)__49240440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49616160;

   return block;
};

void code__49240440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47796080_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49616160();
   }
      }
   }
}

Block make__49240440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49240440 = block;
   block->owner = (Object)__45700380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49240440;

   return block;
};

Block __59793280;

void code__59793280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59793280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59793280 = block;
   block->owner = (Object)__59793080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59793280;

   return block;
};

Block __59793000;

void code__59793000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59793000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59793000 = block;
   block->owner = (Object)__59792840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59793000;

   return block;
};

Block __59792540;

void code__59792540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59792540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792540 = block;
   block->owner = (Object)__59792380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792540;

   return block;
};

Block __59792340;

void code__59792340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59792340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792340 = block;
   block->owner = (Object)__59792180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792340;

   return block;
};

Block __59791880;

void code__59791880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
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

Block __59791660;

void code__59791660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59791660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59791660 = block;
   block->owner = (Object)__59791480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59791660;

   return block;
};

Block __59791080;

void code__59791080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59791080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59791080 = block;
   block->owner = (Object)__59790860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59791080;

   return block;
};

Block __59790820;

void code__59790820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59790820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59790820 = block;
   block->owner = (Object)__59790660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59790820;

   return block;
};

Block __59790360;

void code__59790360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59790360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59790360 = block;
   block->owner = (Object)__59790200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59790360;

   return block;
};

Block __59790160;

void code__59790160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59790160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59790160 = block;
   block->owner = (Object)__59790000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59790160;

   return block;
};

Block __59789700;

void code__59789700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59789700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59789700 = block;
   block->owner = (Object)__59789540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59789700;

   return block;
};

Block __59789480;

void code__59789480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59789480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59789480 = block;
   block->owner = (Object)__59789300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59789480;

   return block;
};

Block __49273420;

Block __49643720;

void code__49643720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,make_ref_rangeS(mem_47829300_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340,value2integer(abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value),value2integer(abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49643720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49643720 = block;
   block->owner = (Object)__49273420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49643720;

   return block;
};

void code__49273420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47829300_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49643720();
   }
      }
   }
}

Block make__49273420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49273420 = block;
   block->owner = (Object)__47680180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49273420;

   return block;
};

Block __59787620;

void code__59787620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59787620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59787620 = block;
   block->owner = (Object)__59787460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59787620;

   return block;
};

Block __59787420;

void code__59787420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59787420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59787420 = block;
   block->owner = (Object)__59787220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59787420;

   return block;
};

Block __59786760;

void code__59786760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59786760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59786760 = block;
   block->owner = (Object)__59786460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59786760;

   return block;
};

Block __59786420;

void code__59786420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59786420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59786420 = block;
   block->owner = (Object)__59786260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59786420;

   return block;
};

Block __59785960;

void code__59785960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
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

Block __59785760;

void code__59785760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59785760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59785760 = block;
   block->owner = (Object)__59785600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59785760;

   return block;
};

Block __59785300;

void code__59785300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59785300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59785300 = block;
   block->owner = (Object)__59809680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59785300;

   return block;
};

Block __59809640;

void code__59809640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59809640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59809640 = block;
   block->owner = (Object)__59809440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59809640;

   return block;
};

Block __59808980;

void code__59808980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59808980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59808980 = block;
   block->owner = (Object)__59808820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59808980;

   return block;
};

Block __59808780;

void code__59808780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59808780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59808780 = block;
   block->owner = (Object)__59808620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59808780;

   return block;
};

Block __59808320;

void code__59808320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59808320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59808320 = block;
   block->owner = (Object)__59808160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59808320;

   return block;
};

Block __59808120;

void code__59808120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59808120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59808120 = block;
   block->owner = (Object)__59807960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59808120;

   return block;
};

Block __59806240;

void code__59806240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59806240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59806240 = block;
   block->owner = (Object)__59806080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59806240;

   return block;
};

Block __59806040;

void code__59806040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59806040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59806040 = block;
   block->owner = (Object)__59805880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59806040;

   return block;
};

Block __59805580;

void code__59805580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59805580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59805580 = block;
   block->owner = (Object)__59805420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59805580;

   return block;
};

Block __59805380;

void code__59805380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59805380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59805380 = block;
   block->owner = (Object)__59805200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59805380;

   return block;
};

Block __46881480;

Block __46881220;

Block __46880300;

void code__46880300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991180(),_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__46880300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46880300 = block;
   block->owner = (Object)__46881220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46880300;

   return block;
};

void code__46881220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59991260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__46880300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59991100(),_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__46881220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46881220 = block;
   block->owner = (Object)__46881480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46881220;

   return block;
};

Block __47184320;

Block __47183200;

void code__47183200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990900(),_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47183200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47183200 = block;
   block->owner = (Object)__47184320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47183200;

   return block;
};

void code__47184320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59990980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47183200();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990840(),_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47184320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47184320 = block;
   block->owner = (Object)__46881480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47184320;

   return block;
};

Block __47179940;

Block __47199460;

void code__47199460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990680(),_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47199460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47199460 = block;
   block->owner = (Object)__47179940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47199460;

   return block;
};

void code__47179940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59990760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47199460();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990620(),_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47179940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47179940 = block;
   block->owner = (Object)__46881480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47179940;

   return block;
};

Block __47744980;

Block __47744440;

Block __47744060;

Block __47743460;

void code__47743460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49240040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,rv_46882360_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60014480(),rvok_46882260_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47743460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47743460 = block;
   block->owner = (Object)__47744060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47743460;

   return block;
};

void code__47744060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59990140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47743460();
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
                  src0 = _5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60014320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60014220(),_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47744060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47744060 = block;
   block->owner = (Object)__47744440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47744060;

   return block;
};

void code__47744440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59990260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47744060();
   }
      }
   }
}

Block make__47744440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47744440 = block;
   block->owner = (Object)__47744980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47744440;

   return block;
};

Block __48928880;

Block __48928480;

Block __48927060;

void code__48927060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,lv0_48909860_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60013880(),lvok0_46882340_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__48927060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48927060 = block;
   block->owner = (Object)__48928480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48927060;

   return block;
};

void code__48928480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60014040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48927060();
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
                  src0 = _5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60013740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60013620(),_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__48928480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48928480 = block;
   block->owner = (Object)__48928880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48928480;

   return block;
};

void code__48928880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60014140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48928480();
   }
      }
   }
}

Block make__48928880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48928880 = block;
   block->owner = (Object)__47744980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48928880;

   return block;
};

Block __49272520;

Block __49271760;

Block __49271120;

void code__49271120() {
}

Block make__49271120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49271120 = block;
   block->owner = (Object)__49271760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49271120;

   return block;
};

Block __51915700;

void code__51915700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49547700_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51915700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51915700 = block;
   block->owner = (Object)__49271760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51915700;

   return block;
};

void code__49271760() {
 code__49271120();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49547700_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
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
                              src0 = lv0_48909860_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_46882360_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60013000();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49547700_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__51915700();
}

Block make__49271760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49271760 = block;
   block->owner = (Object)__49272520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49271760;

   return block;
};

void code__49272520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60013400(),ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60013340(),run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__49271760();
}

Block make__49272520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49272520 = block;
   block->owner = (Object)__47744980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49272520;

   return block;
};

Block __52352100;

Block __52351780;

Block __52351460;

void code__52351460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,lv1_49217720_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60012500(),lvok1_46882280_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52351460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52351460 = block;
   block->owner = (Object)__52351780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52351460;

   return block;
};

void code__52351780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60012700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52351460();
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
                  src0 = _58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60012320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60012220(),_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52351780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52351780 = block;
   block->owner = (Object)__52352100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52351780;

   return block;
};

void code__52352100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60012800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52351780();
   }
      }
   }
}

Block make__52352100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52352100 = block;
   block->owner = (Object)__47744980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52352100;

   return block;
};

Block __52557520;

Block __52557040;

Block __52556880;

void code__52556880() {
}

Block make__52556880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52556880 = block;
   block->owner = (Object)__52557040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52556880;

   return block;
};

Block __53241340;

void code__53241340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49871380_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53241340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53241340 = block;
   block->owner = (Object)__52557040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53241340;

   return block;
};

void code__52557040() {
 code__52556880();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_49871380_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
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
                              src0 = lv1_49217720_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_46882360_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60011660();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49871380_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__53241340();
}

Block make__52557040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52557040 = block;
   block->owner = (Object)__52557520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52557040;

   return block;
};

void code__52557520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60012060(),ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60012000(),run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__52557040();
}

Block make__52557520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52557520 = block;
   block->owner = (Object)__47744980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52557520;

   return block;
};

void code__47744980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990340(),run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__47744440();
 code__48928880();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_46882340_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = rvok_46882260_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49272520();
   }
      }
   }
 code__52352100();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_46882280_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = rvok_46882260_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52557520();
   }
      }
   }
}

Block make__47744980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47744980 = block;
   block->owner = (Object)__46881480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47744980;

   return block;
};

Block __47216420;

void code__47216420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60011440(),rvok_46882260_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60011380(),lvok0_46882340_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60011300(),av0_49547700_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60011200(),lvok1_46882280_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60011140(),av1_49871380_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__47216420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47216420 = block;
   block->owner = (Object)__46881480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47216420;

   return block;
};

void code__46881480() {
 code__46881220();
 code__47184320();
 code__47179940();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990560(),ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59990500(),run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_54100980_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47744980();
   }
   else {
  code__47216420();
   }
      }
   }
}

Block make__46881480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46881480 = block;
   block->owner = (Object)__53472640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46881480;

   return block;
};

Block __59803300;

void code__59803300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59803300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59803300 = block;
   block->owner = (Object)__59803120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59803300;

   return block;
};

Block __59803080;

void code__59803080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59803080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59803080 = block;
   block->owner = (Object)__59802800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59803080;

   return block;
};

Block __59802440;

void code__59802440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59802440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59802440 = block;
   block->owner = (Object)__59802280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59802440;

   return block;
};

Block __59802240;

void code__59802240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59802240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59802240 = block;
   block->owner = (Object)__59802080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59802240;

   return block;
};

Block __59801780;

void code__59801780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59801780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59801780 = block;
   block->owner = (Object)__59801620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59801780;

   return block;
};

Block __59826100;

void code__59826100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59826100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59826100 = block;
   block->owner = (Object)__59825940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59826100;

   return block;
};

Block __59825640;

void code__59825640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59825640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59825640 = block;
   block->owner = (Object)__59825440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59825640;

   return block;
};

Block __59825400;

void code__59825400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59825400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59825400 = block;
   block->owner = (Object)__59825140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59825400;

   return block;
};

Block __59823480;

void code__59823480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59823480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59823480 = block;
   block->owner = (Object)__59823300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59823480;

   return block;
};

Block __59823240;

void code__59823240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59823240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59823240 = block;
   block->owner = (Object)__59823020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59823240;

   return block;
};

Block __59821820;

void code__59821820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59821820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59821820 = block;
   block->owner = (Object)__59821660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59821820;

   return block;
};

Block __59821620;

void code__59821620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59821620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59821620 = block;
   block->owner = (Object)__59821460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59821620;

   return block;
};

Block __59821060;

void code__59821060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59821060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59821060 = block;
   block->owner = (Object)__59820880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59821060;

   return block;
};

Block __59820840;

void code__59820840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59820840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59820840 = block;
   block->owner = (Object)__59820660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59820840;

   return block;
};

Block __52001760;

Block __52000240;

Block __51999920;

void code__51999920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,lv0_51548380_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60008840(),lvok0_52001960_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__51999920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51999920 = block;
   block->owner = (Object)__52000240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51999920;

   return block;
};

Block __52448980;

void code__52448980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,rv0_51859140_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60008700(),rvok0_52001920_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52448980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52448980 = block;
   block->owner = (Object)__52000240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52448980;

   return block;
};

Block __52586040;

Block __52585560;

void code__52585560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51548380_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      src1 = rv0_51859140_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52585560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52585560 = block;
   block->owner = (Object)__52586040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52585560;

   return block;
};

void code__52586040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60008540(),run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60008460(),ack__add_54100920_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__52585560();
}

Block make__52586040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52586040 = block;
   block->owner = (Object)__52000240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52586040;

   return block;
};

Block __53034760;

void code__53034760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,lv1_51765160_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60008060(),lvok1_52001940_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53034760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53034760 = block;
   block->owner = (Object)__52000240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53034760;

   return block;
};

Block __53295500;

void code__53295500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,rv1_52001980_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007920(),rvok1_52001900_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53295500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53295500 = block;
   block->owner = (Object)__52000240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53295500;

   return block;
};

Block __53489000;

Block __53488460;

void code__53488460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_51765160_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      src1 = rv1_52001980_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__53488460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53488460 = block;
   block->owner = (Object)__53489000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53488460;

   return block;
};

void code__53489000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007760(),run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007700(),ack__add_54100920_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__53488460();
}

Block make__53489000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53489000 = block;
   block->owner = (Object)__52000240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53489000;

   return block;
};

void code__52000240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60008980(),run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
 code__51999920();
 code__52448980();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52001960_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = rvok0_52001920_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52586040();
   }
      }
   }
 code__53034760();
 code__53295500();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52001940_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = rvok1_52001900_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53489000();
   }
      }
   }
}

Block make__52000240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52000240 = block;
   block->owner = (Object)__52001760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52000240;

   return block;
};

Block __52001240;

void code__52001240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007460(),lvok0_52001960_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007400(),rvok0_52001920_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007340(),lvok1_52001940_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60007280(),rvok1_52001900_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__52001240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52001240 = block;
   block->owner = (Object)__52001760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52001240;

   return block;
};

void code__52001760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60009260(),ack__add_54100920_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60009200(),run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         src1 = run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52000240();
   }
   else {
  code__52001240();
   }
      }
   }
}

Block make__52001760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52001760 = block;
   block->owner = (Object)__54101120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52001760;

   return block;
};

Value make__59991260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59991180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59991100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59990980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59990900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59990840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59990760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59990680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59990620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59990560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59990500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59990340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59990260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59990140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60014480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60014320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60014220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60014140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60014040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60013880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60013740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60013620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60013400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60013340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60013000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60012800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60012700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60012500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60012320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60012220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60012060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60012000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60011660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60011440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60011380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60011300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60011200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60011140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60009260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60009200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60008980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60008840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60008700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60008540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60008460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60008060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60007280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60030320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60030180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60030120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60030060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60029820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60029680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60029600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60029500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60029400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60029320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60029200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60029120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60029040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60028980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60028840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60028680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60028520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60028460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60028380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60028240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60028140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60028080() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60028000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60027880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60027820() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60027800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60027740() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60027620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_45800240;

SignalI req__mac_54100980_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereq__mac_54100980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_54100980_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack_54100960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack__mac_54100940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI ack__add_54100920_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack__add_54100920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_54100920_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5897_54260380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5895_54260360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5896_54260280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58143_45303580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58144_47458000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58126_47744360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58124_47744320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58125_47744240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58182_48836400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58183_48939020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58212_49204240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58213_49387040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makevalue__z0_49569640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makevalue__z1_49667800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI value__a0_49788200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makevalue__a0_49788200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_49788200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI value__a1_51506760_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makevalue__a1_51506760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_51506760_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI flag__z0_51506720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeflag__z0_51506720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51506720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI flag__z1_51506700_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeflag__z1_51506700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_51506700_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack__a0_51506640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeack__a1_51506620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58197_51779200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58198_51920640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58199_51920560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_5899_51920540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58100_51920460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58101_52027620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58128_52027600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58129_52027500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SignalI _58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI make_58130_52348540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)layer0_58_84_45800240;
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

SystemI counter_52364900;

SystemI makecounter_52364900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_52364900 = systemI;
   systemI->owner = (Object)layer0_58_84_45800240;
   systemI->name = "counter";
   systemI->system = counter_58_841_52367160;

   return systemI;
};

SystemI func0_52241300;

SystemI makefunc0_52241300() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52241300 = systemI;
   systemI->owner = (Object)layer0_58_84_45800240;
   systemI->name = "func0";
   systemI->system = func0_58_841_51761000;

   return systemI;
};

SystemI func1_47661140;

SystemI makefunc1_47661140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_47661140 = systemI;
   systemI->owner = (Object)layer0_58_84_45800240;
   systemI->name = "func1";
   systemI->system = func1_58_840_54225300;

   return systemI;
};

Scope channel__w0_5883_45799380;

SignalI trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI maketrig__r_46882180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

SignalI trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI maketrig__w_46882100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

SignalI dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makedbus__r_47375660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

SignalI dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makedbus__w_47667720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

SignalI abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47667620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

SignalI abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_47667500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

SignalI mem_47796080_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makemem_47796080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47796080_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w0_5883_45799380;
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

Scope raddr_5884_45798260;

Scope makeraddr_5884_45798260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_45798260 = scope;
   scope->owner = (Object)channel__w0_5883_45799380;
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

Scope waddr_5889_45797000;

Scope makewaddr_5889_45797000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_45797000 = scope;
   scope->owner = (Object)channel__w0_5883_45799380;
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

Scope rinc_5894_45833580;

Scope makerinc_5894_45833580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_45833580 = scope;
   scope->owner = (Object)channel__w0_5883_45799380;
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

Scope winc_5898_45830560;

Scope makewinc_5898_45830560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_45830560 = scope;
   scope->owner = (Object)channel__w0_5883_45799380;
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

Scope rdec_58102_45828420;

Scope makerdec_58102_45828420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_45828420 = scope;
   scope->owner = (Object)channel__w0_5883_45799380;
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

Scope wdec_58107_45826500;

Scope makewdec_58107_45826500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_45826500 = scope;
   scope->owner = (Object)channel__w0_5883_45799380;
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

Behavior __45700380;

Behavior make__45700380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45700380 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg-1] = (Object)behavior;
   behavior->block = make__49240440();

   return behavior;
}

Behavior __59793080;

Behavior make__59793080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59793080 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[dbus__r_47375660_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59793280();

   return behavior;
}

Behavior __59792840;

Behavior make__59792840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59792840 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5897_54260380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59793000();

   return behavior;
}

Behavior __59792380;

Behavior make__59792380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59792380 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[trig__r_46882180_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59792540();

   return behavior;
}

Behavior __59792180;

Behavior make__59792180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59792180 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5895_54260360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59792340();

   return behavior;
}

Behavior __59791720;

Behavior make__59791720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59791720 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[abus__r_47667620_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59791880();

   return behavior;
}

Behavior __59791480;

Behavior make__59791480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59791480 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5896_54260280_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59791660();

   return behavior;
}

Behavior __59790860;

Behavior make__59790860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59790860 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[trig__w_46882100_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59791080();

   return behavior;
}

Behavior __59790660;

Behavior make__59790660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59790660 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5899_51920540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59790820();

   return behavior;
}

Behavior __59790200;

Behavior make__59790200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59790200 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[abus__w_47667500_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59790360();

   return behavior;
}

Behavior __59790000;

Behavior make__59790000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59790000 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58100_51920460_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59790160();

   return behavior;
}

Behavior __59789540;

Behavior make__59789540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59789540 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[dbus__w_47667720_channel__w0_5883_45799380_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59789700();

   return behavior;
}

Behavior __59789300;

Behavior make__59789300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59789300 = behavior;
   behavior->owner = (Object)channel__w0_5883_45799380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58101_52027620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59789480();

   return behavior;
}

Scope makechannel__w0_5883_45799380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_45799380 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_46882180();
   scope->inners[1] = maketrig__w_46882100();
   scope->inners[2] = makedbus__r_47375660();
   scope->inners[3] = makedbus__w_47667720();
   scope->inners[4] = makeabus__r_47667620();
   scope->inners[5] = makeabus__w_47667500();
   scope->inners[6] = makemem_47796080();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_45798260();
   scope->scopes[1] = makewaddr_5889_45797000();
   scope->scopes[2] = makerinc_5894_45833580();
   scope->scopes[3] = makewinc_5898_45830560();
   scope->scopes[4] = makerdec_58102_45828420();
   scope->scopes[5] = makewdec_58107_45826500();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45700380();
   scope->behaviors[1] = make__59793080();
   scope->behaviors[2] = make__59792840();
   scope->behaviors[3] = make__59792380();
   scope->behaviors[4] = make__59792180();
   scope->behaviors[5] = make__59791720();
   scope->behaviors[6] = make__59791480();
   scope->behaviors[7] = make__59790860();
   scope->behaviors[8] = make__59790660();
   scope->behaviors[9] = make__59790200();
   scope->behaviors[10] = make__59790000();
   scope->behaviors[11] = make__59789540();
   scope->behaviors[12] = make__59789300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_45699220;

SignalI trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI maketrig__r_45829320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

SignalI trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI maketrig__w_45829200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

SignalI dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makedbus__r_47398540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

SignalI dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makedbus__w_47662360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

SignalI abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47662280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

SignalI abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_47662200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

SignalI mem_47829300_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makemem_47829300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47829300_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__w1_58112_45699220;
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

Scope raddr_58113_45697520;

Scope makeraddr_58113_45697520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_45697520 = scope;
   scope->owner = (Object)channel__w1_58112_45699220;
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

Scope waddr_58118_45727020;

Scope makewaddr_58118_45727020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_45727020 = scope;
   scope->owner = (Object)channel__w1_58112_45699220;
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

Scope rinc_58123_45742880;

Scope makerinc_58123_45742880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_45742880 = scope;
   scope->owner = (Object)channel__w1_58112_45699220;
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

Scope winc_58127_45739260;

Scope makewinc_58127_45739260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_45739260 = scope;
   scope->owner = (Object)channel__w1_58112_45699220;
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

Scope rdec_58131_45800480;

Scope makerdec_58131_45800480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_45800480 = scope;
   scope->owner = (Object)channel__w1_58112_45699220;
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

Scope wdec_58136_45794100;

Scope makewdec_58136_45794100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_45794100 = scope;
   scope->owner = (Object)channel__w1_58112_45699220;
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

Behavior __47680180;

Behavior make__47680180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47680180 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->neg[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_neg-1] = (Object)behavior;
   behavior->block = make__49273420();

   return behavior;
}

Behavior __59787460;

Behavior make__59787460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59787460 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[dbus__r_47398540_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59787620();

   return behavior;
}

Behavior __59787220;

Behavior make__59787220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59787220 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58126_47744360_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59787420();

   return behavior;
}

Behavior __59786460;

Behavior make__59786460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59786460 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[trig__r_45829320_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59786760();

   return behavior;
}

Behavior __59786260;

Behavior make__59786260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59786260 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58124_47744320_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59786420();

   return behavior;
}

Behavior __59785800;

Behavior make__59785800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59785800 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[abus__r_47662280_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59785960();

   return behavior;
}

Behavior __59785600;

Behavior make__59785600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59785600 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58125_47744240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59785760();

   return behavior;
}

Behavior __59809680;

Behavior make__59809680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59809680 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[trig__w_45829200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59785300();

   return behavior;
}

Behavior __59809440;

Behavior make__59809440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59809440 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58128_52027600_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59809640();

   return behavior;
}

Behavior __59808820;

Behavior make__59808820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59808820 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[abus__w_47662200_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59808980();

   return behavior;
}

Behavior __59808620;

Behavior make__59808620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59808620 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58129_52027500_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59808780();

   return behavior;
}

Behavior __59808160;

Behavior make__59808160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59808160 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[dbus__w_47662360_channel__w1_58112_45699220_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59808320();

   return behavior;
}

Behavior __59807960;

Behavior make__59807960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59807960 = behavior;
   behavior->owner = (Object)channel__w1_58112_45699220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58130_52348540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59808120();

   return behavior;
}

Scope makechannel__w1_58112_45699220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_45699220 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_45829320();
   scope->inners[1] = maketrig__w_45829200();
   scope->inners[2] = makedbus__r_47398540();
   scope->inners[3] = makedbus__w_47662360();
   scope->inners[4] = makeabus__r_47662280();
   scope->inners[5] = makeabus__w_47662200();
   scope->inners[6] = makemem_47829300();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_45697520();
   scope->scopes[1] = makewaddr_58118_45727020();
   scope->scopes[2] = makerinc_58123_45742880();
   scope->scopes[3] = makewinc_58127_45739260();
   scope->scopes[4] = makerdec_58131_45800480();
   scope->scopes[5] = makewdec_58136_45794100();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47680180();
   scope->behaviors[1] = make__59787460();
   scope->behaviors[2] = make__59787220();
   scope->behaviors[3] = make__59786460();
   scope->behaviors[4] = make__59786260();
   scope->behaviors[5] = make__59785800();
   scope->behaviors[6] = make__59785600();
   scope->behaviors[7] = make__59809680();
   scope->behaviors[8] = make__59809440();
   scope->behaviors[9] = make__59808820();
   scope->behaviors[10] = make__59808620();
   scope->behaviors[11] = make__59808160();
   scope->behaviors[12] = make__59807960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_47679580;

SignalI reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereg__0_48892660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__accum_58141_47679580;
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

SignalI reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereg__1_49237020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__accum_58141_47679580;
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

Scope anum_58142_47679140;

Scope makeanum_58142_47679140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_47679140 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
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

Scope raddr_58145_47678160;

Scope makeraddr_58145_47678160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_47678160 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
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

Scope waddr_58149_47716880;

Scope makewaddr_58149_47716880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_47716880 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
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

Scope rinc_58153_47715960;

SignalI abus__r_47713560_rinc_58153_47715960_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47713560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47713560_rinc_58153_47715960_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_58153_47715960;
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

Scope makerinc_58153_47715960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_47715960 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47713560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_47712840;

SignalI abus__w_47712380_winc_58158_47712840_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_47712380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47712380_winc_58158_47712840_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_58158_47712840;
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

Scope makewinc_58158_47712840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_47712840 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47712380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_47712200;

SignalI abus__r_47711600_rdec_58163_47712200_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47711600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47711600_rdec_58163_47712200_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_58163_47712200;
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

Scope makerdec_58163_47712200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_47712200 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47711600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_47711440;

SignalI abus__w_47710940_wdec_58168_47711440_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_47710940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47710940_wdec_58168_47711440_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_58168_47711440;
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

Scope makewdec_58168_47711440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_47711440 = scope;
   scope->owner = (Object)channel__accum_58141_47679580;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47710940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59806080;

Behavior make__59806080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59806080 = behavior;
   behavior->owner = (Object)channel__accum_58141_47679580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__0_48892660_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59806240();

   return behavior;
}

Behavior __59805880;

Behavior make__59805880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59805880 = behavior;
   behavior->owner = (Object)channel__accum_58141_47679580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58143_45303580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59806040();

   return behavior;
}

Behavior __59805420;

Behavior make__59805420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59805420 = behavior;
   behavior->owner = (Object)channel__accum_58141_47679580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__1_49237020_channel__accum_58141_47679580_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59805580();

   return behavior;
}

Behavior __59805200;

Behavior make__59805200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59805200 = behavior;
   behavior->owner = (Object)channel__accum_58141_47679580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58144_47458000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59805380();

   return behavior;
}

Scope makechannel__accum_58141_47679580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_47679580 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48892660();
   scope->inners[1] = makereg__1_49237020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_47679140();
   scope->scopes[1] = makeraddr_58145_47678160();
   scope->scopes[2] = makewaddr_58149_47716880();
   scope->scopes[3] = makerinc_58153_47715960();
   scope->scopes[4] = makewinc_58158_47712840();
   scope->scopes[5] = makerdec_58163_47712200();
   scope->scopes[6] = makewdec_58168_47711440();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59806080();
   scope->behaviors[1] = make__59805880();
   scope->behaviors[2] = make__59805420();
   scope->behaviors[3] = make__59805200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_47890540;

SignalI lv0_48909860_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelv0_48909860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48909860_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI lv1_49217720_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelv1_49217720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49217720_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI av0_49547700_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeav0_49547700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49547700_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI av1_49871380_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeav1_49871380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49871380_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI rv_46882360_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerv_46882360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_46882360_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI lvok0_46882340_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelvok0_46882340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_46882340_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI lvok1_46882280_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelvok1_46882280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_46882280_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI rvok_46882260_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makervok_46882260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_46882260_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

SignalI run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerun_46882240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_46882240_mac__n1_58173_47890540_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)mac__n1_58173_47890540;
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

Behavior __53472640;

Behavior make__53472640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53472640 = behavior;
   behavior->owner = (Object)mac__n1_58173_47890540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__46881480();

   return behavior;
}

Scope makemac__n1_58173_47890540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_47890540 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48909860();
   scope->inners[1] = makelv1_49217720();
   scope->inners[2] = makeav0_49547700();
   scope->inners[3] = makeav1_49871380();
   scope->inners[4] = makerv_46882360();
   scope->inners[5] = makelvok0_46882340();
   scope->inners[6] = makelvok1_46882280();
   scope->inners[7] = makervok_46882260();
   scope->inners[8] = makerun_46882240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53472640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_53472520;

SignalI reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereg__0_53621520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__bias_58180_53472520;
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

SignalI reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereg__1_53815340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__bias_58180_53472520;
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

Scope anum_58181_53472220;

Scope makeanum_58181_53472220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_53472220 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
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

Scope raddr_58184_53471800;

Scope makeraddr_58184_53471800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_53471800 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
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

Scope waddr_58188_53471380;

Scope makewaddr_58188_53471380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_53471380 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
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

Scope rinc_58192_53470960;

SignalI abus__r_53470580_rinc_58192_53470960_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_53470580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53470580_rinc_58192_53470960_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_58192_53470960;
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

Scope makerinc_58192_53470960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_53470960 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53470580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_53470460;

SignalI abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_53470080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_58196_53470460;
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

Behavior __59823300;

Behavior make__59823300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59823300 = behavior;
   behavior->owner = (Object)winc_58196_53470460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[abus__w_53470080_winc_58196_53470460_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59823480();

   return behavior;
}

Behavior __59823020;

Behavior make__59823020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59823020 = behavior;
   behavior->owner = (Object)winc_58196_53470460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58199_51920560_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59823240();

   return behavior;
}

Scope makewinc_58196_53470460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_53470460 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53470080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59823300();
   scope->behaviors[1] = make__59823020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_53469700;

SignalI abus__r_53469320_rdec_58200_53469700_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_53469320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53469320_rdec_58200_53469700_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_58200_53469700;
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

Scope makerdec_58200_53469700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_53469700 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53469320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_53469200;

SignalI abus__w_53493360_wdec_58205_53469200_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_53493360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53493360_wdec_58205_53469200_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_58205_53469200;
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

Scope makewdec_58205_53469200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_53469200 = scope;
   scope->owner = (Object)channel__bias_58180_53472520;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53493360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59803120;

Behavior make__59803120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59803120 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59803300();

   return behavior;
}

Behavior __59802800;

Behavior make__59802800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59802800 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58182_48836400_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59803080();

   return behavior;
}

Behavior __59802280;

Behavior make__59802280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59802280 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59802440();

   return behavior;
}

Behavior __59802080;

Behavior make__59802080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59802080 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58183_48939020_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59802240();

   return behavior;
}

Behavior __59801620;

Behavior make__59801620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59801620 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__0_53621520_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59801780();

   return behavior;
}

Behavior __59825940;

Behavior make__59825940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59825940 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58197_51779200_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59826100();

   return behavior;
}

Behavior __59825440;

Behavior make__59825440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59825440 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__1_53815340_channel__bias_58180_53472520_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59825640();

   return behavior;
}

Behavior __59825140;

Behavior make__59825140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59825140 = behavior;
   behavior->owner = (Object)channel__bias_58180_53472520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58198_51920640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59825400();

   return behavior;
}

Scope makechannel__bias_58180_53472520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_53472520 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53621520();
   scope->inners[1] = makereg__1_53815340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_53472220();
   scope->scopes[1] = makeraddr_58184_53471800();
   scope->scopes[2] = makewaddr_58188_53471380();
   scope->scopes[3] = makerinc_58192_53470960();
   scope->scopes[4] = makewinc_58196_53470460();
   scope->scopes[5] = makerdec_58200_53469700();
   scope->scopes[6] = makewdec_58205_53469200();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59803120();
   scope->behaviors[1] = make__59802800();
   scope->behaviors[2] = make__59802280();
   scope->behaviors[3] = make__59802080();
   scope->behaviors[4] = make__59801620();
   scope->behaviors[5] = make__59825940();
   scope->behaviors[6] = make__59825440();
   scope->behaviors[7] = make__59825140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_48836100;

SignalI reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereg__0_48962500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__z_58210_48836100;
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

SignalI reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makereg__1_49206680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__z_58210_48836100;
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

Scope anum_58211_48835800;

Scope makeanum_58211_48835800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_48835800 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
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

Scope raddr_58214_48835180;

Scope makeraddr_58214_48835180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_48835180 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
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

Scope waddr_58218_48834520;

Scope makewaddr_58218_48834520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_48834520 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
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

Scope rinc_58222_48682260;

SignalI abus__r_48681380_rinc_58222_48682260_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_48681380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48681380_rinc_58222_48682260_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_58222_48682260;
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

Scope makerinc_58222_48682260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_48682260 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48681380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_48681200;

SignalI abus__w_48680340_winc_58226_48681200_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_48680340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48680340_winc_58226_48681200_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_58226_48681200;
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

Scope makewinc_58226_48681200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_48681200 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48680340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_48679600;

SignalI abus__r_48678840_rdec_58230_48679600_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__r_48678840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48678840_rdec_58230_48679600_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_58230_48679600;
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

Scope makerdec_58230_48679600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_48679600 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48678840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_48678680;

SignalI abus__w_49094280_wdec_58235_48678680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makeabus__w_49094280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49094280_wdec_58235_48678680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_58235_48678680;
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

Scope makewdec_58235_48678680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_48678680 = scope;
   scope->owner = (Object)channel__z_58210_48836100;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49094280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59821660;

Behavior make__59821660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59821660 = behavior;
   behavior->owner = (Object)channel__z_58210_48836100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__0_48962500_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59821820();

   return behavior;
}

Behavior __59821460;

Behavior make__59821460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59821460 = behavior;
   behavior->owner = (Object)channel__z_58210_48836100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58212_49204240_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59821620();

   return behavior;
}

Behavior __59820880;

Behavior make__59820880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59820880 = behavior;
   behavior->owner = (Object)channel__z_58210_48836100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[reg__1_49206680_channel__z_58210_48836100_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59821060();

   return behavior;
}

Behavior __59820660;

Behavior make__59820660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59820660 = behavior;
   behavior->owner = (Object)channel__z_58210_48836100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_58213_49387040_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59820840();

   return behavior;
}

Scope makechannel__z_58210_48836100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_48836100 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48962500();
   scope->inners[1] = makereg__1_49206680();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_48835800();
   scope->scopes[1] = makeraddr_58214_48835180();
   scope->scopes[2] = makewaddr_58218_48834520();
   scope->scopes[3] = makerinc_58222_48682260();
   scope->scopes[4] = makewinc_58226_48681200();
   scope->scopes[5] = makerdec_58230_48679600();
   scope->scopes[6] = makewdec_58235_48678680();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59821660();
   scope->behaviors[1] = make__59821460();
   scope->behaviors[2] = make__59820880();
   scope->behaviors[3] = make__59820660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_49773720;

SignalI lv0_51548380_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelv0_51548380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51548380_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI lv1_51765160_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelv1_51765160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_51765160_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI rv0_51859140_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerv0_51859140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_51859140_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI rv1_52001980_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerv1_52001980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52001980_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI lvok0_52001960_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelvok0_52001960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52001960_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI lvok1_52001940_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makelvok1_52001940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52001940_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI rvok0_52001920_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makervok0_52001920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52001920_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI rvok1_52001900_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makervok1_52001900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52001900_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

SignalI run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340;

SignalI makerun_52001880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52001880_add__n_58240_49773720_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)add__n_58240_49773720;
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

Behavior __54101120;

Behavior make__54101120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54101120 = behavior;
   behavior->owner = (Object)add__n_58240_49773720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__52001760();

   return behavior;
}

Scope makeadd__n_58240_49773720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_49773720 = scope;
   scope->owner = (Object)layer0_58_84_45800240;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51548380();
   scope->inners[1] = makelv1_51765160();
   scope->inners[2] = makerv0_51859140();
   scope->inners[3] = makerv1_52001980();
   scope->inners[4] = makelvok0_52001960();
   scope->inners[5] = makelvok1_52001940();
   scope->inners[6] = makervok0_52001920();
   scope->inners[7] = makervok1_52001900();
   scope->inners[8] = makerun_52001880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54101120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53028660;

Behavior make__53028660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53028660 = behavior;
   behavior->owner = (Object)layer0_58_84_45800240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__52348840();

   return behavior;
}

Behavior __53977840;

Behavior make__53977840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53977840 = behavior;
   behavior->owner = (Object)layer0_58_84_45800240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__53028520();

   return behavior;
}

Behavior __48911700;

Behavior make__48911700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48911700 = behavior;
   behavior->owner = (Object)layer0_58_84_45800240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->pos[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__53977700();

   return behavior;
}

Behavior __59760480;

Behavior make__59760480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59760480 = behavior;
   behavior->owner = (Object)layer0_58_84_45800240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[ack__mac_54100940_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59719860();

   return behavior;
}

Behavior __59753360;

Behavior make__59753360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59753360 = behavior;
   behavior->owner = (Object)layer0_58_84_45800240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[ack_54100960_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[value__z0_49569640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[value__z1_49667800_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[ack__a0_51506640_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[ack__a1_51506620_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59720080();

   return behavior;
}

Behavior __59753200;

Behavior make__59753200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59753200 = behavior;
   behavior->owner = (Object)layer0_58_84_45800240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[ack__mac_52365040_counter_58_841_52367160_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[a_52241500_func0_58_841_51761000_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[a_47661440_func1_58_840_54225300_layer0_58_84_45800240_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59720020();

   return behavior;
}

Scope makelayer0_58_84_45800240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_45800240 = scope;
   scope->owner = (Object)layer0_58_840_48911000;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_52364900();
   scope->systemIs[1] = makefunc0_52241300();
   scope->systemIs[2] = makefunc1_47661140();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_54100980();
   scope->inners[1] = makeack_54100960();
   scope->inners[2] = makeack__mac_54100940();
   scope->inners[3] = makeack__add_54100920();
   scope->inners[4] = make_5897_54260380();
   scope->inners[5] = make_5895_54260360();
   scope->inners[6] = make_5896_54260280();
   scope->inners[7] = make_58143_45303580();
   scope->inners[8] = make_58144_47458000();
   scope->inners[9] = make_58126_47744360();
   scope->inners[10] = make_58124_47744320();
   scope->inners[11] = make_58125_47744240();
   scope->inners[12] = make_58182_48836400();
   scope->inners[13] = make_58183_48939020();
   scope->inners[14] = make_58212_49204240();
   scope->inners[15] = make_58213_49387040();
   scope->inners[16] = makevalue__z0_49569640();
   scope->inners[17] = makevalue__z1_49667800();
   scope->inners[18] = makevalue__a0_49788200();
   scope->inners[19] = makevalue__a1_51506760();
   scope->inners[20] = makeflag__z0_51506720();
   scope->inners[21] = makeflag__z1_51506700();
   scope->inners[22] = makeack__a0_51506640();
   scope->inners[23] = makeack__a1_51506620();
   scope->inners[24] = make_58197_51779200();
   scope->inners[25] = make_58198_51920640();
   scope->inners[26] = make_58199_51920560();
   scope->inners[27] = make_5899_51920540();
   scope->inners[28] = make_58100_51920460();
   scope->inners[29] = make_58101_52027620();
   scope->inners[30] = make_58128_52027600();
   scope->inners[31] = make_58129_52027500();
   scope->inners[32] = make_58130_52348540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_45799380();
   scope->scopes[1] = makechannel__w1_58112_45699220();
   scope->scopes[2] = makechannel__accum_58141_47679580();
   scope->scopes[3] = makemac__n1_58173_47890540();
   scope->scopes[4] = makechannel__bias_58180_53472520();
   scope->scopes[5] = makechannel__z_58210_48836100();
   scope->scopes[6] = makeadd__n_58240_49773720();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53028660();
   scope->behaviors[1] = make__53977840();
   scope->behaviors[2] = make__48911700();
   scope->behaviors[3] = make__59760480();
   scope->behaviors[4] = make__59753360();
   scope->behaviors[5] = make__59753200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_48911000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_48911000 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_48906520();
   systemT->inputs[1] = makerst_48906500();
   systemT->inputs[2] = makefill_48906460();
   systemT->inputs[3] = makereq_48906360();
   systemT->inputs[4] = make_5815_49240040();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_49239960();
   systemT->outputs[1] = make_5813_49239760();
   systemT->outputs[2] = make_5814_49239620();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5832_49549040();
   systemT->inouts[1] = make_5833_49756660();

   systemT->scope = makelayer0_58_84_45800240();

   return systemT;
}