#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_56241100;

SignalI address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress_56394740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8440_56241100;
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

SignalI base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makebase_56442960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8440_56241100;
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

SignalI next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makenext__data_61807980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_8440_56241100;
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

Block __79123780;

Block __54339180;

void code__54339180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(make__55564820());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54339180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54339180 = block;
   block->owner = (Object)__79123780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54339180;

   return block;
};

Block __79123620;

Block __50505940;

void code__50505940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50505940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50505940 = block;
   block->owner = (Object)__79123620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50505940;

   return block;
};

Block __79123460;

void code__79123460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__55558800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_61807980_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79123460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79123460 = block;
   block->owner = (Object)__79123620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79123460;

   return block;
};

void code__79123620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__55562280();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__55560540();
                     src1 = make__55560480();
                     src2 = make__55560460();
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
    code__50505940();
   }
   else {
  code__79123460();
   }
      }
   }
}

Block make__79123620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79123620 = block;
   block->owner = (Object)__79123780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79123620;

   return block;
};

void code__79123780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55565160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54339180();
   }
   else {
  code__79123620();
   }
      }
   }
}

Block make__79123780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79123780 = block;
   block->owner = (Object)__56244380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79123780;

   return block;
};

Block __55523140;

void code__55523140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56442960_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55523140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55523140 = block;
   block->owner = (Object)__55518620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55523140;

   return block;
};

Value make__55543260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55543160() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542780() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542680() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542660() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542280() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542240() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542220() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542060() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55542040() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55541820() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55566160() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55566140() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55566120() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55566000() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55565900() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55565160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55564820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55562280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55560540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55560480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55560460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55558800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_74720740;

SignalI lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makelut_78862200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)my__lut_58_844_74720740;
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
         src0 = make__55543260();
         src1 = make__55543160();
         src2 = make__55542780();
         src3 = make__55542680();
         src4 = make__55542660();
         src5 = make__55542280();
         src6 = make__55542240();
         src7 = make__55542220();
         src8 = make__55542060();
         src9 = make__55542040();
         src10 = make__55541820();
         src11 = make__55566160();
         src12 = make__55566140();
         src13 = make__55566120();
         src14 = make__55566000();
         src15 = make__55565900();
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

Behavior __56244380;

Behavior make__56244380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56244380 = behavior;
   behavior->owner = (Object)my__lut_58_844_74720740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79123780();

   return behavior;
}

Behavior __55518620;

Behavior make__55518620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55518620 = behavior;
   behavior->owner = (Object)my__lut_58_844_74720740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[address_56394740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[lut_78862200_my__lut_58_844_74720740_my__lut_58_8440_56241100_func0_58_842_74241080_func0_58_8420_73820940_layer1_58_840_53482960_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__55523140();

   return behavior;
}

Scope makemy__lut_58_844_74720740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_74720740 = scope;
   scope->owner = (Object)my__lut_58_8440_56241100;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_78862200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56244380();
   scope->behaviors[1] = make__55518620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_56241100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_56241100 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_56394740();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56442960();
   systemT->outputs[1] = makenext__data_61807980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_74720740();

   return systemT;
}