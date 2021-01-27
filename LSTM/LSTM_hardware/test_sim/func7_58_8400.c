#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func7_58_8400_133108820;

SignalI z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makez__value_134299980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_8400_133108820;
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

SignalI a_135859560_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makea_135859560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_135859560_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_8400_133108820;
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

Block __181112300;

void code__181112300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__181214860());
            last = value2integer(make__181214760());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__181112300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __181112300 = block;
   block->owner = (Object)__181111420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__181112300;

   return block;
};

Block __181111280;

void code__181111280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940,value2integer(make__181214360()),value2integer(make__181214340())));
      set_value_pos(pool_state);
   }
}

Block make__181111280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __181111280 = block;
   block->owner = (Object)__181109560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__181111280;

   return block;
};

Block __181109520;

void code__181109520() {
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
            src0 = make__181212980();
            src1 = make__181212960();
            src2 = make__181212940();
            src3 = make__181212920();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__181212780());
            last = value2integer(make__181212720());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__181109520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __181109520 = block;
   block->owner = (Object)__181108740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__181109520;

   return block;
};

Block __181133220;

void code__181133220() {
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
            src0 = make__181211540();
            src1 = make__181211500();
            src2 = make__181211480();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__181211300();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__181210540();
            src1 = make__181210300();
            src2 = make__181210200();
            src3 = make__181210140();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__181133220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __181133220 = block;
   block->owner = (Object)__181132060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__181133220;

   return block;
};

Block __181112660;

void code__181112660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,address_136291360_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_138397780_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_138482380_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,change_138565740_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,remaining_138626260_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,a_135859560_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__181112660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __181112660 = block;
   block->owner = (Object)__181176620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__181112660;

   return block;
};

Block __181112560;

void code__181112560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__181112560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __181112560 = block;
   block->owner = (Object)__181176400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__181112560;

   return block;
};

Value make__181214860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__181214760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__181214360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__181214340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__181212980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181212960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181212940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181212920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181212780() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__181212720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__181211540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181211500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181211480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181211300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181210540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181210300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181210200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__181210140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func7_58_840_107134860;

SignalI base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makebase_107361840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_840_107134860;
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

SignalI next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makenext__data_107603900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_840_107134860;
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

SignalI address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeaddress_107603580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_840_107134860;
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

SignalI remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeremaining_107820080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_840_107134860;
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

SignalI change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makechange_108238300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func7_58_840_107134860;
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

SystemI my__lut_136915560;

SystemI makemy__lut_136915560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_136915560 = systemI;
   systemI->owner = (Object)func7_58_840_107134860;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84180_136293980;

   return systemI;
};

SystemI my__interpolator_138726580;

SystemI makemy__interpolator_138726580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_138726580 = systemI;
   systemI->owner = (Object)func7_58_840_107134860;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84180_138069840;

   return systemI;
};

Behavior __181111420;

Behavior make__181111420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __181111420 = behavior;
   behavior->owner = (Object)func7_58_840_107134860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__181112300();

   return behavior;
}

Behavior __181109560;

Behavior make__181109560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __181109560 = behavior;
   behavior->owner = (Object)func7_58_840_107134860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__181111280();

   return behavior;
}

Behavior __181108740;

Behavior make__181108740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __181108740 = behavior;
   behavior->owner = (Object)func7_58_840_107134860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_134299980_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__181109520();

   return behavior;
}

Behavior __181132060;

Behavior make__181132060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __181132060 = behavior;
   behavior->owner = (Object)func7_58_840_107134860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__181133220();

   return behavior;
}

Behavior __181176620;

Behavior make__181176620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __181176620 = behavior;
   behavior->owner = (Object)func7_58_840_107134860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_107603580_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_107361840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_107603900_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[change_108238300_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[remaining_107820080_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[interpolated__value_138726940_my__interpolator_58_84180_138069840_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__181112660();

   return behavior;
}

Behavior __181176400;

Behavior make__181176400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __181176400 = behavior;
   behavior->owner = (Object)func7_58_840_107134860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_136710580_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_136915700_my__lut_58_84180_136293980_func7_58_840_107134860_func7_58_8400_133108820_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__181112560();

   return behavior;
}

Scope makefunc7_58_840_107134860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func7_58_840_107134860 = scope;
   scope->owner = (Object)func7_58_8400_133108820;
   scope->name = "func7:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_136915560();
   scope->systemIs[1] = makemy__interpolator_138726580();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_107361840();
   scope->inners[1] = makenext__data_107603900();
   scope->inners[2] = makeaddress_107603580();
   scope->inners[3] = makeremaining_107820080();
   scope->inners[4] = makechange_108238300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__181111420();
   scope->behaviors[1] = make__181109560();
   scope->behaviors[2] = make__181108740();
   scope->behaviors[3] = make__181132060();
   scope->behaviors[4] = make__181176620();
   scope->behaviors[5] = make__181176400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc7_58_8400_133108820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func7_58_8400_133108820 = systemT;
systemT->owner = NULL;
   systemT->name = "func7:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_134299980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_135859560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc7_58_840_107134860();

   return systemT;
}