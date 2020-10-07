#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_50831380;

SignalI z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makez__value_51069500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_8400_50831380;
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

SignalI a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makea_51249520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_8400_50831380;
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

Block __57023580;

void code__57023580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            first = value2integer(make__57072660());
            last = value2integer(make__57072580());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57023580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57023580 = block;
   block->owner = (Object)__57023240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57023580;

   return block;
};

Block __57023200;

void code__57023200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480,value2integer(make__57072360()),value2integer(make__57072340())));
      set_value_pos(pool_state);
   }
}

Block make__57023200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57023200 = block;
   block->owner = (Object)__57022820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57023200;

   return block;
};

Block __57022740;

void code__57022740() {
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
            src0 = make__57071780();
            src1 = make__57071760();
            src2 = make__57071740();
            src3 = make__57071700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            first = value2integer(make__57071580());
            last = value2integer(make__57071560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57022740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57022740 = block;
   block->owner = (Object)__57021740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57022740;

   return block;
};

Block __57023900;

void code__57023900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,address_49914220_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,remaining_56858520_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,base_57039140_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,next__data_57372640_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57023900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57023900 = block;
   block->owner = (Object)__57038500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57023900;

   return block;
};

Block __57023820;

void code__57023820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57023820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57023820 = block;
   block->owner = (Object)__57038260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57023820;

   return block;
};

Value make__57072660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57072580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57072360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57072340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57071780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57071760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57071740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57071700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57071580() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57071560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_56563560;

SignalI base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makebase_56656100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_840_56563560;
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

SignalI next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makenext__data_56758980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_840_56563560;
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

SignalI address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress_56758900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_840_56563560;
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

SignalI remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeremaining_56924880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func0_58_840_56563560;
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

SystemI my__lut_50554580;

SystemI makemy__lut_50554580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50554580 = systemI;
   systemI->owner = (Object)func0_58_840_56563560;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_49824480;

   return systemI;
};

SystemI my__interpolator_57479720;

SystemI makemy__interpolator_57479720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57479720 = systemI;
   systemI->owner = (Object)func0_58_840_56563560;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_56707880;

   return systemI;
};

Behavior __57023240;

Behavior make__57023240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57023240 = behavior;
   behavior->owner = (Object)func0_58_840_56563560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__57023580();

   return behavior;
}

Behavior __57022820;

Behavior make__57022820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57022820 = behavior;
   behavior->owner = (Object)func0_58_840_56563560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__57023200();

   return behavior;
}

Behavior __57021740;

Behavior make__57021740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57021740 = behavior;
   behavior->owner = (Object)func0_58_840_56563560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__57022740();

   return behavior;
}

Behavior __57038500;

Behavior make__57038500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57038500 = behavior;
   behavior->owner = (Object)func0_58_840_56563560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_56758900_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[remaining_56924880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_56656100_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_56758980_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[interpolated__value_57480000_my__interpolator_58_8410_56707880_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__57023900();

   return behavior;
}

Behavior __57038260;

Behavior make__57038260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57038260 = behavior;
   behavior->owner = (Object)func0_58_840_56563560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_50116420_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_50554900_my__lut_58_8410_49824480_func0_58_840_56563560_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__57023820();

   return behavior;
}

Scope makefunc0_58_840_56563560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_56563560 = scope;
   scope->owner = (Object)func0_58_8400_50831380;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50554580();
   scope->systemIs[1] = makemy__interpolator_57479720();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56656100();
   scope->inners[1] = makenext__data_56758980();
   scope->inners[2] = makeaddress_56758900();
   scope->inners[3] = makeremaining_56924880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57023240();
   scope->behaviors[1] = make__57022820();
   scope->behaviors[2] = make__57021740();
   scope->behaviors[3] = make__57038500();
   scope->behaviors[4] = make__57038260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_50831380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_50831380 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51069500();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51249520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_56563560();

   return systemT;
}