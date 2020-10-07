#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_842_49596640;

SignalI address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress_49632480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__lut_58_842_49596640;
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

SignalI base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makebase_50115760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__lut_58_842_49596640;
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

SignalI next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makenext__data_50606700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__lut_58_842_49596640;
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

Block __50569380;

Block __51251200;

void code__51251200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(make__56371500());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__51251200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51251200 = block;
   block->owner = (Object)__50569380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51251200;

   return block;
};

Block __50593660;

Block __50913820;

void code__50913820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50913820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50913820 = block;
   block->owner = (Object)__50593660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50913820;

   return block;
};

Block __50592960;

void code__50592960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56369320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50606700_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__50592960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50592960 = block;
   block->owner = (Object)__50593660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50592960;

   return block;
};

void code__50593660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__56370920();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__56370240();
                     src1 = make__56370220();
                     src2 = make__56370180();
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
    code__50913820();
   }
   else {
  code__50592960();
   }
      }
   }
}

Block make__50593660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50593660 = block;
   block->owner = (Object)__50569380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50593660;

   return block;
};

void code__50569380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56371680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51251200();
   }
   else {
  code__50593660();
   }
      }
   }
}

Block make__50569380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50569380 = block;
   block->owner = (Object)__49597180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50569380;

   return block;
};

Block __56377120;

void code__56377120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_50115760_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56377120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56377120 = block;
   block->owner = (Object)__56375360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56377120;

   return block;
};

Value make__56372480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372460() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372440() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372420() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372380() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372360() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372340() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372320() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372300() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372260() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372220() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372200() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372140() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372100() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372080() {
   static unsigned long long data[] = { 241ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56372060() {
   static unsigned long long data[] = { 244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56371680() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56371500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56370920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56370240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56370220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56370180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56369320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_84_50424320;

SignalI lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makelut_50259420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__lut_58_84_50424320;
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
         src0 = make__56372480();
         src1 = make__56372460();
         src2 = make__56372440();
         src3 = make__56372420();
         src4 = make__56372380();
         src5 = make__56372360();
         src6 = make__56372340();
         src7 = make__56372320();
         src8 = make__56372300();
         src9 = make__56372260();
         src10 = make__56372220();
         src11 = make__56372200();
         src12 = make__56372140();
         src13 = make__56372100();
         src14 = make__56372080();
         src15 = make__56372060();
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

Behavior __49597180;

Behavior make__49597180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49597180 = behavior;
   behavior->owner = (Object)my__lut_58_84_50424320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__50569380();

   return behavior;
}

Behavior __56375360;

Behavior make__56375360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56375360 = behavior;
   behavior->owner = (Object)my__lut_58_84_50424320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_49632480_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[lut_50259420_my__lut_58_84_50424320_my__lut_58_842_49596640_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56377120();

   return behavior;
}

Scope makemy__lut_58_84_50424320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_84_50424320 = scope;
   scope->owner = (Object)my__lut_58_842_49596640;
   scope->name = "my_lut:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_50259420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49597180();
   scope->behaviors[1] = make__56375360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_842_49596640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_842_49596640 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T2";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_49632480();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_50115760();
   systemT->outputs[1] = makenext__data_50606700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_84_50424320();

   return systemT;
}