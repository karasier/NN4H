#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func7_58_8420_211317560;

SignalI z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makez__value_211414700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_8420_211317560;
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

SignalI a_211513360_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makea_211513360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_211513360_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_8420_211317560;
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

Block __227416020;

void code__227416020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__227449500());
            last = value2integer(make__227449480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227416020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227416020 = block;
   block->owner = (Object)__227415760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227416020;

   return block;
};

Block __227415720;

void code__227415720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400,value2integer(make__227449280()),value2integer(make__227449260())));
      set_value_pos(pool_state);
   }
}

Block make__227415720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227415720 = block;
   block->owner = (Object)__227415420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227415720;

   return block;
};

Block __227415360;

void code__227415360() {
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
            src0 = make__227448660();
            src1 = make__227448640();
            src2 = make__227448620();
            src3 = make__227448600();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__227448500());
            last = value2integer(make__227448480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227415360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227415360 = block;
   block->owner = (Object)__227414800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227415360;

   return block;
};

Block __227414760;

void code__227414760() {
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
            src0 = make__227447980();
            src1 = make__227447960();
            src2 = make__227447940();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__227447860();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__227447600();
            src1 = make__227447580();
            src2 = make__227447540();
            src3 = make__227447500();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227414760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227414760 = block;
   block->owner = (Object)__227414040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227414760;

   return block;
};

Block __227416260;

void code__227416260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,address_205876200_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_207322860_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_207398780_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,change_207672000_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,remaining_207887140_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,a_211513360_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227416260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227416260 = block;
   block->owner = (Object)__227431780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227416260;

   return block;
};

Block __227416200;

void code__227416200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227416200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227416200 = block;
   block->owner = (Object)__227431360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227416200;

   return block;
};

Value make__227449500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227449480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227449280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227449260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227448660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227448640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227448620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227448600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227448500() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227448480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227447980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227447500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func7_58_842_194720720;

SignalI base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makebase_194800900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_842_194720720;
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

SignalI next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makenext__data_195011180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_842_194720720;
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

SignalI address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeaddress_195011100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_842_194720720;
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

SignalI remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeremaining_195217520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_842_194720720;
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

SignalI change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makechange_195316180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_842_194720720;
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

SystemI my__lut_206100280;

SystemI makemy__lut_206100280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_206100280 = systemI;
   systemI->owner = (Object)func7_58_842_194720720;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84380_205878740;

   return systemI;
};

SystemI my__interpolator_207984400;

SystemI makemy__interpolator_207984400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_207984400 = systemI;
   systemI->owner = (Object)func7_58_842_194720720;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84380_207200480;

   return systemI;
};

Behavior __227415760;

Behavior make__227415760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227415760 = behavior;
   behavior->owner = (Object)func7_58_842_194720720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227416020();

   return behavior;
}

Behavior __227415420;

Behavior make__227415420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227415420 = behavior;
   behavior->owner = (Object)func7_58_842_194720720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227415720();

   return behavior;
}

Behavior __227414800;

Behavior make__227414800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227414800 = behavior;
   behavior->owner = (Object)func7_58_842_194720720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_211414700_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227415360();

   return behavior;
}

Behavior __227414040;

Behavior make__227414040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227414040 = behavior;
   behavior->owner = (Object)func7_58_842_194720720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__227414760();

   return behavior;
}

Behavior __227431780;

Behavior make__227431780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227431780 = behavior;
   behavior->owner = (Object)func7_58_842_194720720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_195011100_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_194800900_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_195011180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[change_195316180_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[remaining_195217520_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[interpolated__value_207984540_my__interpolator_58_84380_207200480_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227416260();

   return behavior;
}

Behavior __227431360;

Behavior make__227431360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227431360 = behavior;
   behavior->owner = (Object)func7_58_842_194720720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_205959360_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_206100500_my__lut_58_84380_205878740_func7_58_842_194720720_func7_58_8420_211317560_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227416200();

   return behavior;
}

Scope makefunc7_58_842_194720720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func7_58_842_194720720 = scope;
   scope->owner = (Object)func7_58_8420_211317560;
   scope->name = "func7:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_206100280();
   scope->systemIs[1] = makemy__interpolator_207984400();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_194800900();
   scope->inners[1] = makenext__data_195011180();
   scope->inners[2] = makeaddress_195011100();
   scope->inners[3] = makeremaining_195217520();
   scope->inners[4] = makechange_195316180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__227415760();
   scope->behaviors[1] = make__227415420();
   scope->behaviors[2] = make__227414800();
   scope->behaviors[3] = make__227414040();
   scope->behaviors[4] = make__227431780();
   scope->behaviors[5] = make__227431360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc7_58_8420_211317560() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func7_58_8420_211317560 = systemT;
systemT->owner = NULL;
   systemT->name = "func7:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_211414700();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_211513360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc7_58_842_194720720();

   return systemT;
}