#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func7_58_8400_140261020;

SignalI z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makez__value_140568840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_8400_140261020;
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

SignalI a_140904340_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makea_140904340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_140904340_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_8400_140261020;
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

Block __207736600;

void code__207736600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207896660());
            last = value2integer(make__207896640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207736600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207736600 = block;
   block->owner = (Object)__207736320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207736600;

   return block;
};

Block __207736260;

void code__207736260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400,value2integer(make__207921040()),value2integer(make__207921020())));
      set_value_pos(pool_state);
   }
}

Block make__207736260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207736260 = block;
   block->owner = (Object)__207735860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207736260;

   return block;
};

Block __207735800;

void code__207735800() {
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
            src0 = make__207920420();
            src1 = make__207920340();
            src2 = make__207920320();
            src3 = make__207920280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207920160());
            last = value2integer(make__207920140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207735800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207735800 = block;
   block->owner = (Object)__207735160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207735800;

   return block;
};

Block __207735100;

void code__207735100() {
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
            src0 = make__207919300();
            src1 = make__207919280();
            src2 = make__207919240();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__207919140();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__207918980();
            src1 = make__207918960();
            src2 = make__207918940();
            src3 = make__207918860();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207735100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207735100 = block;
   block->owner = (Object)__207734400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207735100;

   return block;
};

Block __207737000;

void code__207737000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,address_80790700_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_106942420_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_107728060_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,change_108605500_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,remaining_109452740_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,a_140904340_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207737000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207737000 = block;
   block->owner = (Object)__207881060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207737000;

   return block;
};

Block __207736880;

void code__207736880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207736880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207736880 = block;
   block->owner = (Object)__207904380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207736880;

   return block;
};

Value make__207896660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207896640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207921040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207921020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207920420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207920340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207920320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207920280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207920160() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207920140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207919300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207919280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207919240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207919140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207918980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207918960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207918940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207918860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func7_58_840_153035860;

SignalI base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makebase_153283020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_840_153035860;
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

SignalI next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makenext__data_153513760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_840_153035860;
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

SignalI address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeaddress_153513680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_840_153035860;
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

SignalI remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeremaining_153834680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_840_153035860;
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

SignalI change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makechange_154195900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func7_58_840_153035860;
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

SystemI my__lut_84282740;

SystemI makemy__lut_84282740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_84282740 = systemI;
   systemI->owner = (Object)func7_58_840_153035860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84180_80897700;

   return systemI;
};

SystemI my__interpolator_109882080;

SystemI makemy__interpolator_109882080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_109882080 = systemI;
   systemI->owner = (Object)func7_58_840_153035860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84180_106167140;

   return systemI;
};

Behavior __207736320;

Behavior make__207736320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207736320 = behavior;
   behavior->owner = (Object)func7_58_840_153035860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207736600();

   return behavior;
}

Behavior __207735860;

Behavior make__207735860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207735860 = behavior;
   behavior->owner = (Object)func7_58_840_153035860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207736260();

   return behavior;
}

Behavior __207735160;

Behavior make__207735160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207735160 = behavior;
   behavior->owner = (Object)func7_58_840_153035860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_140568840_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207735800();

   return behavior;
}

Behavior __207734400;

Behavior make__207734400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207734400 = behavior;
   behavior->owner = (Object)func7_58_840_153035860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__207735100();

   return behavior;
}

Behavior __207881060;

Behavior make__207881060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207881060 = behavior;
   behavior->owner = (Object)func7_58_840_153035860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_153513680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_153283020_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_153513760_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[change_154195900_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[remaining_153834680_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[interpolated__value_109882840_my__interpolator_58_84180_106167140_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207737000();

   return behavior;
}

Behavior __207904380;

Behavior make__207904380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207904380 = behavior;
   behavior->owner = (Object)func7_58_840_153035860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_82942220_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_84284040_my__lut_58_84180_80897700_func7_58_840_153035860_func7_58_8400_140261020_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207736880();

   return behavior;
}

Scope makefunc7_58_840_153035860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func7_58_840_153035860 = scope;
   scope->owner = (Object)func7_58_8400_140261020;
   scope->name = "func7:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_84282740();
   scope->systemIs[1] = makemy__interpolator_109882080();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_153283020();
   scope->inners[1] = makenext__data_153513760();
   scope->inners[2] = makeaddress_153513680();
   scope->inners[3] = makeremaining_153834680();
   scope->inners[4] = makechange_154195900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__207736320();
   scope->behaviors[1] = make__207735860();
   scope->behaviors[2] = make__207735160();
   scope->behaviors[3] = make__207734400();
   scope->behaviors[4] = make__207881060();
   scope->behaviors[5] = make__207904380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc7_58_8400_140261020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func7_58_8400_140261020 = systemT;
systemT->owner = NULL;
   systemT->name = "func7:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_140568840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_140904340();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc7_58_840_153035860();

   return systemT;
}