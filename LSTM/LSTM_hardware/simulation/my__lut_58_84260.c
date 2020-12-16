#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84260_155098000;

SignalI address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeaddress_155094460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84260_155098000;
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

SignalI base_155320620_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_155320620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_155320620_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84260_155098000;
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

SignalI next__data_155577900_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_155577900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_155577900_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84260_155098000;
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

Block __153040480;

Block __154645800;

void code__154645800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(make__216197760());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_155577900_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__154645800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __154645800 = block;
   block->owner = (Object)__153040480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__154645800;

   return block;
};

Block __153040260;

Block __153595120;

void code__153595120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_155577900_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__153595120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __153595120 = block;
   block->owner = (Object)__153040260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__153595120;

   return block;
};

Block __153039900;

void code__153039900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__216196040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_155577900_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__153039900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __153039900 = block;
   block->owner = (Object)__153040260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__153039900;

   return block;
};

void code__153040260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__216197200();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__216196880();
                     src1 = make__216196860();
                     src2 = make__216196840();
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
    code__153595120();
   }
   else {
  code__153039900();
   }
      }
   }
}

Block make__153040260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __153040260 = block;
   block->owner = (Object)__153040480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__153040260;

   return block;
};

void code__153040480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__216197900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__154645800();
   }
   else {
  code__153040260();
   }
      }
   }
}

Block make__153040480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __153040480 = block;
   block->owner = (Object)__155098540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__153040480;

   return block;
};

Block __216203200;

void code__216203200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_155320620_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216203200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216203200 = block;
   block->owner = (Object)__216201780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216203200;

   return block;
};

Value make__216199060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216199040() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216199020() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216199000() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198960() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198940() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198860() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198760() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198480() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198460() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198440() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198420() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198380() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198300() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198280() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216198260() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__216197900() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216197760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216197200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216196880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216196860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216196840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216196040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8426_141587240;

SignalI lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelut_152238980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8426_141587240;
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
         src0 = make__216199060();
         src1 = make__216199040();
         src2 = make__216199020();
         src3 = make__216199000();
         src4 = make__216198960();
         src5 = make__216198940();
         src6 = make__216198860();
         src7 = make__216198760();
         src8 = make__216198480();
         src9 = make__216198460();
         src10 = make__216198440();
         src11 = make__216198420();
         src12 = make__216198380();
         src13 = make__216198300();
         src14 = make__216198280();
         src15 = make__216198260();
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

Behavior __155098540;

Behavior make__155098540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __155098540 = behavior;
   behavior->owner = (Object)my__lut_58_8426_141587240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__153040480();

   return behavior;
}

Behavior __216201780;

Behavior make__216201780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216201780 = behavior;
   behavior->owner = (Object)my__lut_58_8426_141587240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_155094460_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[lut_152238980_my__lut_58_8426_141587240_my__lut_58_84260_155098000_func5_58_841_140326040_func5_58_8410_165920100_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216203200();

   return behavior;
}

Scope makemy__lut_58_8426_141587240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8426_141587240 = scope;
   scope->owner = (Object)my__lut_58_84260_155098000;
   scope->name = "my_lut:T26";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_152238980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__155098540();
   scope->behaviors[1] = make__216201780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84260_155098000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84260_155098000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T260";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_155094460();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_155320620();
   systemT->outputs[1] = makenext__data_155577900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8426_141587240();

   return systemT;
}