#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_50998640;

SignalI z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makez__value_51363000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)func1_58_840_50998640;
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

SignalI a_51649920_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makea_51649920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51649920_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)func1_58_840_50998640;
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

Block __51893840;

void code__51893840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->c_value;
            first = value2integer(make__54970440());
            last = value2integer(make__54970420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51893840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51893840 = block;
   block->owner = (Object)__51893560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51893840;

   return block;
};

Block __51893520;

void code__51893520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040,value2integer(make__54970280()),value2integer(make__54970260())));
      set_value_pos(pool_state);
   }
}

Block make__51893520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51893520 = block;
   block->owner = (Object)__51893180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51893520;

   return block;
};

Block __51893140;

void code__51893140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__54969760();
            src1 = make__54969740();
            src2 = make__54969720();
            src3 = make__54969700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51893140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51893140 = block;
   block->owner = (Object)__51892780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51893140;

   return block;
};

Block __51894060;

void code__51894060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,addr_51302560_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->c_value,z__value_56432740_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,base_56618400_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,next__data_56787640_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,integer__part_56850360_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,a_51649920_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51894060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51894060 = block;
   block->owner = (Object)__54974720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51894060;

   return block;
};

Block __51893940;

void code__51893940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->c_value,next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51893940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51893940 = block;
   block->owner = (Object)__54974560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51893940;

   return block;
};

Value make__54970440() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54970420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54970280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54970260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54969760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54969740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54969720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54969700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __49850380;

SignalI base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makebase_50099580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49850380;
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

SignalI next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makenext__data_50287620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49850380;
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

SignalI addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makeaddr_50287460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49850380;
   signalI->name = "addr";
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

SignalI integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040;

SignalI makeinteger__part_50449760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__49850380;
   signalI->name = "integer_part";
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

SystemI my__lut_51812920;

SystemI makemy__lut_51812920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51812920 = systemI;
   systemI->owner = (Object)__49850380;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_51306440;

   return systemI;
};

SystemI my__interpolator_56912940;

SystemI makemy__interpolator_56912940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56912940 = systemI;
   systemI->owner = (Object)__49850380;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_56289920;

   return systemI;
};

Behavior __51893560;

Behavior make__51893560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51893560 = behavior;
   behavior->owner = (Object)__49850380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040);
   z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->any,z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->any[z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51893840();

   return behavior;
}

Behavior __51893180;

Behavior make__51893180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51893180 = behavior;
   behavior->owner = (Object)__49850380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51893520();

   return behavior;
}

Behavior __51892780;

Behavior make__51892780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51892780 = behavior;
   behavior->owner = (Object)__49850380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51893140();

   return behavior;
}

Behavior __54974720;

Behavior make__54974720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54974720 = behavior;
   behavior->owner = (Object)__49850380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[addr_50287460___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040);
   z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->any,z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->any[z__value_51363000_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[base_50099580___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[next__data_50287620___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[integer__part_50449760___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[interpolated__value_56913080_my__interpolator_58_8400_56289920___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51894060();

   return behavior;
}

Behavior __54974560;

Behavior make__54974560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54974560 = behavior;
   behavior->owner = (Object)__49850380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[base_51577420_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040);
   next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any += 1;
   next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any = realloc(next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any,next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any*sizeof(Object));
next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->any[next__data_51813080_my__lut_58_8400_51306440___49850380_func1_58_840_50998640___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51893940();

   return behavior;
}

Scope make__49850380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49850380 = scope;
   scope->owner = (Object)func1_58_840_50998640;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51812920();
   scope->systemIs[1] = makemy__interpolator_56912940();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50099580();
   scope->inners[1] = makenext__data_50287620();
   scope->inners[2] = makeaddr_50287460();
   scope->inners[3] = makeinteger__part_50449760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51893560();
   scope->behaviors[1] = make__51893180();
   scope->behaviors[2] = make__51892780();
   scope->behaviors[3] = make__54974720();
   scope->behaviors[4] = make__54974560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_50998640() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_50998640 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51363000();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51649920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__49850380();

   return systemT;
}