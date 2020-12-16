#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func4_58_8410_117226360;

SignalI z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makez__value_115992820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_8410_117226360;
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

SignalI a_140327000_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makea_140327000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_140327000_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_8410_117226360;
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

Block __216087860;

void code__216087860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__216119060());
            last = value2integer(make__216119040());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216087860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216087860 = block;
   block->owner = (Object)__216087520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216087860;

   return block;
};

Block __216087480;

void code__216087480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400,value2integer(make__216118900()),value2integer(make__216118860())));
      set_value_pos(pool_state);
   }
}

Block make__216087480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216087480 = block;
   block->owner = (Object)__216087200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216087480;

   return block;
};

Block __216087160;

void code__216087160() {
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
            src0 = make__216118220();
            src1 = make__216118200();
            src2 = make__216118180();
            src3 = make__216118160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__216117960());
            last = value2integer(make__216117900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216087160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216087160 = block;
   block->owner = (Object)__216086120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216087160;

   return block;
};

Block __216085660;

void code__216085660() {
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
            src0 = make__216117220();
            src1 = make__216117100();
            src2 = make__216117080();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__216117020();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__216116840();
            src1 = make__216116820();
            src2 = make__216116800();
            src3 = make__216116780();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216085660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216085660 = block;
   block->owner = (Object)__216085140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216085660;

   return block;
};

Block __216088140;

void code__216088140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,address_85005940_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,base_107994320_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,next__data_108601600_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,change_109416140_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,remaining_110083420_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,a_140327000_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216088140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216088140 = block;
   block->owner = (Object)__216101360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216088140;

   return block;
};

Block __216088080;

void code__216088080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__216088080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __216088080 = block;
   block->owner = (Object)__216101160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__216088080;

   return block;
};

Value make__216119060() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216119040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216118900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216118860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216118220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216118200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216118180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216118160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216117960() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216117900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__216117220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216117100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216117080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216117020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216116840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216116820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216116800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__216116780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func4_58_841_144249580;

SignalI base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makebase_145061800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_841_144249580;
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

SignalI next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makenext__data_145340540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_841_144249580;
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

SignalI address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeaddress_145340400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_841_144249580;
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

SignalI remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeremaining_145725980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_841_144249580;
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

SignalI change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makechange_146152740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func4_58_841_144249580;
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

SystemI my__lut_88061840;

SystemI makemy__lut_88061840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_88061840 = systemI;
   systemI->owner = (Object)func4_58_841_144249580;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84250_84467400;

   return systemI;
};

SystemI my__interpolator_110519760;

SystemI makemy__interpolator_110519760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_110519760 = systemI;
   systemI->owner = (Object)func4_58_841_144249580;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84250_107268020;

   return systemI;
};

Behavior __216087520;

Behavior make__216087520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216087520 = behavior;
   behavior->owner = (Object)func4_58_841_144249580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216087860();

   return behavior;
}

Behavior __216087200;

Behavior make__216087200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216087200 = behavior;
   behavior->owner = (Object)func4_58_841_144249580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216087480();

   return behavior;
}

Behavior __216086120;

Behavior make__216086120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216086120 = behavior;
   behavior->owner = (Object)func4_58_841_144249580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[z__value_115992820_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216087160();

   return behavior;
}

Behavior __216085140;

Behavior make__216085140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216085140 = behavior;
   behavior->owner = (Object)func4_58_841_144249580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__216085660();

   return behavior;
}

Behavior __216101360;

Behavior make__216101360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216101360 = behavior;
   behavior->owner = (Object)func4_58_841_144249580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[address_145340400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[base_145061800_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[next__data_145340540_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[change_146152740_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[remaining_145725980_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[interpolated__value_110520340_my__interpolator_58_84250_107268020_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216088140();

   return behavior;
}

Behavior __216101160;

Behavior make__216101160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __216101160 = behavior;
   behavior->owner = (Object)func4_58_841_144249580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[base_86361420_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[next__data_88062360_my__lut_58_84250_84467400_func4_58_841_144249580_func4_58_8410_117226360_layer1_58_841_86733340_layer1_58_8410_166080200_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__216088080();

   return behavior;
}

Scope makefunc4_58_841_144249580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func4_58_841_144249580 = scope;
   scope->owner = (Object)func4_58_8410_117226360;
   scope->name = "func4:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_88061840();
   scope->systemIs[1] = makemy__interpolator_110519760();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_145061800();
   scope->inners[1] = makenext__data_145340540();
   scope->inners[2] = makeaddress_145340400();
   scope->inners[3] = makeremaining_145725980();
   scope->inners[4] = makechange_146152740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__216087520();
   scope->behaviors[1] = make__216087200();
   scope->behaviors[2] = make__216086120();
   scope->behaviors[3] = make__216085140();
   scope->behaviors[4] = make__216101360();
   scope->behaviors[5] = make__216101160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc4_58_8410_117226360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func4_58_8410_117226360 = systemT;
systemT->owner = NULL;
   systemT->name = "func4:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_115992820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_140327000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc4_58_841_144249580();

   return systemT;
}