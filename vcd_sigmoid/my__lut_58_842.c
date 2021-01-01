#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_56201000;

SignalI address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makeaddress_56199100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__lut_58_842_56201000;
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

SignalI base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makebase_56335500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__lut_58_842_56201000;
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

SignalI next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makenext__data_56570280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__lut_58_842_56201000;
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

Block __55017980;

Block __55792540;

void code__55792540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            idx = value2integer(make__49468180());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__55792540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55792540 = block;
   block->owner = (Object)__55017980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55792540;

   return block;
};

Block __55017820;

Block __55392080;

void code__55392080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            idx = value2integer(address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__55392080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55392080 = block;
   block->owner = (Object)__55017820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55392080;

   return block;
};

Block __55017660;

void code__55017660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49501780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_56570280_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__55017660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55017660 = block;
   block->owner = (Object)__55017820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55017660;

   return block;
};

void code__55017820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__49504120();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__49502920();
                     src1 = make__49502900();
                     src2 = make__49502880();
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
    code__55392080();
   }
   else {
  code__55017660();
   }
      }
   }
}

Block make__55017820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55017820 = block;
   block->owner = (Object)__55017980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55017820;

   return block;
};

void code__55017980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49468800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55792540();
   }
   else {
  code__55017820();
   }
      }
   }
}

Block make__55017980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55017980 = block;
   block->owner = (Object)__56201320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55017980;

   return block;
};

Block __49341680;

void code__49341680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value;
            idx = value2integer(address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_56335500_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
      set_value_pos(pool_state);
   }
}

Block make__49341680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341680 = block;
   block->owner = (Object)__49379180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341680;

   return block;
};

Value make__49433740() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49433720() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49433700() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49433540() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49433520() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49471240() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49471180() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49471040() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49470000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49469940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49468800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49468180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49504120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49502920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49502900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49502880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49501780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_49048920;

SignalI lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060;

SignalI makelut_54813800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060 = signalI;
   signalI->owner = (Object)my__lut_58_84_49048920;
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
         src0 = make__49433740();
         src1 = make__49433720();
         src2 = make__49433700();
         src3 = make__49433540();
         src4 = make__49433520();
         src5 = make__49471240();
         src6 = make__49471180();
         src7 = make__49471040();
         src8 = make__49470640();
         src9 = make__49470540();
         src10 = make__49470480();
         src11 = make__49470400();
         src12 = make__49470380();
         src13 = make__49470100();
         src14 = make__49470000();
         src15 = make__49469940();
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

Behavior __56201320;

Behavior make__56201320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56201320 = behavior;
   behavior->owner = (Object)my__lut_58_84_49048920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__55017980();

   return behavior;
}

Behavior __49379180;

Behavior make__49379180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49379180 = behavior;
   behavior->owner = (Object)my__lut_58_84_49048920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[address_56199100_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060);
   lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any += 1;
   lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any = realloc(lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any,lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any*sizeof(Object));
lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->any[lut_54813800_my__lut_58_84_49048920_my__lut_58_842_56201000_func0_58_84_45938840_func0_58_841_55161720_layer0_58_84_45909960_layer0_58_840_54601820_neural__network_58_84_49258960_neural__network_58_840_55247660______58_84_49496120______58_840_55987060->num_any-1] = (Object)behavior;
   behavior->block = make__49341680();

   return behavior;
}

Scope makemy__lut_58_84_49048920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_49048920 = scope;
   scope->owner = (Object)my__lut_58_842_56201000;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_54813800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56201320();
   scope->behaviors[1] = make__49379180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_56201000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_56201000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_56199100();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_56335500();
   systemT->outputs[1] = makenext__data_56570280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_49048920();

   return systemT;
}