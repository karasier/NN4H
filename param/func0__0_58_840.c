#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0__0_58_840_50874320;

SignalI z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makez__value_50999000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__0_58_840_50874320;
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

SignalI a_51076560_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makea_51076560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51076560_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__0_58_840_50874320;
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

Block __56224840;

void code__56224840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
            first = value2integer(make__56239760());
            last = value2integer(make__56239740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56224840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56224840 = block;
   block->owner = (Object)__56224580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56224840;

   return block;
};

Block __56224540;

void code__56224540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360,value2integer(make__56239600()),value2integer(make__56239580())));
      set_value_pos(pool_state);
   }
}

Block make__56224540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56224540 = block;
   block->owner = (Object)__56224280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56224540;

   return block;
};

Block __56224240;

void code__56224240() {
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
            src0 = make__56239120();
            src1 = make__56239100();
            src2 = make__56239080();
            src3 = make__56239060();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value;
            first = value2integer(make__56238960());
            last = value2integer(make__56238940());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56224240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56224240 = block;
   block->owner = (Object)__56223780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56224240;

   return block;
};

Block __56225060;

void code__56225060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,address_50349260_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,remaining_51677000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,base_51821640_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,next__data_51966300_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,a_51076560_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56225060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56225060 = block;
   block->owner = (Object)__56243460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56225060;

   return block;
};

Block __56225000;

void code__56225000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->c_value,next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
      set_value_pos(pool_state);
   }
}

Block make__56225000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56225000 = block;
   block->owner = (Object)__56243300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56225000;

   return block;
};

Value make__56239760() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56239740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56239600() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56239580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56239120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56239100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56239080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56239060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56238960() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56238940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0__0_58_84_48369000;

SignalI base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makebase_43935560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__0_58_84_48369000;
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

SignalI next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makenext__data_45729160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__0_58_84_48369000;
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

SignalI address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makeaddress_45729060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__0_58_84_48369000;
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

SignalI remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360;

SignalI makeremaining_46165840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360 = signalI;
   signalI->owner = (Object)func0__0_58_84_48369000;
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

SystemI my__lut_50671160;

SystemI makemy__lut_50671160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50671160 = systemI;
   systemI->owner = (Object)func0__0_58_84_48369000;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50351160;

   return systemI;
};

SystemI my__interpolator_52069860;

SystemI makemy__interpolator_52069860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52069860 = systemI;
   systemI->owner = (Object)func0__0_58_84_48369000;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_51607860;

   return systemI;
};

Behavior __56224580;

Behavior make__56224580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56224580 = behavior;
   behavior->owner = (Object)func0__0_58_84_48369000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56224840();

   return behavior;
}

Behavior __56224280;

Behavior make__56224280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56224280 = behavior;
   behavior->owner = (Object)func0__0_58_84_48369000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56224540();

   return behavior;
}

Behavior __56223780;

Behavior make__56223780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56223780 = behavior;
   behavior->owner = (Object)func0__0_58_84_48369000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[z__value_50999000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56224240();

   return behavior;
}

Behavior __56243460;

Behavior make__56243460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56243460 = behavior;
   behavior->owner = (Object)func0__0_58_84_48369000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[address_45729060_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[remaining_46165840_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[base_43935560_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[next__data_45729160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[interpolated__value_52070000_my__interpolator_58_842_51607860_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56225060();

   return behavior;
}

Behavior __56243300;

Behavior make__56243300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56243300 = behavior;
   behavior->owner = (Object)func0__0_58_84_48369000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[base_50551220_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360);
   next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any += 1;
   next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any = realloc(next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any,next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any*sizeof(Object));
next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->any[next__data_50671300_my__lut_58_842_50351160_func0__0_58_84_48369000_func0__0_58_840_50874320______58_84_45562600______58_840_56012360->num_any-1] = (Object)behavior;
   behavior->block = make__56225000();

   return behavior;
}

Scope makefunc0__0_58_84_48369000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0__0_58_84_48369000 = scope;
   scope->owner = (Object)func0__0_58_840_50874320;
   scope->name = "func0_0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50671160();
   scope->systemIs[1] = makemy__interpolator_52069860();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_43935560();
   scope->inners[1] = makenext__data_45729160();
   scope->inners[2] = makeaddress_45729060();
   scope->inners[3] = makeremaining_46165840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56224580();
   scope->behaviors[1] = make__56224280();
   scope->behaviors[2] = make__56223780();
   scope->behaviors[3] = make__56243460();
   scope->behaviors[4] = make__56243300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0__0_58_840_50874320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0__0_58_840_50874320 = systemT;
systemT->owner = NULL;
   systemT->name = "func0_0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50999000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51076560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0__0_58_84_48369000();

   return systemT;
}