#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_51409440;

SignalI clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeclk_51405580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makerst_51405540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI req_51405500_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereq_51405500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_51405500_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI fill_51405480_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makefill_51405480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_51405480_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI _5815_51650020_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5815_51650020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_51650020_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeack__0_51649960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI _5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5813_51649940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

SignalI _5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5814_51649820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_840_51409440;
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

Block __57689520;

Block __57688760;

Block __57688600;

void code__57688600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55904420(),flag__z0_51080140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__57688600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57688600 = block;
   block->owner = (Object)__57688760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57688600;

   return block;
};

Block __57908760;

void code__57908760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55904280(),flag__z1_51080080_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__57908760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57908760 = block;
   block->owner = (Object)__57688760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57908760;

   return block;
};

void code__57688760() {
 code__57688600();
 code__57908760();
}

Block make__57688760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57688760 = block;
   block->owner = (Object)__57689520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57688760;

   return block;
};

Block __57689300;

void code__57689300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55904220(),flag__z0_51080140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55904160(),flag__z1_51080080_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__57689300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57689300 = block;
   block->owner = (Object)__57689520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57689300;

   return block;
};

void code__57689520() {
   {
      Value cond = ack__add_47725160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57688760();
   }
   else {
  code__57689300();
   }
      }
   }
}

Block make__57689520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57689520 = block;
   block->owner = (Object)__45696600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57689520;

   return block;
};

Block __45696160;

Block __45739560;

Block __45737600;

void code__45737600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a00_51001720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_5832_51000360______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903920(),ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__45737600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45737600 = block;
   block->owner = (Object)__45739560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45737600;

   return block;
};

Block __48272460;

void code__48272460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a01_51080160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_5833_51063100______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903780(),ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48272460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48272460 = block;
   block->owner = (Object)__45739560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48272460;

   return block;
};

void code__45739560() {
 code__45737600();
 code__48272460();
}

Block make__45739560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45739560 = block;
   block->owner = (Object)__45696160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45739560;

   return block;
};

void code__45696160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_51080140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = flag__z1_51080080_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45739560();
   }
      }
   }
}

Block make__45696160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45696160 = block;
   block->owner = (Object)__50134960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45696160;

   return block;
};

Block __50134780;

Block __50134560;

Block __50133840;

void code__50133840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903620(),_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50133840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50133840 = block;
   block->owner = (Object)__50134560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50133840;

   return block;
};

void code__50134560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55903700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50133840();
   }
      }
   }
}

Block make__50134560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50134560 = block;
   block->owner = (Object)__50134780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50134560;

   return block;
};

Block __50133020;

Block __50132480;

void code__50132480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903420(),_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50132480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50132480 = block;
   block->owner = (Object)__50133020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50132480;

   return block;
};

void code__50133020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55903520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50132480();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903360(),_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50133020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50133020 = block;
   block->owner = (Object)__50134780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50133020;

   return block;
};

Block __50130880;

Block __50129760;

void code__50129760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903100(),_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50129760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50129760 = block;
   block->owner = (Object)__50130880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50129760;

   return block;
};

void code__50130880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55903240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50129760();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55903040(),_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50130880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50130880 = block;
   block->owner = (Object)__50134780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50130880;

   return block;
};

Block __50127840;

Block __50127480;

Block __50159300;

void code__50159300() {
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
                  src0 = _58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55902720();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55902620(),_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55902560(),_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50159300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50159300 = block;
   block->owner = (Object)__50127480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50159300;

   return block;
};

void code__50127480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55902860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50159300();
   }
      }
   }
}

Block make__50127480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50127480 = block;
   block->owner = (Object)__50127840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50127480;

   return block;
};

Block __50577320;

Block __50576640;

void code__50576640() {
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
                  src0 = _58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55902340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55902240(),_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55926720(),_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50576640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50576640 = block;
   block->owner = (Object)__50577320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50576640;

   return block;
};

void code__50577320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55902480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50576640();
   }
      }
   }
}

Block make__50577320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50577320 = block;
   block->owner = (Object)__50127840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50577320;

   return block;
};

Block __50836420;

Block __50835420;

Block __50834680;

void code__50834680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55926460(),_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50834680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50834680 = block;
   block->owner = (Object)__50835420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50834680;

   return block;
};

Block __51062740;

void code__51062740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55926380(),_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51062740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51062740 = block;
   block->owner = (Object)__50835420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51062740;

   return block;
};

void code__50835420() {
{
      Value value = _58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__55926520())) {
    code__50834680();
         }
         else if (value2integer(value) == value2integer(make__55926440())) {
    code__51062740();
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
                  src0 = _58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55926260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50835420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50835420 = block;
   block->owner = (Object)__50836420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50835420;

   return block;
};

void code__50836420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55926640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50835420();
   }
      }
   }
}

Block make__50836420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50836420 = block;
   block->owner = (Object)__50127840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50836420;

   return block;
};

void code__50127840() {
 code__50127480();
 code__50577320();
 code__50836420();
}

Block make__50127840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50127840 = block;
   block->owner = (Object)__50134780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50127840;

   return block;
};

void code__50134780() {
 code__50134560();
 code__50133020();
 code__50130880();
   {
      Value cond = fill_51405480_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50127840();
   }
      }
   }
}

Block make__50134780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50134780 = block;
   block->owner = (Object)__51410540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50134780;

   return block;
};

Block __55662840;

void code__55662840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,z__value_52057700_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,z__value_56552440_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      src1 = ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55662840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55662840 = block;
   block->owner = (Object)__55658940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55662840;

   return block;
};

Block __55662760;

void code__55662760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,value__a00_51001720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,value__a01_51080160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55662760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55662760 = block;
   block->owner = (Object)__55658780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55662760;

   return block;
};

Block __52076260;

Block __47812600;

void code__47812600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,make_ref_rangeS(mem_51531540_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060,value2integer(abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value),value2integer(abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47812600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47812600 = block;
   block->owner = (Object)__52076260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47812600;

   return block;
};

void code__52076260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51531540_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47812600();
   }
      }
   }
}

Block make__52076260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52076260 = block;
   block->owner = (Object)__48403340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52076260;

   return block;
};

Block __55658120;

void code__55658120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55658120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55658120 = block;
   block->owner = (Object)__55657960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55658120;

   return block;
};

Block __55657920;

void code__55657920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55657920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55657920 = block;
   block->owner = (Object)__55657760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55657920;

   return block;
};

Block __55657420;

void code__55657420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55657420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55657420 = block;
   block->owner = (Object)__55657200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55657420;

   return block;
};

Block __55657160;

void code__55657160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55657160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55657160 = block;
   block->owner = (Object)__55657000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55657160;

   return block;
};

Block __55656700;

void code__55656700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55656700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55656700 = block;
   block->owner = (Object)__55656540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55656700;

   return block;
};

Block __55656500;

void code__55656500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55656500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55656500 = block;
   block->owner = (Object)__55697260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55656500;

   return block;
};

Block __55696860;

void code__55696860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55696860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55696860 = block;
   block->owner = (Object)__55696700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55696860;

   return block;
};

Block __55696660;

void code__55696660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55696660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55696660 = block;
   block->owner = (Object)__55696500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55696660;

   return block;
};

Block __55696100;

void code__55696100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55696100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55696100 = block;
   block->owner = (Object)__55695940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55696100;

   return block;
};

Block __55695900;

void code__55695900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55695900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695900 = block;
   block->owner = (Object)__55695740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695900;

   return block;
};

Block __55695440;

void code__55695440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55695440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695440 = block;
   block->owner = (Object)__55695280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695440;

   return block;
};

Block __55695240;

void code__55695240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55695240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695240 = block;
   block->owner = (Object)__55695080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695240;

   return block;
};

Block __50571760;

Block __50942920;

void code__50942920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,make_ref_rangeS(mem_49952960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060,value2integer(abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value),value2integer(abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50942920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50942920 = block;
   block->owner = (Object)__50571760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50942920;

   return block;
};

void code__50571760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49952960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50942920();
   }
      }
   }
}

Block make__50571760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50571760 = block;
   block->owner = (Object)__51255100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50571760;

   return block;
};

Block __55693520;

void code__55693520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55693520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55693520 = block;
   block->owner = (Object)__55693360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55693520;

   return block;
};

Block __55693320;

void code__55693320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55693320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55693320 = block;
   block->owner = (Object)__55693160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55693320;

   return block;
};

Block __55692840;

void code__55692840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55692840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55692840 = block;
   block->owner = (Object)__55692660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55692840;

   return block;
};

Block __55692600;

void code__55692600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55692600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55692600 = block;
   block->owner = (Object)__55692400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55692600;

   return block;
};

Block __55692040;

void code__55692040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55692040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55692040 = block;
   block->owner = (Object)__55691840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55692040;

   return block;
};

Block __55691800;

void code__55691800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55691800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55691800 = block;
   block->owner = (Object)__55691640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55691800;

   return block;
};

Block __55691340;

void code__55691340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55691340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55691340 = block;
   block->owner = (Object)__55691180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55691340;

   return block;
};

Block __55691140;

void code__55691140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55691140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55691140 = block;
   block->owner = (Object)__55690980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55691140;

   return block;
};

Block __55690660;

void code__55690660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55690660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55690660 = block;
   block->owner = (Object)__55690480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55690660;

   return block;
};

Block __55690420;

void code__55690420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55690420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55690420 = block;
   block->owner = (Object)__55690200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55690420;

   return block;
};

Block __55689820;

void code__55689820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55689820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55689820 = block;
   block->owner = (Object)__55689660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55689820;

   return block;
};

Block __55689620;

void code__55689620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55689620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55689620 = block;
   block->owner = (Object)__55689460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55689620;

   return block;
};

Block __55712500;

void code__55712500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55712500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55712500 = block;
   block->owner = (Object)__55712280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55712500;

   return block;
};

Block __55712240;

void code__55712240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55712240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55712240 = block;
   block->owner = (Object)__55712080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55712240;

   return block;
};

Block __55711780;

void code__55711780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55711780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55711780 = block;
   block->owner = (Object)__55711620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55711780;

   return block;
};

Block __55711580;

void code__55711580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55711580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55711580 = block;
   block->owner = (Object)__55711420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55711580;

   return block;
};

Block __48336760;

Block __48336520;

Block __48335840;

void code__48335840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872980(),_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48335840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48335840 = block;
   block->owner = (Object)__48336520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48335840;

   return block;
};

void code__48336520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55873080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48335840();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872900(),_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48336520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48336520 = block;
   block->owner = (Object)__48336760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48336520;

   return block;
};

Block __48334680;

Block __48334140;

void code__48334140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872720(),_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48334140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48334140 = block;
   block->owner = (Object)__48334680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48334140;

   return block;
};

void code__48334680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55872820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48334140();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872620(),_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48334680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48334680 = block;
   block->owner = (Object)__48336760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48334680;

   return block;
};

Block __48357060;

Block __48356600;

void code__48356600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872460(),_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48356600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48356600 = block;
   block->owner = (Object)__48357060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48356600;

   return block;
};

void code__48357060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55872540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48356600();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872400(),_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48357060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48357060 = block;
   block->owner = (Object)__48336760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48357060;

   return block;
};

Block __49251360;

Block __49251040;

Block __49250720;

Block __49856460;

void code__49856460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_51650020_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,rv_48337060_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55871780(),rvok_48336980_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__49856460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49856460 = block;
   block->owner = (Object)__49250720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49856460;

   return block;
};

void code__49250720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55871940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49856460();
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
                  src0 = _5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55871660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55871560(),_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__49250720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49250720 = block;
   block->owner = (Object)__49251040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49250720;

   return block;
};

void code__49251040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55872040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49250720();
   }
      }
   }
}

Block make__49251040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49251040 = block;
   block->owner = (Object)__49251360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49251040;

   return block;
};

Block __50072300;

Block __50071980;

Block __50071560;

void code__50071560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,lv0_46001440_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55871180(),lvok0_48337040_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50071560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50071560 = block;
   block->owner = (Object)__50071980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50071560;

   return block;
};

void code__50071980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55871360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50071560();
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
                  src0 = _5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55871000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55870880(),_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50071980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50071980 = block;
   block->owner = (Object)__50072300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50071980;

   return block;
};

void code__50072300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55871480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50071980();
   }
      }
   }
}

Block make__50072300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50072300 = block;
   block->owner = (Object)__49251360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50072300;

   return block;
};

Block __50489860;

Block __50489320;

Block __50489160;

void code__50489160() {
}

Block make__50489160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50489160 = block;
   block->owner = (Object)__50489320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50489160;

   return block;
};

Block __51318880;

void code__51318880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47865660_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51318880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51318880 = block;
   block->owner = (Object)__50489320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51318880;

   return block;
};

void code__50489320() {
 code__50489160();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47865660_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
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
                              src0 = lv0_46001440_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48337060_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55870240();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47865660_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__51318880();
}

Block make__50489320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50489320 = block;
   block->owner = (Object)__50489860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50489320;

   return block;
};

void code__50489860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55870700(),ack__mac_47725180_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55870580(),run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__50489320();
}

Block make__50489860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50489860 = block;
   block->owner = (Object)__49251360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50489860;

   return block;
};

Block __51576760;

Block __51576360;

Block __51575960;

void code__51575960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,lv1_47703160_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55869780(),lvok1_48337020_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51575960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51575960 = block;
   block->owner = (Object)__51576360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51575960;

   return block;
};

void code__51576360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55869940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51575960();
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
                  src0 = _58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55869660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55869560(),_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51576360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51576360 = block;
   block->owner = (Object)__51576760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51576360;

   return block;
};

void code__51576760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55870040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51576360();
   }
      }
   }
}

Block make__51576760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51576760 = block;
   block->owner = (Object)__49251360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51576760;

   return block;
};

Block __51832360;

Block __51831860;

Block __51831680;

void code__51831680() {
}

Block make__51831680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51831680 = block;
   block->owner = (Object)__51831860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51831680;

   return block;
};

Block __48580320;

void code__48580320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_48064080_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48580320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48580320 = block;
   block->owner = (Object)__51831860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48580320;

   return block;
};

void code__51831860() {
 code__51831680();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_48064080_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
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
                              src0 = lv1_47703160_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48337060_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55909880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_48064080_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__48580320();
}

Block make__51831860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51831860 = block;
   block->owner = (Object)__51832360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51831860;

   return block;
};

void code__51832360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55910320(),ack__mac_47725180_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55910260(),run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__51831860();
}

Block make__51832360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51832360 = block;
   block->owner = (Object)__49251360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51832360;

   return block;
};

void code__49251360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872120(),run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__49251040();
 code__50072300();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48337040_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = rvok_48336980_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50489860();
   }
      }
   }
 code__51576760();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48337020_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = rvok_48336980_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51832360();
   }
      }
   }
}

Block make__49251360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49251360 = block;
   block->owner = (Object)__48336760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49251360;

   return block;
};

Block __48355320;

void code__48355320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55909600(),rvok_48336980_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55909540(),lvok0_48337040_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55909420(),av0_47865660_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55909360(),lvok1_48337020_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55909300(),av1_48064080_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__48355320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48355320 = block;
   block->owner = (Object)__48336760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48355320;

   return block;
};

void code__48336760() {
 code__48336520();
 code__48334680();
 code__48357060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872340(),ack__mac_47725180_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55872280(),run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_51405500_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49251360();
   }
   else {
  code__48355320();
   }
      }
   }
}

Block make__48336760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48336760 = block;
   block->owner = (Object)__49946840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48336760;

   return block;
};

Block __55709460;

void code__55709460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55709460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55709460 = block;
   block->owner = (Object)__55709300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55709460;

   return block;
};

Block __55709260;

void code__55709260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55709260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55709260 = block;
   block->owner = (Object)__55709100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55709260;

   return block;
};

Block __55708800;

void code__55708800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55708800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55708800 = block;
   block->owner = (Object)__55708640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55708800;

   return block;
};

Block __55708600;

void code__55708600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55708600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55708600 = block;
   block->owner = (Object)__55708380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55708600;

   return block;
};

Block __55707940;

void code__55707940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55707940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55707940 = block;
   block->owner = (Object)__55707780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55707940;

   return block;
};

Block __55707740;

void code__55707740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55707740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55707740 = block;
   block->owner = (Object)__55707580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55707740;

   return block;
};

Block __55707280;

void code__55707280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55707280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55707280 = block;
   block->owner = (Object)__55707120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55707280;

   return block;
};

Block __55707080;

void code__55707080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55707080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55707080 = block;
   block->owner = (Object)__55706920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55707080;

   return block;
};

Block __55746220;

void code__55746220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55746220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55746220 = block;
   block->owner = (Object)__55746060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55746220;

   return block;
};

Block __55746020;

void code__55746020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55746020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55746020 = block;
   block->owner = (Object)__55745860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55746020;

   return block;
};

Block __55744760;

void code__55744760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55744760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55744760 = block;
   block->owner = (Object)__55744540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55744760;

   return block;
};

Block __55744500;

void code__55744500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55744500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55744500 = block;
   block->owner = (Object)__55744340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55744500;

   return block;
};

Block __55744040;

void code__55744040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55744040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55744040 = block;
   block->owner = (Object)__55743880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55744040;

   return block;
};

Block __55743840;

void code__55743840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__55743840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55743840 = block;
   block->owner = (Object)__55743680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55743840;

   return block;
};

Block __49254380;

Block __49252660;

Block __49252260;

void code__49252260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,lv0_47990300_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55907000(),lvok0_49254660_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__49252260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49252260 = block;
   block->owner = (Object)__49252660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49252260;

   return block;
};

Block __50128720;

void code__50128720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,rv0_48500800_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55906860(),rvok0_49254620_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50128720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50128720 = block;
   block->owner = (Object)__49252660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50128720;

   return block;
};

Block __50539760;

Block __50539160;

void code__50539160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47990300_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      src1 = rv0_48500800_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__50539160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50539160 = block;
   block->owner = (Object)__50539760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50539160;

   return block;
};

void code__50539760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55906700(),run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55906640(),ack__add_47725160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__50539160();
}

Block make__50539760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50539760 = block;
   block->owner = (Object)__49252660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50539760;

   return block;
};

Block __51064860;

void code__51064860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,lv1_48251640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55906320(),lvok1_49254640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51064860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51064860 = block;
   block->owner = (Object)__49252660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51064860;

   return block;
};

Block __51409660;

void code__51409660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,rv1_49254680_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55906180(),rvok1_49254600_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51409660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51409660 = block;
   block->owner = (Object)__49252660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51409660;

   return block;
};

Block __51649160;

Block __51648540;

void code__51648540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_48251640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      src1 = rv1_49254680_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51648540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51648540 = block;
   block->owner = (Object)__51649160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51648540;

   return block;
};

void code__51649160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55906020(),run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55905960(),ack__add_47725160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__51648540();
}

Block make__51649160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51649160 = block;
   block->owner = (Object)__49252660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51649160;

   return block;
};

void code__49252660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55907140(),run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
 code__49252260();
 code__50128720();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49254660_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = rvok0_49254620_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50539760();
   }
      }
   }
 code__51064860();
 code__51409660();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49254640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = rvok1_49254600_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51649160();
   }
      }
   }
}

Block make__49252660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49252660 = block;
   block->owner = (Object)__49254380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49252660;

   return block;
};

Block __49253620;

void code__49253620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55905700(),lvok0_49254660_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55905600(),rvok0_49254620_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55905540(),lvok1_49254640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55905440(),rvok1_49254600_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__49253620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49253620 = block;
   block->owner = (Object)__49254380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49253620;

   return block;
};

void code__49254380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55907400(),ack__add_47725160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55907300(),run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_47725180_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         src1 = run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49252660();
   }
   else {
  code__49253620();
   }
      }
   }
}

Block make__49254380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49254380 = block;
   block->owner = (Object)__47725380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49254380;

   return block;
};

Value make__55873080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55872980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55872900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55872820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55872720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55872620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55872540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55872460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55872400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55872340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55872280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55872120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55872040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55871940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55871780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55871660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55871560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55871480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55871360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55871180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55871000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55870880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55870700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55870580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55870240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55870040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55869940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55869780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55869660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55869560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55910320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55910260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55909880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55909600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55909540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55909420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55909360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55909300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55907400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55907300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55907140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55907000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55906860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55906700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55906640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55906320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55906180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55906020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55905960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55905700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55905600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55905540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55905440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55904420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55904280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55904220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55904160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55903920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55903780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55903700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55903620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55903520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55903420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55903360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55903240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55903100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55903040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55902860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55902720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55902620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55902560() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55902480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55902340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55902240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55926720() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55926640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55926520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55926460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55926440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55926380() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55926260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_51182840;

SignalI ack__mac_47725180_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeack__mac_47725180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_47725180_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI ack__add_47725160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeack__add_47725160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_47725160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5897_47913880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5895_47913660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5896_47913480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58126_48205160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58124_48205140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58125_48205040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58143_48470800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58144_49357760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58177_49933100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58178_50130660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
   signalI->name = ":178";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58207_50404780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58208_50537480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
   signalI->name = ":208";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makevalue__z0_50721900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makevalue__z1_50833240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI value__a00_51001720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makevalue__a00_51001720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a00_51001720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI value__a01_51080160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makevalue__a01_51080160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a01_51080160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI flag__z0_51080140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeflag__z0_51080140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_51080140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI flag__z1_51080080_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeflag__z1_51080080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_51080080_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeack__a00_51080060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeack__a01_51080000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_5899_51079980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58100_51079820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58101_51254280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58128_51254260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58129_51254000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58130_51429400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58192_51555120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
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

SignalI _58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58193_51705660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
   signalI->name = ":193";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI make_58194_51705580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)layer0_58_84_51182840;
   signalI->name = ":194";
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

SystemI func0_46251120;

SystemI makefunc0_46251120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_46251120 = systemI;
   systemI->owner = (Object)layer0_58_84_51182840;
   systemI->name = "func0";
   systemI->system = func0_58_840_51703000;

   return systemI;
};

SystemI func1_56668860;

SystemI makefunc1_56668860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_56668860 = systemI;
   systemI->owner = (Object)layer0_58_84_51182840;
   systemI->name = "func1";
   systemI->system = func1_58_840_56468520;

   return systemI;
};

Scope channel__w0_5883_51182540;

SignalI trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI maketrig__r_51179700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

SignalI trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI maketrig__w_51179680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

SignalI dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makedbus__r_51299780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

SignalI dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makedbus__w_51460800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

SignalI abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_51460720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

SignalI abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_51460640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

SignalI mem_51531540_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makemem_51531540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51531540_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w0_5883_51182540;
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

Scope raddr_5884_51182240;

Scope makeraddr_5884_51182240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_51182240 = scope;
   scope->owner = (Object)channel__w0_5883_51182540;
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

Scope waddr_5889_51181820;

Scope makewaddr_5889_51181820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_51181820 = scope;
   scope->owner = (Object)channel__w0_5883_51182540;
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

Scope rinc_5894_51181400;

Scope makerinc_5894_51181400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_51181400 = scope;
   scope->owner = (Object)channel__w0_5883_51182540;
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

Scope winc_5898_51180980;

Scope makewinc_5898_51180980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_51180980 = scope;
   scope->owner = (Object)channel__w0_5883_51182540;
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

Scope rdec_58102_51180560;

Scope makerdec_58102_51180560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_51180560 = scope;
   scope->owner = (Object)channel__w0_5883_51182540;
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

Scope wdec_58107_51180140;

Scope makewdec_58107_51180140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_51180140 = scope;
   scope->owner = (Object)channel__w0_5883_51182540;
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

Behavior __48403340;

Behavior make__48403340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48403340 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_neg += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->neg = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->neg,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_neg*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->neg[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_neg-1] = (Object)behavior;
   behavior->block = make__52076260();

   return behavior;
}

Behavior __55657960;

Behavior make__55657960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55657960 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[dbus__r_51299780_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55658120();

   return behavior;
}

Behavior __55657760;

Behavior make__55657760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55657760 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_5897_47913880_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55657920();

   return behavior;
}

Behavior __55657200;

Behavior make__55657200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55657200 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[trig__r_51179700_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55657420();

   return behavior;
}

Behavior __55657000;

Behavior make__55657000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55657000 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_5895_47913660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55657160();

   return behavior;
}

Behavior __55656540;

Behavior make__55656540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55656540 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[abus__r_51460720_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55656700();

   return behavior;
}

Behavior __55697260;

Behavior make__55697260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55697260 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_5896_47913480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55656500();

   return behavior;
}

Behavior __55696700;

Behavior make__55696700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55696700 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[trig__w_51179680_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55696860();

   return behavior;
}

Behavior __55696500;

Behavior make__55696500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55696500 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_5899_51079980_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55696660();

   return behavior;
}

Behavior __55695940;

Behavior make__55695940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55695940 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[abus__w_51460640_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55696100();

   return behavior;
}

Behavior __55695740;

Behavior make__55695740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55695740 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58100_51079820_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55695900();

   return behavior;
}

Behavior __55695280;

Behavior make__55695280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55695280 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[dbus__w_51460800_channel__w0_5883_51182540_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55695440();

   return behavior;
}

Behavior __55695080;

Behavior make__55695080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55695080 = behavior;
   behavior->owner = (Object)channel__w0_5883_51182540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58101_51254280_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55695240();

   return behavior;
}

Scope makechannel__w0_5883_51182540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_51182540 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51179700();
   scope->inners[1] = maketrig__w_51179680();
   scope->inners[2] = makedbus__r_51299780();
   scope->inners[3] = makedbus__w_51460800();
   scope->inners[4] = makeabus__r_51460720();
   scope->inners[5] = makeabus__w_51460640();
   scope->inners[6] = makemem_51531540();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_51182240();
   scope->scopes[1] = makewaddr_5889_51181820();
   scope->scopes[2] = makerinc_5894_51181400();
   scope->scopes[3] = makewinc_5898_51180980();
   scope->scopes[4] = makerdec_58102_51180560();
   scope->scopes[5] = makewdec_58107_51180140();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48403340();
   scope->behaviors[1] = make__55657960();
   scope->behaviors[2] = make__55657760();
   scope->behaviors[3] = make__55657200();
   scope->behaviors[4] = make__55657000();
   scope->behaviors[5] = make__55656540();
   scope->behaviors[6] = make__55697260();
   scope->behaviors[7] = make__55696700();
   scope->behaviors[8] = make__55696500();
   scope->behaviors[9] = make__55695940();
   scope->behaviors[10] = make__55695740();
   scope->behaviors[11] = make__55695280();
   scope->behaviors[12] = make__55695080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_48402860;

SignalI trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI maketrig__r_48414960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

SignalI trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI maketrig__w_48414920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

SignalI dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makedbus__r_49781660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

SignalI dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makedbus__w_49851280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

SignalI abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_49851200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

SignalI abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_49851120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

SignalI mem_49952960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makemem_49952960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49952960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__w1_58112_48402860;
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

Scope raddr_58113_48402060;

Scope makeraddr_58113_48402060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_48402060 = scope;
   scope->owner = (Object)channel__w1_58112_48402860;
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

Scope waddr_58118_48400940;

Scope makewaddr_58118_48400940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_48400940 = scope;
   scope->owner = (Object)channel__w1_58112_48402860;
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

Scope rinc_58123_48420840;

Scope makerinc_58123_48420840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_48420840 = scope;
   scope->owner = (Object)channel__w1_58112_48402860;
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

Scope winc_58127_48416820;

Scope makewinc_58127_48416820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_48416820 = scope;
   scope->owner = (Object)channel__w1_58112_48402860;
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

Scope rdec_58131_48416280;

Scope makerdec_58131_48416280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_48416280 = scope;
   scope->owner = (Object)channel__w1_58112_48402860;
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

Scope wdec_58136_48415660;

Scope makewdec_58136_48415660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_48415660 = scope;
   scope->owner = (Object)channel__w1_58112_48402860;
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

Behavior __51255100;

Behavior make__51255100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51255100 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_neg += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->neg = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->neg,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_neg*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->neg[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_neg-1] = (Object)behavior;
   behavior->block = make__50571760();

   return behavior;
}

Behavior __55693360;

Behavior make__55693360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55693360 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[dbus__r_49781660_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55693520();

   return behavior;
}

Behavior __55693160;

Behavior make__55693160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55693160 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58126_48205160_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55693320();

   return behavior;
}

Behavior __55692660;

Behavior make__55692660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55692660 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[trig__r_48414960_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55692840();

   return behavior;
}

Behavior __55692400;

Behavior make__55692400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55692400 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58124_48205140_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55692600();

   return behavior;
}

Behavior __55691840;

Behavior make__55691840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55691840 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[abus__r_49851200_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55692040();

   return behavior;
}

Behavior __55691640;

Behavior make__55691640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55691640 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58125_48205040_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55691800();

   return behavior;
}

Behavior __55691180;

Behavior make__55691180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55691180 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[trig__w_48414920_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55691340();

   return behavior;
}

Behavior __55690980;

Behavior make__55690980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55690980 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58128_51254260_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55691140();

   return behavior;
}

Behavior __55690480;

Behavior make__55690480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55690480 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[abus__w_49851120_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55690660();

   return behavior;
}

Behavior __55690200;

Behavior make__55690200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55690200 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58129_51254000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55690420();

   return behavior;
}

Behavior __55689660;

Behavior make__55689660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55689660 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[dbus__w_49851280_channel__w1_58112_48402860_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55689820();

   return behavior;
}

Behavior __55689460;

Behavior make__55689460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55689460 = behavior;
   behavior->owner = (Object)channel__w1_58112_48402860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58130_51429400_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55689620();

   return behavior;
}

Scope makechannel__w1_58112_48402860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_48402860 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48414960();
   scope->inners[1] = maketrig__w_48414920();
   scope->inners[2] = makedbus__r_49781660();
   scope->inners[3] = makedbus__w_49851280();
   scope->inners[4] = makeabus__r_49851200();
   scope->inners[5] = makeabus__w_49851120();
   scope->inners[6] = makemem_49952960();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_48402060();
   scope->scopes[1] = makewaddr_58118_48400940();
   scope->scopes[2] = makerinc_58123_48420840();
   scope->scopes[3] = makewinc_58127_48416820();
   scope->scopes[4] = makerdec_58131_48416280();
   scope->scopes[5] = makewdec_58136_48415660();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51255100();
   scope->behaviors[1] = make__55693360();
   scope->behaviors[2] = make__55693160();
   scope->behaviors[3] = make__55692660();
   scope->behaviors[4] = make__55692400();
   scope->behaviors[5] = make__55691840();
   scope->behaviors[6] = make__55691640();
   scope->behaviors[7] = make__55691180();
   scope->behaviors[8] = make__55690980();
   scope->behaviors[9] = make__55690480();
   scope->behaviors[10] = make__55690200();
   scope->behaviors[11] = make__55689660();
   scope->behaviors[12] = make__55689460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_51254920;

SignalI reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereg__0_51435280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__accum_58141_51254920;
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

SignalI reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereg__1_51496380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__accum_58141_51254920;
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

Scope anum_58142_51254620;

Scope makeanum_58142_51254620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_51254620 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
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

Scope raddr_58145_51254200;

Scope makeraddr_58145_51254200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_51254200 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
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

Scope waddr_58149_51253780;

Scope makewaddr_58149_51253780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_51253780 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
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

Scope rinc_58153_51253360;

SignalI abus__r_51252880_rinc_58153_51253360_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_51252880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51252880_rinc_58153_51253360_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rinc_58153_51253360;
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

Scope makerinc_58153_51253360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_51253360 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51252880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_51252760;

SignalI abus__w_51252380_winc_58158_51252760_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_51252380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51252380_winc_58158_51252760_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)winc_58158_51252760;
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

Scope makewinc_58158_51252760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_51252760 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51252380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_51252260;

SignalI abus__r_51251880_rdec_58163_51252260_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_51251880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51251880_rdec_58163_51252260_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rdec_58163_51252260;
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

Scope makerdec_58163_51252260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_51252260 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51251880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_51251760;

SignalI abus__w_51251380_wdec_58168_51251760_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_51251380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51251380_wdec_58168_51251760_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)wdec_58168_51251760;
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

Scope makewdec_58168_51251760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_51251760 = scope;
   scope->owner = (Object)channel__accum_58141_51254920;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51251380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55712280;

Behavior make__55712280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55712280 = behavior;
   behavior->owner = (Object)channel__accum_58141_51254920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__0_51435280_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55712500();

   return behavior;
}

Behavior __55712080;

Behavior make__55712080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55712080 = behavior;
   behavior->owner = (Object)channel__accum_58141_51254920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58143_48470800_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55712240();

   return behavior;
}

Behavior __55711620;

Behavior make__55711620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55711620 = behavior;
   behavior->owner = (Object)channel__accum_58141_51254920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__1_51496380_channel__accum_58141_51254920_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55711780();

   return behavior;
}

Behavior __55711420;

Behavior make__55711420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55711420 = behavior;
   behavior->owner = (Object)channel__accum_58141_51254920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58144_49357760_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55711580();

   return behavior;
}

Scope makechannel__accum_58141_51254920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_51254920 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51435280();
   scope->inners[1] = makereg__1_51496380();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_51254620();
   scope->scopes[1] = makeraddr_58145_51254200();
   scope->scopes[2] = makewaddr_58149_51253780();
   scope->scopes[3] = makerinc_58153_51253360();
   scope->scopes[4] = makewinc_58158_51252760();
   scope->scopes[5] = makerdec_58163_51252260();
   scope->scopes[6] = makewdec_58168_51251760();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55712280();
   scope->behaviors[1] = make__55712080();
   scope->behaviors[2] = make__55711620();
   scope->behaviors[3] = make__55711420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_52075520;

SignalI lv0_46001440_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelv0_46001440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_46001440_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI lv1_47703160_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelv1_47703160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47703160_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI av0_47865660_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeav0_47865660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47865660_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI av1_48064080_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeav1_48064080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_48064080_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI rv_48337060_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makerv_48337060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48337060_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI lvok0_48337040_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelvok0_48337040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48337040_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI lvok1_48337020_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelvok1_48337020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48337020_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI rvok_48336980_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makervok_48336980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48336980_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

SignalI run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makerun_48336960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48336960_mac__n1_58173_52075520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)mac__n1_58173_52075520;
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

Behavior __49946840;

Behavior make__49946840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49946840 = behavior;
   behavior->owner = (Object)mac__n1_58173_52075520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos-1] = (Object)behavior;
   behavior->block = make__48336760();

   return behavior;
}

Scope makemac__n1_58173_52075520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_52075520 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_46001440();
   scope->inners[1] = makelv1_47703160();
   scope->inners[2] = makeav0_47865660();
   scope->inners[3] = makeav1_48064080();
   scope->inners[4] = makerv_48337060();
   scope->inners[5] = makelvok0_48337040();
   scope->inners[6] = makelvok1_48337020();
   scope->inners[7] = makervok_48336980();
   scope->inners[8] = makerun_48336960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49946840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58175_49946720;

SignalI reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereg__0_50154580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__bias_58175_49946720;
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

SignalI reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereg__1_50400160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__bias_58175_49946720;
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

Scope anum_58176_50044640;

Scope makeanum_58176_50044640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58176_50044640 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "anum:176";
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

Scope raddr_58179_50044160;

Scope makeraddr_58179_50044160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58179_50044160 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "raddr:179";
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

Scope waddr_58183_50043700;

Scope makewaddr_58183_50043700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58183_50043700 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "waddr:183";
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

Scope rinc_58187_50043200;

SignalI abus__r_50042740_rinc_58187_50043200_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_50042740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50042740_rinc_58187_50043200_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rinc_58187_50043200;
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

Scope makerinc_58187_50043200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58187_50043200 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "rinc:187";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50042740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58191_50042620;

SignalI abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_50042140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)winc_58191_50042620;
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

Behavior __55746060;

Behavior make__55746060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55746060 = behavior;
   behavior->owner = (Object)winc_58191_50042620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[abus__w_50042140_winc_58191_50042620_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55746220();

   return behavior;
}

Behavior __55745860;

Behavior make__55745860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55745860 = behavior;
   behavior->owner = (Object)winc_58191_50042620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58194_51705580_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55746020();

   return behavior;
}

Scope makewinc_58191_50042620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58191_50042620 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "winc:191";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50042140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55746060();
   scope->behaviors[1] = make__55745860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58195_50041740;

SignalI abus__r_50041280_rdec_58195_50041740_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_50041280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50041280_rdec_58195_50041740_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rdec_58195_50041740;
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

Scope makerdec_58195_50041740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58195_50041740 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "rdec:195";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50041280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58200_50041160;

SignalI abus__w_50040740_wdec_58200_50041160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_50040740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50040740_wdec_58200_50041160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)wdec_58200_50041160;
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

Scope makewdec_58200_50041160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58200_50041160 = scope;
   scope->owner = (Object)channel__bias_58175_49946720;
   scope->name = "wdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50040740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55709300;

Behavior make__55709300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55709300 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55709460();

   return behavior;
}

Behavior __55709100;

Behavior make__55709100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55709100 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58177_49933100_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55709260();

   return behavior;
}

Behavior __55708640;

Behavior make__55708640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55708640 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55708800();

   return behavior;
}

Behavior __55708380;

Behavior make__55708380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55708380 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58178_50130660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55708600();

   return behavior;
}

Behavior __55707780;

Behavior make__55707780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55707780 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__0_50154580_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55707940();

   return behavior;
}

Behavior __55707580;

Behavior make__55707580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55707580 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58192_51555120_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55707740();

   return behavior;
}

Behavior __55707120;

Behavior make__55707120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55707120 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__1_50400160_channel__bias_58175_49946720_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55707280();

   return behavior;
}

Behavior __55706920;

Behavior make__55706920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55706920 = behavior;
   behavior->owner = (Object)channel__bias_58175_49946720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58193_51705660_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55707080();

   return behavior;
}

Scope makechannel__bias_58175_49946720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58175_49946720 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "channel_bias:175";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50154580();
   scope->inners[1] = makereg__1_50400160();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58176_50044640();
   scope->scopes[1] = makeraddr_58179_50044160();
   scope->scopes[2] = makewaddr_58183_50043700();
   scope->scopes[3] = makerinc_58187_50043200();
   scope->scopes[4] = makewinc_58191_50042620();
   scope->scopes[5] = makerdec_58195_50041740();
   scope->scopes[6] = makewdec_58200_50041160();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55709300();
   scope->behaviors[1] = make__55709100();
   scope->behaviors[2] = make__55708640();
   scope->behaviors[3] = make__55708380();
   scope->behaviors[4] = make__55707780();
   scope->behaviors[5] = make__55707580();
   scope->behaviors[6] = make__55707120();
   scope->behaviors[7] = make__55706920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58205_51485300;

SignalI reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereg__0_51570940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__z_58205_51485300;
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

SignalI reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makereg__1_51702540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__z_58205_51485300;
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

Scope anum_58206_51484780;

Scope makeanum_58206_51484780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58206_51484780 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "anum:206";
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

Scope raddr_58209_51484120;

Scope makeraddr_58209_51484120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58209_51484120 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "raddr:209";
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

Scope waddr_58213_51483700;

Scope makewaddr_58213_51483700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58213_51483700 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "waddr:213";
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

Scope rinc_58217_51483280;

SignalI abus__r_51482700_rinc_58217_51483280_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_51482700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51482700_rinc_58217_51483280_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rinc_58217_51483280;
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

Scope makerinc_58217_51483280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_51483280 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "rinc:217";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51482700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58221_51482580;

SignalI abus__w_51482100_winc_58221_51482580_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_51482100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51482100_winc_58221_51482580_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)winc_58221_51482580;
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

Scope makewinc_58221_51482580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58221_51482580 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "winc:221";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51482100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58225_51481980;

SignalI abus__r_51481600_rdec_58225_51481980_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__r_51481600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51481600_rdec_58225_51481980_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rdec_58225_51481980;
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

Scope makerdec_58225_51481980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58225_51481980 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "rdec:225";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51481600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58230_51481480;

SignalI abus__w_51481100_wdec_58230_51481480_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makeabus__w_51481100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51481100_wdec_58230_51481480_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)wdec_58230_51481480;
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

Scope makewdec_58230_51481480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58230_51481480 = scope;
   scope->owner = (Object)channel__z_58205_51485300;
   scope->name = "wdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51481100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55744540;

Behavior make__55744540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55744540 = behavior;
   behavior->owner = (Object)channel__z_58205_51485300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__0_51570940_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55744760();

   return behavior;
}

Behavior __55744340;

Behavior make__55744340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55744340 = behavior;
   behavior->owner = (Object)channel__z_58205_51485300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58207_50404780_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55744500();

   return behavior;
}

Behavior __55743880;

Behavior make__55743880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55743880 = behavior;
   behavior->owner = (Object)channel__z_58205_51485300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[reg__1_51702540_channel__z_58205_51485300_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55744040();

   return behavior;
}

Behavior __55743680;

Behavior make__55743680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55743680 = behavior;
   behavior->owner = (Object)channel__z_58205_51485300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_58208_50537480_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55743840();

   return behavior;
}

Scope makechannel__z_58205_51485300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58205_51485300 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "channel_z:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51570940();
   scope->inners[1] = makereg__1_51702540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58206_51484780();
   scope->scopes[1] = makeraddr_58209_51484120();
   scope->scopes[2] = makewaddr_58213_51483700();
   scope->scopes[3] = makerinc_58217_51483280();
   scope->scopes[4] = makewinc_58221_51482580();
   scope->scopes[5] = makerdec_58225_51481980();
   scope->scopes[6] = makewdec_58230_51481480();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55744540();
   scope->behaviors[1] = make__55744340();
   scope->behaviors[2] = make__55743880();
   scope->behaviors[3] = make__55743680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58235_47753220;

SignalI lv0_47990300_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelv0_47990300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47990300_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI lv1_48251640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelv1_48251640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_48251640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI rv0_48500800_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makerv0_48500800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_48500800_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI rv1_49254680_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makerv1_49254680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_49254680_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI lvok0_49254660_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelvok0_49254660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49254660_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI lvok1_49254640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makelvok1_49254640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49254640_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI rvok0_49254620_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makervok0_49254620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49254620_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI rvok1_49254600_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makervok1_49254600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_49254600_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

SignalI run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060;

SignalI makerun_49254580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49254580_add__n_58235_47753220_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)add__n_58235_47753220;
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

Behavior __47725380;

Behavior make__47725380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47725380 = behavior;
   behavior->owner = (Object)add__n_58235_47753220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos-1] = (Object)behavior;
   behavior->block = make__49254380();

   return behavior;
}

Scope makeadd__n_58235_47753220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58235_47753220 = scope;
   scope->owner = (Object)layer0_58_84_51182840;
   scope->name = "add_n:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47990300();
   scope->inners[1] = makelv1_48251640();
   scope->inners[2] = makerv0_48500800();
   scope->inners[3] = makerv1_49254680();
   scope->inners[4] = makelvok0_49254660();
   scope->inners[5] = makelvok1_49254640();
   scope->inners[6] = makervok0_49254620();
   scope->inners[7] = makervok1_49254600();
   scope->inners[8] = makerun_49254580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47725380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __45696600;

Behavior make__45696600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45696600 = behavior;
   behavior->owner = (Object)layer0_58_84_51182840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos-1] = (Object)behavior;
   behavior->block = make__57689520();

   return behavior;
}

Behavior __50134960;

Behavior make__50134960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50134960 = behavior;
   behavior->owner = (Object)layer0_58_84_51182840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos-1] = (Object)behavior;
   behavior->block = make__45696160();

   return behavior;
}

Behavior __51410540;

Behavior make__51410540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51410540 = behavior;
   behavior->owner = (Object)layer0_58_84_51182840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos += 1;
   clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos = realloc(clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos*sizeof(Object));
clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->pos[clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_pos-1] = (Object)behavior;
   behavior->block = make__50134780();

   return behavior;
}

Behavior __55658940;

Behavior make__55658940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55658940 = behavior;
   behavior->owner = (Object)layer0_58_84_51182840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[value__z0_50721900_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[value__z1_50833240_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[ack__a00_51080060_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[ack__a01_51080000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55662840();

   return behavior;
}

Behavior __55658780;

Behavior make__55658780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55658780 = behavior;
   behavior->owner = (Object)layer0_58_84_51182840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[a_46179040_func0_58_840_51703000_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[a_56669200_func1_58_840_56468520_layer0_58_84_51182840_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__55662760();

   return behavior;
}

Scope makelayer0_58_84_51182840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_51182840 = scope;
   scope->owner = (Object)layer0_58_840_51409440;
   scope->name = "layer0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_46251120();
   scope->systemIs[1] = makefunc1_56668860();
   scope->num_inners = 31;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac_47725180();
   scope->inners[1] = makeack__add_47725160();
   scope->inners[2] = make_5897_47913880();
   scope->inners[3] = make_5895_47913660();
   scope->inners[4] = make_5896_47913480();
   scope->inners[5] = make_58126_48205160();
   scope->inners[6] = make_58124_48205140();
   scope->inners[7] = make_58125_48205040();
   scope->inners[8] = make_58143_48470800();
   scope->inners[9] = make_58144_49357760();
   scope->inners[10] = make_58177_49933100();
   scope->inners[11] = make_58178_50130660();
   scope->inners[12] = make_58207_50404780();
   scope->inners[13] = make_58208_50537480();
   scope->inners[14] = makevalue__z0_50721900();
   scope->inners[15] = makevalue__z1_50833240();
   scope->inners[16] = makevalue__a00_51001720();
   scope->inners[17] = makevalue__a01_51080160();
   scope->inners[18] = makeflag__z0_51080140();
   scope->inners[19] = makeflag__z1_51080080();
   scope->inners[20] = makeack__a00_51080060();
   scope->inners[21] = makeack__a01_51080000();
   scope->inners[22] = make_5899_51079980();
   scope->inners[23] = make_58100_51079820();
   scope->inners[24] = make_58101_51254280();
   scope->inners[25] = make_58128_51254260();
   scope->inners[26] = make_58129_51254000();
   scope->inners[27] = make_58130_51429400();
   scope->inners[28] = make_58192_51555120();
   scope->inners[29] = make_58193_51705660();
   scope->inners[30] = make_58194_51705580();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_51182540();
   scope->scopes[1] = makechannel__w1_58112_48402860();
   scope->scopes[2] = makechannel__accum_58141_51254920();
   scope->scopes[3] = makemac__n1_58173_52075520();
   scope->scopes[4] = makechannel__bias_58175_49946720();
   scope->scopes[5] = makechannel__z_58205_51485300();
   scope->scopes[6] = makeadd__n_58235_47753220();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45696600();
   scope->behaviors[1] = make__50134960();
   scope->behaviors[2] = make__51410540();
   scope->behaviors[3] = make__55658940();
   scope->behaviors[4] = make__55658780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_51409440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_51409440 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_51405580();
   systemT->inputs[1] = makerst_51405540();
   systemT->inputs[2] = makereq_51405500();
   systemT->inputs[3] = makefill_51405480();
   systemT->inputs[4] = make_5815_51650020();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__0_51649960();
   systemT->outputs[1] = make_5813_51649940();
   systemT->outputs[2] = make_5814_51649820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer0_58_84_51182840();

   return systemT;
}