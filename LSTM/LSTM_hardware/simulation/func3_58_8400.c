#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func3_58_8400_122077900;

SignalI z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makez__value_82145540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_8400_122077900;
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

SignalI a_83342900_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makea_83342900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_83342900_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_8400_122077900;
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

Block __207201660;

void code__207201660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207270860());
            last = value2integer(make__207270820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207201660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207201660 = block;
   block->owner = (Object)__207201320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207201660;

   return block;
};

Block __207201140;

void code__207201140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400,value2integer(make__207270320()),value2integer(make__207270040())));
      set_value_pos(pool_state);
   }
}

Block make__207201140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207201140 = block;
   block->owner = (Object)__207224560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207201140;

   return block;
};

Block __207224260;

void code__207224260() {
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
            src0 = make__207268820();
            src1 = make__207268800();
            src2 = make__207268780();
            src3 = make__207268760();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207268480());
            last = value2integer(make__207268460());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207224260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207224260 = block;
   block->owner = (Object)__207222200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207224260;

   return block;
};

Block __207222080;

void code__207222080() {
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
            src0 = make__207267580();
            src1 = make__207267560();
            src2 = make__207267540();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__207267480();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__207267300();
            src1 = make__207267280();
            src2 = make__207267260();
            src3 = make__207267220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207222080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207222080 = block;
   block->owner = (Object)__207221560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207222080;

   return block;
};

Block __207201920;

void code__207201920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,address_109680160_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_112937100_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_113215460_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,change_107890680_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,remaining_114061920_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,a_83342900_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207201920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207201920 = block;
   block->owner = (Object)__207253880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207201920;

   return block;
};

Block __207201840;

void code__207201840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207201840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207201840 = block;
   block->owner = (Object)__207253580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207201840;

   return block;
};

Value make__207270860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207270820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207270320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207270040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207268820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207268800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207268780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207268760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207268480() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207268460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207267580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207267220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func3_58_840_158974520;

SignalI base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makebase_159176220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_840_158974520;
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

SignalI next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makenext__data_159394600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_840_158974520;
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

SignalI address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeaddress_159394520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_840_158974520;
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

SignalI remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeremaining_159440900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_840_158974520;
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

SignalI change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makechange_159528180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func3_58_840_158974520;
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

SystemI my__lut_110192420;

SystemI makemy__lut_110192420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_110192420 = systemI;
   systemI->owner = (Object)func3_58_840_158974520;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84140_109662860;

   return systemI;
};

SystemI my__interpolator_116056700;

SystemI makemy__interpolator_116056700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_116056700 = systemI;
   systemI->owner = (Object)func3_58_840_158974520;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84140_112708340;

   return systemI;
};

Behavior __207201320;

Behavior make__207201320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207201320 = behavior;
   behavior->owner = (Object)func3_58_840_158974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207201660();

   return behavior;
}

Behavior __207224560;

Behavior make__207224560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207224560 = behavior;
   behavior->owner = (Object)func3_58_840_158974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207201140();

   return behavior;
}

Behavior __207222200;

Behavior make__207222200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207222200 = behavior;
   behavior->owner = (Object)func3_58_840_158974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_82145540_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207224260();

   return behavior;
}

Behavior __207221560;

Behavior make__207221560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207221560 = behavior;
   behavior->owner = (Object)func3_58_840_158974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__207222080();

   return behavior;
}

Behavior __207253880;

Behavior make__207253880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207253880 = behavior;
   behavior->owner = (Object)func3_58_840_158974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_159394520_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_159176220_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_159394600_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[change_159528180_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[remaining_159440900_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[interpolated__value_116056860_my__interpolator_58_84140_112708340_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207201920();

   return behavior;
}

Behavior __207253580;

Behavior make__207253580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207253580 = behavior;
   behavior->owner = (Object)func3_58_840_158974520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_110066020_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_110193220_my__lut_58_84140_109662860_func3_58_840_158974520_func3_58_8400_122077900_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207201840();

   return behavior;
}

Scope makefunc3_58_840_158974520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func3_58_840_158974520 = scope;
   scope->owner = (Object)func3_58_8400_122077900;
   scope->name = "func3:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_110192420();
   scope->systemIs[1] = makemy__interpolator_116056700();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_159176220();
   scope->inners[1] = makenext__data_159394600();
   scope->inners[2] = makeaddress_159394520();
   scope->inners[3] = makeremaining_159440900();
   scope->inners[4] = makechange_159528180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__207201320();
   scope->behaviors[1] = make__207224560();
   scope->behaviors[2] = make__207222200();
   scope->behaviors[3] = make__207221560();
   scope->behaviors[4] = make__207253880();
   scope->behaviors[5] = make__207253580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc3_58_8400_122077900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func3_58_8400_122077900 = systemT;
systemT->owner = NULL;
   systemT->name = "func3:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_82145540();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_83342900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc3_58_840_158974520();

   return systemT;
}