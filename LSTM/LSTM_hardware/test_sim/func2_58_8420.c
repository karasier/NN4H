#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func2_58_8420_135909060;

SignalI z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makez__value_137209560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_8420_135909060;
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

SignalI a_137940960_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makea_137940960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_137940960_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_8420_135909060;
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

Block __196762240;

void code__196762240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__196884760());
            last = value2integer(make__196884740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196762240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196762240 = block;
   block->owner = (Object)__196761800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196762240;

   return block;
};

Block __196761760;

void code__196761760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940,value2integer(make__196884520()),value2integer(make__196884480())));
      set_value_pos(pool_state);
   }
}

Block make__196761760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196761760 = block;
   block->owner = (Object)__196761280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196761760;

   return block;
};

Block __196761140;

void code__196761140() {
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
            src0 = make__196883820();
            src1 = make__196883800();
            src2 = make__196883700();
            src3 = make__196883620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__196883220());
            last = value2integer(make__196883140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196761140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196761140 = block;
   block->owner = (Object)__196760180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196761140;

   return block;
};

Block __196760140;

void code__196760140() {
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
            src0 = make__196882300();
            src1 = make__196882260();
            src2 = make__196882240();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__196882160();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__196881880();
            src1 = make__196881860();
            src2 = make__196881820();
            src3 = make__196881760();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196760140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196760140 = block;
   block->owner = (Object)__196759440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196760140;

   return block;
};

Block __196762720;

void code__196762720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,address_203884760_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_205545500_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_205728020_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,change_206253680_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,remaining_206485520_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,a_137940960_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196762720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196762720 = block;
   block->owner = (Object)__196772040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196762720;

   return block;
};

Block __196762620;

void code__196762620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196762620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196762620 = block;
   block->owner = (Object)__196837240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196762620;

   return block;
};

Value make__196884760() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196884740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196884520() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196884480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196883820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196883800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196883700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196883620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196883220() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196883140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196882300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196882260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196882240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196882160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196881880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196881860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196881820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196881760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func2_58_842_188142820;

SignalI base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makebase_176872820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_842_188142820;
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

SignalI next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makenext__data_102545040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_842_188142820;
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

SignalI address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeaddress_102544940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_842_188142820;
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

SignalI remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeremaining_131233720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_842_188142820;
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

SignalI change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makechange_192253800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func2_58_842_188142820;
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

SystemI my__lut_204284460;

SystemI makemy__lut_204284460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_204284460 = systemI;
   systemI->owner = (Object)func2_58_842_188142820;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84330_203887560;

   return systemI;
};

SystemI my__interpolator_206568360;

SystemI makemy__interpolator_206568360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_206568360 = systemI;
   systemI->owner = (Object)func2_58_842_188142820;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84330_205325480;

   return systemI;
};

Behavior __196761800;

Behavior make__196761800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196761800 = behavior;
   behavior->owner = (Object)func2_58_842_188142820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196762240();

   return behavior;
}

Behavior __196761280;

Behavior make__196761280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196761280 = behavior;
   behavior->owner = (Object)func2_58_842_188142820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196761760();

   return behavior;
}

Behavior __196760180;

Behavior make__196760180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196760180 = behavior;
   behavior->owner = (Object)func2_58_842_188142820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_137209560_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196761140();

   return behavior;
}

Behavior __196759440;

Behavior make__196759440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196759440 = behavior;
   behavior->owner = (Object)func2_58_842_188142820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__196760140();

   return behavior;
}

Behavior __196772040;

Behavior make__196772040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196772040 = behavior;
   behavior->owner = (Object)func2_58_842_188142820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_102544940_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_176872820_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_102545040_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[change_192253800_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[remaining_131233720_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[interpolated__value_206568560_my__interpolator_58_84330_205325480_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196762720();

   return behavior;
}

Behavior __196837240;

Behavior make__196837240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196837240 = behavior;
   behavior->owner = (Object)func2_58_842_188142820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_204099080_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_204284600_my__lut_58_84330_203887560_func2_58_842_188142820_func2_58_8420_135909060_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196762620();

   return behavior;
}

Scope makefunc2_58_842_188142820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func2_58_842_188142820 = scope;
   scope->owner = (Object)func2_58_8420_135909060;
   scope->name = "func2:T2";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_204284460();
   scope->systemIs[1] = makemy__interpolator_206568360();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_176872820();
   scope->inners[1] = makenext__data_102545040();
   scope->inners[2] = makeaddress_102544940();
   scope->inners[3] = makeremaining_131233720();
   scope->inners[4] = makechange_192253800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__196761800();
   scope->behaviors[1] = make__196761280();
   scope->behaviors[2] = make__196760180();
   scope->behaviors[3] = make__196759440();
   scope->behaviors[4] = make__196772040();
   scope->behaviors[5] = make__196837240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc2_58_8420_135909060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func2_58_8420_135909060 = systemT;
systemT->owner = NULL;
   systemT->name = "func2:T20";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_137209560();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_137940960();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc2_58_842_188142820();

   return systemT;
}