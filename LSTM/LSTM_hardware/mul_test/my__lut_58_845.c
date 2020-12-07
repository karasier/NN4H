#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_845_53642560;

SignalI address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeaddress_52615820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_845_53642560;
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

SignalI base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makebase_53880160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_845_53642560;
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

SignalI next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makenext__data_53988060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_845_53642560;
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

Block __48216000;

Block __51390120;

void code__51390120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(make__78365880());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51390120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51390120 = block;
   block->owner = (Object)__48216000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51390120;

   return block;
};

Block __48215700;

Block __48718120;

void code__48718120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48718120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48718120 = block;
   block->owner = (Object)__48215700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48718120;

   return block;
};

Block __48215400;

void code__48215400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78389160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_53988060_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__48215400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48215400 = block;
   block->owner = (Object)__48215700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48215400;

   return block;
};

void code__48215700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78365340();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78365080();
                     src1 = make__78365060();
                     src2 = make__78365040();
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
    code__48718120();
   }
   else {
  code__48215400();
   }
      }
   }
}

Block make__48215700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48215700 = block;
   block->owner = (Object)__48216000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48215700;

   return block;
};

void code__48216000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78366000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51390120();
   }
   else {
  code__48215700();
   }
      }
   }
}

Block make__48216000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48216000 = block;
   block->owner = (Object)__53642940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48216000;

   return block;
};

Block __78369500;

void code__78369500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_53880160_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78369500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78369500 = block;
   block->owner = (Object)__78368500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78369500;

   return block;
};

Value make__78366600() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366580() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366560() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366480() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78366000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78365880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78365340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78365080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78365060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78365040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78389160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_46086920;

SignalI lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makelut_57166200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_84_46086920;
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
         src0 = make__78366600();
         src1 = make__78366580();
         src2 = make__78366560();
         src3 = make__78366540();
         src4 = make__78366520();
         src5 = make__78366480();
         src6 = make__78366460();
         src7 = make__78366440();
         src8 = make__78366420();
         src9 = make__78366400();
         src10 = make__78366380();
         src11 = make__78366360();
         src12 = make__78366340();
         src13 = make__78366320();
         src14 = make__78366300();
         src15 = make__78366280();
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

Behavior __53642940;

Behavior make__53642940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53642940 = behavior;
   behavior->owner = (Object)my__lut_58_84_46086920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__48216000();

   return behavior;
}

Behavior __78368500;

Behavior make__78368500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78368500 = behavior;
   behavior->owner = (Object)my__lut_58_84_46086920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[address_52615820_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[lut_57166200_my__lut_58_84_46086920_my__lut_58_845_53642560_func0_58_84_56637700_func0_58_843_53883280_layer0_58_84_50156700_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78369500();

   return behavior;
}

Scope makemy__lut_58_84_46086920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_46086920 = scope;
   scope->owner = (Object)my__lut_58_845_53642560;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_57166200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53642940();
   scope->behaviors[1] = make__78368500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_845_53642560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_845_53642560 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T5";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_52615820();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_53880160();
   systemT->outputs[1] = makenext__data_53988060();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_46086920();

   return systemT;
}