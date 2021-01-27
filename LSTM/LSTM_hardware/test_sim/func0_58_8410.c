#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8410_113104340;

SignalI z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makez__value_113199880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_8410_113104340;
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

SignalI a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makea_113502100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_8410_113104340;
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

Block __176369380;

void code__176369380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__176464100());
            last = value2integer(make__176464080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176369380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176369380 = block;
   block->owner = (Object)__176368660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176369380;

   return block;
};

Block __176368540;

void code__176368540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940,value2integer(make__176488200()),value2integer(make__176487940())));
      set_value_pos(pool_state);
   }
}

Block make__176368540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176368540 = block;
   block->owner = (Object)__176367960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176368540;

   return block;
};

Block __176367860;

void code__176367860() {
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
            src0 = make__176486700();
            src1 = make__176486660();
            src2 = make__176486640();
            src3 = make__176486620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__176486480());
            last = value2integer(make__176486400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176367860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176367860 = block;
   block->owner = (Object)__176366900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176367860;

   return block;
};

Block __176366840;

void code__176366840() {
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
            src0 = make__176485740();
            src1 = make__176485600();
            src2 = make__176485580();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__176485440();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__176485180();
            src1 = make__176485140();
            src2 = make__176485060();
            src3 = make__176485020();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176366840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176366840 = block;
   block->owner = (Object)__176365680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176366840;

   return block;
};

Block __176370140;

void code__176370140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,address_104280140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_107034940_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_107130980_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,change_107260940_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,remaining_107407620_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,a_113502100_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176370140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176370140 = block;
   block->owner = (Object)__176433560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176370140;

   return block;
};

Block __176369980;

void code__176369980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176369980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176369980 = block;
   block->owner = (Object)__176433180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176369980;

   return block;
};

Value make__176464100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176464080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176488200() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176487940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176486700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176486660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176486640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176486620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176486480() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176486400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176485740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176485020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func0_58_841_53662160;

SignalI base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makebase_56688280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_841_53662160;
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

SignalI next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makenext__data_58769820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_841_53662160;
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

SignalI address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeaddress_58769460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_841_53662160;
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

SignalI remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeremaining_60016080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_841_53662160;
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

SignalI change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makechange_61302240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func0_58_841_53662160;
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

SystemI my__lut_104725520;

SystemI makemy__lut_104725520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_104725520 = systemI;
   systemI->owner = (Object)func0_58_841_53662160;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8490_104283360;

   return systemI;
};

SystemI my__interpolator_107626160;

SystemI makemy__interpolator_107626160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_107626160 = systemI;
   systemI->owner = (Object)func0_58_841_53662160;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8490_106517000;

   return systemI;
};

Behavior __176368660;

Behavior make__176368660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176368660 = behavior;
   behavior->owner = (Object)func0_58_841_53662160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176369380();

   return behavior;
}

Behavior __176367960;

Behavior make__176367960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176367960 = behavior;
   behavior->owner = (Object)func0_58_841_53662160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176368540();

   return behavior;
}

Behavior __176366900;

Behavior make__176366900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176366900 = behavior;
   behavior->owner = (Object)func0_58_841_53662160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_113199880_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176367860();

   return behavior;
}

Behavior __176365680;

Behavior make__176365680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176365680 = behavior;
   behavior->owner = (Object)func0_58_841_53662160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__176366840();

   return behavior;
}

Behavior __176433560;

Behavior make__176433560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176433560 = behavior;
   behavior->owner = (Object)func0_58_841_53662160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_58769460_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_56688280_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_58769820_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[change_61302240_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[remaining_60016080_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[interpolated__value_107626380_my__interpolator_58_8490_106517000_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176370140();

   return behavior;
}

Behavior __176433180;

Behavior make__176433180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176433180 = behavior;
   behavior->owner = (Object)func0_58_841_53662160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_104459140_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_104726380_my__lut_58_8490_104283360_func0_58_841_53662160_func0_58_8410_113104340_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176369980();

   return behavior;
}

Scope makefunc0_58_841_53662160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_841_53662160 = scope;
   scope->owner = (Object)func0_58_8410_113104340;
   scope->name = "func0:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_104725520();
   scope->systemIs[1] = makemy__interpolator_107626160();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56688280();
   scope->inners[1] = makenext__data_58769820();
   scope->inners[2] = makeaddress_58769460();
   scope->inners[3] = makeremaining_60016080();
   scope->inners[4] = makechange_61302240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__176368660();
   scope->behaviors[1] = make__176367960();
   scope->behaviors[2] = make__176366900();
   scope->behaviors[3] = make__176365680();
   scope->behaviors[4] = make__176433560();
   scope->behaviors[5] = make__176433180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8410_113104340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8410_113104340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_113199880();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_113502100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_841_53662160();

   return systemT;
}