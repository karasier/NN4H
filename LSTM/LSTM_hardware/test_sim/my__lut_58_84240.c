#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84240_116058160;

SignalI address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeaddress_116091940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84240_116058160;
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

SignalI base_117238260_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_117238260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_117238260_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84240_116058160;
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

SignalI next__data_132876640_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_132876640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_132876640_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84240_116058160;
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

Block __103748320;

Block __112576040;

void code__112576040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(make__187340780());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_132876640_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__112576040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __112576040 = block;
   block->owner = (Object)__103748320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__112576040;

   return block;
};

Block __103747780;

Block __107488200;

void code__107488200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_132876640_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__107488200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __107488200 = block;
   block->owner = (Object)__103747780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__107488200;

   return block;
};

Block __103747160;

void code__103747160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__187338340();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_132876640_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__103747160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __103747160 = block;
   block->owner = (Object)__103747780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__103747160;

   return block;
};

void code__103747780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__187339900();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__187339560();
                     src1 = make__187339540();
                     src2 = make__187339500();
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
    code__107488200();
   }
   else {
  code__103747160();
   }
      }
   }
}

Block make__103747780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __103747780 = block;
   block->owner = (Object)__103748320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__103747780;

   return block;
};

void code__103748320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__187341160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__112576040();
   }
   else {
  code__103747780();
   }
      }
   }
}

Block make__103748320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __103748320 = block;
   block->owner = (Object)__116059260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__103748320;

   return block;
};

Block __187324200;

void code__187324200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_117238260_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__187324200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __187324200 = block;
   block->owner = (Object)__187321880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__187324200;

   return block;
};

Value make__187342360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342300() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342280() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342260() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342240() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342200() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342180() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342140() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342120() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342100() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342080() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342040() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187342000() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187341980() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187341880() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187341860() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__187341160() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__187340780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__187339900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__187339560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__187339540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__187339500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__187338340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8424_194897600;

SignalI lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makelut_85363000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8424_194897600;
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
         src0 = make__187342360();
         src1 = make__187342300();
         src2 = make__187342280();
         src3 = make__187342260();
         src4 = make__187342240();
         src5 = make__187342200();
         src6 = make__187342180();
         src7 = make__187342140();
         src8 = make__187342120();
         src9 = make__187342100();
         src10 = make__187342080();
         src11 = make__187342040();
         src12 = make__187342000();
         src13 = make__187341980();
         src14 = make__187341880();
         src15 = make__187341860();
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

Behavior __116059260;

Behavior make__116059260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __116059260 = behavior;
   behavior->owner = (Object)my__lut_58_8424_194897600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__103748320();

   return behavior;
}

Behavior __187321880;

Behavior make__187321880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __187321880 = behavior;
   behavior->owner = (Object)my__lut_58_8424_194897600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[address_116091940_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[lut_85363000_my__lut_58_8424_194897600_my__lut_58_84240_116058160_func3_58_841_194426120_func3_58_8410_151469300_layer1_58_841_138565800_layer1_58_8410_179037060_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__187324200();

   return behavior;
}

Scope makemy__lut_58_8424_194897600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8424_194897600 = scope;
   scope->owner = (Object)my__lut_58_84240_116058160;
   scope->name = "my_lut:T24";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_85363000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__116059260();
   scope->behaviors[1] = make__187321880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84240_116058160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84240_116058160 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T240";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_116091940();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_117238260();
   systemT->outputs[1] = makenext__data_132876640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8424_194897600();

   return systemT;
}