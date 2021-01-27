#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8410_108075820;

SignalI z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makez__value_108270040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_8410_108075820;
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

SignalI a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makea_108646760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_8410_108075820;
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

Block __176535880;

void code__176535880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__176615380());
            last = value2integer(make__176615320());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176535880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176535880 = block;
   block->owner = (Object)__176535340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176535880;

   return block;
};

Block __176535260;

void code__176535260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940,value2integer(make__176614980()),value2integer(make__176614920())));
      set_value_pos(pool_state);
   }
}

Block make__176535260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176535260 = block;
   block->owner = (Object)__176534780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176535260;

   return block;
};

Block __176534660;

void code__176534660() {
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
            src0 = make__176614100();
            src1 = make__176614080();
            src2 = make__176614020();
            src3 = make__176613940();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__176613660());
            last = value2integer(make__176613640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176534660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176534660 = block;
   block->owner = (Object)__176533300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176534660;

   return block;
};

Block __176533260;

void code__176533260() {
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
            src0 = make__176612200();
            src1 = make__176612180();
            src2 = make__176612140();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__176612040();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__176611740();
            src1 = make__176611700();
            src2 = make__176611640();
            src3 = make__176611620();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176533260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176533260 = block;
   block->owner = (Object)__176532260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176533260;

   return block;
};

Block __176536300;

void code__176536300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,address_85478300_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_102576900_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_102884180_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,change_103189780_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,remaining_103455560_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,a_108646760_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176536300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176536300 = block;
   block->owner = (Object)__176601080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176536300;

   return block;
};

Block __176536160;

void code__176536160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__176536160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __176536160 = block;
   block->owner = (Object)__176600860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__176536160;

   return block;
};

Value make__176615380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176615320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176614980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176614920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176614100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176614080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176614020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176613940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176613660() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176613640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__176612200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176612180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176612140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176612040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176611740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176611700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176611640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__176611620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_841_113501440;

SignalI base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makebase_113772280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_841_113501440;
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

SignalI next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makenext__data_114061960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_841_113501440;
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

SignalI address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeaddress_114061880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_841_113501440;
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

SignalI remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeremaining_114277380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_841_113501440;
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

SignalI change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makechange_114571980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func1_58_841_113501440;
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

SystemI my__lut_86418260;

SystemI makemy__lut_86418260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_86418260 = systemI;
   systemI->owner = (Object)func1_58_841_113501440;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84100_85460820;

   return systemI;
};

SystemI my__interpolator_103633580;

SystemI makemy__interpolator_103633580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_103633580 = systemI;
   systemI->owner = (Object)func1_58_841_113501440;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84100_102381560;

   return systemI;
};

Behavior __176535340;

Behavior make__176535340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176535340 = behavior;
   behavior->owner = (Object)func1_58_841_113501440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176535880();

   return behavior;
}

Behavior __176534780;

Behavior make__176534780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176534780 = behavior;
   behavior->owner = (Object)func1_58_841_113501440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176535260();

   return behavior;
}

Behavior __176533300;

Behavior make__176533300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176533300 = behavior;
   behavior->owner = (Object)func1_58_841_113501440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_108270040_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176534660();

   return behavior;
}

Behavior __176532260;

Behavior make__176532260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176532260 = behavior;
   behavior->owner = (Object)func1_58_841_113501440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__176533260();

   return behavior;
}

Behavior __176601080;

Behavior make__176601080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176601080 = behavior;
   behavior->owner = (Object)func1_58_841_113501440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_114061880_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_113772280_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_114061960_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[change_114571980_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[remaining_114277380_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[interpolated__value_103633800_my__interpolator_58_84100_102381560_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176536300();

   return behavior;
}

Behavior __176600860;

Behavior make__176600860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __176600860 = behavior;
   behavior->owner = (Object)func1_58_841_113501440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_86092740_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_86418540_my__lut_58_84100_85460820_func1_58_841_113501440_func1_58_8410_108075820_layer0_58_840_113655200_layer0_58_8400_113977660_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__176536160();

   return behavior;
}

Scope makefunc1_58_841_113501440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_841_113501440 = scope;
   scope->owner = (Object)func1_58_8410_108075820;
   scope->name = "func1:T1";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_86418260();
   scope->systemIs[1] = makemy__interpolator_103633580();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_113772280();
   scope->inners[1] = makenext__data_114061960();
   scope->inners[2] = makeaddress_114061880();
   scope->inners[3] = makeremaining_114277380();
   scope->inners[4] = makechange_114571980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__176535340();
   scope->behaviors[1] = make__176534780();
   scope->behaviors[2] = make__176533300();
   scope->behaviors[3] = make__176532260();
   scope->behaviors[4] = make__176601080();
   scope->behaviors[5] = make__176600860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8410_108075820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8410_108075820 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T10";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_108270040();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_108646760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_841_113501440();

   return systemT;
}