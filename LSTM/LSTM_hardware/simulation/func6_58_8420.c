#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func6_58_8420_194326840;

SignalI z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makez__value_194471080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_8420_194326840;
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

SignalI a_194721380_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makea_194721380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_194721380_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_8420_194326840;
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

Block __227315960;

void code__227315960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__227348860());
            last = value2integer(make__227348840());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227315960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227315960 = block;
   block->owner = (Object)__227315580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227315960;

   return block;
};

Block __227315540;

void code__227315540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400,value2integer(make__227348700()),value2integer(make__227348680())));
      set_value_pos(pool_state);
   }
}

Block make__227315540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227315540 = block;
   block->owner = (Object)__227315280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227315540;

   return block;
};

Block __227315220;

void code__227315220() {
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
            src0 = make__227348080();
            src1 = make__227348060();
            src2 = make__227348040();
            src3 = make__227348020();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__227347880());
            last = value2integer(make__227347860());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227315220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227315220 = block;
   block->owner = (Object)__227314520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227315220;

   return block;
};

Block __227314480;

void code__227314480() {
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
            src0 = make__227347260();
            src1 = make__227347240();
            src2 = make__227347220();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__227347140();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__227346940();
            src1 = make__227346920();
            src2 = make__227346900();
            src3 = make__227346880();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227314480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227314480 = block;
   block->owner = (Object)__227313960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227314480;

   return block;
};

Block __227316220;

void code__227316220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,address_101683580_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_189968600_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_190146840_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,change_190416980_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,remaining_190537640_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,a_194721380_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227316220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227316220 = block;
   block->owner = (Object)__227331200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227316220;

   return block;
};

Block __227316140;

void code__227316140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->c_value,next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__227316140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __227316140 = block;
   block->owner = (Object)__227330680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__227316140;

   return block;
};

Value make__227348860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227348840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227348700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227348680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227348080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227348060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227348040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227348020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227347880() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227347860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__227347260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227347240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227347220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227347140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227346940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227346920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227346900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__227346880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func6_58_842_145374320;

SignalI base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makebase_145758440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_842_145374320;
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

SignalI next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makenext__data_146067220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_842_145374320;
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

SignalI address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeaddress_146067020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_842_145374320;
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

SignalI remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makeremaining_146333520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_842_145374320;
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

SignalI change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400;

SignalI makechange_146683720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func6_58_842_145374320;
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

SystemI my__lut_156881000;

SystemI makemy__lut_156881000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_156881000 = systemI;
   systemI->owner = (Object)func6_58_842_145374320;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84370_101686320;

   return systemI;
};

SystemI my__interpolator_190879980;

SystemI makemy__interpolator_190879980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_190879980 = systemI;
   systemI->owner = (Object)func6_58_842_145374320;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84370_189586720;

   return systemI;
};

Behavior __227315580;

Behavior make__227315580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227315580 = behavior;
   behavior->owner = (Object)func6_58_842_145374320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227315960();

   return behavior;
}

Behavior __227315280;

Behavior make__227315280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227315280 = behavior;
   behavior->owner = (Object)func6_58_842_145374320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227315540();

   return behavior;
}

Behavior __227314520;

Behavior make__227314520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227314520 = behavior;
   behavior->owner = (Object)func6_58_842_145374320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[z__value_194471080_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227315220();

   return behavior;
}

Behavior __227313960;

Behavior make__227313960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227313960 = behavior;
   behavior->owner = (Object)func6_58_842_145374320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__227314480();

   return behavior;
}

Behavior __227331200;

Behavior make__227331200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227331200 = behavior;
   behavior->owner = (Object)func6_58_842_145374320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[address_146067020_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_145758440_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_146067220_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[change_146683720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[remaining_146333520_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[interpolated__value_190880220_my__interpolator_58_84370_189586720_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227316220();

   return behavior;
}

Behavior __227330680;

Behavior make__227330680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __227330680 = behavior;
   behavior->owner = (Object)func6_58_842_145374320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[base_78756560_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400);
   next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any = realloc(next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any,next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->any[next__data_156881140_my__lut_58_84370_101686320_func6_58_842_145374320_func6_58_8420_194326840_layer1_58_842_210578520_layer1_58_8420_109072640_output__sig__nn_58_84_194134800_output__sig__nn_58_840_156450900______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__227316140();

   return behavior;
}

Scope makefunc6_58_842_145374320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func6_58_842_145374320 = scope;
   scope->owner = (Object)func6_58_8420_194326840;
   scope->name = "func6:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_156881000();
   scope->systemIs[1] = makemy__interpolator_190879980();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_145758440();
   scope->inners[1] = makenext__data_146067220();
   scope->inners[2] = makeaddress_146067020();
   scope->inners[3] = makeremaining_146333520();
   scope->inners[4] = makechange_146683720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__227315580();
   scope->behaviors[1] = make__227315280();
   scope->behaviors[2] = make__227314520();
   scope->behaviors[3] = make__227313960();
   scope->behaviors[4] = make__227331200();
   scope->behaviors[5] = make__227330680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc6_58_8420_194326840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func6_58_8420_194326840 = systemT;
systemT->owner = NULL;
   systemT->name = "func6:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_194471080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_194721380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc6_58_842_145374320();

   return systemT;
}