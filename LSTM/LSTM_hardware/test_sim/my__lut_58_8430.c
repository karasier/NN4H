#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8430_56094560;

SignalI address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makeaddress_56243820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8430_56094560;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makebase_56769800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8430_56094560;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makenext__data_57261260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_8430_56094560;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __46569600;

Block __54822580;

void code__54822580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(make__77483120());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__54822580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54822580 = block;
   block->owner = (Object)__46569600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54822580;

   return block;
};

Block __46568100;

Block __51383020;

void code__51383020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__51383020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51383020 = block;
   block->owner = (Object)__46568100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51383020;

   return block;
};

Block __46564600;

void code__46564600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77481860();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_57261260_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__46564600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46564600 = block;
   block->owner = (Object)__46568100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46564600;

   return block;
};

void code__46568100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__77482640();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__77482320();
                     src1 = make__77482300();
                     src2 = make__77482280();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51383020();
   }
   else {
  code__46564600();
   }
      }
   }
}

Block make__46568100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46568100 = block;
   block->owner = (Object)__46569600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46568100;

   return block;
};

void code__46569600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77483240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54822580();
   }
   else {
  code__46568100();
   }
      }
   }
}

Block make__46569600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46569600 = block;
   block->owner = (Object)__56095500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46569600;

   return block;
};

Block __77486800;

void code__77486800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value;
            idx = value2integer(address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56769800_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
      set_value_pos(pool_state);
   }
}

Block make__77486800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77486800 = block;
   block->owner = (Object)__77485760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77486800;

   return block;
};

Value make__77483840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483820() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483740() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483680() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483640() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483620() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483600() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483580() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483560() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483540() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483520() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77483240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77483120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77482640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77482320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77482300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77482280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77481860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_843_50658240;

SignalI lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080;

SignalI makelut_66116080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080 = signalI;
   signalI->owner = (Object)my__lut_58_843_50658240;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__77483840();
         src1 = make__77483820();
         src2 = make__77483800();
         src3 = make__77483780();
         src4 = make__77483760();
         src5 = make__77483740();
         src6 = make__77483720();
         src7 = make__77483700();
         src8 = make__77483680();
         src9 = make__77483640();
         src10 = make__77483620();
         src11 = make__77483600();
         src12 = make__77483580();
         src13 = make__77483560();
         src14 = make__77483540();
         src15 = make__77483520();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Behavior __56095500;

Behavior make__56095500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56095500 = behavior;
   behavior->owner = (Object)my__lut_58_843_50658240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__46569600();

   return behavior;
}

Behavior __77485760;

Behavior make__77485760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77485760 = behavior;
   behavior->owner = (Object)my__lut_58_843_50658240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[address_56243820_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080);
   lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any += 1;
   lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any = realloc(lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any,lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any*sizeof(Object));
lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->any[lut_66116080_my__lut_58_843_50658240_my__lut_58_8430_56094560_func1_58_840_66313840_func1_58_8400_55166660_layer0_58_840_64384760_layer0_58_8400_64933120_tanh__neural__network_58_84_51775500_tanh__neural__network_58_840_74258180______58_84_51762220______58_840_74698080->num_any-1] = (Object)behavior;
   behavior->block = make__77486800();

   return behavior;
}

Scope makemy__lut_58_843_50658240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_843_50658240 = scope;
   scope->owner = (Object)my__lut_58_8430_56094560;
   scope->name = "my_lut:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_66116080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56095500();
   scope->behaviors[1] = make__77485760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8430_56094560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8430_56094560 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T30";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_56243820();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56769800();
   systemT->outputs[1] = makenext__data_57261260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_843_50658240();

   return systemT;
}