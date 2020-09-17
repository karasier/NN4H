#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_51983520;

SignalI z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makez__value_52517400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_8400_51983520;
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

SignalI a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makea_52733800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_8400_51983520;
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

Block __60520420;

void code__60520420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
            first = value2integer(make__60632020());
            last = value2integer(make__60632000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60520420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60520420 = block;
   block->owner = (Object)__60520160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60520420;

   return block;
};

Block __60520120;

void code__60520120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340,value2integer(make__60631860()),value2integer(make__60631840())));
      set_value_pos(pool_state);
   }
}

Block make__60520120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60520120 = block;
   block->owner = (Object)__60519820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60520120;

   return block;
};

Block __60519760;

void code__60519760() {
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
            src0 = make__60631280();
            src1 = make__60631260();
            src2 = make__60631240();
            src3 = make__60631220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value;
            first = value2integer(make__60631120());
            last = value2integer(make__60631100());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60519760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60519760 = block;
   block->owner = (Object)__60519220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60519760;

   return block;
};

Block __60520640;

void code__60520640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,address_58706000_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,remaining_60231120_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,base_60333260_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,next__data_60443640_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,a_52733800_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60520640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60520640 = block;
   block->owner = (Object)__60636740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60520640;

   return block;
};

Block __60520580;

void code__60520580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__60520580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60520580 = block;
   block->owner = (Object)__60636580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60520580;

   return block;
};

Value make__60632020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60632000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60631860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60631840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60631280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60631260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60631240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60631220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60631120() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60631100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_51522740;

SignalI base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makebase_58507440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_840_51522740;
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

SignalI next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makenext__data_58627500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_840_51522740;
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

SignalI address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeaddress_58627420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_840_51522740;
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

SignalI remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340;

SignalI makeremaining_58706560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)func0_58_840_51522740;
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

SystemI my__lut_58860900;

SystemI makemy__lut_58860900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_58860900 = systemI;
   systemI->owner = (Object)func0_58_840_51522740;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_58708480;

   return systemI;
};

SystemI my__interpolator_60635780;

SystemI makemy__interpolator_60635780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_60635780 = systemI;
   systemI->owner = (Object)func0_58_840_51522740;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_60024300;

   return systemI;
};

Behavior __60520160;

Behavior make__60520160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60520160 = behavior;
   behavior->owner = (Object)func0_58_840_51522740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60520420();

   return behavior;
}

Behavior __60519820;

Behavior make__60519820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60519820 = behavior;
   behavior->owner = (Object)func0_58_840_51522740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60520120();

   return behavior;
}

Behavior __60519220;

Behavior make__60519220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60519220 = behavior;
   behavior->owner = (Object)func0_58_840_51522740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[z__value_52517400_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60519760();

   return behavior;
}

Behavior __60636740;

Behavior make__60636740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60636740 = behavior;
   behavior->owner = (Object)func0_58_840_51522740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[address_58627420_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[remaining_58706560_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[base_58507440_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[next__data_58627500_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[interpolated__value_60635940_my__interpolator_58_8410_60024300_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60520640();

   return behavior;
}

Behavior __60636580;

Behavior make__60636580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60636580 = behavior;
   behavior->owner = (Object)func0_58_840_51522740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[base_58816200_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[next__data_58861040_my__lut_58_8410_58708480_func0_58_840_51522740_func0_58_8400_51983520_layer1_58_84_49755940_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__60520580();

   return behavior;
}

Scope makefunc0_58_840_51522740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_51522740 = scope;
   scope->owner = (Object)func0_58_8400_51983520;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_58860900();
   scope->systemIs[1] = makemy__interpolator_60635780();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_58507440();
   scope->inners[1] = makenext__data_58627500();
   scope->inners[2] = makeaddress_58627420();
   scope->inners[3] = makeremaining_58706560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60520160();
   scope->behaviors[1] = make__60519820();
   scope->behaviors[2] = make__60519220();
   scope->behaviors[3] = make__60636740();
   scope->behaviors[4] = make__60636580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_51983520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_51983520 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52517400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52733800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_51522740();

   return systemT;
}