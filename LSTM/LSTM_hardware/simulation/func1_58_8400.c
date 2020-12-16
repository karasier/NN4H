#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_61528340;

SignalI z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makez__value_63399160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_8400_61528340;
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

SignalI a_63859620_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makea_63859620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_63859620_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_8400_61528340;
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

Block __199649260;

void code__199649260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__199834120());
            last = value2integer(make__199834100());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__199649260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __199649260 = block;
   block->owner = (Object)__199648840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__199649260;

   return block;
};

Block __199648760;

void code__199648760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400,value2integer(make__199833880()),value2integer(make__199833860())));
      set_value_pos(pool_state);
   }
}

Block make__199648760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __199648760 = block;
   block->owner = (Object)__199648320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__199648760;

   return block;
};

Block __199648280;

void code__199648280() {
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
            src0 = make__199833260();
            src1 = make__199833220();
            src2 = make__199833180();
            src3 = make__199833160();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value;
            first = value2integer(make__199832940());
            last = value2integer(make__199832900());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__199648280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __199648280 = block;
   block->owner = (Object)__199647660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__199648280;

   return block;
};

Block __199647620;

void code__199647620() {
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
            src0 = make__199832180();
            src1 = make__199832160();
            src2 = make__199832140();
            concat_value(3,1,dst,src0,src1,src2);
            set_value_pos(pool_state);
         dst; });
      src1 = make__199832060();
      src2 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__199831840();
            src1 = make__199831820();
            src2 = make__199831740();
            src3 = make__199831720();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(3,1,dst,src0,src1,src2);
      set_value_pos(pool_state);
   dst; }),change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__199647620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __199647620 = block;
   block->owner = (Object)__199802020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__199647620;

   return block;
};

Block __199649720;

void code__199649720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,address_118919680_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,base_120402240_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,next__data_120465000_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,change_120773460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,remaining_120852580_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,a_63859620_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__199649720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __199649720 = block;
   block->owner = (Object)__199817700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__199649720;

   return block;
};

Block __199649600;

void code__199649600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->c_value,next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__199649600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __199649600 = block;
   block->owner = (Object)__199817380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__199649600;

   return block;
};

Value make__199834120() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__199834100() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__199833880() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__199833860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__199833260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199833220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199833180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199833160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199832940() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__199832900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__199832180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199832160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199832140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199832060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199831840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199831820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199831740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__199831720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_840_110915100;

SignalI base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makebase_111319720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_840_110915100;
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

SignalI next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makenext__data_111396180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_840_110915100;
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

SignalI address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeaddress_111396100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_840_110915100;
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

SignalI remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makeremaining_111530680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_840_110915100;
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

SignalI change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400;

SignalI makechange_111598940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)func1_58_840_110915100;
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

SystemI my__lut_119364480;

SystemI makemy__lut_119364480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_119364480 = systemI;
   systemI->owner = (Object)func1_58_840_110915100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_84210_118921580;

   return systemI;
};

SystemI my__interpolator_120964320;

SystemI makemy__interpolator_120964320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_120964320 = systemI;
   systemI->owner = (Object)func1_58_840_110915100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_84210_120300400;

   return systemI;
};

Behavior __199648840;

Behavior make__199648840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __199648840 = behavior;
   behavior->owner = (Object)func1_58_840_110915100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__199649260();

   return behavior;
}

Behavior __199648320;

Behavior make__199648320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __199648320 = behavior;
   behavior->owner = (Object)func1_58_840_110915100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__199648760();

   return behavior;
}

Behavior __199647660;

Behavior make__199647660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __199647660 = behavior;
   behavior->owner = (Object)func1_58_840_110915100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[z__value_63399160_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__199648280();

   return behavior;
}

Behavior __199802020;

Behavior make__199802020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __199802020 = behavior;
   behavior->owner = (Object)func1_58_840_110915100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__199647620();

   return behavior;
}

Behavior __199817700;

Behavior make__199817700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __199817700 = behavior;
   behavior->owner = (Object)func1_58_840_110915100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[address_111396100_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[base_111319720_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[next__data_111396180_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[change_111598940_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[remaining_111530680_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[interpolated__value_120964460_my__interpolator_58_84210_120300400_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__199649720();

   return behavior;
}

Behavior __199817380;

Behavior make__199817380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __199817380 = behavior;
   behavior->owner = (Object)func1_58_840_110915100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[base_119097100_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400);
   next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any += 1;
   next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any = realloc(next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any,next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->any[next__data_119364620_my__lut_58_84210_118921580_func1_58_840_110915100_func1_58_8400_61528340_layer1_58_84_86199680_layer1_58_843_108020000_forget__sig__nn_58_84_87807260_forget__sig__nn_58_840_117774760______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__199649600();

   return behavior;
}

Scope makefunc1_58_840_110915100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_110915100 = scope;
   scope->owner = (Object)func1_58_8400_61528340;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_119364480();
   scope->systemIs[1] = makemy__interpolator_120964320();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_111319720();
   scope->inners[1] = makenext__data_111396180();
   scope->inners[2] = makeaddress_111396100();
   scope->inners[3] = makeremaining_111530680();
   scope->inners[4] = makechange_111598940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__199648840();
   scope->behaviors[1] = make__199648320();
   scope->behaviors[2] = make__199647660();
   scope->behaviors[3] = make__199802020();
   scope->behaviors[4] = make__199817700();
   scope->behaviors[5] = make__199817380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_61528340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_61528340 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_63399160();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_63859620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_110915100();

   return systemT;
}