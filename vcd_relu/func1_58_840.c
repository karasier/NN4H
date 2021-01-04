#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_50534800;

SignalI z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makez__value_52482280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_840_50534800;
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

SignalI a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makea_52917020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_840_50534800;
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

Block __59316400;

void code__59316400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            first = value2integer(make__59344940());
            last = value2integer(make__59344920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59316400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59316400 = block;
   block->owner = (Object)__59316040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59316400;

   return block;
};

Block __59315980;

void code__59315980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440,value2integer(make__59344780()),value2integer(make__59344760())));
      set_value_pos(pool_state);
   }
}

Block make__59315980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59315980 = block;
   block->owner = (Object)__59315680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59315980;

   return block;
};

Block __59315640;

void code__59315640() {
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
            src0 = make__59344100();
            src1 = make__59344080();
            src2 = make__59344040();
            src3 = make__59344020();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            first = value2integer(make__59343900());
            last = value2integer(make__59343880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59315640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59315640 = block;
   block->owner = (Object)__59315180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59315640;

   return block;
};

Block __59316700;

void code__59316700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,address_52535580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,base_48373960_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,next__data_49682360_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,remaining_50031340_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,a_52917020_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59316700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59316700 = block;
   block->owner = (Object)__59349900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59316700;

   return block;
};

Block __59316600;

void code__59316600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59316600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59316600 = block;
   block->owner = (Object)__59349700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59316600;

   return block;
};

Value make__59344940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59344920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59344780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59344760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59344100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59344080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59344040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59344020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59343900() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59343880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_54559660;

SignalI base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makebase_54923140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_84_54559660;
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

SignalI next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makenext__data_46799020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_84_54559660;
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

SignalI address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeaddress_46798760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_84_54559660;
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

SignalI remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeremaining_48423000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_84_54559660;
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

SignalI change_49651440_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makechange_49651440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_49651440_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func1_58_84_54559660;
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

SystemI my__lut_52914780;

SystemI makemy__lut_52914780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52914780 = systemI;
   systemI->owner = (Object)func1_58_84_54559660;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52538680;

   return systemI;
};

SystemI my__interpolator_50216980;

SystemI makemy__interpolator_50216980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50216980 = systemI;
   systemI->owner = (Object)func1_58_84_54559660;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_46060020;

   return systemI;
};

Behavior __59316040;

Behavior make__59316040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59316040 = behavior;
   behavior->owner = (Object)func1_58_84_54559660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59316400();

   return behavior;
}

Behavior __59315680;

Behavior make__59315680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59315680 = behavior;
   behavior->owner = (Object)func1_58_84_54559660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59315980();

   return behavior;
}

Behavior __59315180;

Behavior make__59315180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59315180 = behavior;
   behavior->owner = (Object)func1_58_84_54559660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[z__value_52482280_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59315640();

   return behavior;
}

Behavior __59349900;

Behavior make__59349900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59349900 = behavior;
   behavior->owner = (Object)func1_58_84_54559660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[address_46798760_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_54923140_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_46799020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[remaining_48423000_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[interpolated__value_50218180_my__interpolator_58_8400_46060020_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59316700();

   return behavior;
}

Behavior __59349700;

Behavior make__59349700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59349700 = behavior;
   behavior->owner = (Object)func1_58_84_54559660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_52772580_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_52914980_my__lut_58_8400_52538680_func1_58_84_54559660_func1_58_840_50534800_layer0_58_84_53425080_layer0_58_840_50498160_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59316600();

   return behavior;
}

Scope makefunc1_58_84_54559660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_54559660 = scope;
   scope->owner = (Object)func1_58_840_50534800;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52914780();
   scope->systemIs[1] = makemy__interpolator_50216980();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54923140();
   scope->inners[1] = makenext__data_46799020();
   scope->inners[2] = makeaddress_46798760();
   scope->inners[3] = makeremaining_48423000();
   scope->inners[4] = makechange_49651440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59316040();
   scope->behaviors[1] = make__59315680();
   scope->behaviors[2] = make__59315180();
   scope->behaviors[3] = make__59349900();
   scope->behaviors[4] = make__59349700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_50534800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_50534800 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52482280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52917020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_54559660();

   return systemT;
}