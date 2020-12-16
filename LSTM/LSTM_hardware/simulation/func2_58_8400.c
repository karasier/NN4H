#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func2_58_8400_158728480;

SignalI z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makez__value_158928660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_8400_158728480;
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

SignalI a_158975000_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makea_158975000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_158975000_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_8400_158728480;
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

Block __207106920;

void code__207106920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207138180());
            last = value2integer(make__207138160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207106920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207106920 = block;
   block->owner = (Object)__207106660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207106920;

   return block;
};

Block __207106620;

void code__207106620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400,value2integer(make__207138000()),value2integer(make__207137980())));
      set_value_pos(pool_state);
   }
}

Block make__207106620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207106620 = block;
   block->owner = (Object)__207106300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207106620;

   return block;
};

Block __207106260;

void code__207106260() {
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
            src0 = make__207137280();
            src1 = make__207137260();
            src2 = make__207137240();
            src3 = make__207137220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207136960());
            last = value2integer(make__207136940());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207106260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207106260 = block;
   block->owner = (Object)__207105600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207106260;

   return block;
};

Block __207105560;

void code__207105560() {
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
            src0 = make__207136440();
            src1 = make__207136420();
            src2 = make__207136400();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__207136300();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__207136120();
            src1 = make__207136080();
            src2 = make__207136020();
            src3 = make__207136000();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207105560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207105560 = block;
   block->owner = (Object)__207104640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207105560;

   return block;
};

Block __207107380;

void code__207107380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,address_154856160_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_156012100_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_156050280_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,change_156145780_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,remaining_156192140_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,a_158975000_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207107380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207107380 = block;
   block->owner = (Object)__207121000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207107380;

   return block;
};

Block __207107300;

void code__207107300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207107300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207107300 = block;
   block->owner = (Object)__207120780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207107300;

   return block;
};

Value make__207138180() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207138160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207138000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207137980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207137280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207137260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207137240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207137220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136960() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207136940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207136440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207136000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func2_58_840_146294060;

SignalI base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makebase_146362840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_840_146294060;
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

SignalI next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makenext__data_146538400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_840_146294060;
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

SignalI address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeaddress_146538320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_840_146294060;
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

SignalI remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeremaining_146648420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_840_146294060;
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

SignalI change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makechange_146864960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func2_58_840_146294060;
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

SystemI my__lut_155006040;

SystemI makemy__lut_155006040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_155006040 = systemI;
   systemI->owner = (Object)func2_58_840_146294060;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84130_154858060;

   return systemI;
};

SystemI my__interpolator_156303880;

SystemI makemy__interpolator_156303880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_156303880 = systemI;
   systemI->owner = (Object)func2_58_840_146294060;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84130_155869260;

   return systemI;
};

Behavior __207106660;

Behavior make__207106660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207106660 = behavior;
   behavior->owner = (Object)func2_58_840_146294060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207106920();

   return behavior;
}

Behavior __207106300;

Behavior make__207106300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207106300 = behavior;
   behavior->owner = (Object)func2_58_840_146294060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207106620();

   return behavior;
}

Behavior __207105600;

Behavior make__207105600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207105600 = behavior;
   behavior->owner = (Object)func2_58_840_146294060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_158928660_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207106260();

   return behavior;
}

Behavior __207104640;

Behavior make__207104640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207104640 = behavior;
   behavior->owner = (Object)func2_58_840_146294060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__207105560();

   return behavior;
}

Behavior __207121000;

Behavior make__207121000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207121000 = behavior;
   behavior->owner = (Object)func2_58_840_146294060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_146538320_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_146362840_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_146538400_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[change_146864960_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[remaining_146648420_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[interpolated__value_156304020_my__interpolator_58_84130_155869260_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207107380();

   return behavior;
}

Behavior __207120780;

Behavior make__207120780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207120780 = behavior;
   behavior->owner = (Object)func2_58_840_146294060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_154959820_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_155006180_my__lut_58_84130_154858060_func2_58_840_146294060_func2_58_8400_158728480_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207107300();

   return behavior;
}

Scope makefunc2_58_840_146294060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func2_58_840_146294060 = scope;
   scope->owner = (Object)func2_58_8400_158728480;
   scope->name = "func2:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_155006040();
   scope->systemIs[1] = makemy__interpolator_156303880();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_146362840();
   scope->inners[1] = makenext__data_146538400();
   scope->inners[2] = makeaddress_146538320();
   scope->inners[3] = makeremaining_146648420();
   scope->inners[4] = makechange_146864960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__207106660();
   scope->behaviors[1] = make__207106300();
   scope->behaviors[2] = make__207105600();
   scope->behaviors[3] = make__207104640();
   scope->behaviors[4] = make__207121000();
   scope->behaviors[5] = make__207120780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc2_58_8400_158728480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func2_58_8400_158728480 = systemT;
systemT->owner = NULL;
   systemT->name = "func2:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_158928660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_158975000();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc2_58_840_146294060();

   return systemT;
}