#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func5_58_8400_166094180;

SignalI z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makez__value_166163260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_8400_166094180;
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

SignalI a_166209600_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makea_166209600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_166209600_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_8400_166094180;
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

Block __207402240;

void code__207402240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207571460());
            last = value2integer(make__207571440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207402240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207402240 = block;
   block->owner = (Object)__207401840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207402240;

   return block;
};

Block __207401800;

void code__207401800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400,value2integer(make__207571280()),value2integer(make__207571260())));
      set_value_pos(pool_state);
   }
}

Block make__207401800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207401800 = block;
   block->owner = (Object)__207401420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207401800;

   return block;
};

Block __207401360;

void code__207401360() {
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
            src0 = make__207570740();
            src1 = make__207570700();
            src2 = make__207570640();
            src3 = make__207570620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__207570460());
            last = value2integer(make__207570440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207401360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207401360 = block;
   block->owner = (Object)__207400680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207401360;

   return block;
};

Block __207400460;

void code__207400460() {
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
            src0 = make__207569600();
            src1 = make__207569520();
            src2 = make__207569460();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__207569340();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__207569100();
            src1 = make__207569080();
            src2 = make__207569060();
            src3 = make__207569040();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207400460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207400460 = block;
   block->owner = (Object)__207399780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207400460;

   return block;
};

Block __207402520;

void code__207402520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,address_159563300_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_163312440_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_163358800_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,change_163560760_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,remaining_163738160_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,a_166209600_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207402520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207402520 = block;
   block->owner = (Object)__207554660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207402520;

   return block;
};

Block __207402460;

void code__207402460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__207402460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __207402460 = block;
   block->owner = (Object)__207554420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__207402460;

   return block;
};

Value make__207571460() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207571440() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207571280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207571260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207570740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207570700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207570640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207570620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207570460() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207570440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__207569600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__207569040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func5_58_840_153102860;

SignalI base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makebase_153269880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_840_153102860;
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

SignalI next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makenext__data_153388020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_840_153102860;
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

SignalI address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeaddress_153387940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_840_153102860;
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

SignalI remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeremaining_153481540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_840_153102860;
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

SignalI change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makechange_153550620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func5_58_840_153102860;
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

SystemI my__lut_151517500;

SystemI makemy__lut_151517500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_151517500 = systemI;
   systemI->owner = (Object)func5_58_840_153102860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84160_159540800;

   return systemI;
};

SystemI my__interpolator_163800740;

SystemI makemy__interpolator_163800740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_163800740 = systemI;
   systemI->owner = (Object)func5_58_840_153102860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84160_163243340;

   return systemI;
};

Behavior __207401840;

Behavior make__207401840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207401840 = behavior;
   behavior->owner = (Object)func5_58_840_153102860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207402240();

   return behavior;
}

Behavior __207401420;

Behavior make__207401420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207401420 = behavior;
   behavior->owner = (Object)func5_58_840_153102860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207401800();

   return behavior;
}

Behavior __207400680;

Behavior make__207400680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207400680 = behavior;
   behavior->owner = (Object)func5_58_840_153102860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_166163260_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207401360();

   return behavior;
}

Behavior __207399780;

Behavior make__207399780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207399780 = behavior;
   behavior->owner = (Object)func5_58_840_153102860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__207400460();

   return behavior;
}

Behavior __207554660;

Behavior make__207554660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207554660 = behavior;
   behavior->owner = (Object)func5_58_840_153102860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_153387940_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_153269880_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_153388020_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[change_153550620_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[remaining_153481540_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[interpolated__value_163800880_my__interpolator_58_84160_163243340_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207402520();

   return behavior;
}

Behavior __207554420;

Behavior make__207554420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __207554420 = behavior;
   behavior->owner = (Object)func5_58_840_153102860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_159738760_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_151517640_my__lut_58_84160_159540800_func5_58_840_153102860_func5_58_8400_166094180_layer1_58_840_59718760_layer1_58_8400_164234980_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__207402460();

   return behavior;
}

Scope makefunc5_58_840_153102860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func5_58_840_153102860 = scope;
   scope->owner = (Object)func5_58_8400_166094180;
   scope->name = "func5:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_151517500();
   scope->systemIs[1] = makemy__interpolator_163800740();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_153269880();
   scope->inners[1] = makenext__data_153388020();
   scope->inners[2] = makeaddress_153387940();
   scope->inners[3] = makeremaining_153481540();
   scope->inners[4] = makechange_153550620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__207401840();
   scope->behaviors[1] = make__207401420();
   scope->behaviors[2] = make__207400680();
   scope->behaviors[3] = make__207399780();
   scope->behaviors[4] = make__207554660();
   scope->behaviors[5] = make__207554420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc5_58_8400_166094180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func5_58_8400_166094180 = systemT;
systemT->owner = NULL;
   systemT->name = "func5:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_166163260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_166209600();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc5_58_840_153102860();

   return systemT;
}