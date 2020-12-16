#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84360_83878060;

SignalI address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeaddress_84006400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84360_83878060;
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

SignalI base_86714100_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makebase_86714100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_86714100_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84360_83878060;
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

SignalI next__data_88954040_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makenext__data_88954040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_88954040_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_84360_83878060;
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

Block __229457220;

Block __66804520;

void code__66804520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(make__190368440());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_88954040_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__66804520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66804520 = block;
   block->owner = (Object)__229457220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66804520;

   return block;
};

Block __229457060;

Block __230022400;

void code__230022400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_88954040_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__230022400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __230022400 = block;
   block->owner = (Object)__229457060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__230022400;

   return block;
};

Block __229456900;

void code__229456900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__190366880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_88954040_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__229456900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __229456900 = block;
   block->owner = (Object)__229457060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__229456900;

   return block;
};

void code__229457060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__190367700();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__190367380();
                     src1 = make__190367360();
                     src2 = make__190367300();
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
    code__230022400();
   }
   else {
  code__229456900();
   }
      }
   }
}

Block make__229457060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __229457060 = block;
   block->owner = (Object)__229457220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__229457060;

   return block;
};

void code__229457220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__190368580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66804520();
   }
   else {
  code__229457060();
   }
      }
   }
}

Block make__229457220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __229457220 = block;
   block->owner = (Object)__83880600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__229457220;

   return block;
};

Block __190372960;

void code__190372960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_86714100_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__190372960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __190372960 = block;
   block->owner = (Object)__190371700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__190372960;

   return block;
};

Value make__190369220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369180() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369160() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369140() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369120() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369080() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369040() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369020() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190369000() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368980() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368960() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368940() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368920() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368900() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368860() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__190368580() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__190368440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__190367700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__190367380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__190367360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__190367300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__190366880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8436_117871340;

SignalI lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makelut_229242160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)my__lut_58_8436_117871340;
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
         src0 = make__190369220();
         src1 = make__190369200();
         src2 = make__190369180();
         src3 = make__190369160();
         src4 = make__190369140();
         src5 = make__190369120();
         src6 = make__190369080();
         src7 = make__190369040();
         src8 = make__190369020();
         src9 = make__190369000();
         src10 = make__190368980();
         src11 = make__190368960();
         src12 = make__190368940();
         src13 = make__190368920();
         src14 = make__190368900();
         src15 = make__190368860();
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

Behavior __83880600;

Behavior make__83880600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83880600 = behavior;
   behavior->owner = (Object)my__lut_58_8436_117871340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__229457220();

   return behavior;
}

Behavior __190371700;

Behavior make__190371700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __190371700 = behavior;
   behavior->owner = (Object)my__lut_58_8436_117871340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_84006400_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[lut_229242160_my__lut_58_8436_117871340_my__lut_58_84360_83878060_func5_58_842_217378800_func5_58_8420_144448480_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__190372960();

   return behavior;
}

Scope makemy__lut_58_8436_117871340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8436_117871340 = scope;
   scope->owner = (Object)my__lut_58_84360_83878060;
   scope->name = "my_lut:T36";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_229242160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__83880600();
   scope->behaviors[1] = make__190371700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84360_83878060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84360_83878060 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T360";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_84006400();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_86714100();
   systemT->outputs[1] = makenext__data_88954040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8436_117871340();

   return systemT;
}