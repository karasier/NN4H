#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_8450_81677980;

SignalI address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makeaddress_81730700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8450_81677980;
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

SignalI base_82097120_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makebase_82097120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_82097120_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8450_81677980;
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

SignalI next__data_82266160_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makenext__data_82266160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_82266160_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8450_81677980;
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

Block __78561160;

Block __80579440;

void code__80579440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(make__156954100());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_82266160_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__80579440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __80579440 = block;
   block->owner = (Object)__78561160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__80579440;

   return block;
};

Block __78560700;

Block __79571240;

void code__79571240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_82266160_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__79571240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79571240 = block;
   block->owner = (Object)__78560700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79571240;

   return block;
};

Block __78560040;

void code__78560040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__156991180();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_82266160_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__78560040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78560040 = block;
   block->owner = (Object)__78560700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78560040;

   return block;
};

void code__78560700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__156952160();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__156951440();
                     src1 = make__156951320();
                     src2 = make__156951260();
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
    code__79571240();
   }
   else {
  code__78560040();
   }
      }
   }
}

Block make__78560700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78560700 = block;
   block->owner = (Object)__78561160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78560700;

   return block;
};

void code__78561160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__156954720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__80579440();
   }
   else {
  code__78560700();
   }
      }
   }
}

Block make__78561160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78561160 = block;
   block->owner = (Object)__81678800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78561160;

   return block;
};

Block __156853200;

void code__156853200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_82097120_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__156853200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __156853200 = block;
   block->owner = (Object)__156872800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__156853200;

   return block;
};

Value make__156956520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156956420() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156956320() {
   static unsigned long long data[] = { 32ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156956280() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156956240() {
   static unsigned long long data[] = { 64ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156956100() {
   static unsigned long long data[] = { 80ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156956080() {
   static unsigned long long data[] = { 96ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955920() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955900() {
   static unsigned long long data[] = { 4294967168ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955860() {
   static unsigned long long data[] = { 4294967184ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955800() {
   static unsigned long long data[] = { 4294967200ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955720() {
   static unsigned long long data[] = { 4294967216ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955600() {
   static unsigned long long data[] = { 4294967232ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955380() {
   static unsigned long long data[] = { 4294967248ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955360() {
   static unsigned long long data[] = { 4294967264ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156955320() {
   static unsigned long long data[] = { 4294967280ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__156954720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__156954100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__156952160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__156951440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__156951320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__156951260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__156991180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_845_116294380;

SignalI lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940;

SignalI makelut_77601680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_845_116294380;
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
         src0 = make__156956520();
         src1 = make__156956420();
         src2 = make__156956320();
         src3 = make__156956280();
         src4 = make__156956240();
         src5 = make__156956100();
         src6 = make__156956080();
         src7 = make__156955920();
         src8 = make__156955900();
         src9 = make__156955860();
         src10 = make__156955800();
         src11 = make__156955720();
         src12 = make__156955600();
         src13 = make__156955380();
         src14 = make__156955360();
         src15 = make__156955320();
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

Behavior __81678800;

Behavior make__81678800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __81678800 = behavior;
   behavior->owner = (Object)my__lut_58_845_116294380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__78561160();

   return behavior;
}

Behavior __156872800;

Behavior make__156872800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __156872800 = behavior;
   behavior->owner = (Object)my__lut_58_845_116294380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[address_81730700_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940);
   lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any += 1;
   lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any = realloc(lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any,lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->any[lut_77601680_my__lut_58_845_116294380_my__lut_58_8450_81677980_func4_58_84_115797160_func4_58_843_103649520_layer1_58_84_66354600_layer1_58_843_105920780_forget__sig__nn_58_84_86079120_forget__sig__nn_58_840_66827240______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__156853200();

   return behavior;
}

Scope makemy__lut_58_845_116294380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_845_116294380 = scope;
   scope->owner = (Object)my__lut_58_8450_81677980;
   scope->name = "my_lut:T5";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_77601680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__81678800();
   scope->behaviors[1] = make__156872800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_8450_81677980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_8450_81677980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T50";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_81730700();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_82097120();
   systemT->outputs[1] = makenext__data_82266160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_845_116294380();

   return systemT;
}