#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8450_192797620;

SignalI z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makez__value_193057080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_8450_192797620;
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

SignalI a_193187400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makea_193187400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_193187400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_8450_192797620;
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

Block __193378180;

void code__193378180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__193458700());
            last = value2integer(make__193458600());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__193378180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __193378180 = block;
   block->owner = (Object)__193376860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__193378180;

   return block;
};

Block __193376780;

void code__193376780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940,value2integer(make__193458180()),value2integer(make__193458160())));
      set_value_pos(pool_state);
   }
}

Block make__193376780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __193376780 = block;
   block->owner = (Object)__193375920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__193376780;

   return block;
};

Block __193375880;

void code__193375880() {
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
            src0 = make__193457320();
            src1 = make__193457300();
            src2 = make__193457280();
            src3 = make__193457260();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__193457100());
            last = value2integer(make__193457080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__193375880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __193375880 = block;
   block->owner = (Object)__193374900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__193375880;

   return block;
};

Block __193374840;

void code__193374840() {
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
            src0 = make__193456240();
            src1 = make__193456220();
            src2 = make__193456140();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__193456080();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__193455680();
            src1 = make__193455600();
            src2 = make__193455480();
            src3 = make__193455460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__193374840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __193374840 = block;
   block->owner = (Object)__193374040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__193374840;

   return block;
};

Block __193378680;

void code__193378680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,address_184347360_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_186109440_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_186195920_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,change_186387420_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,remaining_186507180_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,a_193187400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__193378680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __193378680 = block;
   block->owner = (Object)__193411080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__193378680;

   return block;
};

Block __193378500;

void code__193378500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__193378500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __193378500 = block;
   block->owner = (Object)__193410860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__193378500;

   return block;
};

Value make__193458700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193458600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193458180() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193458160() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193457320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193457300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193457280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193457260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193457100() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193457080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__193456240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193456220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193456140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193456080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193455680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193455600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193455480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__193455460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_845_176712400;

SignalI base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makebase_176970180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_845_176712400;
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

SignalI next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makenext__data_177039500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_845_176712400;
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

SignalI address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeaddress_177039300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_845_176712400;
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

SignalI remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeremaining_177331700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_845_176712400;
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

SignalI change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makechange_177408520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_845_176712400;
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

SystemI my__lut_184708440;

SystemI makemy__lut_184708440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_184708440 = systemI;
   systemI->owner = (Object)func0_58_845_176712400;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84290_184349760;

   return systemI;
};

SystemI my__interpolator_186970980;

SystemI makemy__interpolator_186970980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_186970980 = systemI;
   systemI->owner = (Object)func0_58_845_176712400;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84290_185952720;

   return systemI;
};

Behavior __193376860;

Behavior make__193376860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __193376860 = behavior;
   behavior->owner = (Object)func0_58_845_176712400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__193378180();

   return behavior;
}

Behavior __193375920;

Behavior make__193375920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __193375920 = behavior;
   behavior->owner = (Object)func0_58_845_176712400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__193376780();

   return behavior;
}

Behavior __193374900;

Behavior make__193374900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __193374900 = behavior;
   behavior->owner = (Object)func0_58_845_176712400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_193057080_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__193375880();

   return behavior;
}

Behavior __193374040;

Behavior make__193374040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __193374040 = behavior;
   behavior->owner = (Object)func0_58_845_176712400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__193374840();

   return behavior;
}

Behavior __193411080;

Behavior make__193411080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __193411080 = behavior;
   behavior->owner = (Object)func0_58_845_176712400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_177039300_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_176970180_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_177039500_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[change_177408520_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[remaining_177331700_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[interpolated__value_186971140_my__interpolator_58_84290_185952720_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__193378680();

   return behavior;
}

Behavior __193410860;

Behavior make__193410860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __193410860 = behavior;
   behavior->owner = (Object)func0_58_845_176712400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_184565560_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_184708580_my__lut_58_84290_184349760_func0_58_845_176712400_func0_58_8450_192797620_layer0_58_842_204270100_layer0_58_8420_115998020_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__193378500();

   return behavior;
}

Scope makefunc0_58_845_176712400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_845_176712400 = scope;
   scope->owner = (Object)func0_58_8450_192797620;
   scope->name = "func0:T5";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_184708440();
   scope->systemIs[1] = makemy__interpolator_186970980();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_176970180();
   scope->inners[1] = makenext__data_177039500();
   scope->inners[2] = makeaddress_177039300();
   scope->inners[3] = makeremaining_177331700();
   scope->inners[4] = makechange_177408520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__193376860();
   scope->behaviors[1] = make__193375920();
   scope->behaviors[2] = make__193374900();
   scope->behaviors[3] = make__193374040();
   scope->behaviors[4] = make__193411080();
   scope->behaviors[5] = make__193410860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8450_192797620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8450_192797620 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T50";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_193057080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_193187400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_845_176712400();

   return systemT;
}