#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func5_58_8400_147534980;

SignalI z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makez__value_147597980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_8400_147534980;
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

SignalI a_147662280_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makea_147662280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_147662280_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_8400_147534980;
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

Block __180721260;

void code__180721260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__180883320());
            last = value2integer(make__180883300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__180721260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __180721260 = block;
   block->owner = (Object)__180720640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__180721260;

   return block;
};

Block __180720580;

void code__180720580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940,value2integer(make__180883040()),value2integer(make__180882940())));
      set_value_pos(pool_state);
   }
}

Block make__180720580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __180720580 = block;
   block->owner = (Object)__180719960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__180720580;

   return block;
};

Block __180719840;

void code__180719840() {
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
            src0 = make__180881320();
            src1 = make__180881260();
            src2 = make__180881200();
            src3 = make__180881100();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value;
            first = value2integer(make__180880900());
            last = value2integer(make__180880780());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__180719840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __180719840 = block;
   block->owner = (Object)__180717000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__180719840;

   return block;
};

Block __180716860;

void code__180716860() {
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
            src0 = make__180903100();
            src1 = make__180903020();
            src2 = make__180903000();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__180902820();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__180902480();
            src1 = make__180902460();
            src2 = make__180902420();
            src3 = make__180902380();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__180716860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __180716860 = block;
   block->owner = (Object)__180805340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__180716860;

   return block;
};

Block __180721600;

void code__180721600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,address_140747220_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_136022720_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_144222580_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,change_144294540_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,remaining_144621400_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,a_147662280_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__180721600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __180721600 = block;
   block->owner = (Object)__180871020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__180721600;

   return block;
};

Block __180721520;

void code__180721520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->c_value,next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
      set_value_pos(pool_state);
   }
}

Block make__180721520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __180721520 = block;
   block->owner = (Object)__180870500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__180721520;

   return block;
};

Value make__180883320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__180883300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__180883040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__180882940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__180881320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180881260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180881200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180881100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180880900() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__180880780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__180903100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180903020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180903000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180902820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180902480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180902460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180902420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__180902380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func5_58_840_108628620;

SignalI base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makebase_132962480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_840_108628620;
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

SignalI next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makenext__data_133057920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_840_108628620;
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

SignalI address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeaddress_133057840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_840_108628620;
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

SignalI remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makeremaining_133528540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_840_108628620;
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

SignalI change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940;

SignalI makechange_133591040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940 = signalI;
   signalI->owner = (Object)func5_58_840_108628620;
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

SystemI my__lut_141066900;

SystemI makemy__lut_141066900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_141066900 = systemI;
   systemI->owner = (Object)func5_58_840_108628620;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84160_140749660;

   return systemI;
};

SystemI my__interpolator_144956640;

SystemI makemy__interpolator_144956640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_144956640 = systemI;
   systemI->owner = (Object)func5_58_840_108628620;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84160_135567160;

   return systemI;
};

Behavior __180720640;

Behavior make__180720640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __180720640 = behavior;
   behavior->owner = (Object)func5_58_840_108628620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__180721260();

   return behavior;
}

Behavior __180719960;

Behavior make__180719960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __180719960 = behavior;
   behavior->owner = (Object)func5_58_840_108628620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__180720580();

   return behavior;
}

Behavior __180717000;

Behavior make__180717000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __180717000 = behavior;
   behavior->owner = (Object)func5_58_840_108628620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[z__value_147597980_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__180719840();

   return behavior;
}

Behavior __180805340;

Behavior make__180805340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __180805340 = behavior;
   behavior->owner = (Object)func5_58_840_108628620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__180716860();

   return behavior;
}

Behavior __180871020;

Behavior make__180871020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __180871020 = behavior;
   behavior->owner = (Object)func5_58_840_108628620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[address_133057840_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_132962480_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_133057920_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[change_133591040_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[remaining_133528540_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[interpolated__value_144956840_my__interpolator_58_84160_135567160_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__180721600();

   return behavior;
}

Behavior __180870500;

Behavior make__180870500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __180870500 = behavior;
   behavior->owner = (Object)func5_58_840_108628620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[base_140834700_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940);
   next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any += 1;
   next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any = realloc(next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any,next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any*sizeof(Object));
next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->any[next__data_141067120_my__lut_58_84160_140749660_func5_58_840_108628620_func5_58_8400_147534980_layer1_58_840_114755160_layer1_58_8400_54642740_input__sig__nn_58_84_79822060_input__sig__nn_58_840_67022540______58_84_55846780______58_840_103223940->num_any-1] = (Object)behavior;
   behavior->block = make__180721520();

   return behavior;
}

Scope makefunc5_58_840_108628620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func5_58_840_108628620 = scope;
   scope->owner = (Object)func5_58_8400_147534980;
   scope->name = "func5:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_141066900();
   scope->systemIs[1] = makemy__interpolator_144956640();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_132962480();
   scope->inners[1] = makenext__data_133057920();
   scope->inners[2] = makeaddress_133057840();
   scope->inners[3] = makeremaining_133528540();
   scope->inners[4] = makechange_133591040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__180720640();
   scope->behaviors[1] = make__180719960();
   scope->behaviors[2] = make__180717000();
   scope->behaviors[3] = make__180805340();
   scope->behaviors[4] = make__180871020();
   scope->behaviors[5] = make__180870500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc5_58_8400_147534980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func5_58_8400_147534980 = systemT;
systemT->owner = NULL;
   systemT->name = "func5:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_147597980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_147662280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc5_58_840_108628620();

   return systemT;
}