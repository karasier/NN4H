#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8460_149603280;

SignalI z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makez__value_150153080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_8460_149603280;
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

SignalI a_150352100_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makea_150352100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_150352100_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_8460_149603280;
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

Block __196217560;

void code__196217560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__196396260());
            last = value2integer(make__196396220());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196217560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196217560 = block;
   block->owner = (Object)__196216740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196217560;

   return block;
};

Block __196216640;

void code__196216640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940,value2integer(make__196396040()),value2integer(make__196396000())));
      set_value_pos(pool_state);
   }
}

Block make__196216640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196216640 = block;
   block->owner = (Object)__196216200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196216640;

   return block;
};

Block __196216100;

void code__196216100() {
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
            src0 = make__196395280();
            src1 = make__196395240();
            src2 = make__196395180();
            src3 = make__196395160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__196419460());
            last = value2integer(make__196419320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196216100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196216100 = block;
   block->owner = (Object)__196215140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196216100;

   return block;
};

Block __196215000;

void code__196215000() {
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
            src0 = make__196418280();
            src1 = make__196418260();
            src2 = make__196418220();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__196418160();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__196417800();
            src1 = make__196417780();
            src2 = make__196417760();
            src3 = make__196417740();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196215000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196215000 = block;
   block->owner = (Object)__196238960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196215000;

   return block;
};

Block __196217880;

void code__196217880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,address_135037800_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_139046580_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_139344440_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,change_139855840_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,remaining_140441140_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,a_150352100_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196217880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196217880 = block;
   block->owner = (Object)__196250440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196217880;

   return block;
};

Block __196217820;

void code__196217820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->c_value,next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__196217820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __196217820 = block;
   block->owner = (Object)__196250260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__196217820;

   return block;
};

Value make__196396260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196396220() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196396040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196396000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196395280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196395240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196395180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196395160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196419460() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196419320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__196418280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196418260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196418220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196418160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196417800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196417780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196417760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__196417740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_846_204115500;

SignalI base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makebase_204578140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_846_204115500;
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

SignalI next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makenext__data_204657340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_846_204115500;
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

SignalI address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeaddress_204657260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_846_204115500;
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

SignalI remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makeremaining_204719600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_846_204115500;
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

SignalI change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940;

SignalI makechange_204806760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_846_204115500;
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

SystemI my__lut_135780760;

SystemI makemy__lut_135780760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_135780760 = systemI;
   systemI->owner = (Object)func0_58_846_204115500;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84310_135044720;

   return systemI;
};

SystemI my__interpolator_140724440;

SystemI makemy__interpolator_140724440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_140724440 = systemI;
   systemI->owner = (Object)func0_58_846_204115500;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84310_138628860;

   return systemI;
};

Behavior __196216740;

Behavior make__196216740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196216740 = behavior;
   behavior->owner = (Object)func0_58_846_204115500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196217560();

   return behavior;
}

Behavior __196216200;

Behavior make__196216200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196216200 = behavior;
   behavior->owner = (Object)func0_58_846_204115500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196216640();

   return behavior;
}

Behavior __196215140;

Behavior make__196215140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196215140 = behavior;
   behavior->owner = (Object)func0_58_846_204115500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[z__value_150153080_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196216100();

   return behavior;
}

Behavior __196238960;

Behavior make__196238960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196238960 = behavior;
   behavior->owner = (Object)func0_58_846_204115500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__196215000();

   return behavior;
}

Behavior __196250440;

Behavior make__196250440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196250440 = behavior;
   behavior->owner = (Object)func0_58_846_204115500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[address_204657260_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_204578140_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_204657340_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[change_204806760_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[remaining_204719600_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[interpolated__value_140724820_my__interpolator_58_84310_138628860_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196217880();

   return behavior;
}

Behavior __196250260;

Behavior make__196250260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __196250260 = behavior;
   behavior->owner = (Object)func0_58_846_204115500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[base_135430780_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940);
   next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any = realloc(next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any,next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->any[next__data_135781480_my__lut_58_84310_135044720_func0_58_846_204115500_func0_58_8460_149603280_layer1_58_842_123752340_layer1_58_8420_185318560_output__sig__nn_58_84_187371640_output__sig__nn_58_840_203105440______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__196217820();

   return behavior;
}

Scope makefunc0_58_846_204115500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_846_204115500 = scope;
   scope->owner = (Object)func0_58_8460_149603280;
   scope->name = "func0:T6";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_135780760();
   scope->systemIs[1] = makemy__interpolator_140724440();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_204578140();
   scope->inners[1] = makenext__data_204657340();
   scope->inners[2] = makeaddress_204657260();
   scope->inners[3] = makeremaining_204719600();
   scope->inners[4] = makechange_204806760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__196216740();
   scope->behaviors[1] = make__196216200();
   scope->behaviors[2] = make__196215140();
   scope->behaviors[3] = make__196238960();
   scope->behaviors[4] = make__196250440();
   scope->behaviors[5] = make__196250260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8460_149603280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8460_149603280 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T60";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_150153080();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_150352100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_846_204115500();

   return systemT;
}