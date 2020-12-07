#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8410_63003140;

SignalI address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeaddress_63001120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8410_63003140;
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

SignalI base_63241280_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makebase_63241280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_63241280_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8410_63003140;
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

SignalI next__data_63318540_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makenext__data_63318540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_63318540_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_8410_63003140;
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

Block __54041320;

Block __62666940;

void code__62666940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(make__78917280());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_63318540_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62666940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62666940 = block;
   block->owner = (Object)__54041320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62666940;

   return block;
};

Block __54041160;

Block __62354160;

void code__62354160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_63318540_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62354160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62354160 = block;
   block->owner = (Object)__54041160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62354160;

   return block;
};

Block __54040980;

void code__54040980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78916020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_63318540_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54040980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54040980 = block;
   block->owner = (Object)__54041160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54040980;

   return block;
};

void code__54041160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__78916760();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__78916500();
                     src1 = make__78916480();
                     src2 = make__78916460();
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
    code__62354160();
   }
   else {
  code__54040980();
   }
      }
   }
}

Block make__54041160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54041160 = block;
   block->owner = (Object)__54041320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54041160;

   return block;
};

void code__54041320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78917420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62666940();
   }
   else {
  code__54041160();
   }
      }
   }
}

Block make__54041320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54041320 = block;
   block->owner = (Object)__63003480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54041320;

   return block;
};

Block __78920920;

void code__78920920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_63241280_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78920920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78920920 = block;
   block->owner = (Object)__78919920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78920920;

   return block;
};

Value make__78918000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917980() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917960() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917940() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917920() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917900() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917880() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917860() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917840() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917820() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917800() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917780() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917760() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917740() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917720() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917700() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78917420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78917280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78916760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78916500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78916480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78916460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78916020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_841_65281060;

SignalI lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makelut_56684920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)my__lut_58_841_65281060;
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
         src0 = make__78918000();
         src1 = make__78917980();
         src2 = make__78917960();
         src3 = make__78917940();
         src4 = make__78917920();
         src5 = make__78917900();
         src6 = make__78917880();
         src7 = make__78917860();
         src8 = make__78917840();
         src9 = make__78917820();
         src10 = make__78917800();
         src11 = make__78917780();
         src12 = make__78917760();
         src13 = make__78917740();
         src14 = make__78917720();
         src15 = make__78917700();
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

Behavior __63003480;

Behavior make__63003480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63003480 = behavior;
   behavior->owner = (Object)my__lut_58_841_65281060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__54041320();

   return behavior;
}

Behavior __78919920;

Behavior make__78919920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78919920 = behavior;
   behavior->owner = (Object)my__lut_58_841_65281060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[address_63001120_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[lut_56684920_my__lut_58_841_65281060_my__lut_58_8410_63003140_func0_58_840_64613040_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78920920();

   return behavior;
}

Scope makemy__lut_58_841_65281060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_841_65281060 = scope;
   scope->owner = (Object)my__lut_58_8410_63003140;
   scope->name = "my_lut:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_56684920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63003480();
   scope->behaviors[1] = make__78919920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8410_63003140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8410_63003140 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_63001120();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_63241280();
   systemT->outputs[1] = makenext__data_63318540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_841_65281060();

   return systemT;
}