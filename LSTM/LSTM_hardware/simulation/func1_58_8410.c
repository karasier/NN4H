#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8410_117951820;

SignalI z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makez__value_118320320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_8410_117951820;
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

SignalI a_118636080_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makea_118636080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_118636080_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_8410_117951820;
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

Block __205027080;

void code__205027080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__205090960());
            last = value2integer(make__205090940());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__205027080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __205027080 = block;
   block->owner = (Object)__205026760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__205027080;

   return block;
};

Block __205026700;

void code__205026700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400,value2integer(make__205090740()),value2integer(make__205090700())));
      set_value_pos(pool_state);
   }
}

Block make__205026700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __205026700 = block;
   block->owner = (Object)__205026300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__205026700;

   return block;
};

Block __205026260;

void code__205026260() {
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
            src0 = make__205089800();
            src1 = make__205089780();
            src2 = make__205089700();
            src3 = make__205089680();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__205089560());
            last = value2integer(make__205089540());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__205026260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __205026260 = block;
   block->owner = (Object)__205025540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__205026260;

   return block;
};

Block __205025460;

void code__205025460() {
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
            src0 = make__205088880();
            src1 = make__205088860();
            src2 = make__205088840();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__205088780();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__205088620();
            src1 = make__205088600();
            src2 = make__205088580();
            src3 = make__205088560();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__205025460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __205025460 = block;
   block->owner = (Object)__205024680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__205025460;

   return block;
};

Block __205027300;

void code__205027300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,address_109658320_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_111976840_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_112118700_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,change_112231840_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,remaining_112406060_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,a_118636080_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__205027300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __205027300 = block;
   block->owner = (Object)__205041140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__205027300;

   return block;
};

Block __205027240;

void code__205027240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->c_value,next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__205027240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __205027240 = block;
   block->owner = (Object)__205040840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__205027240;

   return block;
};

Value make__205090960() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__205090940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__205090740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__205090700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__205089800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205089780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205089700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205089680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205089560() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__205089540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__205088880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__205088560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_841_79725100;

SignalI base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makebase_80243300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_841_79725100;
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

SignalI next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makenext__data_80702740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_841_79725100;
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

SignalI address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeaddress_80702440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_841_79725100;
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

SignalI remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makeremaining_81082700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_841_79725100;
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

SignalI change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400;

SignalI makechange_81521740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_841_79725100;
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

SystemI my__lut_110098320;

SystemI makemy__lut_110098320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_110098320 = systemI;
   systemI->owner = (Object)func1_58_841_79725100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84100_109661240;

   return systemI;
};

SystemI my__interpolator_112712180;

SystemI makemy__interpolator_112712180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_112712180 = systemI;
   systemI->owner = (Object)func1_58_841_79725100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84100_111641320;

   return systemI;
};

Behavior __205026760;

Behavior make__205026760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __205026760 = behavior;
   behavior->owner = (Object)func1_58_841_79725100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__205027080();

   return behavior;
}

Behavior __205026300;

Behavior make__205026300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __205026300 = behavior;
   behavior->owner = (Object)func1_58_841_79725100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__205026700();

   return behavior;
}

Behavior __205025540;

Behavior make__205025540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __205025540 = behavior;
   behavior->owner = (Object)func1_58_841_79725100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[z__value_118320320_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__205026260();

   return behavior;
}

Behavior __205024680;

Behavior make__205024680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __205024680 = behavior;
   behavior->owner = (Object)func1_58_841_79725100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__205025460();

   return behavior;
}

Behavior __205041140;

Behavior make__205041140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __205041140 = behavior;
   behavior->owner = (Object)func1_58_841_79725100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[address_80702440_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_80243300_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_80702740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[change_81521740_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[remaining_81082700_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[interpolated__value_112712360_my__interpolator_58_84100_111641320_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__205027300();

   return behavior;
}

Behavior __205040840;

Behavior make__205040840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __205040840 = behavior;
   behavior->owner = (Object)func1_58_841_79725100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[base_109775700_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400);
   next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any = realloc(next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any,next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->any[next__data_110098460_my__lut_58_84100_109661240_func1_58_841_79725100_func1_58_8410_117951820_layer0_58_840_106383240_layer0_58_8400_122131100_input__sig__nn_58_84_119472860_input__sig__nn_58_840_108343200______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__205027240();

   return behavior;
}

Scope makefunc1_58_841_79725100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_841_79725100 = scope;
   scope->owner = (Object)func1_58_8410_117951820;
   scope->name = "func1:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_110098320();
   scope->systemIs[1] = makemy__interpolator_112712180();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_80243300();
   scope->inners[1] = makenext__data_80702740();
   scope->inners[2] = makeaddress_80702440();
   scope->inners[3] = makeremaining_81082700();
   scope->inners[4] = makechange_81521740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__205026760();
   scope->behaviors[1] = make__205026300();
   scope->behaviors[2] = make__205025540();
   scope->behaviors[3] = make__205024680();
   scope->behaviors[4] = make__205041140();
   scope->behaviors[5] = make__205040840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8410_117951820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8410_117951820 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_118320320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_118636080();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_841_79725100();

   return systemT;
}