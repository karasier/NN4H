#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_51962780;

SignalI address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makeaddress_51993320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51962780;
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

SignalI base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makebase_52116320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51962780;
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

SignalI next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makenext__data_52181500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_8400_51962780;
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

Block __50633760;

Block __51538580;

void code__51538580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(make__56287840());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__51538580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51538580 = block;
   block->owner = (Object)__50633760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51538580;

   return block;
};

Block __50633580;

Block __50941160;

void code__50941160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__50941160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50941160 = block;
   block->owner = (Object)__50633580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50941160;

   return block;
};

Block __50633360;

void code__50633360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56311220();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__50633360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50633360 = block;
   block->owner = (Object)__50633580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50633360;

   return block;
};

void code__50633580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56287400();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56311680();
                     src1 = make__56311660();
                     src2 = make__56311640();
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
    code__50941160();
   }
   else {
  code__50633360();
   }
      }
   }
}

Block make__50633580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50633580 = block;
   block->owner = (Object)__50633760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50633580;

   return block;
};

void code__50633760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56287960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51538580();
   }
   else {
  code__50633580();
   }
      }
   }
}

Block make__50633760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50633760 = block;
   block->owner = (Object)__51963100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50633760;

   return block;
};

Block __56291320;

void code__56291320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
            idx = value2integer(address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56291320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56291320 = block;
   block->owner = (Object)__56290340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56291320;

   return block;
};

Value make__56288540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288520() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288500() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288380() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288360() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288340() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288320() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288300() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288280() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288260() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56288240() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56287960() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56287840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56287400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56311680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56311660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56311640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56311220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_51642260;

SignalI lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makelut_48235020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)my__lut_58_840_51642260;
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
         src0 = make__56288540();
         src1 = make__56288520();
         src2 = make__56288500();
         src3 = make__56288480();
         src4 = make__56288460();
         src5 = make__56288440();
         src6 = make__56288420();
         src7 = make__56288400();
         src8 = make__56288380();
         src9 = make__56288360();
         src10 = make__56288340();
         src11 = make__56288320();
         src12 = make__56288300();
         src13 = make__56288280();
         src14 = make__56288260();
         src15 = make__56288240();
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

Behavior __51963100;

Behavior make__51963100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51963100 = behavior;
   behavior->owner = (Object)my__lut_58_840_51642260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__50633760();

   return behavior;
}

Behavior __56290340;

Behavior make__56290340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56290340 = behavior;
   behavior->owner = (Object)my__lut_58_840_51642260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[lut_48235020_my__lut_58_840_51642260_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56291320();

   return behavior;
}

Scope makemy__lut_58_840_51642260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_51642260 = scope;
   scope->owner = (Object)my__lut_58_8400_51962780;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_48235020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51963100();
   scope->behaviors[1] = make__56290340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_51962780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_51962780 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_51993320();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_52116320();
   systemT->outputs[1] = makenext__data_52181500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_51642260();

   return systemT;
}