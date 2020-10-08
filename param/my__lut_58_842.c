#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_50246160;

SignalI address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makeaddress_50244260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_842_50246160;
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

SignalI base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makebase_50331520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_842_50246160;
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

SignalI next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makenext__data_50427040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_842_50246160;
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

Block __50097280;

Block __47828320;

void code__47828320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(make__51316120());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__47828320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47828320 = block;
   block->owner = (Object)__50097280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47828320;

   return block;
};

Block __50097120;

Block __46170580;

void code__46170580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__46170580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46170580 = block;
   block->owner = (Object)__50097120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46170580;

   return block;
};

Block __50096960;

void code__50096960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51469520();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__50096960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50096960 = block;
   block->owner = (Object)__50097120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50096960;

   return block;
};

void code__50097120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51315220();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51314780();
                     src1 = make__51314760();
                     src2 = make__51314740();
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
    code__46170580();
   }
   else {
  code__50096960();
   }
      }
   }
}

Block make__50097120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50097120 = block;
   block->owner = (Object)__50097280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50097120;

   return block;
};

void code__50097280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51316280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47828320();
   }
   else {
  code__50097120();
   }
      }
   }
}

Block make__50097280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50097280 = block;
   block->owner = (Object)__50246480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50097280;

   return block;
};

Block __51242300;

void code__51242300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51242300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51242300 = block;
   block->owner = (Object)__51321500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51242300;

   return block;
};

Value make__51317680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317660() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317600() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317380() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317280() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317240() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317220() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317200() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317180() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317120() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51317100() {
   static unsigned long long data[] = { 244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51316280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51316120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51315220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51314780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51314760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51314740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51469520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_45750360;

SignalI lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makelut_45937760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_84_45750360;
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
         src0 = make__51317680();
         src1 = make__51317660();
         src2 = make__51317640();
         src3 = make__51317600();
         src4 = make__51317580();
         src5 = make__51317520();
         src6 = make__51317440();
         src7 = make__51317420();
         src8 = make__51317380();
         src9 = make__51317280();
         src10 = make__51317240();
         src11 = make__51317220();
         src12 = make__51317200();
         src13 = make__51317180();
         src14 = make__51317120();
         src15 = make__51317100();
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

Behavior __50246480;

Behavior make__50246480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50246480 = behavior;
   behavior->owner = (Object)my__lut_58_84_45750360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__50097280();

   return behavior;
}

Behavior __51321500;

Behavior make__51321500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51321500 = behavior;
   behavior->owner = (Object)my__lut_58_84_45750360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[lut_45937760_my__lut_58_84_45750360_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51242300();

   return behavior;
}

Scope makemy__lut_58_84_45750360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_45750360 = scope;
   scope->owner = (Object)my__lut_58_842_50246160;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_45937760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50246480();
   scope->behaviors[1] = make__51321500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_50246160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_50246160 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50244260();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50331520();
   systemT->outputs[1] = makenext__data_50427040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_45750360();

   return systemT;
}