#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8420_63721520;

SignalI address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress_63718680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8420_63721520;
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

SignalI base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makebase_63923860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8420_63721520;
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

SignalI next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makenext__data_64168460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8420_63721520;
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

Block __62090440;

Block __63333600;

void code__63333600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(make__53347260());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63333600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63333600 = block;
   block->owner = (Object)__62090440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63333600;

   return block;
};

Block __62090280;

Block __62695460;

void code__62695460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62695460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62695460 = block;
   block->owner = (Object)__62090280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62695460;

   return block;
};

Block __62090120;

void code__62090120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__53381080();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_64168460_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62090120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62090120 = block;
   block->owner = (Object)__62090280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62090120;

   return block;
};

void code__62090280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__53384100();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__53382280();
                     src1 = make__53382260();
                     src2 = make__53382200();
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
    code__62695460();
   }
   else {
  code__62090120();
   }
      }
   }
}

Block make__62090280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62090280 = block;
   block->owner = (Object)__62090440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62090280;

   return block;
};

void code__62090440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53348080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63333600();
   }
   else {
  code__62090280();
   }
      }
   }
}

Block make__62090440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62090440 = block;
   block->owner = (Object)__63721920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62090440;

   return block;
};

Block __51562260;

void code__51562260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_63923860_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51562260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51562260 = block;
   block->owner = (Object)__53015500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51562260;

   return block;
};

Value make__53350920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350820() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350660() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350640() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350560() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350300() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350280() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350240() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350140() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350120() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350100() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350080() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53350020() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53348080() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53347260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53384100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53382280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53382260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53382200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53381080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_842_63254160;

SignalI lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelut_56445320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_842_63254160;
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
         src0 = make__53350920();
         src1 = make__53350820();
         src2 = make__53350660();
         src3 = make__53350640();
         src4 = make__53350560();
         src5 = make__53350520();
         src6 = make__53350440();
         src7 = make__53350380();
         src8 = make__53350300();
         src9 = make__53350280();
         src10 = make__53350240();
         src11 = make__53350140();
         src12 = make__53350120();
         src13 = make__53350100();
         src14 = make__53350080();
         src15 = make__53350020();
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

Behavior __63721920;

Behavior make__63721920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63721920 = behavior;
   behavior->owner = (Object)my__lut_58_842_63254160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__62090440();

   return behavior;
}

Behavior __53015500;

Behavior make__53015500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53015500 = behavior;
   behavior->owner = (Object)my__lut_58_842_63254160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_63718680_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[lut_56445320_my__lut_58_842_63254160_my__lut_58_8420_63721520_func0_58_841_62376000_func0_58_8410_62410340_layer0_58_840_53428740_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__51562260();

   return behavior;
}

Scope makemy__lut_58_842_63254160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_842_63254160 = scope;
   scope->owner = (Object)my__lut_58_8420_63721520;
   scope->name = "my_lut:T2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_56445320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63721920();
   scope->behaviors[1] = make__53015500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8420_63721520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8420_63721520 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_63718680();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_63923860();
   systemT->outputs[1] = makenext__data_64168460();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_842_63254160();

   return systemT;
}