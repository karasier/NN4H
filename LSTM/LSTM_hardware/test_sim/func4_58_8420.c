#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func4_58_8420_196613440;

SignalI z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makez__value_196968300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_8420_196613440;
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

SignalI a_197195800_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makea_197195800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_197195800_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_8420_196613440;
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

Block __197179040;

void code__197179040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__197227360());
            last = value2integer(make__197227340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197179040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197179040 = block;
   block->owner = (Object)__197178700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197179040;

   return block;
};

Block __197178640;

void code__197178640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940,value2integer(make__197227080()),value2integer(make__197227040())));
      set_value_pos(pool_state);
   }
}

Block make__197178640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197178640 = block;
   block->owner = (Object)__197178100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197178640;

   return block;
};

Block __197178040;

void code__197178040() {
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
            src0 = make__197226040();
            src1 = make__197226020();
            src2 = make__197225960();
            src3 = make__197225940();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__197225720());
            last = value2integer(make__197225640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197178040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197178040 = block;
   block->owner = (Object)__197177020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197178040;

   return block;
};

Block __197176920;

void code__197176920() {
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
            src0 = make__197224860();
            src1 = make__197224840();
            src2 = make__197224820();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__197224680();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__197224360();
            src1 = make__197224340();
            src2 = make__197224320();
            src3 = make__197224300();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197176920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197176920 = block;
   block->owner = (Object)__197176020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197176920;

   return block;
};

Block __197179500;

void code__197179500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,address_179858580_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_184057040_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_184301980_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,change_184788040_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,remaining_185171980_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,a_197195800_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197179500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197179500 = block;
   block->owner = (Object)__197213300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197179500;

   return block;
};

Block __197179400;

void code__197179400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__197179400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __197179400 = block;
   block->owner = (Object)__197212940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__197179400;

   return block;
};

Value make__197227360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197227340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197227080() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197227040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197226040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197226020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197225960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197225940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197225720() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197225640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__197224860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__197224300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func4_58_842_77400880;

SignalI base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makebase_80583080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_842_77400880;
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

SignalI next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makenext__data_83985180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_842_77400880;
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

SignalI address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeaddress_83925460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_842_77400880;
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

SignalI remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeremaining_102101940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_842_77400880;
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

SignalI change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makechange_103735020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func4_58_842_77400880;
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

SystemI my__lut_180881240;

SystemI makemy__lut_180881240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_180881240 = systemI;
   systemI->owner = (Object)func4_58_842_77400880;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84350_179861540;

   return systemI;
};

SystemI my__interpolator_185591540;

SystemI makemy__interpolator_185591540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_185591540 = systemI;
   systemI->owner = (Object)func4_58_842_77400880;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84350_183822180;

   return systemI;
};

Behavior __197178700;

Behavior make__197178700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197178700 = behavior;
   behavior->owner = (Object)func4_58_842_77400880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197179040();

   return behavior;
}

Behavior __197178100;

Behavior make__197178100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197178100 = behavior;
   behavior->owner = (Object)func4_58_842_77400880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197178640();

   return behavior;
}

Behavior __197177020;

Behavior make__197177020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197177020 = behavior;
   behavior->owner = (Object)func4_58_842_77400880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_196968300_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197178040();

   return behavior;
}

Behavior __197176020;

Behavior make__197176020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197176020 = behavior;
   behavior->owner = (Object)func4_58_842_77400880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__197176920();

   return behavior;
}

Behavior __197213300;

Behavior make__197213300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197213300 = behavior;
   behavior->owner = (Object)func4_58_842_77400880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_83925460_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_80583080_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_83985180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[change_103735020_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[remaining_102101940_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[interpolated__value_185591700_my__interpolator_58_84350_183822180_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197179500();

   return behavior;
}

Behavior __197212940;

Behavior make__197212940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __197212940 = behavior;
   behavior->owner = (Object)func4_58_842_77400880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_180261420_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_180881940_my__lut_58_84350_179861540_func4_58_842_77400880_func4_58_8420_196613440_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__197179400();

   return behavior;
}

Scope makefunc4_58_842_77400880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func4_58_842_77400880 = scope;
   scope->owner = (Object)func4_58_8420_196613440;
   scope->name = "func4:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_180881240();
   scope->systemIs[1] = makemy__interpolator_185591540();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_80583080();
   scope->inners[1] = makenext__data_83985180();
   scope->inners[2] = makeaddress_83925460();
   scope->inners[3] = makeremaining_102101940();
   scope->inners[4] = makechange_103735020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__197178700();
   scope->behaviors[1] = make__197178100();
   scope->behaviors[2] = make__197177020();
   scope->behaviors[3] = make__197176020();
   scope->behaviors[4] = make__197213300();
   scope->behaviors[5] = make__197212940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc4_58_8420_196613440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func4_58_8420_196613440 = systemT;
systemT->owner = NULL;
   systemT->name = "func4:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_196968300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_197195800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc4_58_842_77400880();

   return systemT;
}