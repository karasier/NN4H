#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_50821260;

SignalI address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makeaddress_50818200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_8410_50821260;
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

SignalI base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makebase_51060600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_8410_50821260;
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

SignalI next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makenext__data_51245660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_8410_50821260;
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

Block __52076260;

Block __50242360;

void code__50242360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(make__51810200());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__50242360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50242360 = block;
   block->owner = (Object)__52076260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50242360;

   return block;
};

Block __52075960;

Block __47701820;

void code__47701820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__47701820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47701820 = block;
   block->owner = (Object)__52075960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47701820;

   return block;
};

Block __52075800;

void code__52075800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51808600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51245660_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__52075800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52075800 = block;
   block->owner = (Object)__52075960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52075800;

   return block;
};

void code__52075960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51809480();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51809220();
                     src1 = make__51809200();
                     src2 = make__51809180();
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
    code__47701820();
   }
   else {
  code__52075800();
   }
      }
   }
}

Block make__52075960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52075960 = block;
   block->owner = (Object)__52076260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52075960;

   return block;
};

void code__52076260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51810480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50242360();
   }
   else {
  code__52075960();
   }
      }
   }
}

Block make__52076260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52076260 = block;
   block->owner = (Object)__50821580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52076260;

   return block;
};

Block __51793840;

void code__51793840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value;
            idx = value2integer(address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_51060600_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51793840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51793840 = block;
   block->owner = (Object)__51791500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51793840;

   return block;
};

Value make__51811980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811960() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811800() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811720() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811700() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811660() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811640() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811620() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811600() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51811580() {
   static unsigned long long data[] = { 244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51810480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51810200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51809480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51809220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51809200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51809180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51808600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_51742800;

SignalI lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320;

SignalI makelut_51616020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)my__lut_58_841_51742800;
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
         src0 = make__51811980();
         src1 = make__51811960();
         src2 = make__51811940();
         src3 = make__51811920();
         src4 = make__51811900();
         src5 = make__51811880();
         src6 = make__51811860();
         src7 = make__51811820();
         src8 = make__51811800();
         src9 = make__51811720();
         src10 = make__51811700();
         src11 = make__51811660();
         src12 = make__51811640();
         src13 = make__51811620();
         src14 = make__51811600();
         src15 = make__51811580();
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

Behavior __50821580;

Behavior make__50821580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50821580 = behavior;
   behavior->owner = (Object)my__lut_58_841_51742800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__52076260();

   return behavior;
}

Behavior __51791500;

Behavior make__51791500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51791500 = behavior;
   behavior->owner = (Object)my__lut_58_841_51742800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[address_50818200_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320);
   lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any += 1;
   lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any = realloc(lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any,lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->any[lut_51616020_my__lut_58_841_51742800_my__lut_58_8410_50821260_func0__1_58_84_51175080_func0__1_58_840_51234420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51793840();

   return behavior;
}

Scope makemy__lut_58_841_51742800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_51742800 = scope;
   scope->owner = (Object)my__lut_58_8410_50821260;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_51616020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50821580();
   scope->behaviors[1] = make__51791500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_50821260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_50821260 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50818200();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_51060600();
   systemT->outputs[1] = makenext__data_51245660();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_51742800();

   return systemT;
}