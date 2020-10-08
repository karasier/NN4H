#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1__0_58_840_50696420;

SignalI z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makez__value_50985660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func1__0_58_840_50696420;
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

SignalI a_51085760_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makea_51085760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51085760_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func1__0_58_840_50696420;
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

Block __51501100;

void code__51501100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
            first = value2integer(make__51592300());
            last = value2integer(make__51592280());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51501100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51501100 = block;
   block->owner = (Object)__51500680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51501100;

   return block;
};

Block __51500560;

void code__51500560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320,value2integer(make__51592100()),value2integer(make__51592060())));
      set_value_pos(pool_state);
   }
}

Block make__51500560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51500560 = block;
   block->owner = (Object)__51500020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51500560;

   return block;
};

Block __51499940;

void code__51499940() {
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
            src0 = make__51591480();
            src1 = make__51591440();
            src2 = make__51591420();
            src3 = make__51591400();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value;
            first = value2integer(make__51591280());
            last = value2integer(make__51591260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51499940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51499940 = block;
   block->owner = (Object)__51499020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51499940;

   return block;
};

Block __51501460;

void code__51501460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,address_52007700_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,remaining_50815080_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,base_51025320_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,next__data_51219360_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,a_51085760_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51501460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51501460 = block;
   block->owner = (Object)__51568220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51501460;

   return block;
};

Block __51501320;

void code__51501320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->c_value,next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51501320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51501320 = block;
   block->owner = (Object)__51567900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51501320;

   return block;
};

Value make__51592300() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51592280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51592100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51592060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51591480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51591440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51591420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51591400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51591280() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51591260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1__0_58_84_51242020;

SignalI base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makebase_51515880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func1__0_58_84_51242020;
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

SignalI next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makenext__data_51609780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func1__0_58_84_51242020;
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

SignalI address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makeaddress_51609700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func1__0_58_84_51242020;
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

SignalI remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320;

SignalI makeremaining_51759460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func1__0_58_84_51242020;
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

SystemI my__lut_45735320;

SystemI makemy__lut_45735320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_45735320 = systemI;
   systemI->owner = (Object)func1__0_58_84_51242020;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52009900;

   return systemI;
};

SystemI my__interpolator_51463140;

SystemI makemy__interpolator_51463140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51463140 = systemI;
   systemI->owner = (Object)func1__0_58_84_51242020;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_50638780;

   return systemI;
};

Behavior __51500680;

Behavior make__51500680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51500680 = behavior;
   behavior->owner = (Object)func1__0_58_84_51242020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51501100();

   return behavior;
}

Behavior __51500020;

Behavior make__51500020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51500020 = behavior;
   behavior->owner = (Object)func1__0_58_84_51242020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51500560();

   return behavior;
}

Behavior __51499020;

Behavior make__51499020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51499020 = behavior;
   behavior->owner = (Object)func1__0_58_84_51242020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[z__value_50985660_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51499940();

   return behavior;
}

Behavior __51568220;

Behavior make__51568220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51568220 = behavior;
   behavior->owner = (Object)func1__0_58_84_51242020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[address_51609700_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[remaining_51759460_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[base_51515880_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[next__data_51609780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[interpolated__value_51463280_my__interpolator_58_8400_50638780_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51501460();

   return behavior;
}

Behavior __51567900;

Behavior make__51567900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51567900 = behavior;
   behavior->owner = (Object)func1__0_58_84_51242020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[base_43614080_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320);
   next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any += 1;
   next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any = realloc(next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any,next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->any[next__data_45711620_my__lut_58_8400_52009900_func1__0_58_84_51242020_func1__0_58_840_50696420______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51501320();

   return behavior;
}

Scope makefunc1__0_58_84_51242020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1__0_58_84_51242020 = scope;
   scope->owner = (Object)func1__0_58_840_50696420;
   scope->name = "func1_0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_45735320();
   scope->systemIs[1] = makemy__interpolator_51463140();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51515880();
   scope->inners[1] = makenext__data_51609780();
   scope->inners[2] = makeaddress_51609700();
   scope->inners[3] = makeremaining_51759460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51500680();
   scope->behaviors[1] = make__51500020();
   scope->behaviors[2] = make__51499020();
   scope->behaviors[3] = make__51568220();
   scope->behaviors[4] = make__51567900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1__0_58_840_50696420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1__0_58_840_50696420 = systemT;
systemT->owner = NULL;
   systemT->name = "func1_0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50985660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51085760();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1__0_58_84_51242020();

   return systemT;
}