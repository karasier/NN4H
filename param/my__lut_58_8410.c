#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_50285360;

SignalI address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makeaddress_50306880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_8410_50285360;
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

SignalI base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makebase_50449300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_8410_50285360;
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

SignalI next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makenext__data_50700340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_8410_50285360;
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

Block __51622480;

Block __47481080;

void code__47481080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(make__56341300());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__47481080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47481080 = block;
   block->owner = (Object)__51622480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47481080;

   return block;
};

Block __51622280;

Block __52150140;

void code__52150140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__52150140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52150140 = block;
   block->owner = (Object)__51622280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52150140;

   return block;
};

Block __51622020;

void code__51622020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56340140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50700340_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__51622020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51622020 = block;
   block->owner = (Object)__51622280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51622020;

   return block;
};

void code__51622280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56340860();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56340600();
                     src1 = make__56340580();
                     src2 = make__56340560();
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
    code__52150140();
   }
   else {
  code__51622020();
   }
      }
   }
}

Block make__51622280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51622280 = block;
   block->owner = (Object)__51622480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51622280;

   return block;
};

void code__51622480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56341420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47481080();
   }
   else {
  code__51622280();
   }
      }
   }
}

Block make__51622480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51622480 = block;
   block->owner = (Object)__50287580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51622480;

   return block;
};

Block __56320260;

void code__56320260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50449300_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56320260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56320260 = block;
   block->owner = (Object)__56343800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56320260;

   return block;
};

Value make__56342000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341980() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341940() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341880() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341840() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341820() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341800() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341780() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341760() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341740() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341720() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341700() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56341420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56341300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56340860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56340600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56340580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56340560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56340140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_51037320;

SignalI lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360;

SignalI makelut_50924220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_841_51037320;
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
         src0 = make__56342000();
         src1 = make__56341980();
         src2 = make__56341960();
         src3 = make__56341940();
         src4 = make__56341920();
         src5 = make__56341900();
         src6 = make__56341880();
         src7 = make__56341860();
         src8 = make__56341840();
         src9 = make__56341820();
         src10 = make__56341800();
         src11 = make__56341780();
         src12 = make__56341760();
         src13 = make__56341740();
         src14 = make__56341720();
         src15 = make__56341700();
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

Behavior __50287580;

Behavior make__50287580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50287580 = behavior;
   behavior->owner = (Object)my__lut_58_841_51037320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__51622480();

   return behavior;
}

Behavior __56343800;

Behavior make__56343800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56343800 = behavior;
   behavior->owner = (Object)my__lut_58_841_51037320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[address_50306880_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360);
   lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any += 1;
   lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any = realloc(lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any,lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->any[lut_50924220_my__lut_58_841_51037320_my__lut_58_8410_50285360_func0__1_58_84_50707700_func0__1_58_840_48324200______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56320260();

   return behavior;
}

Scope makemy__lut_58_841_51037320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_51037320 = scope;
   scope->owner = (Object)my__lut_58_8410_50285360;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50924220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50287580();
   scope->behaviors[1] = make__56343800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_50285360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_50285360 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50306880();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50449300();
   systemT->outputs[1] = makenext__data_50700340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_51037320();

   return systemT;
}