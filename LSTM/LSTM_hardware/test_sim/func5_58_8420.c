#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func5_58_8420_153307700;

SignalI z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makez__value_143336400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_8420_153307700;
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

SignalI a_156690220_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makea_156690220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_156690220_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_8420_153307700;
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

Block __197277540;

void code__197277540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__197341040());
            last = value2integer(make__197340880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197277540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197277540 = block;
   block->owner = (Object)__197277140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197277540;

   return block;
};

Block __197277100;

void code__197277100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940,value2integer(make__197340380()),value2integer(make__197340360())));
      set_value_pos(pool_state);
   }
}

Block make__197277100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197277100 = block;
   block->owner = (Object)__197276740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197277100;

   return block;
};

Block __197276680;

void code__197276680() {
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
            src0 = make__197339560();
            src1 = make__197339540();
            src2 = make__197339520();
            src3 = make__197339480();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__197339280());
            last = value2integer(make__197339260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197276680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197276680 = block;
   block->owner = (Object)__197274580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197276680;

   return block;
};

Block __197274340;

void code__197274340() {
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
            src0 = make__197338420();
            src1 = make__197338400();
            src2 = make__197338340();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__197338240();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__197337840();
            src1 = make__197337820();
            src2 = make__197337800();
            src3 = make__197337760();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197274340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197274340 = block;
   block->owner = (Object)__197273500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197274340;

   return block;
};

Block __197278100;

void code__197278100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,address_137211660_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_141713560_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_134496580_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,change_144239160_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,remaining_144960940_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,a_156690220_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197278100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197278100 = block;
   block->owner = (Object)__197306100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197278100;

   return block;
};

Block __197277900;

void code__197277900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197277900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197277900 = block;
   block->owner = (Object)__197305860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197277900;

   return block;
};

Value make__197341040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197340880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197340380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197340360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197339560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197339540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197339520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197339480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197339280() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197339260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197338420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197338400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197338340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197338240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197337840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197337820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197337800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197337760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func5_58_842_197195200;

SignalI base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makebase_197898580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_842_197195200;
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

SignalI next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makenext__data_198027120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_842_197195200;
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

SignalI address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeaddress_198027040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_842_197195200;
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

SignalI remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeremaining_157186920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_842_197195200;
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

SignalI change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makechange_202464200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_842_197195200;
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

SystemI my__lut_137971380;

SystemI makemy__lut_137971380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_137971380 = systemI;
   systemI->owner = (Object)func5_58_842_197195200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84360_137160520;

   return systemI;
};

SystemI my__interpolator_145199840;

SystemI makemy__interpolator_145199840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_145199840 = systemI;
   systemI->owner = (Object)func5_58_842_197195200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84360_141083200;

   return systemI;
};

Behavior __197277140;

Behavior make__197277140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197277140 = behavior;
   behavior->owner = (Object)func5_58_842_197195200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197277540();

   return behavior;
}

Behavior __197276740;

Behavior make__197276740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197276740 = behavior;
   behavior->owner = (Object)func5_58_842_197195200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197277100();

   return behavior;
}

Behavior __197274580;

Behavior make__197274580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197274580 = behavior;
   behavior->owner = (Object)func5_58_842_197195200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_143336400_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197276680();

   return behavior;
}

Behavior __197273500;

Behavior make__197273500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197273500 = behavior;
   behavior->owner = (Object)func5_58_842_197195200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__197274340();

   return behavior;
}

Behavior __197306100;

Behavior make__197306100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197306100 = behavior;
   behavior->owner = (Object)func5_58_842_197195200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_198027040_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_197898580_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_198027120_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[change_202464200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[remaining_157186920_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[interpolated__value_145200080_my__interpolator_58_84360_141083200_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197278100();

   return behavior;
}

Behavior __197305860;

Behavior make__197305860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197305860 = behavior;
   behavior->owner = (Object)func5_58_842_197195200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_137648840_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_137971600_my__lut_58_84360_137160520_func5_58_842_197195200_func5_58_8420_153307700_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197277900();

   return behavior;
}

Scope makefunc5_58_842_197195200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func5_58_842_197195200 = scope;
   scope->owner = (Object)func5_58_8420_153307700;
   scope->name = "func5:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_137971380();
   scope->systemIs[1] = makemy__interpolator_145199840();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_197898580();
   scope->inners[1] = makenext__data_198027120();
   scope->inners[2] = makeaddress_198027040();
   scope->inners[3] = makeremaining_157186920();
   scope->inners[4] = makechange_202464200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__197277140();
   scope->behaviors[1] = make__197276740();
   scope->behaviors[2] = make__197274580();
   scope->behaviors[3] = make__197273500();
   scope->behaviors[4] = make__197306100();
   scope->behaviors[5] = make__197305860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc5_58_8420_153307700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func5_58_8420_153307700 = systemT;
systemT->owner = NULL;
   systemT->name = "func5:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_143336400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_156690220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc5_58_842_197195200();

   return systemT;
}