#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func3_58_8410_142988400;

SignalI z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makez__value_143832340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_8410_142988400;
   signalI->name = "z_value";
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

SignalI a_144250740_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makea_144250740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_144250740_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_8410_142988400;
   signalI->name = "a";
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

Block __215934880;

void code__215934880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__215989900());
            last = value2integer(make__215989860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__215934880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __215934880 = block;
   block->owner = (Object)__215934620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__215934880;

   return block;
};

Block __215934560;

void code__215934560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400,value2integer(make__215989700()),value2integer(make__215989680())));
      set_value_pos(pool_state);
   }
}

Block make__215934560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __215934560 = block;
   block->owner = (Object)__215934080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__215934560;

   return block;
};

Block __215934000;

void code__215934000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__215988920();
            src1 = make__215988900();
            src2 = make__215988880();
            src3 = make__215988860();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__215988660());
            last = value2integer(make__215988640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__215934000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __215934000 = block;
   block->owner = (Object)__215933440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__215934000;

   return block;
};

Block __215933400;

void code__215933400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,src2;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__215988180();
            src1 = make__215988160();
            src2 = make__215988120();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__215988060();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__215987740();
            src1 = make__215987720();
            src2 = make__215987700();
            src3 = make__215987660();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__215933400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __215933400 = block;
   block->owner = (Object)__215957140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__215933400;

   return block;
};

Block __215935160;

void code__215935160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,address_165965240_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,base_89852980_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,next__data_104700160_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,change_106160380_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,remaining_107302580_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,a_144250740_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__215935160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __215935160 = block;
   block->owner = (Object)__215973600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__215935160;

   return block;
};

Block __215935040;

void code__215935040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__215935040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __215935040 = block;
   block->owner = (Object)__215973120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__215935040;

   return block;
};

Value make__215989900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__215989860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__215989700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__215989680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__215988920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988660() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__215988640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__215988180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215988060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215987740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215987720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215987700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__215987660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func3_58_841_119342220;

SignalI base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_120623640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_841_119342220;
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

SignalI next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_121717460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_841_119342220;
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

SignalI address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeaddress_121717200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_841_119342220;
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

SignalI remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeremaining_83338360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_841_119342220;
   signalI->name = "remaining";
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

SignalI change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makechange_117237760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_841_119342220;
   signalI->name = "change";
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

SystemI my__lut_166662680;

SystemI makemy__lut_166662680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_166662680 = systemI;
   systemI->owner = (Object)func3_58_841_119342220;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84240_165968280;

   return systemI;
};

SystemI my__interpolator_108641780;

SystemI makemy__interpolator_108641780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_108641780 = systemI;
   systemI->owner = (Object)func3_58_841_119342220;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84240_87628940;

   return systemI;
};

Behavior __215934620;

Behavior make__215934620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __215934620 = behavior;
   behavior->owner = (Object)func3_58_841_119342220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__215934880();

   return behavior;
}

Behavior __215934080;

Behavior make__215934080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __215934080 = behavior;
   behavior->owner = (Object)func3_58_841_119342220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__215934560();

   return behavior;
}

Behavior __215933440;

Behavior make__215933440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __215933440 = behavior;
   behavior->owner = (Object)func3_58_841_119342220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[z__value_143832340_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__215934000();

   return behavior;
}

Behavior __215957140;

Behavior make__215957140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __215957140 = behavior;
   behavior->owner = (Object)func3_58_841_119342220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__215933400();

   return behavior;
}

Behavior __215973600;

Behavior make__215973600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __215973600 = behavior;
   behavior->owner = (Object)func3_58_841_119342220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_121717200_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[base_120623640_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[next__data_121717460_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[change_117237760_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[remaining_83338360_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[interpolated__value_108667120_my__interpolator_58_84240_87628940_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__215935160();

   return behavior;
}

Behavior __215973120;

Behavior make__215973120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __215973120 = behavior;
   behavior->owner = (Object)func3_58_841_119342220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[base_166158680_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[next__data_166662860_my__lut_58_84240_165968280_func3_58_841_119342220_func3_58_8410_142988400_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__215935040();

   return behavior;
}

Scope makefunc3_58_841_119342220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func3_58_841_119342220 = scope;
   scope->owner = (Object)func3_58_8410_142988400;
   scope->name = "func3:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_166662680();
   scope->systemIs[1] = makemy__interpolator_108641780();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_120623640();
   scope->inners[1] = makenext__data_121717460();
   scope->inners[2] = makeaddress_121717200();
   scope->inners[3] = makeremaining_83338360();
   scope->inners[4] = makechange_117237760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__215934620();
   scope->behaviors[1] = make__215934080();
   scope->behaviors[2] = make__215933440();
   scope->behaviors[3] = make__215957140();
   scope->behaviors[4] = make__215973600();
   scope->behaviors[5] = make__215973120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc3_58_8410_142988400() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func3_58_8410_142988400 = systemT;
systemT->owner = NULL;
   systemT->name = "func3:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_143832340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_144250740();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc3_58_841_119342220();

   return systemT;
}