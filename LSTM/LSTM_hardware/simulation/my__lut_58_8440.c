#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_70034920;

SignalI address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makeaddress_70056860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8440_70034920;
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

SignalI base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makebase_70144160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8440_70034920;
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

SignalI next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makenext__data_70223480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_8440_70034920;
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

Block __54304440;

Block __69383400;

void code__69383400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(make__47479840());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__69383400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __69383400 = block;
   block->owner = (Object)__54304440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__69383400;

   return block;
};

Block __54304280;

Block __68799060;

void code__68799060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__68799060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68799060 = block;
   block->owner = (Object)__54304280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68799060;

   return block;
};

Block __54304100;

void code__54304100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47735320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_70223480_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__54304100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54304100 = block;
   block->owner = (Object)__54304280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54304100;

   return block;
};

void code__54304280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__47637520();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__47686520();
                     src1 = make__47685960();
                     src2 = make__47710160();
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
    code__68799060();
   }
   else {
  code__54304100();
   }
      }
   }
}

Block make__54304280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54304280 = block;
   block->owner = (Object)__54304440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54304280;

   return block;
};

void code__54304440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47459840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__69383400();
   }
   else {
  code__54304280();
   }
      }
   }
}

Block make__54304440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54304440 = block;
   block->owner = (Object)__70035260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54304440;

   return block;
};

Block __74178840;

void code__74178840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_70144160_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__74178840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __74178840 = block;
   block->owner = (Object)__44163280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__74178840;

   return block;
};

Value make__47398580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47398320() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47397740() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47397540() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47396700() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47415040() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47413700() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47429200() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47425200() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47446800() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47446260() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47445820() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47445800() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47445580() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47442200() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47441580() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47459840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47479840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47637520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47686520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47685960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47710160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47735320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_71873280;

SignalI lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800;

SignalI makelut_61875140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)my__lut_58_844_71873280;
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
         src0 = make__47398580();
         src1 = make__47398320();
         src2 = make__47397740();
         src3 = make__47397540();
         src4 = make__47396700();
         src5 = make__47415040();
         src6 = make__47413700();
         src7 = make__47429200();
         src8 = make__47425200();
         src9 = make__47446800();
         src10 = make__47446260();
         src11 = make__47445820();
         src12 = make__47445800();
         src13 = make__47445580();
         src14 = make__47442200();
         src15 = make__47441580();
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

Behavior __70035260;

Behavior make__70035260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70035260 = behavior;
   behavior->owner = (Object)my__lut_58_844_71873280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__54304440();

   return behavior;
}

Behavior __44163280;

Behavior make__44163280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44163280 = behavior;
   behavior->owner = (Object)my__lut_58_844_71873280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[address_70056860_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800);
   lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any += 1;
   lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any = realloc(lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any,lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->any[lut_61875140_my__lut_58_844_71873280_my__lut_58_8440_70034920_func0_58_842_71275000_func0_58_8420_58483060_layer1_58_840_71841520_layer1_58_8400_62644360_tanh__neural__network_58_84_60067600_tanh__neural__network_58_840_69764260______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__74178840();

   return behavior;
}

Scope makemy__lut_58_844_71873280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_71873280 = scope;
   scope->owner = (Object)my__lut_58_8440_70034920;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_61875140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70035260();
   scope->behaviors[1] = make__44163280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_70034920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_70034920 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_70056860();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_70144160();
   systemT->outputs[1] = makenext__data_70223480();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_71873280();

   return systemT;
}