#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1__0_58_840_50302060;

SignalI z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makez__value_50450600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func1__0_58_840_50302060;
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

SignalI a_50708240_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makea_50708240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50708240_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func1__0_58_840_50302060;
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

Block __56278300;

void code__56278300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
            first = value2integer(make__56293220());
            last = value2integer(make__56293200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56278300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56278300 = block;
   block->owner = (Object)__56278040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56278300;

   return block;
};

Block __56278000;

void code__56278000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360,value2integer(make__56293060()),value2integer(make__56293040())));
      set_value_pos(pool_state);
   }
}

Block make__56278000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56278000 = block;
   block->owner = (Object)__56277740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56278000;

   return block;
};

Block __56277700;

void code__56277700() {
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
            src0 = make__56292580();
            src1 = make__56292560();
            src2 = make__56292540();
            src3 = make__56292520();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value;
            first = value2integer(make__56292420());
            last = value2integer(make__56292400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56277700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56277700 = block;
   block->owner = (Object)__56277240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56277700;

   return block;
};

Block __56278520;

void code__56278520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,address_51993320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,remaining_50438000_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,base_50657320_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,next__data_50753940_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,a_50708240_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56278520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56278520 = block;
   block->owner = (Object)__56272380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56278520;

   return block;
};

Block __56278460;

void code__56278460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->c_value,next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56278460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56278460 = block;
   block->owner = (Object)__56272220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56278460;

   return block;
};

Value make__56293220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56293200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56293060() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56293040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56292580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56292560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56292540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56292520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56292420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56292400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1__0_58_84_51076060;

SignalI base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makebase_51259840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func1__0_58_84_51076060;
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

SignalI next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makenext__data_51542100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func1__0_58_84_51076060;
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

SignalI address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makeaddress_51542020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func1__0_58_84_51076060;
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

SignalI remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360;

SignalI makeremaining_51618080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func1__0_58_84_51076060;
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

SystemI my__lut_52181340;

SystemI makemy__lut_52181340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52181340 = systemI;
   systemI->owner = (Object)func1__0_58_84_51076060;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_51962780;

   return systemI;
};

SystemI my__interpolator_50875380;

SystemI makemy__interpolator_50875380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50875380 = systemI;
   systemI->owner = (Object)func1__0_58_84_51076060;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_50287520;

   return systemI;
};

Behavior __56278040;

Behavior make__56278040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56278040 = behavior;
   behavior->owner = (Object)func1__0_58_84_51076060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56278300();

   return behavior;
}

Behavior __56277740;

Behavior make__56277740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56277740 = behavior;
   behavior->owner = (Object)func1__0_58_84_51076060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56278000();

   return behavior;
}

Behavior __56277240;

Behavior make__56277240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56277240 = behavior;
   behavior->owner = (Object)func1__0_58_84_51076060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[z__value_50450600_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56277700();

   return behavior;
}

Behavior __56272380;

Behavior make__56272380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56272380 = behavior;
   behavior->owner = (Object)func1__0_58_84_51076060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[address_51542020_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[remaining_51618080_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[base_51259840_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[next__data_51542100_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[interpolated__value_50875560_my__interpolator_58_8400_50287520_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56278520();

   return behavior;
}

Behavior __56272220;

Behavior make__56272220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56272220 = behavior;
   behavior->owner = (Object)func1__0_58_84_51076060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[base_52116320_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360);
   next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any += 1;
   next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any = realloc(next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any,next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->any[next__data_52181500_my__lut_58_8400_51962780_func1__0_58_84_51076060_func1__0_58_840_50302060______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56278460();

   return behavior;
}

Scope makefunc1__0_58_84_51076060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1__0_58_84_51076060 = scope;
   scope->owner = (Object)func1__0_58_840_50302060;
   scope->name = "func1_0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52181340();
   scope->systemIs[1] = makemy__interpolator_50875380();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51259840();
   scope->inners[1] = makenext__data_51542100();
   scope->inners[2] = makeaddress_51542020();
   scope->inners[3] = makeremaining_51618080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56278040();
   scope->behaviors[1] = make__56277740();
   scope->behaviors[2] = make__56277240();
   scope->behaviors[3] = make__56272380();
   scope->behaviors[4] = make__56272220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1__0_58_840_50302060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1__0_58_840_50302060 = systemT;
systemT->owner = NULL;
   systemT->name = "func1_0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50450600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50708240();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1__0_58_84_51076060();

   return systemT;
}