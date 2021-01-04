#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_59904460;

SignalI z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makez__value_60112980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_8400_59904460;
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

SignalI a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makea_60238200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_8400_59904460;
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

Block __59757740;

void code__59757740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            first = value2integer(make__59770600());
            last = value2integer(make__59770580());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59757740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59757740 = block;
   block->owner = (Object)__59757420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59757740;

   return block;
};

Block __59757360;

void code__59757360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440,value2integer(make__59770420()),value2integer(make__59770400())));
      set_value_pos(pool_state);
   }
}

Block make__59757360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59757360 = block;
   block->owner = (Object)__59757040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59757360;

   return block;
};

Block __59757000;

void code__59757000() {
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
            src0 = make__59769600();
            src1 = make__59769580();
            src2 = make__59769560();
            src3 = make__59769540();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value;
            first = value2integer(make__59769420());
            last = value2integer(make__59769380());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59757000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59757000 = block;
   block->owner = (Object)__59756440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59757000;

   return block;
};

Block __59758060;

void code__59758060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,address_61618380_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,base_47823520_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,next__data_49395940_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,remaining_50048220_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,a_60238200_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59758060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59758060 = block;
   block->owner = (Object)__59775100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59758060;

   return block;
};

Block __59757980;

void code__59757980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->c_value,next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
      set_value_pos(pool_state);
   }
}

Block make__59757980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59757980 = block;
   block->owner = (Object)__59774900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59757980;

   return block;
};

Value make__59770600() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59770580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59770420() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59770400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59769600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59769580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59769560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59769540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59769420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59769380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_60168500;

SignalI base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makebase_60259980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_840_60168500;
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

SignalI next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makenext__data_60439940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_840_60168500;
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

SignalI address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeaddress_60439860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_840_60168500;
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

SignalI remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makeremaining_60645140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_840_60168500;
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

SignalI change_60859640_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440;

SignalI makechange_60859640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_60859640_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440 = signalI;
   signalI->owner = (Object)func0_58_840_60168500;
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

SystemI my__lut_61970060;

SystemI makemy__lut_61970060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_61970060 = systemI;
   systemI->owner = (Object)func0_58_840_60168500;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_61530400;

   return systemI;
};

SystemI my__interpolator_50366800;

SystemI makemy__interpolator_50366800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50366800 = systemI;
   systemI->owner = (Object)func0_58_840_60168500;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_62939940;

   return systemI;
};

Behavior __59757420;

Behavior make__59757420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59757420 = behavior;
   behavior->owner = (Object)func0_58_840_60168500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59757740();

   return behavior;
}

Behavior __59757040;

Behavior make__59757040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59757040 = behavior;
   behavior->owner = (Object)func0_58_840_60168500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59757360();

   return behavior;
}

Behavior __59756440;

Behavior make__59756440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59756440 = behavior;
   behavior->owner = (Object)func0_58_840_60168500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[z__value_60112980_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59757000();

   return behavior;
}

Behavior __59775100;

Behavior make__59775100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59775100 = behavior;
   behavior->owner = (Object)func0_58_840_60168500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[address_60439860_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_60259980_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_60439940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[remaining_60645140_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[interpolated__value_50369020_my__interpolator_58_8410_62939940_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59758060();

   return behavior;
}

Behavior __59774900;

Behavior make__59774900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59774900 = behavior;
   behavior->owner = (Object)func0_58_840_60168500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[base_61700120_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440);
   next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any += 1;
   next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any = realloc(next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any,next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any*sizeof(Object));
next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->any[next__data_61970240_my__lut_58_8410_61530400_func0_58_840_60168500_func0_58_8400_59904460_layer1_58_84_52734780_layer1_58_840_61728440_neural__network_58_84_48238740_neural__network_58_840_50287180______58_84_49538440______58_840_52801440->num_any-1] = (Object)behavior;
   behavior->block = make__59757980();

   return behavior;
}

Scope makefunc0_58_840_60168500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_60168500 = scope;
   scope->owner = (Object)func0_58_8400_59904460;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_61970060();
   scope->systemIs[1] = makemy__interpolator_50366800();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_60259980();
   scope->inners[1] = makenext__data_60439940();
   scope->inners[2] = makeaddress_60439860();
   scope->inners[3] = makeremaining_60645140();
   scope->inners[4] = makechange_60859640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59757420();
   scope->behaviors[1] = make__59757040();
   scope->behaviors[2] = make__59756440();
   scope->behaviors[3] = make__59775100();
   scope->behaviors[4] = make__59774900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_59904460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_59904460 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_60112980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_60238200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_60168500();

   return systemT;
}