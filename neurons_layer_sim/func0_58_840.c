#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_52232860;

SignalI z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makez__value_52331360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)func0_58_840_52232860;
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

SignalI a_52415440_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makea_52415440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52415440_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)func0_58_840_52232860;
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

Block __53714220;

void code__53714220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->c_value;
            first = value2integer(make__53724700());
            last = value2integer(make__53724680());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53714220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53714220 = block;
   block->owner = (Object)__53713940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53714220;

   return block;
};

Block __53713880;

void code__53713880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380,value2integer(make__53724480()),value2integer(make__53724460())));
      set_value_pos(pool_state);
   }
}

Block make__53713880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53713880 = block;
   block->owner = (Object)__53713460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53713880;

   return block;
};

Block __53713360;

void code__53713360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__53723500();
            src1 = make__53723440();
            src2 = make__53723200();
            src3 = make__53723180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53713360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53713360 = block;
   block->owner = (Object)__53712760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53713360;

   return block;
};

Block __53714380;

void code__53714380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,addr_49127140_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->c_value,z__value_53286820_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,base_53372620_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,next__data_53499300_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,integer__part_53592720_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,a_52415440_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53714380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53714380 = block;
   block->owner = (Object)__53729460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53714380;

   return block;
};

Block __53714320;

void code__53714320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->c_value,next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53714320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53714320 = block;
   block->owner = (Object)__53729200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53714320;

   return block;
};

Value make__53724700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53724680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53724480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53724460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53723500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53723440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53723200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53723180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __53549420;

SignalI base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makebase_53611860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__53549420;
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

SignalI next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makenext__data_53658240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__53549420;
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

SignalI addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makeaddr_53658160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__53549420;
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

SignalI integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380;

SignalI makeinteger__part_53745460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__53549420;
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

SystemI my__lut_49378600;

SystemI makemy__lut_49378600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49378600 = systemI;
   systemI->owner = (Object)__53549420;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_49106480;

   return systemI;
};

SystemI my__interpolator_53661920;

SystemI makemy__interpolator_53661920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53661920 = systemI;
   systemI->owner = (Object)__53549420;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_53170260;

   return systemI;
};

Behavior __53713940;

Behavior make__53713940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53713940 = behavior;
   behavior->owner = (Object)__53549420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380);
   z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->any,z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->any[z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53714220();

   return behavior;
}

Behavior __53713460;

Behavior make__53713460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53713460 = behavior;
   behavior->owner = (Object)__53549420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53713880();

   return behavior;
}

Behavior __53712760;

Behavior make__53712760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53712760 = behavior;
   behavior->owner = (Object)__53549420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53713360();

   return behavior;
}

Behavior __53729460;

Behavior make__53729460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53729460 = behavior;
   behavior->owner = (Object)__53549420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[addr_53658160___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380);
   z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->any,z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->any[z__value_52331360_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[base_53611860___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[next__data_53658240___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[integer__part_53745460___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[interpolated__value_53662060_my__interpolator_58_841_53170260___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53714380();

   return behavior;
}

Behavior __53729200;

Behavior make__53729200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53729200 = behavior;
   behavior->owner = (Object)__53549420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[base_49259860_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380);
   next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any += 1;
   next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any = realloc(next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any,next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any*sizeof(Object));
next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->any[next__data_49378740_my__lut_58_841_49106480___53549420_func0_58_840_52232860___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53714320();

   return behavior;
}

Scope make__53549420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53549420 = scope;
   scope->owner = (Object)func0_58_840_52232860;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49378600();
   scope->systemIs[1] = makemy__interpolator_53661920();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53611860();
   scope->inners[1] = makenext__data_53658240();
   scope->inners[2] = makeaddr_53658160();
   scope->inners[3] = makeinteger__part_53745460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53713940();
   scope->behaviors[1] = make__53713460();
   scope->behaviors[2] = make__53712760();
   scope->behaviors[3] = make__53729460();
   scope->behaviors[4] = make__53729200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_52232860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_52232860 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52331360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52415440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__53549420();

   return systemT;
}