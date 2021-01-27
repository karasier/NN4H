#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__lut_58_84200_149107000;

SignalI address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makeaddress_149104140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84200_149107000;
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

SignalI base_149608300_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makebase_149608300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_149608300_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84200_149107000;
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

SignalI next__data_150137840_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makenext__data_150137840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_150137840_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_84200_149107000;
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

Block __145326540;

Block __147937820;

void code__147937820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(make__183481660());
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_150137840_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__147937820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __147937820 = block;
   block->owner = (Object)__145326540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__147937820;

   return block;
};

Block __145326200;

Block __146852120;

void code__146852120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_150137840_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__146852120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __146852120 = block;
   block->owner = (Object)__145326200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__146852120;

   return block;
};

Block __145399520;

void code__145399520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__183479320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_150137840_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__145399520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145399520 = block;
   block->owner = (Object)__145326200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145399520;

   return block;
};

void code__145326200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0,src1;
               Value dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = make__183480920();
               src1 = ({
                     Value src0,src1,src2;
                     Value dst = get_value();
                     unsigned int pool_state = get_value_pos();
                     src0 = make__183480280();
                     src1 = make__183480260();
                     src2 = make__183480200();
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
    code__146852120();
   }
   else {
  code__145399520();
   }
      }
   }
}

Block make__145326200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145326200 = block;
   block->owner = (Object)__145326540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145326200;

   return block;
};

void code__145326540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__183481920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__147937820();
   }
   else {
  code__145326200();
   }
      }
   }
}

Block make__145326540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __145326540 = block;
   block->owner = (Object)__149107580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__145326540;

   return block;
};

Block __183464580;

void code__183464580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value;
            idx = value2integer(address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_149608300_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__183464580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __183464580 = block;
   block->owner = (Object)__183462560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__183464580;

   return block;
};

Value make__183482900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482880() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482860() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482720() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482700() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482680() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482660() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482600() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482580() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482560() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482520() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482500() {
   static unsigned long long data[] = { 4294967281ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183482480() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__183481920() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__183481660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__183480920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__183480280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__183480260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__183480200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__183479320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__lut_58_8420_107891340;

SignalI lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940;

SignalI makelut_144222200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)my__lut_58_8420_107891340;
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
         src0 = make__183482900();
         src1 = make__183482880();
         src2 = make__183482860();
         src3 = make__183482840();
         src4 = make__183482820();
         src5 = make__183482800();
         src6 = make__183482720();
         src7 = make__183482700();
         src8 = make__183482680();
         src9 = make__183482660();
         src10 = make__183482600();
         src11 = make__183482580();
         src12 = make__183482560();
         src13 = make__183482520();
         src14 = make__183482500();
         src15 = make__183482480();
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

Behavior __149107580;

Behavior make__149107580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __149107580 = behavior;
   behavior->owner = (Object)my__lut_58_8420_107891340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__145326540();

   return behavior;
}

Behavior __183462560;

Behavior make__183462560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __183462560 = behavior;
   behavior->owner = (Object)my__lut_58_8420_107891340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[address_149104140_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940);
   lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any += 1;
   lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any = realloc(lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any,lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->any[lut_144222200_my__lut_58_8420_107891340_my__lut_58_84200_149107000_func1_58_843_104206840_func1_58_8430_109900380_layer0_58_841_146960500_layer0_58_8410_137341360_input__tanh__nn_58_84_115651900_input__tanh__nn_58_840_185952980______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__183464580();

   return behavior;
}

Scope makemy__lut_58_8420_107891340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__lut_58_8420_107891340 = scope;
   scope->owner = (Object)my__lut_58_84200_149107000;
   scope->name = "my_lut:T20";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_144222200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__149107580();
   scope->behaviors[1] = make__183462560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__lut_58_84200_149107000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__lut_58_84200_149107000 = systemT;
systemT->owner = NULL;
   systemT->name = "my_lut:T200";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddress_149104140();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_149608300();
   systemT->outputs[1] = makenext__data_150137840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__lut_58_8420_107891340();

   return systemT;
}