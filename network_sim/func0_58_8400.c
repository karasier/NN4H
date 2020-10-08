#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_49264580;

SignalI z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makez__value_49875320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_8400_49264580;
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

SignalI a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makea_50041840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_8400_49264580;
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

Block __51417640;

void code__51417640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            first = value2integer(make__51513100());
            last = value2integer(make__51513040());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51417640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51417640 = block;
   block->owner = (Object)__51416960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51417640;

   return block;
};

Block __51416320;

void code__51416320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700,value2integer(make__51551520()),value2integer(make__51551280())));
      set_value_pos(pool_state);
   }
}

Block make__51416320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51416320 = block;
   block->owner = (Object)__51414220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51416320;

   return block;
};

Block __51414080;

void code__51414080() {
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
            src0 = make__51549600();
            src1 = make__51549580();
            src2 = make__51549500();
            src3 = make__51549480();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value;
            first = value2integer(make__51549360());
            last = value2integer(make__51549200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51414080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51414080 = block;
   block->owner = (Object)__51434980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51414080;

   return block;
};

Block __51418220;

void code__51418220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,address_48187400_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,remaining_57169620_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,base_57287040_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,next__data_57451140_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,a_50041840_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51418220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51418220 = block;
   block->owner = (Object)__51482360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51418220;

   return block;
};

Block __51418040;

void code__51418040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->c_value,next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
      set_value_pos(pool_state);
   }
}

Block make__51418040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51418040 = block;
   block->owner = (Object)__51482200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51418040;

   return block;
};

Value make__51513100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51513040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51551520() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51551280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51549600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51549580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51549500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51549480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51549360() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51549200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_57609960;

SignalI base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makebase_57753220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_840_57609960;
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

SignalI next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makenext__data_57954820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_840_57609960;
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

SignalI address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeaddress_57954740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_840_57609960;
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

SignalI remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700;

SignalI makeremaining_58149700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700 = signalI;
   signalI->owner = (Object)func0_58_840_57609960;
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

SystemI my__lut_50009700;

SystemI makemy__lut_50009700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50009700 = systemI;
   systemI->owner = (Object)func0_58_840_57609960;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_48171320;

   return systemI;
};

SystemI my__interpolator_57610240;

SystemI makemy__interpolator_57610240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57610240 = systemI;
   systemI->owner = (Object)func0_58_840_57609960;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_56892840;

   return systemI;
};

Behavior __51416960;

Behavior make__51416960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51416960 = behavior;
   behavior->owner = (Object)func0_58_840_57609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51417640();

   return behavior;
}

Behavior __51414220;

Behavior make__51414220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51414220 = behavior;
   behavior->owner = (Object)func0_58_840_57609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51416320();

   return behavior;
}

Behavior __51434980;

Behavior make__51434980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51434980 = behavior;
   behavior->owner = (Object)func0_58_840_57609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[z__value_49875320_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51414080();

   return behavior;
}

Behavior __51482360;

Behavior make__51482360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51482360 = behavior;
   behavior->owner = (Object)func0_58_840_57609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[address_57954740_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[remaining_58149700_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[base_57753220_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[next__data_57954820_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[interpolated__value_57610560_my__interpolator_58_8410_56892840_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51418220();

   return behavior;
}

Behavior __51482200;

Behavior make__51482200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51482200 = behavior;
   behavior->owner = (Object)func0_58_840_57609960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[base_49658460_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700);
   next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any += 1;
   next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any = realloc(next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any,next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any*sizeof(Object));
next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->any[next__data_50010100_my__lut_58_8410_48171320_func0_58_840_57609960_func0_58_8400_49264580_layer1_58_84_57846080_layer1_58_840_58217260_neural__network_58_84_50983140_neural__network_58_840_59471800______58_84_50983840______58_840_59534700->num_any-1] = (Object)behavior;
   behavior->block = make__51418040();

   return behavior;
}

Scope makefunc0_58_840_57609960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_57609960 = scope;
   scope->owner = (Object)func0_58_8400_49264580;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50009700();
   scope->systemIs[1] = makemy__interpolator_57610240();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_57753220();
   scope->inners[1] = makenext__data_57954820();
   scope->inners[2] = makeaddress_57954740();
   scope->inners[3] = makeremaining_58149700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51416960();
   scope->behaviors[1] = make__51414220();
   scope->behaviors[2] = make__51434980();
   scope->behaviors[3] = make__51482360();
   scope->behaviors[4] = make__51482200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_49264580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_49264580 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49875320();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50041840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_57609960();

   return systemT;
}