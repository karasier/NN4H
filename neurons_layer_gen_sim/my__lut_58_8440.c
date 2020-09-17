#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_65978560;

SignalI address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeaddress_66000640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_8440_65978560;
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

SignalI base_66093920_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makebase_66093920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_66093920_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_8440_65978560;
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

SignalI next__data_66228540_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makenext__data_66228540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_66228540_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_8440_65978560;
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

Block __64460500;

Block __65517300;

void code__65517300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(make__56417680());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_66228540_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65517300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65517300 = block;
   block->owner = (Object)__64460500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65517300;

   return block;
};

Block __64460320;

Block __65165380;

void code__65165380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_66228540_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65165380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65165380 = block;
   block->owner = (Object)__64460320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65165380;

   return block;
};

Block __64460140;

void code__64460140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56415900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_66228540_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__64460140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64460140 = block;
   block->owner = (Object)__64460320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64460140;

   return block;
};

void code__64460320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56417080();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56416560();
                     src1 = make__56416540();
                     src2 = make__56416480();
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
    code__65165380();
   }
   else {
  code__64460140();
   }
      }
   }
}

Block make__64460320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64460320 = block;
   block->owner = (Object)__64460500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64460320;

   return block;
};

void code__64460500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56417820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65517300();
   }
   else {
  code__64460320();
   }
      }
   }
}

Block make__64460500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64460500 = block;
   block->owner = (Object)__65978940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64460500;

   return block;
};

Block __51917240;

void code__51917240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_66093920_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__51917240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51917240 = block;
   block->owner = (Object)__51915440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51917240;

   return block;
};

Value make__51912940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912920() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912780() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912760() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912740() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51912720() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56418260() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56418220() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56418200() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56418180() {
   static unsigned long long data[] = { 252ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56417820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56417680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56417080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56416560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56416540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56416480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56415900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_66127480;

SignalI lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelut_58821980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)my__lut_58_844_66127480;
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
         src0 = make__51912940();
         src1 = make__51912920();
         src2 = make__51912900();
         src3 = make__51912880();
         src4 = make__51912860();
         src5 = make__51912840();
         src6 = make__51912820();
         src7 = make__51912800();
         src8 = make__51912780();
         src9 = make__51912760();
         src10 = make__51912740();
         src11 = make__51912720();
         src12 = make__56418260();
         src13 = make__56418220();
         src14 = make__56418200();
         src15 = make__56418180();
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

Behavior __65978940;

Behavior make__65978940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65978940 = behavior;
   behavior->owner = (Object)my__lut_58_844_66127480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__64460500();

   return behavior;
}

Behavior __51915440;

Behavior make__51915440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51915440 = behavior;
   behavior->owner = (Object)my__lut_58_844_66127480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[address_66000640_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[lut_58821980_my__lut_58_844_66127480_my__lut_58_8440_65978560_func1_58_841_65815920_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__51917240();

   return behavior;
}

Scope makemy__lut_58_844_66127480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_66127480 = scope;
   scope->owner = (Object)my__lut_58_8440_65978560;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_58821980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65978940();
   scope->behaviors[1] = make__51915440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_65978560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_65978560 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_66000640();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_66093920();
   systemT->outputs[1] = makenext__data_66228540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_66127480();

   return systemT;
}