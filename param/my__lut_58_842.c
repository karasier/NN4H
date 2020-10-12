#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_50351160;

SignalI address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makeaddress_50349260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_842_50351160;
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

SignalI base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makebase_50551220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_842_50351160;
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

SignalI next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makenext__data_50671300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_842_50351160;
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

Block __43776760;

Block __48074600;

void code__48074600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(make__56258900());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__48074600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48074600 = block;
   block->owner = (Object)__43776760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48074600;

   return block;
};

Block __43774160;

Block __47436280;

void code__47436280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__47436280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47436280 = block;
   block->owner = (Object)__43774160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47436280;

   return block;
};

Block __43773580;

void code__43773580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56257740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__43773580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43773580 = block;
   block->owner = (Object)__43774160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43773580;

   return block;
};

void code__43774160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56258460();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56258200();
                     src1 = make__56258180();
                     src2 = make__56258160();
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
    code__47436280();
   }
   else {
  code__43773580();
   }
      }
   }
}

Block make__43774160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43774160 = block;
   block->owner = (Object)__43776760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43774160;

   return block;
};

void code__43776760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56259020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48074600();
   }
   else {
  code__43774160();
   }
      }
   }
}

Block make__43776760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43776760 = block;
   block->owner = (Object)__50351480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43776760;

   return block;
};

Block __56262380;

void code__56262380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56262380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56262380 = block;
   block->owner = (Object)__56261400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56262380;

   return block;
};

Value make__56259600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259580() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259440() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259420() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259400() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259380() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259360() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259340() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259320() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259300() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56259020() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56258900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56258460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56258200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56258180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56258160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56257740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_46163740;

SignalI lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makelut_47467320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_84_46163740;
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
         src0 = make__56259600();
         src1 = make__56259580();
         src2 = make__56259560();
         src3 = make__56259540();
         src4 = make__56259520();
         src5 = make__56259500();
         src6 = make__56259480();
         src7 = make__56259460();
         src8 = make__56259440();
         src9 = make__56259420();
         src10 = make__56259400();
         src11 = make__56259380();
         src12 = make__56259360();
         src13 = make__56259340();
         src14 = make__56259320();
         src15 = make__56259300();
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

Behavior __50351480;

Behavior make__50351480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50351480 = behavior;
   behavior->owner = (Object)my__lut_58_84_46163740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__43776760();

   return behavior;
}

Behavior __56261400;

Behavior make__56261400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56261400 = behavior;
   behavior->owner = (Object)my__lut_58_84_46163740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[lut_47467320_my__lut_58_84_46163740_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56262380();

   return behavior;
}

Scope makemy__lut_58_84_46163740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_46163740 = scope;
   scope->owner = (Object)my__lut_58_842_50351160;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47467320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50351480();
   scope->behaviors[1] = make__56261400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_50351160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_50351160 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50349260();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50551220();
   systemT->outputs[1] = makenext__data_50671300();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_46163740();

   return systemT;
}