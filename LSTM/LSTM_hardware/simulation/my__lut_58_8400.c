#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8400_50554560;

SignalI address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeaddress_50573940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8400_50554560;
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

SignalI base_50936160_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makebase_50936160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50936160_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8400_50554560;
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

SignalI next__data_51122020_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makenext__data_51122020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51122020_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8400_50554560;
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

Block __55856740;

Block __48925880;

void code__48925880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(make__78587460());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51122020_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__48925880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48925880 = block;
   block->owner = (Object)__55856740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48925880;

   return block;
};

Block __55856440;

Block __56781380;

void code__56781380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51122020_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__56781380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56781380 = block;
   block->owner = (Object)__55856440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56781380;

   return block;
};

Block __55856080;

void code__55856080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78586280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_51122020_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55856080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55856080 = block;
   block->owner = (Object)__55856440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55856080;

   return block;
};

void code__55856440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78587020();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78586760();
                     src1 = make__78586740();
                     src2 = make__78586700();
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
    code__56781380();
   }
   else {
  code__55856080();
   }
      }
   }
}

Block make__55856440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55856440 = block;
   block->owner = (Object)__55856740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55856440;

   return block;
};

void code__55856740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78587580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48925880();
   }
   else {
  code__55856440();
   }
      }
   }
}

Block make__55856740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55856740 = block;
   block->owner = (Object)__50555340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55856740;

   return block;
};

Block __78591180;

void code__78591180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50936160_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78591180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78591180 = block;
   block->owner = (Object)__78590180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78591180;

   return block;
};

Value make__78588260() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588240() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588220() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588200() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588140() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588120() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78588000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78587980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78587960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78587940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78587580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78587460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78587020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78586760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78586740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78586700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78586280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_840_54668340;

SignalI lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelut_55392720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_840_54668340;
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
         src0 = make__78588260();
         src1 = make__78588240();
         src2 = make__78588220();
         src3 = make__78588200();
         src4 = make__78588180();
         src5 = make__78588160();
         src6 = make__78588140();
         src7 = make__78588120();
         src8 = make__78588100();
         src9 = make__78588080();
         src10 = make__78588060();
         src11 = make__78588040();
         src12 = make__78588000();
         src13 = make__78587980();
         src14 = make__78587960();
         src15 = make__78587940();
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

Behavior __50555340;

Behavior make__50555340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50555340 = behavior;
   behavior->owner = (Object)my__lut_58_840_54668340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55856740();

   return behavior;
}

Behavior __78590180;

Behavior make__78590180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78590180 = behavior;
   behavior->owner = (Object)my__lut_58_840_54668340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[address_50573940_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[lut_55392720_my__lut_58_840_54668340_my__lut_58_8400_50554560_func1_58_84_53886780_func1_58_841_53899160_layer0_58_84_49418680_layer0_58_841_53980880_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78591180();

   return behavior;
}

Scope makemy__lut_58_840_54668340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_840_54668340 = scope;
   scope->owner = (Object)my__lut_58_8400_50554560;
   scope->name = "my_lut:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_55392720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50555340();
   scope->behaviors[1] = make__78590180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8400_50554560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8400_50554560 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_50573940();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50936160();
   systemT->outputs[1] = makenext__data_51122020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_840_54668340();

   return systemT;
}