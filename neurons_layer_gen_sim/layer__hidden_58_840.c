#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer__hidden_58_840_54601100;

SignalI clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeclk_54630560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_54601100;
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

SignalI rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerst_54630520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_54601100;
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

SignalI fill_54630500_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makefill_54630500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_54630500_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_54601100;
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

SignalI req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereq_54630440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_54601100;
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

SignalI ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack__0_54630400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_840_54601100;
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

Block __51638080;

Block __51636760;

Block __51636540;

void code__51636540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52566480(),flag__z0_52097700_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__51636540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51636540 = block;
   block->owner = (Object)__51636760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51636540;

   return block;
};

Block __52229640;

void code__52229640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52566280(),flag__z1_52097680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52229640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52229640 = block;
   block->owner = (Object)__51636760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52229640;

   return block;
};

void code__51636760() {
 code__51636540();
 code__52229640();
}

Block make__51636760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51636760 = block;
   block->owner = (Object)__51638080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51636760;

   return block;
};

Block __51637860;

void code__51637860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52566220(),flag__z0_52097700_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52566160(),flag__z1_52097680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__51637860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51637860 = block;
   block->owner = (Object)__51638080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51637860;

   return block;
};

void code__51638080() {
   {
      Value cond = ack__add_45685000_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51636760();
   }
   else {
  code__51637860();
   }
      }
   }
}

Block make__51638080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51638080 = block;
   block->owner = (Object)__52711100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51638080;

   return block;
};

Block __52710860;

Block __52710260;

Block __52710000;

void code__52710000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_51981140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_5832_47754100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565920(),ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52710000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52710000 = block;
   block->owner = (Object)__52710260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52710000;

   return block;
};

Block __53056360;

void code__53056360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_52097740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_5833_48036020______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565780(),ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53056360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53056360 = block;
   block->owner = (Object)__52710260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53056360;

   return block;
};

void code__52710260() {
 code__52710000();
 code__53056360();
}

Block make__52710260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52710260 = block;
   block->owner = (Object)__52710860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52710260;

   return block;
};

void code__52710860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52097700_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = flag__z1_52097680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52710260();
   }
      }
   }
}

Block make__52710860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52710860 = block;
   block->owner = (Object)__53537760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52710860;

   return block;
};

Block __53537560;

Block __53537280;

Block __53536680;

void code__53536680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565580(),_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53536680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53536680 = block;
   block->owner = (Object)__53537280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53536680;

   return block;
};

void code__53537280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52565680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53536680();
   }
      }
   }
}

Block make__53537280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53537280 = block;
   block->owner = (Object)__53537560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53537280;

   return block;
};

Block __53535660;

Block __53535320;

void code__53535320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565400(),_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53535320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53535320 = block;
   block->owner = (Object)__53535660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53535320;

   return block;
};

void code__53535660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52565500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53535320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565300(),_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53535660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53535660 = block;
   block->owner = (Object)__53537560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53535660;

   return block;
};

Block __53591800;

Block __53591100;

void code__53591100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565140(),_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53591100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53591100 = block;
   block->owner = (Object)__53591800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53591100;

   return block;
};

void code__53591800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52565220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53591100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52565080(),_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53591800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53591800 = block;
   block->owner = (Object)__53537560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53591800;

   return block;
};

Block __53590020;

Block __53589860;

Block __53589540;

void code__53589540() {
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
                  src0 = _58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52564820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52564720(),_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52564660(),_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53589540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53589540 = block;
   block->owner = (Object)__53589860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53589540;

   return block;
};

void code__53589860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52564960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53589540();
   }
      }
   }
}

Block make__53589860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53589860 = block;
   block->owner = (Object)__53590020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53589860;

   return block;
};

Block __53762920;

Block __53762440;

void code__53762440() {
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
                  src0 = _58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52564400();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52564280(),_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52564180(),_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53762440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53762440 = block;
   block->owner = (Object)__53762920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53762440;

   return block;
};

void code__53762920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52564580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53762440();
   }
      }
   }
}

Block make__53762920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53762920 = block;
   block->owner = (Object)__53590020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53762920;

   return block;
};

Block __54244740;

Block __54244160;

Block __54243240;

void code__54243240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52563920(),_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54243240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54243240 = block;
   block->owner = (Object)__54244160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54243240;

   return block;
};

Block __54390040;

void code__54390040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52563840(),_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54390040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54390040 = block;
   block->owner = (Object)__54244160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54390040;

   return block;
};

void code__54244160() {
{
      Value value = _58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__52563980())) {
    code__54243240();
         }
         else if (value2integer(value) == value2integer(make__52563900())) {
    code__54390040();
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
                  src0 = _58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52563720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54244160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54244160 = block;
   block->owner = (Object)__54244740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54244160;

   return block;
};

void code__54244740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52564100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54244160();
   }
      }
   }
}

Block make__54244740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54244740 = block;
   block->owner = (Object)__53590020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54244740;

   return block;
};

void code__53590020() {
 code__53589860();
 code__53762920();
 code__54244740();
}

Block make__53590020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53590020 = block;
   block->owner = (Object)__53537560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53590020;

   return block;
};

void code__53537560() {
 code__53537280();
 code__53535660();
 code__53591800();
   {
      Value cond = fill_54630500_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53590020();
   }
      }
   }
}

Block make__53537560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53537560 = block;
   block->owner = (Object)__54601720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53537560;

   return block;
};

Block __54390700;

void code__54390700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_45664120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54390700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54390700 = block;
   block->owner = (Object)__54389520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54390700;

   return block;
};

Block __54391260;

void code__54391260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,clk_52677860_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,ack_52677840_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,rst_52677820_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,z__value_52097160_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,z__value_54352800_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      src1 = ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54391260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54391260 = block;
   block->owner = (Object)__54441480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54391260;

   return block;
};

Block __54391180;

void code__54391180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,value__a00_51981140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,value__a01_52097740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54391180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54391180 = block;
   block->owner = (Object)__54440780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54391180;

   return block;
};

Block __49838420;

Block __47823440;

void code__47823440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,make_ref_rangeS(mem_49270380_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240,value2integer(abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value),value2integer(abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47823440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47823440 = block;
   block->owner = (Object)__49838420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47823440;

   return block;
};

void code__49838420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49270380_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            idx = value2integer(abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47823440();
   }
      }
   }
}

Block make__49838420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49838420 = block;
   block->owner = (Object)__48655060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49838420;

   return block;
};

Block __54439680;

void code__54439680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54439680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54439680 = block;
   block->owner = (Object)__54439220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54439680;

   return block;
};

Block __54439160;

void code__54439160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54439160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54439160 = block;
   block->owner = (Object)__54438460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54439160;

   return block;
};

Block __54437940;

void code__54437940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54437940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54437940 = block;
   block->owner = (Object)__54437740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54437940;

   return block;
};

Block __54437700;

void code__54437700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54437700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54437700 = block;
   block->owner = (Object)__54437460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54437700;

   return block;
};

Block __54436900;

void code__54436900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54436900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54436900 = block;
   block->owner = (Object)__54436240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54436900;

   return block;
};

Block __54436120;

void code__54436120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54436120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54436120 = block;
   block->owner = (Object)__54492940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54436120;

   return block;
};

Block __54492100;

void code__54492100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54492100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54492100 = block;
   block->owner = (Object)__54491920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54492100;

   return block;
};

Block __54491860;

void code__54491860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54491860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54491860 = block;
   block->owner = (Object)__54491520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54491860;

   return block;
};

Block __54490120;

void code__54490120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54490120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54490120 = block;
   block->owner = (Object)__54488160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54490120;

   return block;
};

Block __54487820;

void code__54487820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54487820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54487820 = block;
   block->owner = (Object)__54487500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54487820;

   return block;
};

Block __54486000;

void code__54486000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54486000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54486000 = block;
   block->owner = (Object)__54485040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54486000;

   return block;
};

Block __54485000;

void code__54485000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54485000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54485000 = block;
   block->owner = (Object)__54509220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54485000;

   return block;
};

Block __49815680;

Block __48774780;

void code__48774780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,make_ref_rangeS(mem_49239380_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240,value2integer(abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value),value2integer(abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48774780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48774780 = block;
   block->owner = (Object)__49815680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48774780;

   return block;
};

void code__49815680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49239380_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
            idx = value2integer(abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48774780();
   }
      }
   }
}

Block make__49815680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49815680 = block;
   block->owner = (Object)__49735920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49815680;

   return block;
};

Block __54505860;

void code__54505860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54505860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54505860 = block;
   block->owner = (Object)__54505640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54505860;

   return block;
};

Block __54505580;

void code__54505580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54505580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54505580 = block;
   block->owner = (Object)__54505320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54505580;

   return block;
};

Block __54504220;

void code__54504220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54504220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54504220 = block;
   block->owner = (Object)__54503720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54504220;

   return block;
};

Block __54503680;

void code__54503680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54503680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54503680 = block;
   block->owner = (Object)__54503440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54503680;

   return block;
};

Block __54502900;

void code__54502900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54502900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54502900 = block;
   block->owner = (Object)__54502400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54502900;

   return block;
};

Block __54502360;

void code__54502360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54502360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54502360 = block;
   block->owner = (Object)__54502000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54502360;

   return block;
};

Block __54501580;

void code__54501580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54501580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54501580 = block;
   block->owner = (Object)__54501380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54501580;

   return block;
};

Block __54591420;

void code__54591420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54591420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54591420 = block;
   block->owner = (Object)__54590940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54591420;

   return block;
};

Block __54589480;

void code__54589480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54589480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54589480 = block;
   block->owner = (Object)__54588920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54589480;

   return block;
};

Block __54588680;

void code__54588680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54588680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54588680 = block;
   block->owner = (Object)__54588420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54588680;

   return block;
};

Block __54586300;

void code__54586300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54586300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54586300 = block;
   block->owner = (Object)__54585320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54586300;

   return block;
};

Block __54584960;

void code__54584960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54584960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54584960 = block;
   block->owner = (Object)__54584720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54584960;

   return block;
};

Block __54604720;

void code__54604720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54604720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54604720 = block;
   block->owner = (Object)__54604540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54604720;

   return block;
};

Block __54604460;

void code__54604460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54604460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54604460 = block;
   block->owner = (Object)__54603820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54604460;

   return block;
};

Block __54603020;

void code__54603020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54603020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54603020 = block;
   block->owner = (Object)__54602160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54603020;

   return block;
};

Block __54602000;

void code__54602000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54602000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54602000 = block;
   block->owner = (Object)__54601380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54602000;

   return block;
};

Block __48612840;

Block __48612620;

Block __48612200;

void code__48612200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52429080(),_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48612200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48612200 = block;
   block->owner = (Object)__48612620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48612200;

   return block;
};

void code__48612620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52429180();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48612200();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52428980(),_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48612620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48612620 = block;
   block->owner = (Object)__48612840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48612620;

   return block;
};

Block __48611380;

Block __49127120;

void code__49127120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52428820(),_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49127120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49127120 = block;
   block->owner = (Object)__48611380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49127120;

   return block;
};

void code__48611380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52428900();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49127120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731820(),_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48611380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48611380 = block;
   block->owner = (Object)__48612840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48611380;

   return block;
};

Block __49125980;

Block __49125360;

void code__49125360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731660(),_5814_45732060______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49125360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49125360 = block;
   block->owner = (Object)__49125980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49125360;

   return block;
};

void code__49125980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52731740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49125360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731600(),_5813_45732620______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49125980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49125980 = block;
   block->owner = (Object)__48612840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49125980;

   return block;
};

Block __48839400;

Block __48838980;

Block __48838660;

Block __48838300;

void code__48838300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_45732660______58_84_48032420______58_840_53587240->c_value,rv_48613160_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52730980(),rvok_48613060_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48838300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48838300 = block;
   block->owner = (Object)__48838660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48838300;

   return block;
};

void code__48838660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_45732620______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52731140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48838300();
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
                  src0 = _5814_45732060______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52730860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_45732060______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52730740(),_5813_45732620______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__48838660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48838660 = block;
   block->owner = (Object)__48838980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48838660;

   return block;
};

void code__48838980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52731240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48838660();
   }
      }
   }
}

Block make__48838980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48838980 = block;
   block->owner = (Object)__48839400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48838980;

   return block;
};

Block __49303860;

Block __49303360;

Block __49302860;

void code__49302860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,lv0_45254620_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52730320(),lvok0_48613140_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49302860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49302860 = block;
   block->owner = (Object)__49303360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49302860;

   return block;
};

void code__49303360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52730520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49302860();
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
                  src0 = _5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52730180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52730060(),_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49303360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49303360 = block;
   block->owner = (Object)__49303860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49303360;

   return block;
};

void code__49303860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52730640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49303360();
   }
      }
   }
}

Block make__49303860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49303860 = block;
   block->owner = (Object)__48839400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49303860;

   return block;
};

Block __49672700;

Block __49672020;

Block __49671720;

void code__49671720() {
}

Block make__49671720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49671720 = block;
   block->owner = (Object)__49672020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49671720;

   return block;
};

Block __52584100;

void code__52584100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47754980_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52584100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52584100 = block;
   block->owner = (Object)__49672020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52584100;

   return block;
};

void code__49672020() {
 code__49671720();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47754980_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
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
                              src0 = lv0_45254620_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48613160_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52729440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47754980_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__52584100();
}

Block make__49672020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49672020 = block;
   block->owner = (Object)__49672700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49672020;

   return block;
};

void code__49672700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52729840(),ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52729780(),run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__49672020();
}

Block make__49672700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49672700 = block;
   block->owner = (Object)__48839400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49672700;

   return block;
};

Block __52774800;

Block __52774480;

Block __52774160;

void code__52774160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,lv1_47494920_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728980(),lvok1_48613100_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52774160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52774160 = block;
   block->owner = (Object)__52774480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52774160;

   return block;
};

void code__52774480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52729140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52774160();
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
                  src0 = _58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52728860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728760(),_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52774480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52774480 = block;
   block->owner = (Object)__52774800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52774480;

   return block;
};

void code__52774800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52729240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52774480();
   }
      }
   }
}

Block make__52774800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52774800 = block;
   block->owner = (Object)__48839400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52774800;

   return block;
};

Block __52972040;

Block __52971560;

Block __52971400;

void code__52971400() {
}

Block make__52971400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52971400 = block;
   block->owner = (Object)__52971560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52971400;

   return block;
};

Block __53967060;

void code__53967060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48048440_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53967060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53967060 = block;
   block->owner = (Object)__52971560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53967060;

   return block;
};

void code__52971560() {
 code__52971400();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48048440_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
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
                              src0 = lv1_47494920_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48613160_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52728100();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48048440_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__53967060();
}

Block make__52971560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52971560 = block;
   block->owner = (Object)__52972040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52971560;

   return block;
};

void code__52972040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728560(),ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728500(),run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__52971560();
}

Block make__52972040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52972040 = block;
   block->owner = (Object)__48839400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52972040;

   return block;
};

void code__48839400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731320(),run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__48838980();
 code__49303860();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48613140_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = rvok_48613060_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49672700();
   }
      }
   }
 code__52774800();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48613100_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = rvok_48613060_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52972040();
   }
      }
   }
}

Block make__48839400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48839400 = block;
   block->owner = (Object)__48612840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48839400;

   return block;
};

Block __49124380;

void code__49124380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52727880(),rvok_48613060_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52727820(),lvok0_48613140_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52727700(),av0_47754980_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52727640(),lvok1_48613100_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52727580(),av1_48048440_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__49124380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49124380 = block;
   block->owner = (Object)__48612840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49124380;

   return block;
};

void code__48612840() {
 code__48612620();
 code__48611380();
 code__49125980();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731540(),ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731480(),run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_45664120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48839400();
   }
   else {
  code__49124380();
   }
      }
   }
}

Block make__48612840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48612840 = block;
   block->owner = (Object)__54304900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48612840;

   return block;
};

Block __54626380;

void code__54626380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54626380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54626380 = block;
   block->owner = (Object)__54625900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54626380;

   return block;
};

Block __54625860;

void code__54625860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54625860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54625860 = block;
   block->owner = (Object)__54625420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54625860;

   return block;
};

Block __56754020;

void code__56754020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56754020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56754020 = block;
   block->owner = (Object)__56753860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56754020;

   return block;
};

Block __56753820;

void code__56753820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56753820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56753820 = block;
   block->owner = (Object)__56753660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56753820;

   return block;
};

Block __56753360;

void code__56753360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56753360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56753360 = block;
   block->owner = (Object)__56753160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56753360;

   return block;
};

Block __56753120;

void code__56753120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56753120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56753120 = block;
   block->owner = (Object)__56752900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56753120;

   return block;
};

Block __56752600;

void code__56752600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56752600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56752600 = block;
   block->owner = (Object)__56752440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56752600;

   return block;
};

Block __56752400;

void code__56752400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56752400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56752400 = block;
   block->owner = (Object)__56752200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56752400;

   return block;
};

Block __56750460;

void code__56750460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56750460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56750460 = block;
   block->owner = (Object)__56750300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56750460;

   return block;
};

Block __56750260;

void code__56750260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56750260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56750260 = block;
   block->owner = (Object)__56750080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56750260;

   return block;
};

Block __56748780;

void code__56748780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56748780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56748780 = block;
   block->owner = (Object)__56748620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56748780;

   return block;
};

Block __56748580;

void code__56748580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56748580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56748580 = block;
   block->owner = (Object)__56748420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56748580;

   return block;
};

Block __56748120;

void code__56748120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56748120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56748120 = block;
   block->owner = (Object)__56747940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56748120;

   return block;
};

Block __56747900;

void code__56747900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__56747900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56747900 = block;
   block->owner = (Object)__56747700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56747900;

   return block;
};

Block __52516400;

Block __52514940;

Block __52514560;

void code__52514560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,lv0_52128320_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725280(),lvok0_52516600_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52514560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52514560 = block;
   block->owner = (Object)__52514940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52514560;

   return block;
};

Block __52775600;

void code__52775600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,rv0_52414540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725140(),rvok0_52516560_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52775600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52775600 = block;
   block->owner = (Object)__52514940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52775600;

   return block;
};

Block __53010240;

Block __53009680;

void code__53009680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52128320_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      src1 = rv0_52414540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53009680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53009680 = block;
   block->owner = (Object)__53010240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53009680;

   return block;
};

void code__53010240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52724980(),run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52724920(),ack__add_45685000_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__53009680();
}

Block make__53010240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53010240 = block;
   block->owner = (Object)__52514940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53010240;

   return block;
};

Block __53540800;

void code__53540800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,lv1_52214100_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52724600(),lvok1_52516580_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53540800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53540800 = block;
   block->owner = (Object)__52514940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53540800;

   return block;
};

Block __53761040;

void code__53761040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,rv1_52516620_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52724420(),rvok1_52516540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53761040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53761040 = block;
   block->owner = (Object)__52514940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53761040;

   return block;
};

Block __54292160;

Block __54291680;

void code__54291680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52214100_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      src1 = rv1_52516620_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54291680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54291680 = block;
   block->owner = (Object)__54292160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54291680;

   return block;
};

void code__54292160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52724100(),run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52724000(),ack__add_45685000_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__54291680();
}

Block make__54292160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54292160 = block;
   block->owner = (Object)__52514940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54292160;

   return block;
};

void code__52514940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725420(),run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
 code__52514560();
 code__52775600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52516600_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = rvok0_52516560_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53010240();
   }
      }
   }
 code__53540800();
 code__53761040();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52516580_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = rvok1_52516540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54292160();
   }
      }
   }
}

Block make__52514940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52514940 = block;
   block->owner = (Object)__52516400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52514940;

   return block;
};

Block __52515920;

void code__52515920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52723760(),lvok0_52516600_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52568020(),rvok0_52516560_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52567960(),lvok1_52516580_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52567900(),rvok1_52516540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__52515920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52515920 = block;
   block->owner = (Object)__52516400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52515920;

   return block;
};

void code__52516400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725700(),ack__add_45685000_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725640(),run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         src1 = run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52514940();
   }
   else {
  code__52515920();
   }
      }
   }
}

Block make__52516400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52516400 = block;
   block->owner = (Object)__45651180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52516400;

   return block;
};

Value make__52429180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52429080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52428980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52428900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52428820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52731820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52731740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52731660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52731600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52731540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52731480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52731320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52731240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52731140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52730980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52730860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52730740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52730640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52730520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52730320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52730180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52730060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52729840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52729780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52729440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52729240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52729140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52728980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52728760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52727880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52727820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52727700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52727640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52727580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52725700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52724980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52724920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52724600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52724420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52724100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52724000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52723760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52568020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52567960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52567900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52566480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52566280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52566220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52566160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52565920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52565780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52565680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52565580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52565500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52565400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52565300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52565220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52565140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52565080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52564960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52564820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52564720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52564660() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52564580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52564400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52564280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52564180() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52564100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52563980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52563920() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52563900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52563840() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52563720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer__hidden_58_84_48773460;

SignalI req__mac_45664120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereq__mac_45664120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_45664120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack_45663140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack__mac_45685420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI ack__add_45685000_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack__add_45685000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_45685000_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_5897_47575980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_5895_47575960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_5896_47575840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58126_47902320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58124_47902300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58125_47902140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58143_48145800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58144_49178680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58176_48800020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58177_48961260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58206_49302740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58207_49478200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makevalue__z0_49703240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makevalue__z1_51700420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI value__a00_51981140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makevalue__a00_51981140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_51981140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI value__a01_52097740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makevalue__a01_52097740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_52097740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI flag__z0_52097700_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeflag__z0_52097700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52097700_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI flag__z1_52097680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeflag__z1_52097680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52097680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack__a00_52097620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeack__a01_52097600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_5899_52097580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58100_52097500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58101_52198060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58128_52198040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58129_52197960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58130_52380440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58191_52480980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58192_52661480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SignalI _58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI make_58193_52661380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)layer__hidden_58_84_48773460;
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

SystemI counter0_52677640;

SystemI makecounter0_52677640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter0_52677640 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_48773460;
   systemI->name = "counter0";
   systemI->system = counter0_58_840_52680080;

   return systemI;
};

SystemI func0_52192080;

SystemI makefunc0_52192080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_52192080 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_48773460;
   systemI->name = "func0";
   systemI->system = func0_58_840_51931720;

   return systemI;
};

SystemI func1_54487300;

SystemI makefunc1_54487300() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_54487300 = systemI;
   systemI->owner = (Object)layer__hidden_58_84_48773460;
   systemI->name = "func1";
   systemI->system = func1_58_840_54132660;

   return systemI;
};

Scope channel__w0_5883_48773120;

SignalI trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI maketrig__r_48770020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

SignalI trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI maketrig__w_48770000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

SignalI dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makedbus__r_48834940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

SignalI dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makedbus__w_48960300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

SignalI abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_48960200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

SignalI abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_48960100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

SignalI mem_49270380_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makemem_49270380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49270380_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w0_5883_48773120;
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

Scope raddr_5884_48772760;

Scope makeraddr_5884_48772760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_48772760 = scope;
   scope->owner = (Object)channel__w0_5883_48773120;
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

Scope waddr_5889_48772340;

Scope makewaddr_5889_48772340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_48772340 = scope;
   scope->owner = (Object)channel__w0_5883_48773120;
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

Scope rinc_5894_48771900;

Scope makerinc_5894_48771900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_48771900 = scope;
   scope->owner = (Object)channel__w0_5883_48773120;
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

Scope winc_5898_48771400;

Scope makewinc_5898_48771400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_48771400 = scope;
   scope->owner = (Object)channel__w0_5883_48773120;
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

Scope rdec_58102_48770940;

Scope makerdec_58102_48770940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_48770940 = scope;
   scope->owner = (Object)channel__w0_5883_48773120;
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

Scope wdec_58107_48770460;

Scope makewdec_58107_48770460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_48770460 = scope;
   scope->owner = (Object)channel__w0_5883_48773120;
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

Behavior __48655060;

Behavior make__48655060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48655060 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg-1] = (Object)behavior;
   behavior->block = make__49838420();

   return behavior;
}

Behavior __54439220;

Behavior make__54439220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54439220 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[dbus__r_48834940_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54439680();

   return behavior;
}

Behavior __54438460;

Behavior make__54438460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54438460 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_5897_47575980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54439160();

   return behavior;
}

Behavior __54437740;

Behavior make__54437740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54437740 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[trig__r_48770020_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54437940();

   return behavior;
}

Behavior __54437460;

Behavior make__54437460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54437460 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_5895_47575960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54437700();

   return behavior;
}

Behavior __54436240;

Behavior make__54436240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54436240 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[abus__r_48960200_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54436900();

   return behavior;
}

Behavior __54492940;

Behavior make__54492940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54492940 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_5896_47575840_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54436120();

   return behavior;
}

Behavior __54491920;

Behavior make__54491920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54491920 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[trig__w_48770000_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54492100();

   return behavior;
}

Behavior __54491520;

Behavior make__54491520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54491520 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_5899_52097580_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54491860();

   return behavior;
}

Behavior __54488160;

Behavior make__54488160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54488160 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[abus__w_48960100_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54490120();

   return behavior;
}

Behavior __54487500;

Behavior make__54487500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54487500 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58100_52097500_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54487820();

   return behavior;
}

Behavior __54485040;

Behavior make__54485040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54485040 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[dbus__w_48960300_channel__w0_5883_48773120_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54486000();

   return behavior;
}

Behavior __54509220;

Behavior make__54509220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54509220 = behavior;
   behavior->owner = (Object)channel__w0_5883_48773120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58101_52198060_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54485000();

   return behavior;
}

Scope makechannel__w0_5883_48773120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_48773120 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48770020();
   scope->inners[1] = maketrig__w_48770000();
   scope->inners[2] = makedbus__r_48834940();
   scope->inners[3] = makedbus__w_48960300();
   scope->inners[4] = makeabus__r_48960200();
   scope->inners[5] = makeabus__w_48960100();
   scope->inners[6] = makemem_49270380();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_48772760();
   scope->scopes[1] = makewaddr_5889_48772340();
   scope->scopes[2] = makerinc_5894_48771900();
   scope->scopes[3] = makewinc_5898_48771400();
   scope->scopes[4] = makerdec_58102_48770940();
   scope->scopes[5] = makewdec_58107_48770460();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48655060();
   scope->behaviors[1] = make__54439220();
   scope->behaviors[2] = make__54438460();
   scope->behaviors[3] = make__54437740();
   scope->behaviors[4] = make__54437460();
   scope->behaviors[5] = make__54436240();
   scope->behaviors[6] = make__54492940();
   scope->behaviors[7] = make__54491920();
   scope->behaviors[8] = make__54491520();
   scope->behaviors[9] = make__54488160();
   scope->behaviors[10] = make__54487500();
   scope->behaviors[11] = make__54485040();
   scope->behaviors[12] = make__54509220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_48654940;

SignalI trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI maketrig__r_48741640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

SignalI trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI maketrig__w_48741600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

SignalI dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makedbus__r_48823580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

SignalI dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makedbus__w_48900420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

SignalI abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_48900340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

SignalI abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_48900260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

SignalI mem_49239380_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makemem_49239380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49239380_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__w1_58112_48654940;
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

Scope raddr_58113_48654640;

Scope makeraddr_58113_48654640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_48654640 = scope;
   scope->owner = (Object)channel__w1_58112_48654940;
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

Scope waddr_58118_48654220;

Scope makewaddr_58118_48654220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_48654220 = scope;
   scope->owner = (Object)channel__w1_58112_48654940;
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

Scope rinc_58123_48653600;

Scope makerinc_58123_48653600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_48653600 = scope;
   scope->owner = (Object)channel__w1_58112_48654940;
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

Scope winc_58127_48652980;

Scope makewinc_58127_48652980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_48652980 = scope;
   scope->owner = (Object)channel__w1_58112_48654940;
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

Scope rdec_58131_48652480;

Scope makerdec_58131_48652480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_48652480 = scope;
   scope->owner = (Object)channel__w1_58112_48654940;
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

Scope wdec_58136_48742140;

Scope makewdec_58136_48742140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_48742140 = scope;
   scope->owner = (Object)channel__w1_58112_48654940;
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

Behavior __49735920;

Behavior make__49735920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49735920 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->neg[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_neg-1] = (Object)behavior;
   behavior->block = make__49815680();

   return behavior;
}

Behavior __54505640;

Behavior make__54505640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54505640 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[dbus__r_48823580_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54505860();

   return behavior;
}

Behavior __54505320;

Behavior make__54505320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54505320 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58126_47902320_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54505580();

   return behavior;
}

Behavior __54503720;

Behavior make__54503720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54503720 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[trig__r_48741640_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54504220();

   return behavior;
}

Behavior __54503440;

Behavior make__54503440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54503440 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58124_47902300_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54503680();

   return behavior;
}

Behavior __54502400;

Behavior make__54502400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54502400 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[abus__r_48900340_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54502900();

   return behavior;
}

Behavior __54502000;

Behavior make__54502000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54502000 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58125_47902140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54502360();

   return behavior;
}

Behavior __54501380;

Behavior make__54501380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54501380 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[trig__w_48741600_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54501580();

   return behavior;
}

Behavior __54590940;

Behavior make__54590940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54590940 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58128_52198040_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54591420();

   return behavior;
}

Behavior __54588920;

Behavior make__54588920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54588920 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[abus__w_48900260_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54589480();

   return behavior;
}

Behavior __54588420;

Behavior make__54588420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54588420 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58129_52197960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54588680();

   return behavior;
}

Behavior __54585320;

Behavior make__54585320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54585320 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[dbus__w_48900420_channel__w1_58112_48654940_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54586300();

   return behavior;
}

Behavior __54584720;

Behavior make__54584720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54584720 = behavior;
   behavior->owner = (Object)channel__w1_58112_48654940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58130_52380440_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54584960();

   return behavior;
}

Scope makechannel__w1_58112_48654940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_48654940 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48741640();
   scope->inners[1] = maketrig__w_48741600();
   scope->inners[2] = makedbus__r_48823580();
   scope->inners[3] = makedbus__w_48900420();
   scope->inners[4] = makeabus__r_48900340();
   scope->inners[5] = makeabus__w_48900260();
   scope->inners[6] = makemem_49239380();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_48654640();
   scope->scopes[1] = makewaddr_58118_48654220();
   scope->scopes[2] = makerinc_58123_48653600();
   scope->scopes[3] = makewinc_58127_48652980();
   scope->scopes[4] = makerdec_58131_48652480();
   scope->scopes[5] = makewdec_58136_48742140();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49735920();
   scope->behaviors[1] = make__54505640();
   scope->behaviors[2] = make__54505320();
   scope->behaviors[3] = make__54503720();
   scope->behaviors[4] = make__54503440();
   scope->behaviors[5] = make__54502400();
   scope->behaviors[6] = make__54502000();
   scope->behaviors[7] = make__54501380();
   scope->behaviors[8] = make__54590940();
   scope->behaviors[9] = make__54588920();
   scope->behaviors[10] = make__54588420();
   scope->behaviors[11] = make__54585320();
   scope->behaviors[12] = make__54584720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_49735800;

SignalI reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereg__0_47401140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__accum_58141_49735800;
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

SignalI reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereg__1_47883300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__accum_58141_49735800;
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

Scope anum_58142_49735220;

Scope makeanum_58142_49735220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49735220 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
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

Scope raddr_58145_49734480;

Scope makeraddr_58145_49734480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_49734480 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
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

Scope waddr_58149_49733920;

Scope makewaddr_58149_49733920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_49733920 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
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

Scope rinc_58153_49806520;

SignalI abus__r_49805880_rinc_58153_49806520_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_49805880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49805880_rinc_58153_49806520_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_58153_49806520;
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

Scope makerinc_58153_49806520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_49806520 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49805880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_49805620;

SignalI abus__w_49805120_winc_58158_49805620_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_49805120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49805120_winc_58158_49805620_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_58158_49805620;
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

Scope makewinc_58158_49805620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_49805620 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49805120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_49804860;

SignalI abus__r_49804080_rdec_58163_49804860_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_49804080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49804080_rdec_58163_49804860_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_58163_49804860;
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

Scope makerdec_58163_49804860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_49804860 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49804080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_49803720;

SignalI abus__w_49803240_wdec_58168_49803720_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_49803240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49803240_wdec_58168_49803720_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_58168_49803720;
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

Scope makewdec_58168_49803720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_49803720 = scope;
   scope->owner = (Object)channel__accum_58141_49735800;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49803240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54604540;

Behavior make__54604540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54604540 = behavior;
   behavior->owner = (Object)channel__accum_58141_49735800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__0_47401140_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54604720();

   return behavior;
}

Behavior __54603820;

Behavior make__54603820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54603820 = behavior;
   behavior->owner = (Object)channel__accum_58141_49735800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58143_48145800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54604460();

   return behavior;
}

Behavior __54602160;

Behavior make__54602160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54602160 = behavior;
   behavior->owner = (Object)channel__accum_58141_49735800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__1_47883300_channel__accum_58141_49735800_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54603020();

   return behavior;
}

Behavior __54601380;

Behavior make__54601380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54601380 = behavior;
   behavior->owner = (Object)channel__accum_58141_49735800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58144_49178680_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54602000();

   return behavior;
}

Scope makechannel__accum_58141_49735800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_49735800 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47401140();
   scope->inners[1] = makereg__1_47883300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49735220();
   scope->scopes[1] = makeraddr_58145_49734480();
   scope->scopes[2] = makewaddr_58149_49733920();
   scope->scopes[3] = makerinc_58153_49806520();
   scope->scopes[4] = makewinc_58158_49805620();
   scope->scopes[5] = makerdec_58163_49804860();
   scope->scopes[6] = makewdec_58168_49803720();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54604540();
   scope->behaviors[1] = make__54603820();
   scope->behaviors[2] = make__54602160();
   scope->behaviors[3] = make__54601380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_49688960;

SignalI lv0_45254620_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelv0_45254620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45254620_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI lv1_47494920_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelv1_47494920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47494920_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI av0_47754980_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeav0_47754980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47754980_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI av1_48048440_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeav1_48048440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48048440_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI rv_48613160_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerv_48613160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48613160_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI lvok0_48613140_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelvok0_48613140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48613140_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI lvok1_48613100_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelvok1_48613100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48613100_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI rvok_48613060_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makervok_48613060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48613060_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

SignalI run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerun_48613040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48613040_mac__n1_58173_49688960_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)mac__n1_58173_49688960;
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

Behavior __54304900;

Behavior make__54304900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54304900 = behavior;
   behavior->owner = (Object)mac__n1_58173_49688960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__48612840();

   return behavior;
}

Scope makemac__n1_58173_49688960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_49688960 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45254620();
   scope->inners[1] = makelv1_47494920();
   scope->inners[2] = makeav0_47754980();
   scope->inners[3] = makeav1_48048440();
   scope->inners[4] = makerv_48613160();
   scope->inners[5] = makelvok0_48613140();
   scope->inners[6] = makelvok1_48613100();
   scope->inners[7] = makervok_48613060();
   scope->inners[8] = makerun_48613040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54304900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58174_54304780;

SignalI reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereg__0_54388280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__bias_58174_54304780;
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

SignalI reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereg__1_54508340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__bias_58174_54304780;
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

Scope anum_58175_54329020;

Scope makeanum_58175_54329020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58175_54329020 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
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

Scope raddr_58178_54328600;

Scope makeraddr_58178_54328600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58178_54328600 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
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

Scope waddr_58182_54328180;

Scope makewaddr_58182_54328180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58182_54328180 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
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

Scope rinc_58186_54327760;

SignalI abus__r_54327380_rinc_58186_54327760_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_54327380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54327380_rinc_58186_54327760_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_58186_54327760;
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

Scope makerinc_58186_54327760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58186_54327760 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
   scope->name = "rinc:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54327380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58190_54327260;

SignalI abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_54326880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_58190_54327260;
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

Behavior __56750300;

Behavior make__56750300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56750300 = behavior;
   behavior->owner = (Object)winc_58190_54327260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[abus__w_54326880_winc_58190_54327260_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56750460();

   return behavior;
}

Behavior __56750080;

Behavior make__56750080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56750080 = behavior;
   behavior->owner = (Object)winc_58190_54327260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58193_52661380_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56750260();

   return behavior;
}

Scope makewinc_58190_54327260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58190_54327260 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
   scope->name = "winc:190";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54326880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56750300();
   scope->behaviors[1] = make__56750080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58194_54326500;

SignalI abus__r_54326120_rdec_58194_54326500_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_54326120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54326120_rdec_58194_54326500_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_58194_54326500;
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

Scope makerdec_58194_54326500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58194_54326500 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
   scope->name = "rdec:194";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54326120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58199_54326000;

SignalI abus__w_54325620_wdec_58199_54326000_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_54325620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54325620_wdec_58199_54326000_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_58199_54326000;
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

Scope makewdec_58199_54326000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58199_54326000 = scope;
   scope->owner = (Object)channel__bias_58174_54304780;
   scope->name = "wdec:199";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54325620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54625900;

Behavior make__54625900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54625900 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54626380();

   return behavior;
}

Behavior __54625420;

Behavior make__54625420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54625420 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58176_48800020_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54625860();

   return behavior;
}

Behavior __56753860;

Behavior make__56753860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56753860 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56754020();

   return behavior;
}

Behavior __56753660;

Behavior make__56753660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56753660 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58177_48961260_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56753820();

   return behavior;
}

Behavior __56753160;

Behavior make__56753160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56753160 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__0_54388280_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56753360();

   return behavior;
}

Behavior __56752900;

Behavior make__56752900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56752900 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58191_52480980_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56753120();

   return behavior;
}

Behavior __56752440;

Behavior make__56752440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56752440 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__1_54508340_channel__bias_58174_54304780_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56752600();

   return behavior;
}

Behavior __56752200;

Behavior make__56752200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56752200 = behavior;
   behavior->owner = (Object)channel__bias_58174_54304780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58192_52661480_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56752400();

   return behavior;
}

Scope makechannel__bias_58174_54304780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58174_54304780 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "channel_bias:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54388280();
   scope->inners[1] = makereg__1_54508340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58175_54329020();
   scope->scopes[1] = makeraddr_58178_54328600();
   scope->scopes[2] = makewaddr_58182_54328180();
   scope->scopes[3] = makerinc_58186_54327760();
   scope->scopes[4] = makewinc_58190_54327260();
   scope->scopes[5] = makerdec_58194_54326500();
   scope->scopes[6] = makewdec_58199_54326000();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54625900();
   scope->behaviors[1] = make__54625420();
   scope->behaviors[2] = make__56753860();
   scope->behaviors[3] = make__56753660();
   scope->behaviors[4] = make__56753160();
   scope->behaviors[5] = make__56752900();
   scope->behaviors[6] = make__56752440();
   scope->behaviors[7] = make__56752200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58204_48887860;

SignalI reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereg__0_49257580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__z_58204_48887860;
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

SignalI reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makereg__1_49388260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__z_58204_48887860;
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

Scope anum_58205_48887360;

Scope makeanum_58205_48887360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58205_48887360 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
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

Scope raddr_58208_48886640;

Scope makeraddr_58208_48886640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58208_48886640 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
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

Scope waddr_58212_48885140;

Scope makewaddr_58212_48885140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58212_48885140 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
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

Scope rinc_58216_48881900;

SignalI abus__r_48904260_rinc_58216_48881900_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_48904260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48904260_rinc_58216_48881900_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_58216_48881900;
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

Scope makerinc_58216_48881900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58216_48881900 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
   scope->name = "rinc:216";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48904260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58220_48904140;

SignalI abus__w_48903660_winc_58220_48904140_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_48903660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48903660_winc_58220_48904140_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_58220_48904140;
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

Scope makewinc_58220_48904140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58220_48904140 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
   scope->name = "winc:220";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48903660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58224_48903500;

SignalI abus__r_48902800_rdec_58224_48903500_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__r_48902800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48902800_rdec_58224_48903500_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_58224_48903500;
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

Scope makerdec_58224_48903500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58224_48903500 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
   scope->name = "rdec:224";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48902800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58229_48902640;

SignalI abus__w_48902220_wdec_58229_48902640_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makeabus__w_48902220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48902220_wdec_58229_48902640_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_58229_48902640;
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

Scope makewdec_58229_48902640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58229_48902640 = scope;
   scope->owner = (Object)channel__z_58204_48887860;
   scope->name = "wdec:229";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48902220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56748620;

Behavior make__56748620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56748620 = behavior;
   behavior->owner = (Object)channel__z_58204_48887860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__0_49257580_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56748780();

   return behavior;
}

Behavior __56748420;

Behavior make__56748420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56748420 = behavior;
   behavior->owner = (Object)channel__z_58204_48887860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58206_49302740_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56748580();

   return behavior;
}

Behavior __56747940;

Behavior make__56747940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56747940 = behavior;
   behavior->owner = (Object)channel__z_58204_48887860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[reg__1_49388260_channel__z_58204_48887860_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56748120();

   return behavior;
}

Behavior __56747700;

Behavior make__56747700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56747700 = behavior;
   behavior->owner = (Object)channel__z_58204_48887860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   _58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   _58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[_58207_49478200_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__56747900();

   return behavior;
}

Scope makechannel__z_58204_48887860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58204_48887860 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "channel_z:204";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49257580();
   scope->inners[1] = makereg__1_49388260();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58205_48887360();
   scope->scopes[1] = makeraddr_58208_48886640();
   scope->scopes[2] = makewaddr_58212_48885140();
   scope->scopes[3] = makerinc_58216_48881900();
   scope->scopes[4] = makewinc_58220_48904140();
   scope->scopes[5] = makerdec_58224_48903500();
   scope->scopes[6] = makewdec_58229_48902640();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56748620();
   scope->behaviors[1] = make__56748420();
   scope->behaviors[2] = make__56747940();
   scope->behaviors[3] = make__56747700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58234_52034620;

SignalI lv0_52128320_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelv0_52128320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52128320_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI lv1_52214100_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelv1_52214100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52214100_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI rv0_52414540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerv0_52414540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52414540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI rv1_52516620_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerv1_52516620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52516620_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI lvok0_52516600_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelvok0_52516600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52516600_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI lvok1_52516580_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makelvok1_52516580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52516580_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI rvok0_52516560_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makervok0_52516560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52516560_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI rvok1_52516540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makervok1_52516540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52516540_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

SignalI run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240;

SignalI makerun_52516520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52516520_add__n_58234_52034620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)add__n_58234_52034620;
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

Behavior __45651180;

Behavior make__45651180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45651180 = behavior;
   behavior->owner = (Object)add__n_58234_52034620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__52516400();

   return behavior;
}

Scope makeadd__n_58234_52034620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58234_52034620 = scope;
   scope->owner = (Object)layer__hidden_58_84_48773460;
   scope->name = "add_n:234";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52128320();
   scope->inners[1] = makelv1_52214100();
   scope->inners[2] = makerv0_52414540();
   scope->inners[3] = makerv1_52516620();
   scope->inners[4] = makelvok0_52516600();
   scope->inners[5] = makelvok1_52516580();
   scope->inners[6] = makervok0_52516560();
   scope->inners[7] = makervok1_52516540();
   scope->inners[8] = makerun_52516520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45651180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52711100;

Behavior make__52711100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52711100 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_48773460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__51638080();

   return behavior;
}

Behavior __53537760;

Behavior make__53537760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53537760 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_48773460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__52710860();

   return behavior;
}

Behavior __54601720;

Behavior make__54601720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54601720 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_48773460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->pos[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__53537560();

   return behavior;
}

Behavior __54389520;

Behavior make__54389520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54389520 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_48773460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[ack__mac_45685420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54390700();

   return behavior;
}

Behavior __54441480;

Behavior make__54441480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54441480 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_48773460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[ack_45663140_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[value__z0_49703240_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[value__z1_51700420_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[ack__a00_52097620_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[ack__a01_52097600_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54391260();

   return behavior;
}

Behavior __54440780;

Behavior make__54440780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54440780 = behavior;
   behavior->owner = (Object)layer__hidden_58_84_48773460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[ack__mac_52677780_counter0_58_840_52680080_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[a_52192300_func0_58_840_51931720_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[a_54488500_func1_58_840_54132660_layer__hidden_58_84_48773460_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54391180();

   return behavior;
}

Scope makelayer__hidden_58_84_48773460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer__hidden_58_84_48773460 = scope;
   scope->owner = (Object)layer__hidden_58_840_54601100;
   scope->name = "layer_hidden:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter0_52677640();
   scope->systemIs[1] = makefunc0_52192080();
   scope->systemIs[2] = makefunc1_54487300();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_45664120();
   scope->inners[1] = makeack_45663140();
   scope->inners[2] = makeack__mac_45685420();
   scope->inners[3] = makeack__add_45685000();
   scope->inners[4] = make_5897_47575980();
   scope->inners[5] = make_5895_47575960();
   scope->inners[6] = make_5896_47575840();
   scope->inners[7] = make_58126_47902320();
   scope->inners[8] = make_58124_47902300();
   scope->inners[9] = make_58125_47902140();
   scope->inners[10] = make_58143_48145800();
   scope->inners[11] = make_58144_49178680();
   scope->inners[12] = make_58176_48800020();
   scope->inners[13] = make_58177_48961260();
   scope->inners[14] = make_58206_49302740();
   scope->inners[15] = make_58207_49478200();
   scope->inners[16] = makevalue__z0_49703240();
   scope->inners[17] = makevalue__z1_51700420();
   scope->inners[18] = makevalue__a00_51981140();
   scope->inners[19] = makevalue__a01_52097740();
   scope->inners[20] = makeflag__z0_52097700();
   scope->inners[21] = makeflag__z1_52097680();
   scope->inners[22] = makeack__a00_52097620();
   scope->inners[23] = makeack__a01_52097600();
   scope->inners[24] = make_5899_52097580();
   scope->inners[25] = make_58100_52097500();
   scope->inners[26] = make_58101_52198060();
   scope->inners[27] = make_58128_52198040();
   scope->inners[28] = make_58129_52197960();
   scope->inners[29] = make_58130_52380440();
   scope->inners[30] = make_58191_52480980();
   scope->inners[31] = make_58192_52661480();
   scope->inners[32] = make_58193_52661380();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_48773120();
   scope->scopes[1] = makechannel__w1_58112_48654940();
   scope->scopes[2] = makechannel__accum_58141_49735800();
   scope->scopes[3] = makemac__n1_58173_49688960();
   scope->scopes[4] = makechannel__bias_58174_54304780();
   scope->scopes[5] = makechannel__z_58204_48887860();
   scope->scopes[6] = makeadd__n_58234_52034620();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52711100();
   scope->behaviors[1] = make__53537760();
   scope->behaviors[2] = make__54601720();
   scope->behaviors[3] = make__54389520();
   scope->behaviors[4] = make__54441480();
   scope->behaviors[5] = make__54440780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer__hidden_58_840_54601100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer__hidden_58_840_54601100 = systemT;
systemT->owner = NULL;
   systemT->name = "layer_hidden:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54630560();
   systemT->inputs[1] = makerst_54630520();
   systemT->inputs[2] = makefill_54630500();
   systemT->inputs[3] = makereq_54630440();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_54630400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer__hidden_58_84_48773460();

   return systemT;
}