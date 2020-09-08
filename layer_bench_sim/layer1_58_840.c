#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_60496360;

SignalI clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeclk_60494120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_840_60496360;
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

SignalI rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerst_60494080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_840_60496360;
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

SignalI fill_60494060_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makefill_60494060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_60494060_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_840_60496360;
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

SignalI req_60494040_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makereq_60494040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_60494040_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_840_60496360;
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

SignalI ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeack__1_60493980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_840_60496360;
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

Block __59737940;

Block __59737360;

Block __59737180;

void code__59737180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48952460(),flag__z0_58609420_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59737180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59737180 = block;
   block->owner = (Object)__59737360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59737180;

   return block;
};

void code__59737360() {
 code__59737180();
}

Block make__59737360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59737360 = block;
   block->owner = (Object)__59737940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59737360;

   return block;
};

Block __59737780;

void code__59737780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48952340(),flag__z0_58609420_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59737780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59737780 = block;
   block->owner = (Object)__59737940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59737780;

   return block;
};

void code__59737940() {
   {
      Value cond = ack__add_53769740_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59737360();
   }
   else {
  code__59737780();
   }
      }
   }
}

Block make__59737940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59737940 = block;
   block->owner = (Object)__60007160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59737940;

   return block;
};

Block __60007000;

Block __60006780;

Block __60006620;

void code__60006620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a10_58609440_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_5862_48639520______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48951880(),ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60006620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60006620 = block;
   block->owner = (Object)__60006780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60006620;

   return block;
};

void code__60006780() {
 code__60006620();
}

Block make__60006780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60006780 = block;
   block->owner = (Object)__60007000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60006780;

   return block;
};

void code__60007000() {
   {
      Value cond = flag__z0_58609420_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60006780();
   }
      }
   }
}

Block make__60007000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60007000 = block;
   block->owner = (Object)__60241640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60007000;

   return block;
};

Block __60241420;

Block __60241220;

Block __60240900;

void code__60240900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48951140(),_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60240900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60240900 = block;
   block->owner = (Object)__60241220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60240900;

   return block;
};

void code__60241220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48951760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60240900();
   }
      }
   }
}

Block make__60241220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60241220 = block;
   block->owner = (Object)__60241420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60241220;

   return block;
};

Block __60240340;

Block __60240020;

void code__60240020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48950660(),_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60240020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60240020 = block;
   block->owner = (Object)__60240340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60240020;

   return block;
};

void code__60240340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48950860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60240020();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48950460(),_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60240340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60240340 = block;
   block->owner = (Object)__60241420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60240340;

   return block;
};

Block __60239180;

Block __60238980;

Block __60238660;

void code__60238660() {
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
                  src0 = _58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48948980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48948280(),_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48948180(),_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60238660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60238660 = block;
   block->owner = (Object)__60238980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60238660;

   return block;
};

void code__60238980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48949520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60238660();
   }
      }
   }
}

Block make__60238980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60238980 = block;
   block->owner = (Object)__60239180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60238980;

   return block;
};

Block __60375400;

Block __60375080;

Block __60399140;

void code__60399140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48971660(),_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60399140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60399140 = block;
   block->owner = (Object)__60375080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60399140;

   return block;
};

void code__60375080() {
{
      Value value = _58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__48947420())) {
    code__60399140();
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
                  src0 = _58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48971360();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60375080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60375080 = block;
   block->owner = (Object)__60375400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60375080;

   return block;
};

void code__60375400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48947640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60375080();
   }
      }
   }
}

Block make__60375400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60375400 = block;
   block->owner = (Object)__60239180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60375400;

   return block;
};

void code__60239180() {
 code__60238980();
 code__60375400();
}

Block make__60239180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60239180 = block;
   block->owner = (Object)__60241420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60239180;

   return block;
};

void code__60241420() {
 code__60241220();
 code__60240340();
   {
      Value cond = fill_60494060_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60239180();
   }
      }
   }
}

Block make__60241420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60241420 = block;
   block->owner = (Object)__60496720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60241420;

   return block;
};

Block __47101940;

void code__47101940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,z__value_58627740_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47101940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47101940 = block;
   block->owner = (Object)__47162860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47101940;

   return block;
};

Block __47101660;

void code__47101660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,value__a10_58609440_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47101660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47101660 = block;
   block->owner = (Object)__47184920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47101660;

   return block;
};

Block __51761160;

Block __52949720;

void code__52949720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,make_ref_rangeS(mem_53784200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100,value2integer(abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value),value2integer(abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__52949720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52949720 = block;
   block->owner = (Object)__51761160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52949720;

   return block;
};

void code__51761160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53784200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52949720();
   }
      }
   }
}

Block make__51761160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51761160 = block;
   block->owner = (Object)__47486160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51761160;

   return block;
};

Block __47201160;

void code__47201160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47201160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47201160 = block;
   block->owner = (Object)__47200160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47201160;

   return block;
};

Block __47200080;

void code__47200080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47200080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47200080 = block;
   block->owner = (Object)__47198540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47200080;

   return block;
};

Block __47218360;

void code__47218360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47218360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47218360 = block;
   block->owner = (Object)__47216840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47218360;

   return block;
};

Block __47216740;

void code__47216740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47216740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47216740 = block;
   block->owner = (Object)__47216080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47216740;

   return block;
};

Block __47232800;

void code__47232800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47232800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47232800 = block;
   block->owner = (Object)__47232260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47232800;

   return block;
};

Block __47232160;

void code__47232160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47232160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47232160 = block;
   block->owner = (Object)__47231800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47232160;

   return block;
};

Block __47230400;

void code__47230400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47230400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47230400 = block;
   block->owner = (Object)__47229420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47230400;

   return block;
};

Block __47229100;

void code__47229100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47229100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47229100 = block;
   block->owner = (Object)__47249120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47229100;

   return block;
};

Block __47247400;

void code__47247400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47247400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47247400 = block;
   block->owner = (Object)__47246780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47247400;

   return block;
};

Block __47246540;

void code__47246540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47246540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47246540 = block;
   block->owner = (Object)__47244600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47246540;

   return block;
};

Block __47300560;

void code__47300560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47300560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47300560 = block;
   block->owner = (Object)__47296820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47300560;

   return block;
};

Block __47295840;

void code__47295840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47295840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47295840 = block;
   block->owner = (Object)__47293860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47295840;

   return block;
};

Block __47362020;

void code__47362020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47362020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47362020 = block;
   block->owner = (Object)__47361080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47362020;

   return block;
};

Block __47361000;

void code__47361000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47361000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47361000 = block;
   block->owner = (Object)__47393200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47361000;

   return block;
};

Block __52038760;

Block __52038600;

Block __52038220;

void code__52038220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48885580(),_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52038220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52038220 = block;
   block->owner = (Object)__52038600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52038220;

   return block;
};

void code__52038600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48886360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52038220();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48885440(),_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52038600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52038600 = block;
   block->owner = (Object)__52038760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52038600;

   return block;
};

Block __52037000;

Block __52036360;

void code__52036360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48884700(),_5845_48575060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52036360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52036360 = block;
   block->owner = (Object)__52037000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52036360;

   return block;
};

void code__52037000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48885060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52036360();
   }
      }
   }
}

Block make__52037000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52037000 = block;
   block->owner = (Object)__52038760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52037000;

   return block;
};

Block __52352040;

Block __52351180;

Block __52350720;

Block __52350000;

void code__52350000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47831580______58_84_47501740______58_840_60688100->c_value,rv_52039000_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52350000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52350000 = block;
   block->owner = (Object)__52350720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52350000;

   return block;
};

Block __52728660;

void code__52728660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_48575140______58_84_47501740______58_840_60688100->c_value,rv_52039000_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52728660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52728660 = block;
   block->owner = (Object)__52350720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52728660;

   return block;
};

void code__52350720() {
{
      Value value = _5845_48575060______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__48883400())) {
    code__52350000();
         }
         else if (value2integer(value) == value2integer(make__48883220())) {
    code__52728660();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48882720(),rvok_52038960_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
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
                  src0 = _5845_48575060______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48882040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_48575060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52350720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52350720 = block;
   block->owner = (Object)__52351180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52350720;

   return block;
};

void code__52351180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48883680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52350720();
   }
      }
   }
}

Block make__52351180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52351180 = block;
   block->owner = (Object)__52352040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52351180;

   return block;
};

Block __53207240;

Block __53263620;

Block __53263020;

void code__53263020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,lv0_51215900_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48905220(),lvok0_52038980_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53263020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53263020 = block;
   block->owner = (Object)__53263620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53263020;

   return block;
};

void code__53263620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48905720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53263020();
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
                  src0 = _58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48904860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48904440(),_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53263620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53263620 = block;
   block->owner = (Object)__53207240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53263620;

   return block;
};

void code__53207240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48881800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53263620();
   }
      }
   }
}

Block make__53207240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53207240 = block;
   block->owner = (Object)__52352040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53207240;

   return block;
};

Block __53956420;

Block __53955500;

Block __53955140;

void code__53955140() {
}

Block make__53955140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53955140 = block;
   block->owner = (Object)__53955500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53955140;

   return block;
};

Block __58541560;

void code__58541560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_51687440_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__58541560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58541560 = block;
   block->owner = (Object)__53955500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58541560;

   return block;
};

void code__53955500() {
 code__53955140();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_51687440_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
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
                              src0 = lv0_51215900_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52039000_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48902920();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_51687440_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__58541560();
}

Block make__53955500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53955500 = block;
   block->owner = (Object)__53956420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53955500;

   return block;
};

void code__53956420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48903700(),ack__mac0_53769780_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48903540(),run_52038940_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__53955500();
}

Block make__53956420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53956420 = block;
   block->owner = (Object)__52352040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53956420;

   return block;
};

void code__52352040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48883980(),run_52038940_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52351180();
 code__53207240();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52038980_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok_52038960_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53956420();
   }
      }
   }
}

Block make__52352040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52352040 = block;
   block->owner = (Object)__52038760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52352040;

   return block;
};

Block __52059020;

void code__52059020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48902560(),rvok_52038960_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48902480(),lvok0_52038980_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48902400(),av0_51687440_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52059020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52059020 = block;
   block->owner = (Object)__52038760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52059020;

   return block;
};

void code__52038760() {
 code__52038600();
 code__52037000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48884560(),ack__mac0_53769780_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48884420(),run_52038940_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_60494040_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         src1 = run_52038940_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52352040();
   }
   else {
  code__52059020();
   }
      }
   }
}

Block make__52038760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52038760 = block;
   block->owner = (Object)__58740120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52038760;

   return block;
};

Block __59550340;

Block __59550180;

Block __59549860;

void code__59549860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48901980(),_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59549860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59549860 = block;
   block->owner = (Object)__59550180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59549860;

   return block;
};

void code__59550180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48902140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59549860();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48901760(),_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59550180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59550180 = block;
   block->owner = (Object)__59550340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59550180;

   return block;
};

Block __59549240;

Block __59548920;

void code__59548920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48900880(),_5845_48575060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59548920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59548920 = block;
   block->owner = (Object)__59549240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59548920;

   return block;
};

void code__59549240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48901200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59548920();
   }
      }
   }
}

Block make__59549240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59549240 = block;
   block->owner = (Object)__59550340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59549240;

   return block;
};

Block __59659220;

Block __59658900;

Block __59658580;

Block __59658120;

void code__59658120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47831580______58_84_47501740______58_840_60688100->c_value,rv_59550520_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59658120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59658120 = block;
   block->owner = (Object)__59658580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59658120;

   return block;
};

Block __59856960;

void code__59856960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_48575140______58_84_47501740______58_840_60688100->c_value,rv_59550520_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59856960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59856960 = block;
   block->owner = (Object)__59658580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59856960;

   return block;
};

void code__59658580() {
{
      Value value = _5845_48575060______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__48899260())) {
    code__59658120();
         }
         else if (value2integer(value) == value2integer(make__48898900())) {
    code__59856960();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48898600(),rvok_59550480_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
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
                  src0 = _5845_48575060______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48921440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_48575060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59658580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59658580 = block;
   block->owner = (Object)__59658900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59658580;

   return block;
};

void code__59658900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48899640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59658580();
   }
      }
   }
}

Block make__59658900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59658900 = block;
   block->owner = (Object)__59659220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59658900;

   return block;
};

Block __60096160;

Block __60095840;

Block __60095520;

void code__60095520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,lv0_58990880_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48917700(),lvok0_59550500_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60095520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60095520 = block;
   block->owner = (Object)__60095840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60095520;

   return block;
};

void code__60095840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48918160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60095520();
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
                  src0 = _58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48916180();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48915760(),_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60095840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60095840 = block;
   block->owner = (Object)__60096160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60095840;

   return block;
};

void code__60096160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48919480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60095840();
   }
      }
   }
}

Block make__60096160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60096160 = block;
   block->owner = (Object)__59659220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60096160;

   return block;
};

Block __60236080;

Block __60260140;

Block __60259980;

void code__60259980() {
}

Block make__60259980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60259980 = block;
   block->owner = (Object)__60260140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60259980;

   return block;
};

Block __61034500;

void code__61034500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_59201020_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__61034500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61034500 = block;
   block->owner = (Object)__60260140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61034500;

   return block;
};

void code__60260140() {
 code__60259980();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_59201020_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
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
                              src0 = lv0_58990880_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_59550520_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48937860();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_59201020_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__61034500();
}

Block make__60260140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60260140 = block;
   block->owner = (Object)__60236080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60260140;

   return block;
};

void code__60236080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48914880(),ack__mac1_53769760_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48914740(),run_59550460_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__60260140();
}

Block make__60236080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60236080 = block;
   block->owner = (Object)__59659220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60236080;

   return block;
};

void code__59659220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48899760(),run_59550460_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__59658900();
 code__60096160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59550500_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok_59550480_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60236080();
   }
      }
   }
}

Block make__59659220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59659220 = block;
   block->owner = (Object)__59550340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59659220;

   return block;
};

Block __59548140;

void code__59548140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48937440(),rvok_59550480_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48937160(),lvok0_59550500_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48936880(),av0_59201020_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__59548140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59548140 = block;
   block->owner = (Object)__59550340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59548140;

   return block;
};

void code__59550340() {
 code__59550180();
 code__59549240();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48900580(),ack__mac1_53769760_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48900440(),run_59550460_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac0_53769780_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         src1 = run_59550460_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59659220();
   }
   else {
  code__59548140();
   }
      }
   }
}

Block make__59550340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59550340 = block;
   block->owner = (Object)__61372320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59550340;

   return block;
};

Block __47433660;

void code__47433660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47433660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47433660 = block;
   block->owner = (Object)__47454800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47433660;

   return block;
};

Block __47454400;

void code__47454400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47454400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47454400 = block;
   block->owner = (Object)__47450200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47454400;

   return block;
};

Block __47448860;

void code__47448860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47448860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47448860 = block;
   block->owner = (Object)__47472560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47448860;

   return block;
};

Block __47470120;

void code__47470120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47470120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47470120 = block;
   block->owner = (Object)__47469020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47470120;

   return block;
};

Block __47502160;

void code__47502160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47502160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47502160 = block;
   block->owner = (Object)__47498980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47502160;

   return block;
};

Block __47497580;

void code__47497580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47497580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47497580 = block;
   block->owner = (Object)__47519800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47497580;

   return block;
};

Block __47585000;

void code__47585000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47585000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47585000 = block;
   block->owner = (Object)__47584620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47585000;

   return block;
};

Block __47584340;

void code__47584340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__47584340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47584340 = block;
   block->owner = (Object)__47583940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47584340;

   return block;
};

Block __52105940;

Block __52133540;

Block __52133120;

void code__52133120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,lv0_51775700_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48932940(),lvok0_52106280_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52133120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52133120 = block;
   block->owner = (Object)__52133540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52133120;

   return block;
};

Block __52622120;

void code__52622120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,rv0_52106300_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48931860(),rvok0_52106200_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52622120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52622120 = block;
   block->owner = (Object)__52133540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52622120;

   return block;
};

Block __53092660;

Block __53116400;

void code__53116400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_51775700_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      src1 = rv0_52106300_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__53116400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53116400 = block;
   block->owner = (Object)__53092660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53116400;

   return block;
};

void code__53092660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48931460(),run_52106120_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48931300(),ack__add_53769740_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__53116400();
}

Block make__53092660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53092660 = block;
   block->owner = (Object)__52133540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53092660;

   return block;
};

void code__52133540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48933560(),run_52106120_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
 code__52133120();
 code__52622120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52106280_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         src1 = rvok0_52106200_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53092660();
   }
      }
   }
}

Block make__52133540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52133540 = block;
   block->owner = (Object)__52105940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52133540;

   return block;
};

Block __52103820;

void code__52103820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48930840(),lvok0_52106280_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48954760(),rvok0_52106200_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__52103820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52103820 = block;
   block->owner = (Object)__52105940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52103820;

   return block;
};

void code__52105940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48933860(),ack__add_53769740_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48933780(),run_52106120_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac1_53769760_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         src1 = run_52106120_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52133540();
   }
   else {
  code__52103820();
   }
      }
   }
}

Block make__52105940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52105940 = block;
   block->owner = (Object)__53769920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52105940;

   return block;
};

Value make__48886360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48885580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48885440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48885060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48884700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48884560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48884420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48883980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48883680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48883400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48883220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48882720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48882040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48881800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48905720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48905220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48904860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48904440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48903700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48903540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48902920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48902560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48902480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48902400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48902140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48901980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48901760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48901200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48900880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48900580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48900440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48899760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48899640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48899260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48898900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48898600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48921440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48919480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48918160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48917700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48916180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48915760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48914880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48914740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48937860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48937440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48937160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48936880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48933860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48933780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48933560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48932940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48931860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48931460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48931300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48930840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48954760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48952460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48952340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48951880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48951760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48951140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__48950860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48950660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48950460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48949520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48948980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48948280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48948180() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48947640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48947420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__48971660() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48971360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_52146360;

SignalI ack__mac0_53769780_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeack__mac0_53769780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac0_53769780_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = "ack_mac0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__mac1_53769760_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeack__mac1_53769760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac1_53769760_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = "ack_mac1";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__add_53769740_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeack__add_53769740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53769740_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
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

SignalI _58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58250_58131860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":250";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58248_58131820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":248";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58249_58131720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":249";
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

SignalI _58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58267_58250240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":267";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58294_58286860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":294";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58317_58421700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":317";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makevalue__z0_58523920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
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

SignalI value__a10_58609440_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makevalue__a10_58609440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a10_58609440_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
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

SignalI flag__z0_58609420_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeflag__z0_58609420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_58609420_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
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

SignalI ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeack__a10_58609400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
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

SignalI _58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58252_58609380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":252";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58253_58609300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":253";
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

SignalI _58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58254_58744160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":254";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58305_58993480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":305";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI make_58306_58993400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)layer1_58_84_52146360;
   signalI->name = ":306";
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

SystemI func0_58832320;

SystemI makefunc0_58832320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58832320 = systemI;
   systemI->owner = (Object)layer1_58_84_52146360;
   systemI->name = "func0";
   systemI->system = func0_58_8400_58523680;

   return systemI;
};

Scope channel__w0_58236_52145400;

SignalI trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI maketrig__r_52213160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

SignalI trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI maketrig__w_52213100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

SignalI dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makedbus__r_52656320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

SignalI dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makedbus__w_53011200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

SignalI abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_53011100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

SignalI abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_53010980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

SignalI mem_53784200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makemem_53784200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53784200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__w0_58236_52145400;
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

Scope raddr_58237_52144840;

Scope makeraddr_58237_52144840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58237_52144840 = scope;
   scope->owner = (Object)channel__w0_58236_52145400;
   scope->name = "raddr:237";
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

Scope waddr_58242_52144200;

Scope makewaddr_58242_52144200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58242_52144200 = scope;
   scope->owner = (Object)channel__w0_58236_52145400;
   scope->name = "waddr:242";
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

Scope rinc_58247_52143600;

Scope makerinc_58247_52143600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58247_52143600 = scope;
   scope->owner = (Object)channel__w0_58236_52145400;
   scope->name = "rinc:247";
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

Scope winc_58251_52142700;

Scope makewinc_58251_52142700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58251_52142700 = scope;
   scope->owner = (Object)channel__w0_58236_52145400;
   scope->name = "winc:251";
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

Scope rdec_58255_52215120;

Scope makerdec_58255_52215120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58255_52215120 = scope;
   scope->owner = (Object)channel__w0_58236_52145400;
   scope->name = "rdec:255";
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

Scope wdec_58260_52214660;

Scope makewdec_58260_52214660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58260_52214660 = scope;
   scope->owner = (Object)channel__w0_58236_52145400;
   scope->name = "wdec:260";
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

Behavior __47486160;

Behavior make__47486160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47486160 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_neg += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->neg = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->neg,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_neg*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->neg[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_neg-1] = (Object)behavior;
   behavior->block = make__51761160();

   return behavior;
}

Behavior __47200160;

Behavior make__47200160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47200160 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[dbus__r_52656320_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47201160();

   return behavior;
}

Behavior __47198540;

Behavior make__47198540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47198540 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58250_58131860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47200080();

   return behavior;
}

Behavior __47216840;

Behavior make__47216840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47216840 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[trig__r_52213160_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47218360();

   return behavior;
}

Behavior __47216080;

Behavior make__47216080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47216080 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58248_58131820_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47216740();

   return behavior;
}

Behavior __47232260;

Behavior make__47232260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47232260 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[abus__r_53011100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47232800();

   return behavior;
}

Behavior __47231800;

Behavior make__47231800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47231800 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58249_58131720_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47232160();

   return behavior;
}

Behavior __47229420;

Behavior make__47229420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47229420 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[trig__w_52213100_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47230400();

   return behavior;
}

Behavior __47249120;

Behavior make__47249120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47249120 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58252_58609380_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47229100();

   return behavior;
}

Behavior __47246780;

Behavior make__47246780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47246780 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[abus__w_53010980_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47247400();

   return behavior;
}

Behavior __47244600;

Behavior make__47244600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47244600 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58253_58609300_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47246540();

   return behavior;
}

Behavior __47296820;

Behavior make__47296820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47296820 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[dbus__w_53011200_channel__w0_58236_52145400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47300560();

   return behavior;
}

Behavior __47293860;

Behavior make__47293860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47293860 = behavior;
   behavior->owner = (Object)channel__w0_58236_52145400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58254_58744160_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47295840();

   return behavior;
}

Scope makechannel__w0_58236_52145400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58236_52145400 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "channel_w0:236";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52213160();
   scope->inners[1] = maketrig__w_52213100();
   scope->inners[2] = makedbus__r_52656320();
   scope->inners[3] = makedbus__w_53011200();
   scope->inners[4] = makeabus__r_53011100();
   scope->inners[5] = makeabus__w_53010980();
   scope->inners[6] = makemem_53784200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58237_52144840();
   scope->scopes[1] = makewaddr_58242_52144200();
   scope->scopes[2] = makerinc_58247_52143600();
   scope->scopes[3] = makewinc_58251_52142700();
   scope->scopes[4] = makerdec_58255_52215120();
   scope->scopes[5] = makewdec_58260_52214660();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47486160();
   scope->behaviors[1] = make__47200160();
   scope->behaviors[2] = make__47198540();
   scope->behaviors[3] = make__47216840();
   scope->behaviors[4] = make__47216080();
   scope->behaviors[5] = make__47232260();
   scope->behaviors[6] = make__47231800();
   scope->behaviors[7] = make__47229420();
   scope->behaviors[8] = make__47249120();
   scope->behaviors[9] = make__47246780();
   scope->behaviors[10] = make__47244600();
   scope->behaviors[11] = make__47296820();
   scope->behaviors[12] = make__47293860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58265_47485880;

SignalI reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makereg__0_48575560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__accum_58265_47485880;
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

Scope anum_58266_47484960;

Scope makeanum_58266_47484960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58266_47484960 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "anum:266";
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

Scope raddr_58268_47483320;

Scope makeraddr_58268_47483320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58268_47483320 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "raddr:268";
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

Scope waddr_58271_47502620;

Scope makewaddr_58271_47502620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58271_47502620 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "waddr:271";
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

Scope rinc_58274_47498340;

SignalI abus__r_47520500_rinc_58274_47498340_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47520500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47520500_rinc_58274_47498340_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_58274_47498340;
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

Scope makerinc_58274_47498340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58274_47498340 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "rinc:274";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47520500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58278_47515980;

SignalI abus__w_47537280_winc_58278_47515980_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47537280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47537280_winc_58278_47515980_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_58278_47515980;
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

Scope makewinc_58278_47515980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58278_47515980 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "winc:278";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47537280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58282_47532000;

SignalI abus__r_47549980_rdec_58282_47532000_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47549980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47549980_rdec_58282_47532000_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_58282_47532000;
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

Scope makerdec_58282_47532000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58282_47532000 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "rdec:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47549980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58286_47548900;

SignalI abus__w_47570120_wdec_58286_47548900_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47570120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47570120_wdec_58286_47548900_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_58286_47548900;
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

Scope makewdec_58286_47548900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58286_47548900 = scope;
   scope->owner = (Object)channel__accum_58265_47485880;
   scope->name = "wdec:286";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47570120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47361080;

Behavior make__47361080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47361080 = behavior;
   behavior->owner = (Object)channel__accum_58265_47485880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[reg__0_48575560_channel__accum_58265_47485880_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47362020();

   return behavior;
}

Behavior __47393200;

Behavior make__47393200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47393200 = behavior;
   behavior->owner = (Object)channel__accum_58265_47485880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58267_58250240_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47361000();

   return behavior;
}

Scope makechannel__accum_58265_47485880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58265_47485880 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "channel_accum:265";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48575560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58266_47484960();
   scope->scopes[1] = makeraddr_58268_47483320();
   scope->scopes[2] = makewaddr_58271_47502620();
   scope->scopes[3] = makerinc_58274_47498340();
   scope->scopes[4] = makewinc_58278_47515980();
   scope->scopes[5] = makerdec_58282_47532000();
   scope->scopes[6] = makewdec_58286_47548900();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47361080();
   scope->behaviors[1] = make__47393200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58290_49359800;

SignalI lv0_51215900_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makelv0_51215900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51215900_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58290_49359800;
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

SignalI av0_51687440_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeav0_51687440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_51687440_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58290_49359800;
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

SignalI rv_52039000_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerv_52039000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_52039000_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58290_49359800;
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

SignalI lvok0_52038980_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makelvok0_52038980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52038980_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58290_49359800;
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

SignalI rvok_52038960_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makervok_52038960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_52038960_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58290_49359800;
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

SignalI run_52038940_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerun_52038940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52038940_mac__n1_58290_49359800_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58290_49359800;
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

Behavior __58740120;

Behavior make__58740120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58740120 = behavior;
   behavior->owner = (Object)mac__n1_58290_49359800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__52038760();

   return behavior;
}

Scope makemac__n1_58290_49359800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58290_49359800 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "mac_n1:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51215900();
   scope->inners[1] = makeav0_51687440();
   scope->inners[2] = makerv_52039000();
   scope->inners[3] = makelvok0_52038980();
   scope->inners[4] = makervok_52038960();
   scope->inners[5] = makerun_52038940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58740120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58291_58740000;

SignalI lv0_58990880_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makelv0_58990880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58990880_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58291_58740000;
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

SignalI av0_59201020_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeav0_59201020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_59201020_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58291_58740000;
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

SignalI rv_59550520_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerv_59550520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_59550520_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58291_58740000;
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

SignalI lvok0_59550500_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makelvok0_59550500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59550500_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58291_58740000;
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

SignalI rvok_59550480_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makervok_59550480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_59550480_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58291_58740000;
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

SignalI run_59550460_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerun_59550460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59550460_mac__n1_58291_58740000_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)mac__n1_58291_58740000;
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

Behavior __61372320;

Behavior make__61372320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61372320 = behavior;
   behavior->owner = (Object)mac__n1_58291_58740000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__59550340();

   return behavior;
}

Scope makemac__n1_58291_58740000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58291_58740000 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "mac_n1:291";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58990880();
   scope->inners[1] = makeav0_59201020();
   scope->inners[2] = makerv_59550520();
   scope->inners[3] = makelvok0_59550500();
   scope->inners[4] = makervok_59550480();
   scope->inners[5] = makerun_59550460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61372320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58292_61372200;

SignalI reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makereg__0_61513020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__bias_58292_61372200;
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

Scope anum_58293_61371900;

Scope makeanum_58293_61371900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58293_61371900 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "anum:293";
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

Scope raddr_58295_61371480;

Scope makeraddr_58295_61371480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58295_61371480 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "raddr:295";
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

Scope waddr_58298_61371060;

Scope makewaddr_58298_61371060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58298_61371060 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "waddr:298";
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

Scope rinc_58301_61370640;

SignalI abus__r_61370260_rinc_58301_61370640_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_61370260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61370260_rinc_58301_61370640_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_58301_61370640;
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

Scope makerinc_58301_61370640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58301_61370640 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "rinc:301";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_61370260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58304_61370140;

SignalI abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_61369760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_58304_61370140;
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

Behavior __47498980;

Behavior make__47498980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47498980 = behavior;
   behavior->owner = (Object)winc_58304_61370140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[abus__w_61369760_winc_58304_61370140_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47502160();

   return behavior;
}

Behavior __47519800;

Behavior make__47519800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47519800 = behavior;
   behavior->owner = (Object)winc_58304_61370140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58306_58993400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47497580();

   return behavior;
}

Scope makewinc_58304_61370140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58304_61370140 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "winc:304";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_61369760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47498980();
   scope->behaviors[1] = make__47519800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58307_61369380;

SignalI abus__r_61369000_rdec_58307_61369380_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_61369000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_61369000_rdec_58307_61369380_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_58307_61369380;
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

Scope makerdec_58307_61369380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58307_61369380 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "rdec:307";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_61369000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58311_61368880;

SignalI abus__w_61368500_wdec_58311_61368880_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_61368500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_61368500_wdec_58311_61368880_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_58311_61368880;
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

Scope makewdec_58311_61368880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58311_61368880 = scope;
   scope->owner = (Object)channel__bias_58292_61372200;
   scope->name = "wdec:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_61368500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47454800;

Behavior make__47454800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47454800 = behavior;
   behavior->owner = (Object)channel__bias_58292_61372200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47433660();

   return behavior;
}

Behavior __47450200;

Behavior make__47450200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47450200 = behavior;
   behavior->owner = (Object)channel__bias_58292_61372200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58294_58286860_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47454400();

   return behavior;
}

Behavior __47472560;

Behavior make__47472560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47472560 = behavior;
   behavior->owner = (Object)channel__bias_58292_61372200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[reg__0_61513020_channel__bias_58292_61372200_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47448860();

   return behavior;
}

Behavior __47469020;

Behavior make__47469020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47469020 = behavior;
   behavior->owner = (Object)channel__bias_58292_61372200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58305_58993480_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47470120();

   return behavior;
}

Scope makechannel__bias_58292_61372200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58292_61372200 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "channel_bias:292";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_61513020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58293_61371900();
   scope->scopes[1] = makeraddr_58295_61371480();
   scope->scopes[2] = makewaddr_58298_61371060();
   scope->scopes[3] = makerinc_58301_61370640();
   scope->scopes[4] = makewinc_58304_61370140();
   scope->scopes[5] = makerdec_58307_61369380();
   scope->scopes[6] = makewdec_58311_61368880();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47454800();
   scope->behaviors[1] = make__47450200();
   scope->behaviors[2] = make__47472560();
   scope->behaviors[3] = make__47469020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58315_48239340;

SignalI reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makereg__0_49034860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__z_58315_48239340;
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

Scope anum_58316_48237620;

Scope makeanum_58316_48237620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58316_48237620 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "anum:316";
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

Scope raddr_58318_48236260;

Scope makeraddr_58318_48236260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58318_48236260 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "raddr:318";
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

Scope waddr_58321_48235320;

Scope makewaddr_58321_48235320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58321_48235320 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "waddr:321";
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

Scope rinc_58324_48576420;

SignalI abus__r_48575420_rinc_58324_48576420_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_48575420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48575420_rinc_58324_48576420_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_58324_48576420;
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

Scope makerinc_58324_48576420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58324_48576420 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "rinc:324";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48575420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58327_48573980;

SignalI abus__w_48571020_winc_58327_48573980_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_48571020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48571020_winc_58327_48573980_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_58327_48573980;
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

Scope makewinc_58327_48573980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58327_48573980 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "winc:327";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48571020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58330_48570560;

SignalI abus__r_48429920_rdec_58330_48570560_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__r_48429920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48429920_rdec_58330_48570560_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_58330_48570560;
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

Scope makerdec_58330_48570560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58330_48570560 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "rdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48429920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58334_48429720;

SignalI abus__w_48428980_wdec_58334_48429720_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makeabus__w_48428980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48428980_wdec_58334_48429720_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_58334_48429720;
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

Scope makewdec_58334_48429720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58334_48429720 = scope;
   scope->owner = (Object)channel__z_58315_48239340;
   scope->name = "wdec:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48428980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47584620;

Behavior make__47584620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47584620 = behavior;
   behavior->owner = (Object)channel__z_58315_48239340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[reg__0_49034860_channel__z_58315_48239340_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47585000();

   return behavior;
}

Behavior __47583940;

Behavior make__47583940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47583940 = behavior;
   behavior->owner = (Object)channel__z_58315_48239340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   _58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   _58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[_58317_58421700_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47584340();

   return behavior;
}

Scope makechannel__z_58315_48239340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58315_48239340 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "channel_z:315";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49034860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58316_48237620();
   scope->scopes[1] = makeraddr_58318_48236260();
   scope->scopes[2] = makewaddr_58321_48235320();
   scope->scopes[3] = makerinc_58324_48576420();
   scope->scopes[4] = makewinc_58327_48573980();
   scope->scopes[5] = makerdec_58330_48570560();
   scope->scopes[6] = makewdec_58334_48429720();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47584620();
   scope->behaviors[1] = make__47583940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58338_49843460;

SignalI lv0_51775700_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makelv0_51775700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_51775700_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58338_49843460;
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

SignalI rv0_52106300_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerv0_52106300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52106300_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58338_49843460;
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

SignalI lvok0_52106280_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makelvok0_52106280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52106280_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58338_49843460;
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

SignalI rvok0_52106200_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makervok0_52106200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52106200_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58338_49843460;
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

SignalI run_52106120_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100;

SignalI makerun_52106120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52106120_add__n_58338_49843460_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)add__n_58338_49843460;
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

Behavior __53769920;

Behavior make__53769920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53769920 = behavior;
   behavior->owner = (Object)add__n_58338_49843460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__52105940();

   return behavior;
}

Scope makeadd__n_58338_49843460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58338_49843460 = scope;
   scope->owner = (Object)layer1_58_84_52146360;
   scope->name = "add_n:338";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_51775700();
   scope->inners[1] = makerv0_52106300();
   scope->inners[2] = makelvok0_52106280();
   scope->inners[3] = makervok0_52106200();
   scope->inners[4] = makerun_52106120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53769920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60007160;

Behavior make__60007160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60007160 = behavior;
   behavior->owner = (Object)layer1_58_84_52146360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__59737940();

   return behavior;
}

Behavior __60241640;

Behavior make__60241640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60241640 = behavior;
   behavior->owner = (Object)layer1_58_84_52146360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__60007000();

   return behavior;
}

Behavior __60496720;

Behavior make__60496720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60496720 = behavior;
   behavior->owner = (Object)layer1_58_84_52146360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos = realloc(clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->pos[clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__60241420();

   return behavior;
}

Behavior __47162860;

Behavior make__47162860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47162860 = behavior;
   behavior->owner = (Object)layer1_58_84_52146360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[value__z0_58523920_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[ack__a10_58609400_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47101940();

   return behavior;
}

Behavior __47184920;

Behavior make__47184920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47184920 = behavior;
   behavior->owner = (Object)layer1_58_84_52146360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[a_58832460_func0_58_8400_58523680_layer1_58_84_52146360_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__47101660();

   return behavior;
}

Scope makelayer1_58_84_52146360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_52146360 = scope;
   scope->owner = (Object)layer1_58_840_60496360;
   scope->name = "layer1:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makefunc0_58832320();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__mac0_53769780();
   scope->inners[1] = makeack__mac1_53769760();
   scope->inners[2] = makeack__add_53769740();
   scope->inners[3] = make_58250_58131860();
   scope->inners[4] = make_58248_58131820();
   scope->inners[5] = make_58249_58131720();
   scope->inners[6] = make_58267_58250240();
   scope->inners[7] = make_58294_58286860();
   scope->inners[8] = make_58317_58421700();
   scope->inners[9] = makevalue__z0_58523920();
   scope->inners[10] = makevalue__a10_58609440();
   scope->inners[11] = makeflag__z0_58609420();
   scope->inners[12] = makeack__a10_58609400();
   scope->inners[13] = make_58252_58609380();
   scope->inners[14] = make_58253_58609300();
   scope->inners[15] = make_58254_58744160();
   scope->inners[16] = make_58305_58993480();
   scope->inners[17] = make_58306_58993400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58236_52145400();
   scope->scopes[1] = makechannel__accum_58265_47485880();
   scope->scopes[2] = makemac__n1_58290_49359800();
   scope->scopes[3] = makemac__n1_58291_58740000();
   scope->scopes[4] = makechannel__bias_58292_61372200();
   scope->scopes[5] = makechannel__z_58315_48239340();
   scope->scopes[6] = makeadd__n_58338_49843460();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60007160();
   scope->behaviors[1] = make__60241640();
   scope->behaviors[2] = make__60496720();
   scope->behaviors[3] = make__47162860();
   scope->behaviors[4] = make__47184920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_60496360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_60496360 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60494120();
   systemT->inputs[1] = makerst_60494080();
   systemT->inputs[2] = makefill_60494060();
   systemT->inputs[3] = makereq_60494040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__1_60493980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer1_58_84_52146360();

   return systemT;
}