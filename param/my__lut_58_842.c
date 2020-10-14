#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_50443100;

SignalI address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makeaddress_50441200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_842_50443100;
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

SignalI base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makebase_50544900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_842_50443100;
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

SignalI next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makenext__data_50664940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_842_50443100;
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

Block __47780640;

Block __50198500;

void code__50198500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(make__47537520());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__50198500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50198500 = block;
   block->owner = (Object)__47780640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50198500;

   return block;
};

Block __47780420;

Block __49830780;

void code__49830780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__49830780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49830780 = block;
   block->owner = (Object)__47780420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49830780;

   return block;
};

Block __47780020;

void code__47780020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47533660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50664940_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47780020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47780020 = block;
   block->owner = (Object)__47780420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47780020;

   return block;
};

void code__47780420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__47535820();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__47534680();
                     src1 = make__47534660();
                     src2 = make__47534640();
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
    code__49830780();
   }
   else {
  code__47780020();
   }
      }
   }
}

Block make__47780420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47780420 = block;
   block->owner = (Object)__47780640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47780420;

   return block;
};

void code__47780640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47537760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50198500();
   }
   else {
  code__47780420();
   }
      }
   }
}

Block make__47780640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47780640 = block;
   block->owner = (Object)__50443420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47780640;

   return block;
};

Block __47510940;

void code__47510940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value;
            idx = value2integer(address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50544900_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47510940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47510940 = block;
   block->owner = (Object)__47508020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47510940;

   return block;
};

Value make__47523560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523520() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523260() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523160() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523100() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523080() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47523000() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47522840() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47522820() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47522600() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47522580() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47537760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47537520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47535820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47534680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47534660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47534640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47533660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_47805080;

SignalI lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920;

SignalI makelut_47354660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__lut_58_84_47805080;
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
         src0 = make__47523560();
         src1 = make__47523520();
         src2 = make__47523480();
         src3 = make__47523400();
         src4 = make__47523360();
         src5 = make__47523260();
         src6 = make__47523240();
         src7 = make__47523200();
         src8 = make__47523160();
         src9 = make__47523100();
         src10 = make__47523080();
         src11 = make__47523000();
         src12 = make__47522840();
         src13 = make__47522820();
         src14 = make__47522600();
         src15 = make__47522580();
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

Behavior __50443420;

Behavior make__50443420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50443420 = behavior;
   behavior->owner = (Object)my__lut_58_84_47805080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47780640();

   return behavior;
}

Behavior __47508020;

Behavior make__47508020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47508020 = behavior;
   behavior->owner = (Object)my__lut_58_84_47805080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[address_50441200_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920);
   lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any += 1;
   lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any = realloc(lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any,lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->any[lut_47354660_my__lut_58_84_47805080_my__lut_58_842_50443100_func0__0_58_84_47457860_func0__0_58_840_51345560______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47510940();

   return behavior;
}

Scope makemy__lut_58_84_47805080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_47805080 = scope;
   scope->owner = (Object)my__lut_58_842_50443100;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47354660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50443420();
   scope->behaviors[1] = make__47508020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_50443100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_50443100 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50441200();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50544900();
   systemT->outputs[1] = makenext__data_50664940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_47805080();

   return systemT;
}