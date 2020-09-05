#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_60903180;

SignalI clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeclk_60901240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_840_60903180;
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

SignalI rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makerst_60901220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_840_60903180;
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

SignalI fill_60901200_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makefill_60901200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_60901200_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_840_60903180;
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

SignalI req_60901180_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makereq_60901180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_60901180_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_840_60903180;
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

SignalI ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeack__1_60901140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_840_60903180;
   signalI->name = "ack_1";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __60095920;

Block __60095380;

Block __60095220;

void code__60095220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61960440(),flag__z0_54661160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60095220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60095220 = block;
   block->owner = (Object)__60095380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60095220;

   return block;
};

void code__60095380() {
 code__60095220();
}

Block make__60095380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60095380 = block;
   block->owner = (Object)__60095920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60095380;

   return block;
};

Block __60095760;

void code__60095760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61960380(),flag__z0_54661160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60095760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60095760 = block;
   block->owner = (Object)__60095920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60095760;

   return block;
};

void code__60095920() {
   {
      Value cond = ack__add_53333920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60095380();
   }
   else {
  code__60095760();
   }
      }
   }
}

Block make__60095920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60095920 = block;
   block->owner = (Object)__60273660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60095920;

   return block;
};

Block __60273540;

Block __60273320;

Block __60273160;

void code__60273160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_54661180_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_5862_47894660______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61960200(),ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60273160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60273160 = block;
   block->owner = (Object)__60273320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60273160;

   return block;
};

void code__60273320() {
 code__60273160();
}

Block make__60273320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60273320 = block;
   block->owner = (Object)__60273540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60273320;

   return block;
};

void code__60273540() {
   {
      Value cond = flag__z0_54661160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60273320();
   }
      }
   }
}

Block make__60273540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60273540 = block;
   block->owner = (Object)__60623020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60273540;

   return block;
};

Block __60622900;

Block __60622740;

Block __60622420;

void code__60622420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61960040(),_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60622420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60622420 = block;
   block->owner = (Object)__60622740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60622420;

   return block;
};

void code__60622740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61960120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60622420();
   }
      }
   }
}

Block make__60622740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60622740 = block;
   block->owner = (Object)__60622900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60622740;

   return block;
};

Block __60621960;

Block __60621640;

void code__60621640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61959880(),_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60621640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60621640 = block;
   block->owner = (Object)__60621960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60621640;

   return block;
};

void code__60621960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61959960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60621640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61959820(),_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60621960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60621960 = block;
   block->owner = (Object)__60622900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60621960;

   return block;
};

Block __60620860;

Block __60710760;

Block __60710440;

void code__60710440() {
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
                  src0 = _58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61959560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61959460(),_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61959400(),_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60710440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60710440 = block;
   block->owner = (Object)__60710760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60710440;

   return block;
};

void code__60710760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61959700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60710440();
   }
      }
   }
}

Block make__60710760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60710760 = block;
   block->owner = (Object)__60620860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60710760;

   return block;
};

Block __60754240;

Block __60753920;

Block __60753420;

void code__60753420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61959140(),_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60753420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60753420 = block;
   block->owner = (Object)__60753920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60753420;

   return block;
};

void code__60753920() {
{
      Value value = _58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61959200())) {
    code__60753420();
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
                  src0 = _58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61959000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60753920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60753920 = block;
   block->owner = (Object)__60754240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60753920;

   return block;
};

void code__60754240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61959320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60753920();
   }
      }
   }
}

Block make__60754240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60754240 = block;
   block->owner = (Object)__60620860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60754240;

   return block;
};

void code__60620860() {
 code__60710760();
 code__60754240();
}

Block make__60620860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60620860 = block;
   block->owner = (Object)__60622900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60620860;

   return block;
};

void code__60622900() {
 code__60622740();
 code__60621960();
   {
      Value cond = fill_60901200_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60620860();
   }
      }
   }
}

Block make__60622900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60622900 = block;
   block->owner = (Object)__60903500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60622900;

   return block;
};

Block __61621920;

void code__61621920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,z__value_57947840_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61621920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61621920 = block;
   block->owner = (Object)__61701560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61621920;

   return block;
};

Block __61621860;

void code__61621860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,value__a10_54661180_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61621860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61621860 = block;
   block->owner = (Object)__61701400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61621860;

   return block;
};

Block __48126000;

Block __49643160;

void code__49643160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,make_ref_rangeS(mem_54386700_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740,value2integer(abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value),value2integer(abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49643160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49643160 = block;
   block->owner = (Object)__48126000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49643160;

   return block;
};

void code__48126000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54386700_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
            idx = value2integer(abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49643160();
   }
      }
   }
}

Block make__48126000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48126000 = block;
   block->owner = (Object)__50206860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48126000;

   return block;
};

Block __61700680;

void code__61700680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61700680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61700680 = block;
   block->owner = (Object)__61700520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61700680;

   return block;
};

Block __61700480;

void code__61700480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61700480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61700480 = block;
   block->owner = (Object)__61700320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61700480;

   return block;
};

Block __61699960;

void code__61699960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61699960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61699960 = block;
   block->owner = (Object)__61699760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61699960;

   return block;
};

Block __61699720;

void code__61699720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61699720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61699720 = block;
   block->owner = (Object)__61699560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61699720;

   return block;
};

Block __61699260;

void code__61699260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61699260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61699260 = block;
   block->owner = (Object)__61699100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61699260;

   return block;
};

Block __61699060;

void code__61699060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61699060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61699060 = block;
   block->owner = (Object)__61698900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61699060;

   return block;
};

Block __61698600;

void code__61698600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61698600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61698600 = block;
   block->owner = (Object)__61698440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61698600;

   return block;
};

Block __61698400;

void code__61698400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61698400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61698400 = block;
   block->owner = (Object)__61698240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61698400;

   return block;
};

Block __61697880;

void code__61697880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61697880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61697880 = block;
   block->owner = (Object)__61697500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61697880;

   return block;
};

Block __61697460;

void code__61697460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61697460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61697460 = block;
   block->owner = (Object)__61697300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61697460;

   return block;
};

Block __61697000;

void code__61697000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61697000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61697000 = block;
   block->owner = (Object)__61696840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61697000;

   return block;
};

Block __61696800;

void code__61696800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61696800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61696800 = block;
   block->owner = (Object)__61696640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61696800;

   return block;
};

Block __61695020;

void code__61695020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61695020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61695020 = block;
   block->owner = (Object)__61694860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61695020;

   return block;
};

Block __61694820;

void code__61694820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61694820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61694820 = block;
   block->owner = (Object)__61694660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61694820;

   return block;
};

Block __53676260;

Block __53676000;

Block __53675620;

void code__53675620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61941220(),_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53675620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53675620 = block;
   block->owner = (Object)__53676000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53675620;

   return block;
};

void code__53676000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61941300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53675620();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61941160(),_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53676000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53676000 = block;
   block->owner = (Object)__53676260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53676000;

   return block;
};

Block __53674940;

Block __53674140;

void code__53674140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61941000(),_5845_46008740______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53674140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53674140 = block;
   block->owner = (Object)__53674940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53674140;

   return block;
};

void code__53674940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61941080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53674140();
   }
      }
   }
}

Block make__53674940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53674940 = block;
   block->owner = (Object)__53676260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53674940;

   return block;
};

Block __53945720;

Block __53945340;

Block __53944740;

Block __53976360;

void code__53976360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_50155200______58_84_48125920______58_840_61083740->c_value,rv_53676940_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53976360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53976360 = block;
   block->owner = (Object)__53944740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53976360;

   return block;
};

Block __54292960;

void code__54292960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_46008960______58_84_48125920______58_840_61083740->c_value,rv_53676940_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54292960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54292960 = block;
   block->owner = (Object)__53944740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54292960;

   return block;
};

void code__53944740() {
{
      Value value = _5845_46008740______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61940420())) {
    code__53976360();
         }
         else if (value2integer(value) == value2integer(make__61940320())) {
    code__54292960();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61940180(),rvok_53676860_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
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
                  src0 = _5845_46008740______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61940060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_46008740______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53944740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53944740 = block;
   block->owner = (Object)__53945340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53944740;

   return block;
};

void code__53945340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61940600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53944740();
   }
      }
   }
}

Block make__53945340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53945340 = block;
   block->owner = (Object)__53945720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53945340;

   return block;
};

Block __54851780;

Block __54851220;

Block __54850720;

void code__54850720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,lv0_53377040_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61964220(),lvok0_53676900_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54850720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54850720 = block;
   block->owner = (Object)__54851220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54850720;

   return block;
};

void code__54851220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61939840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54850720();
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
                  src0 = _58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61964100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61964000(),_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__54851220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54851220 = block;
   block->owner = (Object)__54851780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54851220;

   return block;
};

void code__54851780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61939940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54851220();
   }
      }
   }
}

Block make__54851780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54851780 = block;
   block->owner = (Object)__53945720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54851780;

   return block;
};

Block __47862340;

Block __47860620;

Block __47860280;

void code__47860280() {
}

Block make__47860280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47860280 = block;
   block->owner = (Object)__47860620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47860280;

   return block;
};

Block __50521760;

void code__50521760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_53478380_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__50521760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50521760 = block;
   block->owner = (Object)__47860620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50521760;

   return block;
};

void code__47860620() {
 code__47860280();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_53478380_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
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
                              src0 = lv0_53377040_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_53676940_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61963440();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_53478380_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__50521760();
}

Block make__47860620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47860620 = block;
   block->owner = (Object)__47862340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47860620;

   return block;
};

void code__47862340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61963840(),ack__mac_53333940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61963780(),run_53676820_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__47860620();
}

Block make__47862340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47862340 = block;
   block->owner = (Object)__53945720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47862340;

   return block;
};

void code__53945720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61940700(),run_53676820_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__53945340();
 code__54851780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53676900_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         src1 = rvok_53676860_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47862340();
   }
      }
   }
}

Block make__53945720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53945720 = block;
   block->owner = (Object)__53676260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53945720;

   return block;
};

Block __53697540;

void code__53697540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61963260(),rvok_53676860_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61963180(),lvok0_53676900_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61963100(),av0_53478380_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__53697540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53697540 = block;
   block->owner = (Object)__53676260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53697540;

   return block;
};

void code__53676260() {
 code__53676000();
 code__53674940();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61940940(),ack__mac_53333940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61940880(),run_53676820_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_60901180_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         src1 = run_53676820_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53945720();
   }
   else {
  code__53697540();
   }
      }
   }
}

Block make__53676260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53676260 = block;
   block->owner = (Object)__53140880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53676260;

   return block;
};

Block __61717380;

void code__61717380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61717380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61717380 = block;
   block->owner = (Object)__61717220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61717380;

   return block;
};

Block __61717180;

void code__61717180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61717180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61717180 = block;
   block->owner = (Object)__61717020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61717180;

   return block;
};

Block __61716720;

void code__61716720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61716720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61716720 = block;
   block->owner = (Object)__61716560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61716720;

   return block;
};

Block __61716520;

void code__61716520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61716520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61716520 = block;
   block->owner = (Object)__61716360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61716520;

   return block;
};

Block __61714680;

void code__61714680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61714680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61714680 = block;
   block->owner = (Object)__61714520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61714680;

   return block;
};

Block __61714480;

void code__61714480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61714480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61714480 = block;
   block->owner = (Object)__61714320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61714480;

   return block;
};

Block __61713100;

void code__61713100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61713100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61713100 = block;
   block->owner = (Object)__61712940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61713100;

   return block;
};

Block __61712900;

void code__61712900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61712900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61712900 = block;
   block->owner = (Object)__61712740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61712900;

   return block;
};

Block __48255660;

Block __48273120;

Block __48272580;

void code__48272580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,lv0_47606140_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961660(),lvok0_48256060_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__48272580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48272580 = block;
   block->owner = (Object)__48273120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48272580;

   return block;
};

Block __49562060;

void code__49562060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,rv0_48256220_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961520(),rvok0_48256040_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49562060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49562060 = block;
   block->owner = (Object)__48273120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49562060;

   return block;
};

Block __49991300;

Block __49989620;

void code__49989620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47606140_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      src1 = rv0_48256220_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__49989620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49989620 = block;
   block->owner = (Object)__49991300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49989620;

   return block;
};

void code__49991300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961360(),run_48255980_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961300(),ack__add_53333920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__49989620();
}

Block make__49991300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49991300 = block;
   block->owner = (Object)__48273120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49991300;

   return block;
};

void code__48273120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961800(),run_48255980_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
 code__48272580();
 code__49562060();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48256060_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         src1 = rvok0_48256040_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49991300();
   }
      }
   }
}

Block make__48273120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48273120 = block;
   block->owner = (Object)__48255660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48273120;

   return block;
};

Block __48254300;

void code__48254300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961020(),lvok0_48256060_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61960960(),rvok0_48256040_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__48254300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48254300 = block;
   block->owner = (Object)__48255660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48254300;

   return block;
};

void code__48255660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61962020(),ack__add_53333920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61961960(),run_48255980_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53333940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         src1 = run_48255980_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48273120();
   }
   else {
  code__48254300();
   }
      }
   }
}

Block make__48255660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48255660 = block;
   block->owner = (Object)__53334200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48255660;

   return block;
};

Value make__61941300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61941220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61941160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61941080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61941000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61940940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61940880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61940700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61940600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61940420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61940320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61940180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61940060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61939940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61939840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61964220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61964100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61964000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61963840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61963780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61963440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61963260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61963180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61963100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61962020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61961020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61960960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61960440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61960380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61960200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61960120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61960040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61959960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61959880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61959820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61959700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61959560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61959460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61959400() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61959320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61959200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61959140() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61959000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_53929040;

SignalI ack__mac_53333940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeack__mac_53333940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53333940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
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

SignalI ack__add_53333920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeack__add_53333920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53333920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
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

SignalI _58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58249_53437660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":249";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58247_53437640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":247";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58248_53437540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":248";
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

SignalI _58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58266_53664580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
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

SignalI _58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58292_53878940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":292";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58315_54179140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":315";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makevalue__z0_54344220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
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

SignalI value__a10_54661180_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makevalue__a10_54661180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_54661180_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = "value_a10";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI flag__z0_54661160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeflag__z0_54661160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_54661160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
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

SignalI ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeack__a10_54661140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = "ack_a10";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58251_54661120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":251";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58252_54661040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":252";
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

SignalI _58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58253_54934920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":253";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58303_55183460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":303";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI make_58304_55183380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)layer1_58_84_53929040;
   signalI->name = ":304";
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

SystemI func0_57787620;

SystemI makefunc0_57787620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_57787620 = systemI;
   systemI->owner = (Object)layer1_58_84_53929040;
   systemI->name = "func0";
   systemI->system = func0_58_8400_55133860;

   return systemI;
};

Scope channel__w0_58235_53928540;

SignalI trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI maketrig__r_53948660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

SignalI trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI maketrig__w_53948600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

SignalI dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makedbus__r_54125140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

SignalI dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makedbus__w_54286480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

SignalI abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_54286280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

SignalI abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_54286180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

SignalI mem_54386700_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makemem_54386700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54386700_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__w0_58235_53928540;
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

Scope raddr_58236_53928240;

Scope makeraddr_58236_53928240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58236_53928240 = scope;
   scope->owner = (Object)channel__w0_58235_53928540;
   scope->name = "raddr:236";
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

Scope waddr_58241_53952240;

Scope makewaddr_58241_53952240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58241_53952240 = scope;
   scope->owner = (Object)channel__w0_58235_53928540;
   scope->name = "waddr:241";
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

Scope rinc_58246_53951420;

Scope makerinc_58246_53951420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_53951420 = scope;
   scope->owner = (Object)channel__w0_58235_53928540;
   scope->name = "rinc:246";
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

Scope winc_58250_53950860;

Scope makewinc_58250_53950860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_53950860 = scope;
   scope->owner = (Object)channel__w0_58235_53928540;
   scope->name = "winc:250";
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

Scope rdec_58254_53950240;

Scope makerdec_58254_53950240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_53950240 = scope;
   scope->owner = (Object)channel__w0_58235_53928540;
   scope->name = "rdec:254";
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

Scope wdec_58259_53949700;

Scope makewdec_58259_53949700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58259_53949700 = scope;
   scope->owner = (Object)channel__w0_58235_53928540;
   scope->name = "wdec:259";
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

Behavior __50206860;

Behavior make__50206860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50206860 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_neg += 1;
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->neg = realloc(clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->neg,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_neg*sizeof(Object));
clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->neg[clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_neg-1] = (Object)behavior;
   behavior->block = make__48126000();

   return behavior;
}

Behavior __61700520;

Behavior make__61700520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61700520 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[dbus__r_54125140_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61700680();

   return behavior;
}

Behavior __61700320;

Behavior make__61700320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61700320 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58249_53437660_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61700480();

   return behavior;
}

Behavior __61699760;

Behavior make__61699760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61699760 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[trig__r_53948660_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61699960();

   return behavior;
}

Behavior __61699560;

Behavior make__61699560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61699560 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58247_53437640_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61699720();

   return behavior;
}

Behavior __61699100;

Behavior make__61699100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61699100 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[abus__r_54286280_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61699260();

   return behavior;
}

Behavior __61698900;

Behavior make__61698900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61698900 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58248_53437540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61699060();

   return behavior;
}

Behavior __61698440;

Behavior make__61698440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61698440 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[trig__w_53948600_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61698600();

   return behavior;
}

Behavior __61698240;

Behavior make__61698240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61698240 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58251_54661120_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61698400();

   return behavior;
}

Behavior __61697500;

Behavior make__61697500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61697500 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[abus__w_54286180_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61697880();

   return behavior;
}

Behavior __61697300;

Behavior make__61697300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61697300 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58252_54661040_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61697460();

   return behavior;
}

Behavior __61696840;

Behavior make__61696840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61696840 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[dbus__w_54286480_channel__w0_58235_53928540_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61697000();

   return behavior;
}

Behavior __61696640;

Behavior make__61696640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61696640 = behavior;
   behavior->owner = (Object)channel__w0_58235_53928540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58253_54934920_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61696800();

   return behavior;
}

Scope makechannel__w0_58235_53928540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58235_53928540 = scope;
   scope->owner = (Object)layer1_58_84_53929040;
   scope->name = "channel_w0:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53948660();
   scope->inners[1] = maketrig__w_53948600();
   scope->inners[2] = makedbus__r_54125140();
   scope->inners[3] = makedbus__w_54286480();
   scope->inners[4] = makeabus__r_54286280();
   scope->inners[5] = makeabus__w_54286180();
   scope->inners[6] = makemem_54386700();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58236_53928240();
   scope->scopes[1] = makewaddr_58241_53952240();
   scope->scopes[2] = makerinc_58246_53951420();
   scope->scopes[3] = makewinc_58250_53950860();
   scope->scopes[4] = makerdec_58254_53950240();
   scope->scopes[5] = makewdec_58259_53949700();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50206860();
   scope->behaviors[1] = make__61700520();
   scope->behaviors[2] = make__61700320();
   scope->behaviors[3] = make__61699760();
   scope->behaviors[4] = make__61699560();
   scope->behaviors[5] = make__61699100();
   scope->behaviors[6] = make__61698900();
   scope->behaviors[7] = make__61698440();
   scope->behaviors[8] = make__61698240();
   scope->behaviors[9] = make__61697500();
   scope->behaviors[10] = make__61697300();
   scope->behaviors[11] = make__61696840();
   scope->behaviors[12] = make__61696640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58264_50206700;

SignalI reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makereg__0_52613700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__accum_58264_50206700;
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

Scope anum_58265_50205680;

Scope makeanum_58265_50205680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58265_50205680 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "anum:265";
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

Scope raddr_58267_50203700;

Scope makeraddr_58267_50203700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58267_50203700 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "raddr:267";
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

Scope waddr_58270_50257160;

Scope makewaddr_58270_50257160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58270_50257160 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "waddr:270";
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

Scope rinc_58273_50267820;

SignalI abus__r_52518660_rinc_58273_50267820_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_52518660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52518660_rinc_58273_50267820_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_58273_50267820;
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

Scope makerinc_58273_50267820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58273_50267820 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "rinc:273";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52518660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58277_52518340;

SignalI abus__w_52517800_winc_58277_52518340_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_52517800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52517800_winc_58277_52518340_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_58277_52518340;
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

Scope makewinc_58277_52518340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58277_52518340 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "winc:277";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52517800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58281_52517600;

SignalI abus__r_52517060_rdec_58281_52517600_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_52517060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52517060_rdec_58281_52517600_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_58281_52517600;
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

Scope makerdec_58281_52517600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58281_52517600 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "rdec:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52517060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58285_52516900;

SignalI abus__w_52516200_wdec_58285_52516900_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_52516200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52516200_wdec_58285_52516900_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_58285_52516900;
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

Scope makewdec_58285_52516900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58285_52516900 = scope;
   scope->owner = (Object)channel__accum_58264_50206700;
   scope->name = "wdec:285";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52516200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61694860;

Behavior make__61694860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61694860 = behavior;
   behavior->owner = (Object)channel__accum_58264_50206700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[reg__0_52613700_channel__accum_58264_50206700_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61695020();

   return behavior;
}

Behavior __61694660;

Behavior make__61694660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61694660 = behavior;
   behavior->owner = (Object)channel__accum_58264_50206700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58266_53664580_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61694820();

   return behavior;
}

Scope makechannel__accum_58264_50206700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58264_50206700 = scope;
   scope->owner = (Object)layer1_58_84_53929040;
   scope->name = "channel_accum:264";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52613700();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58265_50205680();
   scope->scopes[1] = makeraddr_58267_50203700();
   scope->scopes[2] = makewaddr_58270_50257160();
   scope->scopes[3] = makerinc_58273_50267820();
   scope->scopes[4] = makewinc_58277_52518340();
   scope->scopes[5] = makerdec_58281_52517600();
   scope->scopes[6] = makewdec_58285_52516900();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61694860();
   scope->behaviors[1] = make__61694660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58289_53043780;

SignalI lv0_53377040_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makelv0_53377040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_53377040_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58289_53043780;
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

SignalI av0_53478380_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeav0_53478380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_53478380_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58289_53043780;
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

SignalI rv_53676940_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makerv_53676940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_53676940_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58289_53043780;
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

SignalI lvok0_53676900_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makelvok0_53676900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53676900_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58289_53043780;
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

SignalI rvok_53676860_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makervok_53676860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_53676860_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58289_53043780;
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

SignalI run_53676820_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makerun_53676820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53676820_mac__n1_58289_53043780_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)mac__n1_58289_53043780;
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

Behavior __53140880;

Behavior make__53140880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53140880 = behavior;
   behavior->owner = (Object)mac__n1_58289_53043780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos = realloc(clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos[clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__53676260();

   return behavior;
}

Scope makemac__n1_58289_53043780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58289_53043780 = scope;
   scope->owner = (Object)layer1_58_84_53929040;
   scope->name = "mac_n1:289";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_53377040();
   scope->inners[1] = makeav0_53478380();
   scope->inners[2] = makerv_53676940();
   scope->inners[3] = makelvok0_53676900();
   scope->inners[4] = makervok_53676860();
   scope->inners[5] = makerun_53676820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53140880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58290_53140620;

SignalI reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makereg__0_53398060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__bias_58290_53140620;
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

Scope anum_58291_53139880;

Scope makeanum_58291_53139880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_53139880 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "anum:291";
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

Scope raddr_58293_53138760;

Scope makeraddr_58293_53138760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_53138760 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "raddr:293";
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

Scope waddr_58296_53137140;

Scope makewaddr_58296_53137140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_53137140 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "waddr:296";
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

Scope rinc_58299_53135480;

SignalI abus__r_53133720_rinc_58299_53135480_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_53133720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53133720_rinc_58299_53135480_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_58299_53135480;
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

Scope makerinc_58299_53135480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_53135480 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53133720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_53133340;

SignalI abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_53254660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_58302_53133340;
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

Behavior __61714520;

Behavior make__61714520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61714520 = behavior;
   behavior->owner = (Object)winc_58302_53133340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[abus__w_53254660_winc_58302_53133340_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61714680();

   return behavior;
}

Behavior __61714320;

Behavior make__61714320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61714320 = behavior;
   behavior->owner = (Object)winc_58302_53133340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58304_55183380_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61714480();

   return behavior;
}

Scope makewinc_58302_53133340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_53133340 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53254660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61714520();
   scope->behaviors[1] = make__61714320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_53253380;

SignalI abus__r_53252860_rdec_58305_53253380_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_53252860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53252860_rdec_58305_53253380_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_58305_53253380;
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

Scope makerdec_58305_53253380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_53253380 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53252860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_53252700;

SignalI abus__w_53252080_wdec_58309_53252700_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_53252080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53252080_wdec_58309_53252700_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_58309_53252700;
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

Scope makewdec_58309_53252700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_53252700 = scope;
   scope->owner = (Object)channel__bias_58290_53140620;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53252080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61717220;

Behavior make__61717220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61717220 = behavior;
   behavior->owner = (Object)channel__bias_58290_53140620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61717380();

   return behavior;
}

Behavior __61717020;

Behavior make__61717020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61717020 = behavior;
   behavior->owner = (Object)channel__bias_58290_53140620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58292_53878940_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61717180();

   return behavior;
}

Behavior __61716560;

Behavior make__61716560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61716560 = behavior;
   behavior->owner = (Object)channel__bias_58290_53140620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[reg__0_53398060_channel__bias_58290_53140620_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61716720();

   return behavior;
}

Behavior __61716360;

Behavior make__61716360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61716360 = behavior;
   behavior->owner = (Object)channel__bias_58290_53140620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58303_55183460_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61716520();

   return behavior;
}

Scope makechannel__bias_58290_53140620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58290_53140620 = scope;
   scope->owner = (Object)layer1_58_84_53929040;
   scope->name = "channel_bias:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53398060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_53139880();
   scope->scopes[1] = makeraddr_58293_53138760();
   scope->scopes[2] = makewaddr_58296_53137140();
   scope->scopes[3] = makerinc_58299_53135480();
   scope->scopes[4] = makewinc_58302_53133340();
   scope->scopes[5] = makerdec_58305_53253380();
   scope->scopes[6] = makewdec_58309_53252700();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61717220();
   scope->behaviors[1] = make__61717020();
   scope->behaviors[2] = make__61716560();
   scope->behaviors[3] = make__61716360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58313_54238160;

SignalI reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makereg__0_54393960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__z_58313_54238160;
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

Scope anum_58314_54237780;

Scope makeanum_58314_54237780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58314_54237780 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "anum:314";
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

Scope raddr_58316_54237060;

Scope makeraddr_58316_54237060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58316_54237060 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "raddr:316";
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

Scope waddr_58319_54236340;

Scope makewaddr_58319_54236340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58319_54236340 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "waddr:319";
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

Scope rinc_58322_54235380;

SignalI abus__r_54234980_rinc_58322_54235380_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_54234980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54234980_rinc_58322_54235380_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_58322_54235380;
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

Scope makerinc_58322_54235380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58322_54235380 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "rinc:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54234980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58325_54234840;

SignalI abus__w_54234140_winc_58325_54234840_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_54234140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54234140_winc_58325_54234840_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_58325_54234840;
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

Scope makewinc_58325_54234840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58325_54234840 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "winc:325";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54234140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58328_54233760;

SignalI abus__r_54233100_rdec_58328_54233760_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__r_54233100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54233100_rdec_58328_54233760_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_58328_54233760;
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

Scope makerdec_58328_54233760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58328_54233760 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "rdec:328";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_54233100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58332_54232980;

SignalI abus__w_54232560_wdec_58332_54232980_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makeabus__w_54232560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54232560_wdec_58332_54232980_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_58332_54232980;
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

Scope makewdec_58332_54232980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58332_54232980 = scope;
   scope->owner = (Object)channel__z_58313_54238160;
   scope->name = "wdec:332";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_54232560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61712940;

Behavior make__61712940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61712940 = behavior;
   behavior->owner = (Object)channel__z_58313_54238160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[reg__0_54393960_channel__z_58313_54238160_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61713100();

   return behavior;
}

Behavior __61712740;

Behavior make__61712740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61712740 = behavior;
   behavior->owner = (Object)channel__z_58313_54238160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   _58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   _58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[_58315_54179140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61712900();

   return behavior;
}

Scope makechannel__z_58313_54238160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58313_54238160 = scope;
   scope->owner = (Object)layer1_58_84_53929040;
   scope->name = "channel_z:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_54393960();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58314_54237780();
   scope->scopes[1] = makeraddr_58316_54237060();
   scope->scopes[2] = makewaddr_58319_54236340();
   scope->scopes[3] = makerinc_58322_54235380();
   scope->scopes[4] = makewinc_58325_54234840();
   scope->scopes[5] = makerdec_58328_54233760();
   scope->scopes[6] = makewdec_58332_54232980();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61712940();
   scope->behaviors[1] = make__61712740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58336_55120000;

SignalI lv0_47606140_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makelv0_47606140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47606140_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58336_55120000;
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

SignalI rv0_48256220_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makerv0_48256220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_48256220_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58336_55120000;
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

SignalI lvok0_48256060_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makelvok0_48256060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48256060_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58336_55120000;
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

SignalI rvok0_48256040_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makervok0_48256040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_48256040_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58336_55120000;
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

SignalI run_48255980_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740;

SignalI makerun_48255980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48255980_add__n_58336_55120000_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)add__n_58336_55120000;
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

Behavior __53334200;

Behavior make__53334200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53334200 = behavior;
   behavior->owner = (Object)add__n_58336_55120000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos = realloc(clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos[clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__48255660();

   return behavior;
}

Scope makeadd__n_58336_55120000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58336_55120000 = scope;
   scope->owner = (Object)layer1_58_84_53929040;
   scope->name = "add_n:336";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47606140();
   scope->inners[1] = makerv0_48256220();
   scope->inners[2] = makelvok0_48256060();
   scope->inners[3] = makervok0_48256040();
   scope->inners[4] = makerun_48255980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53334200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60273660;

Behavior make__60273660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60273660 = behavior;
   behavior->owner = (Object)layer1_58_84_53929040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos = realloc(clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos[clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__60095920();

   return behavior;
}

Behavior __60623020;

Behavior make__60623020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60623020 = behavior;
   behavior->owner = (Object)layer1_58_84_53929040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos = realloc(clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos[clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__60273540();

   return behavior;
}

Behavior __60903500;

Behavior make__60903500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60903500 = behavior;
   behavior->owner = (Object)layer1_58_84_53929040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos = realloc(clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->pos[clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__60622900();

   return behavior;
}

Behavior __61701560;

Behavior make__61701560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61701560 = behavior;
   behavior->owner = (Object)layer1_58_84_53929040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[value__z0_54344220_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[ack__a10_54661140_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61621920();

   return behavior;
}

Behavior __61701400;

Behavior make__61701400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61701400 = behavior;
   behavior->owner = (Object)layer1_58_84_53929040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[a_57787760_func0_58_8400_55133860_layer1_58_84_53929040_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61621860();

   return behavior;
}

Scope makelayer1_58_84_53929040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_53929040 = scope;
   scope->owner = (Object)layer1_58_840_60903180;
   scope->name = "layer1:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_57787620();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_53333940();
   scope->inners[1] = makeack__add_53333920();
   scope->inners[2] = make_58249_53437660();
   scope->inners[3] = make_58247_53437640();
   scope->inners[4] = make_58248_53437540();
   scope->inners[5] = make_58266_53664580();
   scope->inners[6] = make_58292_53878940();
   scope->inners[7] = make_58315_54179140();
   scope->inners[8] = makevalue__z0_54344220();
   scope->inners[9] = makevalue__a10_54661180();
   scope->inners[10] = makeflag__z0_54661160();
   scope->inners[11] = makeack__a10_54661140();
   scope->inners[12] = make_58251_54661120();
   scope->inners[13] = make_58252_54661040();
   scope->inners[14] = make_58253_54934920();
   scope->inners[15] = make_58303_55183460();
   scope->inners[16] = make_58304_55183380();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58235_53928540();
   scope->scopes[1] = makechannel__accum_58264_50206700();
   scope->scopes[2] = makemac__n1_58289_53043780();
   scope->scopes[3] = makechannel__bias_58290_53140620();
   scope->scopes[4] = makechannel__z_58313_54238160();
   scope->scopes[5] = makeadd__n_58336_55120000();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60273660();
   scope->behaviors[1] = make__60623020();
   scope->behaviors[2] = make__60903500();
   scope->behaviors[3] = make__61701560();
   scope->behaviors[4] = make__61701400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_60903180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_60903180 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60901240();
   systemT->inputs[1] = makerst_60901220();
   systemT->inputs[2] = makefill_60901200();
   systemT->inputs[3] = makereq_60901180();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_60901140();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer1_58_84_53929040();

   return systemT;
}