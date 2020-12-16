#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8460_227499680;

SignalI z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makez__value_227544220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_8460_227499680;
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

SignalI a_227590560_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makea_227590560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_227590560_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_8460_227499680;
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

Block __222841480;

void code__222841480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__223013500());
            last = value2integer(make__223013440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__222841480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __222841480 = block;
   block->owner = (Object)__222841180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__222841480;

   return block;
};

Block __222841140;

void code__222841140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400,value2integer(make__223013180()),value2integer(make__223013160())));
      set_value_pos(pool_state);
   }
}

Block make__222841140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __222841140 = block;
   block->owner = (Object)__222840860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__222841140;

   return block;
};

Block __222840820;

void code__222840820() {
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
            src0 = make__223012660();
            src1 = make__223012640();
            src2 = make__223012620();
            src3 = make__223012600();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__223012420());
            last = value2integer(make__223012380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__222840820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __222840820 = block;
   block->owner = (Object)__222840180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__222840820;

   return block;
};

Block __222840120;

void code__222840120() {
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
            src0 = make__223011700();
            src1 = make__223011680();
            src2 = make__223011660();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__223011600();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__223011440();
            src1 = make__223011420();
            src2 = make__223011400();
            src3 = make__223011360();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__222840120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __222840120 = block;
   block->owner = (Object)__222839380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__222840120;

   return block;
};

Block __222841760;

void code__222841760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,address_208797100_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_77449620_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_215967100_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,change_216165280_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,remaining_216330480_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,a_227590560_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__222841760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __222841760 = block;
   block->owner = (Object)__222995460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__222841760;

   return block;
};

Block __222841680;

void code__222841680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__222841680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __222841680 = block;
   block->owner = (Object)__222995220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__222841680;

   return block;
};

Value make__223013500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__223013440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__223013180() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__223013160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__223012660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223012640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223012620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223012600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223012420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__223012380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__223011700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__223011360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_846_191172080;

SignalI base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makebase_191463840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_846_191172080;
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

SignalI next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makenext__data_192140460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_846_191172080;
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

SignalI address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeaddress_192140380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_846_191172080;
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

SignalI remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeremaining_192316820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_846_191172080;
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

SignalI change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makechange_192647620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_846_191172080;
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

SystemI my__lut_209278380;

SystemI makemy__lut_209278380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_209278380 = systemI;
   systemI->owner = (Object)func1_58_846_191172080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84320_208840300;

   return systemI;
};

SystemI my__interpolator_216864340;

SystemI makemy__interpolator_216864340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_216864340 = systemI;
   systemI->owner = (Object)func1_58_846_191172080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84320_211498000;

   return systemI;
};

Behavior __222841180;

Behavior make__222841180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __222841180 = behavior;
   behavior->owner = (Object)func1_58_846_191172080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__222841480();

   return behavior;
}

Behavior __222840860;

Behavior make__222840860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __222840860 = behavior;
   behavior->owner = (Object)func1_58_846_191172080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__222841140();

   return behavior;
}

Behavior __222840180;

Behavior make__222840180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __222840180 = behavior;
   behavior->owner = (Object)func1_58_846_191172080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_227544220_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__222840820();

   return behavior;
}

Behavior __222839380;

Behavior make__222839380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __222839380 = behavior;
   behavior->owner = (Object)func1_58_846_191172080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__222840120();

   return behavior;
}

Behavior __222995460;

Behavior make__222995460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __222995460 = behavior;
   behavior->owner = (Object)func1_58_846_191172080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_192140380_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_191463840_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_192140460_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[change_192647620_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[remaining_192316820_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[interpolated__value_216864540_my__interpolator_58_84320_211498000_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__222841760();

   return behavior;
}

Behavior __222995220;

Behavior make__222995220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __222995220 = behavior;
   behavior->owner = (Object)func1_58_846_191172080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_209017160_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_209278580_my__lut_58_84320_208840300_func1_58_846_191172080_func1_58_8460_227499680_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__222841680();

   return behavior;
}

Scope makefunc1_58_846_191172080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_846_191172080 = scope;
   scope->owner = (Object)func1_58_8460_227499680;
   scope->name = "func1:T6";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_209278380();
   scope->systemIs[1] = makemy__interpolator_216864340();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_191463840();
   scope->inners[1] = makenext__data_192140460();
   scope->inners[2] = makeaddress_192140380();
   scope->inners[3] = makeremaining_192316820();
   scope->inners[4] = makechange_192647620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__222841180();
   scope->behaviors[1] = make__222840860();
   scope->behaviors[2] = make__222840180();
   scope->behaviors[3] = make__222839380();
   scope->behaviors[4] = make__222995460();
   scope->behaviors[5] = make__222995220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8460_227499680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8460_227499680 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T60";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_227544220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_227590560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_846_191172080();

   return systemT;
}