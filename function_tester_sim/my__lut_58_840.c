#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_840_45960080;

SignalI address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makeaddress_45988960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__lut_58_840_45960080;
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

SignalI base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makebase_47458460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__lut_58_840_45960080;
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

SignalI next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makenext__data_47522420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__lut_58_840_45960080;
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

Block __47676340;

Block __48073260;

void code__48073260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
            idx = value2integer(make__48092580());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48073260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48073260 = block;
   block->owner = (Object)__47676340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48073260;

   return block;
};

Block __47676120;

Block __47878020;

void code__47878020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
            idx = value2integer(address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__47878020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47878020 = block;
   block->owner = (Object)__47676120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47878020;

   return block;
};

Block __47675960;

void code__47675960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__48090780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__47675960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47675960 = block;
   block->owner = (Object)__47676120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47675960;

   return block;
};

void code__47676120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__48092020();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__48091640();
                     src1 = make__48091600();
                     src2 = make__48091580();
                     concat_value(3,1,dst,src0,src1,src2);
                     set_value_pos(pool_state);
                  dst; });
               concat_value(2,1,dst,src0,src1);
               set_value_pos(pool_state);
            dst; });
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47878020();
   }
   else {
  code__47675960();
   }
      }
   }
}

Block make__47676120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47676120 = block;
   block->owner = (Object)__47676340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47676120;

   return block;
};

void code__47676340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48092700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48073260();
   }
   else {
  code__47676120();
   }
      }
   }
}

Block make__47676340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47676340 = block;
   block->owner = (Object)__45960480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47676340;

   return block;
};

Block __48076540;

void code__48076540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
            idx = value2integer(address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48076540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48076540 = block;
   block->owner = (Object)__48075100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48076540;

   return block;
};

Value make__48093520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093500() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093300() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093280() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093140() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093120() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093100() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48093080() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48092700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48092580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48092020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48091640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48091600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48091580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48090780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_47961780;

SignalI lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makelut_46102600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)my__lut_58_84_47961780;
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
         src0 = make__48093520();
         src1 = make__48093500();
         src2 = make__48093480();
         src3 = make__48093440();
         src4 = make__48093400();
         src5 = make__48093380();
         src6 = make__48093320();
         src7 = make__48093300();
         src8 = make__48093280();
         src9 = make__48093260();
         src10 = make__48093220();
         src11 = make__48093200();
         src12 = make__48093140();
         src13 = make__48093120();
         src14 = make__48093100();
         src15 = make__48093080();
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

Behavior __45960480;

Behavior make__45960480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45960480 = behavior;
   behavior->owner = (Object)my__lut_58_84_47961780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__47676340();

   return behavior;
}

Behavior __48075100;

Behavior make__48075100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48075100 = behavior;
   behavior->owner = (Object)my__lut_58_84_47961780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[lut_46102600_my__lut_58_84_47961780_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48076540();

   return behavior;
}

Scope makemy__lut_58_84_47961780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_47961780 = scope;
   scope->owner = (Object)my__lut_58_840_45960080;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_46102600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45960480();
   scope->behaviors[1] = make__48075100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_840_45960080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_840_45960080 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_45988960();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47458460();
   systemT->outputs[1] = makenext__data_47522420();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_47961780();

   return systemT;
}