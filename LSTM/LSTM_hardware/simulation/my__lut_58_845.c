#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_845_53403500;

SignalI address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeaddress_53400880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_845_53403500;
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

SignalI base_53518080_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makebase_53518080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53518080_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_845_53403500;
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

SignalI next__data_53642220_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makenext__data_53642220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53642220_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_845_53403500;
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

Block __48891980;

Block __51091800;

void code__51091800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(make__78538720());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53642220_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51091800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51091800 = block;
   block->owner = (Object)__48891980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51091800;

   return block;
};

Block __48891700;

Block __50425700;

void code__50425700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53642220_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50425700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50425700 = block;
   block->owner = (Object)__48891700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50425700;

   return block;
};

Block __48891520;

void code__48891520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78537520();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53642220_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__48891520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48891520 = block;
   block->owner = (Object)__48891700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48891520;

   return block;
};

void code__48891700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78538260();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78538000();
                     src1 = make__78537980();
                     src2 = make__78537960();
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
    code__50425700();
   }
   else {
  code__48891520();
   }
      }
   }
}

Block make__48891700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48891700 = block;
   block->owner = (Object)__48891980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48891700;

   return block;
};

void code__48891980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78538840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51091800();
   }
   else {
  code__48891700();
   }
      }
   }
}

Block make__48891980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48891980 = block;
   block->owner = (Object)__53379380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48891980;

   return block;
};

Block __78542420;

void code__78542420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_53518080_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78542420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78542420 = block;
   block->owner = (Object)__78541340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78542420;

   return block;
};

Value make__78539480() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539460() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539440() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539400() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539280() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78539120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78538840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78538720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78538260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78538000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78537980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78537960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78537520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_46126520;

SignalI lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelut_56857820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_84_46126520;
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
         src0 = make__78539480();
         src1 = make__78539460();
         src2 = make__78539440();
         src3 = make__78539420();
         src4 = make__78539400();
         src5 = make__78539360();
         src6 = make__78539340();
         src7 = make__78539280();
         src8 = make__78539260();
         src9 = make__78539240();
         src10 = make__78539220();
         src11 = make__78539200();
         src12 = make__78539180();
         src13 = make__78539160();
         src14 = make__78539140();
         src15 = make__78539120();
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

Behavior __53379380;

Behavior make__53379380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53379380 = behavior;
   behavior->owner = (Object)my__lut_58_84_46126520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__48891980();

   return behavior;
}

Behavior __78541340;

Behavior make__78541340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78541340 = behavior;
   behavior->owner = (Object)my__lut_58_84_46126520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[address_53400880_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[lut_56857820_my__lut_58_84_46126520_my__lut_58_845_53403500_func0_58_84_56497360_func0_58_843_53516640_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78542420();

   return behavior;
}

Scope makemy__lut_58_84_46126520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_46126520 = scope;
   scope->owner = (Object)my__lut_58_845_53403500;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_56857820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53379380();
   scope->behaviors[1] = make__78541340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_845_53403500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_845_53403500 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T5";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_53400880();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_53518080();
   systemT->outputs[1] = makenext__data_53642220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_46126520();

   return systemT;
}