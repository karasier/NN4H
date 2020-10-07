#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_56157300;

SignalI z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makez__value_56345820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func1_58_840_56157300;
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

SignalI a_56511580_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makea_56511580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56511580_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func1_58_840_56157300;
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

Block __56387220;

void code__56387220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            first = value2integer(make__56577220());
            last = value2integer(make__56577200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56387220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56387220 = block;
   block->owner = (Object)__56386920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56387220;

   return block;
};

Block __56386880;

void code__56386880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480,value2integer(make__56576940()),value2integer(make__56576900())));
      set_value_pos(pool_state);
   }
}

Block make__56386880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56386880 = block;
   block->owner = (Object)__56386560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56386880;

   return block;
};

Block __56386520;

void code__56386520() {
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
            src0 = make__56575920();
            src1 = make__56575880();
            src2 = make__56575860();
            src3 = make__56575720();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            first = value2integer(make__56575560());
            last = value2integer(make__56575520());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56386520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56386520 = block;
   block->owner = (Object)__56385600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56386520;

   return block;
};

Block __56387720;

void code__56387720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,address_57248100_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,remaining_58904000_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,base_59137080_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,next__data_59198180_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,a_56511580_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56387720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56387720 = block;
   block->owner = (Object)__56559900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56387720;

   return block;
};

Block __56387600;

void code__56387600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56387600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56387600 = block;
   block->owner = (Object)__56559300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56387600;

   return block;
};

Value make__56577220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56577200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56576940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56576900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56575920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56575880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56575860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56575720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56575560() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56575520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_56389960;

SignalI base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makebase_56575320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func1_58_84_56389960;
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

SignalI next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makenext__data_56678980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func1_58_84_56389960;
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

SignalI address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress_56678900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func1_58_84_56389960;
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

SignalI remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeremaining_56741640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)func1_58_84_56389960;
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

SystemI my__lut_57509600;

SystemI makemy__lut_57509600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57509600 = systemI;
   systemI->owner = (Object)func1_58_84_56389960;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_57250080;

   return systemI;
};

SystemI my__interpolator_47505180;

SystemI makemy__interpolator_47505180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47505180 = systemI;
   systemI->owner = (Object)func1_58_84_56389960;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_58738640;

   return systemI;
};

Behavior __56386920;

Behavior make__56386920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56386920 = behavior;
   behavior->owner = (Object)func1_58_84_56389960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56387220();

   return behavior;
}

Behavior __56386560;

Behavior make__56386560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56386560 = behavior;
   behavior->owner = (Object)func1_58_84_56389960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56386880();

   return behavior;
}

Behavior __56385600;

Behavior make__56385600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56385600 = behavior;
   behavior->owner = (Object)func1_58_84_56389960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[z__value_56345820_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56386520();

   return behavior;
}

Behavior __56559900;

Behavior make__56559900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56559900 = behavior;
   behavior->owner = (Object)func1_58_84_56389960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[address_56678900_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[remaining_56741640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_56575320_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_56678980_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[interpolated__value_47483880_my__interpolator_58_8400_58738640_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56387720();

   return behavior;
}

Behavior __56559300;

Behavior make__56559300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56559300 = behavior;
   behavior->owner = (Object)func1_58_84_56389960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_57448520_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_57509740_my__lut_58_8400_57250080_func1_58_84_56389960_func1_58_840_56157300_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56387600();

   return behavior;
}

Scope makefunc1_58_84_56389960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_56389960 = scope;
   scope->owner = (Object)func1_58_840_56157300;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57509600();
   scope->systemIs[1] = makemy__interpolator_47505180();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_56575320();
   scope->inners[1] = makenext__data_56678980();
   scope->inners[2] = makeaddress_56678900();
   scope->inners[3] = makeremaining_56741640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56386920();
   scope->behaviors[1] = make__56386560();
   scope->behaviors[2] = make__56385600();
   scope->behaviors[3] = make__56559900();
   scope->behaviors[4] = make__56559300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_56157300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_56157300 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_56345820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56511580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_56389960();

   return systemT;
}