#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_52009900;

SignalI address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makeaddress_52007700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_8400_52009900;
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

SignalI base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makebase_43614080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_8400_52009900;
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

SignalI next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makenext__data_45711620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_8400_52009900;
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

Block __50590220;

Block __51643060;

void code__51643060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(make__51613420());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51643060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51643060 = block;
   block->owner = (Object)__50590220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51643060;

   return block;
};

Block __50590020;

Block __51086280;

void code__51086280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51086280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51086280 = block;
   block->owner = (Object)__50590020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51086280;

   return block;
};

Block __50589820;

void code__50589820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51610300();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__50589820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50589820 = block;
   block->owner = (Object)__50590020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50589820;

   return block;
};

void code__50590020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51611680();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51611320();
                     src1 = make__51611300();
                     src2 = make__51611220();
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
    code__51086280();
   }
   else {
  code__50589820();
   }
      }
   }
}

Block make__50590020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50590020 = block;
   block->owner = (Object)__50590220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50590020;

   return block;
};

void code__50590220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51613760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51643060();
   }
   else {
  code__50590020();
   }
      }
   }
}

Block make__50590220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50590220 = block;
   block->owner = (Object)__52010220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50590220;

   return block;
};

Block __51588300;

void code__51588300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51588300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51588300 = block;
   block->owner = (Object)__51586500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51588300;

   return block;
};

Value make__51615060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51615040() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614980() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614780() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614760() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614680() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614580() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614480() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614440() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614420() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51614340() {
   static unsigned long long data[] = { 244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51613760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51613420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51611680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51611320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51611300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51611220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51610300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_51759100;

SignalI lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makelut_50247420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_840_51759100;
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
         src0 = make__51615060();
         src1 = make__51615040();
         src2 = make__51614980();
         src3 = make__51614960();
         src4 = make__51614900();
         src5 = make__51614880();
         src6 = make__51614840();
         src7 = make__51614800();
         src8 = make__51614780();
         src9 = make__51614760();
         src10 = make__51614680();
         src11 = make__51614580();
         src12 = make__51614480();
         src13 = make__51614440();
         src14 = make__51614420();
         src15 = make__51614340();
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

Behavior __52010220;

Behavior make__52010220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52010220 = behavior;
   behavior->owner = (Object)my__lut_58_840_51759100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__50590220();

   return behavior;
}

Behavior __51586500;

Behavior make__51586500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51586500 = behavior;
   behavior->owner = (Object)my__lut_58_840_51759100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[lut_50247420_my__lut_58_840_51759100_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51588300();

   return behavior;
}

Scope makemy__lut_58_840_51759100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_51759100 = scope;
   scope->owner = (Object)my__lut_58_8400_52009900;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50247420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52010220();
   scope->behaviors[1] = make__51586500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_52009900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_52009900 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52007700();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_43614080();
   systemT->outputs[1] = makenext__data_45711620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_51759100();

   return systemT;
}