#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8440_54231500;

SignalI address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress_54267720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8440_54231500;
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

SignalI base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makebase_55040780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8440_54231500;
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

SignalI next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makenext__data_55662240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8440_54231500;
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

Block __79234220;

Block __49922140;

void code__49922140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(make__51973640());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49922140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49922140 = block;
   block->owner = (Object)__79234220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49922140;

   return block;
};

Block __79234060;

Block __79518200;

void code__79518200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79518200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79518200 = block;
   block->owner = (Object)__79234060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79518200;

   return block;
};

Block __79233900;

void code__79233900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__51990660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_55662240_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79233900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79233900 = block;
   block->owner = (Object)__79234060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79233900;

   return block;
};

void code__79234060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__51971760();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__51970980();
                     src1 = make__51970900();
                     src2 = make__51970840();
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
    code__79518200();
   }
   else {
  code__79233900();
   }
      }
   }
}

Block make__79234060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79234060 = block;
   block->owner = (Object)__79234220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79234060;

   return block;
};

void code__79234220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51974100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49922140();
   }
   else {
  code__79234060();
   }
      }
   }
}

Block make__79234220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79234220 = block;
   block->owner = (Object)__54232440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79234220;

   return block;
};

Block __51878000;

void code__51878000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_55040780_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51878000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51878000 = block;
   block->owner = (Object)__51921040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51878000;

   return block;
};

Value make__51955260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51955040() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51955020() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954740() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954720() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954680() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954380() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954340() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954120() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954060() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51954040() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51953940() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51953900() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51953720() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51953680() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51977980() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51974100() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51973640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51971760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51970980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51970900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51970840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51990660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_844_74708420;

SignalI lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makelut_78898980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_844_74708420;
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
         src0 = make__51955260();
         src1 = make__51955040();
         src2 = make__51955020();
         src3 = make__51954740();
         src4 = make__51954720();
         src5 = make__51954680();
         src6 = make__51954380();
         src7 = make__51954340();
         src8 = make__51954120();
         src9 = make__51954060();
         src10 = make__51954040();
         src11 = make__51953940();
         src12 = make__51953900();
         src13 = make__51953720();
         src14 = make__51953680();
         src15 = make__51977980();
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

Behavior __54232440;

Behavior make__54232440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54232440 = behavior;
   behavior->owner = (Object)my__lut_58_844_74708420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79234220();

   return behavior;
}

Behavior __51921040;

Behavior make__51921040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51921040 = behavior;
   behavior->owner = (Object)my__lut_58_844_74708420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[address_54267720_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[lut_78898980_my__lut_58_844_74708420_my__lut_58_8440_54231500_func0_58_842_74310720_func0_58_8420_73894280_layer1_58_840_66079820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__51878000();

   return behavior;
}

Scope makemy__lut_58_844_74708420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_844_74708420 = scope;
   scope->owner = (Object)my__lut_58_8440_54231500;
   scope->name = "my_lut:T4";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_78898980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54232440();
   scope->behaviors[1] = make__51921040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8440_54231500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8440_54231500 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T40";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_54267720();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_55040780();
   systemT->outputs[1] = makenext__data_55662240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_844_74708420();

   return systemT;
}