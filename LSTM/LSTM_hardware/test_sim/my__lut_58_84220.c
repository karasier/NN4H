#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84220_176384980;

SignalI address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeaddress_176382960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84220_176384980;
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

SignalI base_176501140_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_176501140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_176501140_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84220_176384980;
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

SignalI next__data_176603000_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_176603000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_176603000_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84220_176384980;
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

Block __174938060;

Block __176123180;

void code__176123180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(make__186824820());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_176603000_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176123180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176123180 = block;
   block->owner = (Object)__174938060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176123180;

   return block;
};

Block __174937900;

Block __175454000;

void code__175454000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_176603000_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__175454000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __175454000 = block;
   block->owner = (Object)__174937900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__175454000;

   return block;
};

Block __174937740;

void code__174937740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__186822640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_176603000_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__174937740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __174937740 = block;
   block->owner = (Object)__174937900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__174937740;

   return block;
};

void code__174937900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__186824200();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__186823700();
                     src1 = make__186823680();
                     src2 = make__186823620();
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
    code__175454000();
   }
   else {
  code__174937740();
   }
      }
   }
}

Block make__174937900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __174937900 = block;
   block->owner = (Object)__174938060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__174937900;

   return block;
};

void code__174938060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__186825000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__176123180();
   }
   else {
  code__174937900();
   }
      }
   }
}

Block make__174938060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __174938060 = block;
   block->owner = (Object)__176385300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__174938060;

   return block;
};

Block __186808120;

void code__186808120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_176501140_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__186808120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __186808120 = block;
   block->owner = (Object)__186806180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__186808120;

   return block;
};

Value make__186826680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826620() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826580() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826500() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826420() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826360() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826340() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826300() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826280() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826200() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826140() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186826020() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186825940() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186825900() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186825860() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__186825000() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__186824820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__186824200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__186823700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__186823680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__186823620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__186822640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8422_147756200;

SignalI lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makelut_174723060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8422_147756200;
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
         src0 = make__186826680();
         src1 = make__186826640();
         src2 = make__186826620();
         src3 = make__186826580();
         src4 = make__186826500();
         src5 = make__186826420();
         src6 = make__186826360();
         src7 = make__186826340();
         src8 = make__186826300();
         src9 = make__186826280();
         src10 = make__186826200();
         src11 = make__186826140();
         src12 = make__186826020();
         src13 = make__186825940();
         src14 = make__186825900();
         src15 = make__186825860();
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

Behavior __176385300;

Behavior make__176385300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176385300 = behavior;
   behavior->owner = (Object)my__lut_58_8422_147756200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__174938060();

   return behavior;
}

Behavior __186806180;

Behavior make__186806180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __186806180 = behavior;
   behavior->owner = (Object)my__lut_58_8422_147756200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[address_176382960_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[lut_174723060_my__lut_58_8422_147756200_my__lut_58_84220_176384980_func1_58_844_147111860_func1_58_8440_180556700_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__186808120();

   return behavior;
}

Scope makemy__lut_58_8422_147756200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8422_147756200 = scope;
   scope->owner = (Object)my__lut_58_84220_176384980;
   scope->name = "my_lut:T22";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_174723060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__176385300();
   scope->behaviors[1] = make__186806180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84220_176384980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84220_176384980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T220";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_176382960();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_176501140();
   systemT->outputs[1] = makenext__data_176603000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8422_147756200();

   return systemT;
}