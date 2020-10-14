#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1__0_58_840_51360980;

SignalI z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makez__value_51453960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func1__0_58_840_51360980;
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

SignalI a_41964400_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makea_41964400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_41964400_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func1__0_58_840_51360980;
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

Block __47584000;

void code__47584000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
            first = value2integer(make__47750320());
            last = value2integer(make__47750300());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47584000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47584000 = block;
   block->owner = (Object)__47581000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47584000;

   return block;
};

Block __47580760;

void code__47580760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920,value2integer(make__47750040()),value2integer(make__47750020())));
      set_value_pos(pool_state);
   }
}

Block make__47580760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47580760 = block;
   block->owner = (Object)__47603440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47580760;

   return block;
};

Block __47603300;

void code__47603300() {
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
            src0 = make__47745860();
            src1 = make__47745480();
            src2 = make__47745460();
            src3 = make__47745040();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
            first = value2integer(make__47744580());
            last = value2integer(make__47744480());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47603300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47603300 = block;
   block->owner = (Object)__47601560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47603300;

   return block;
};

Block __47585140;

void code__47585140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,address_47933620_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,a_41964400_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47585140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47585140 = block;
   block->owner = (Object)__47661560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47585140;

   return block;
};

Block __47584760;

void code__47584760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value,next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47584760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47584760 = block;
   block->owner = (Object)__47685460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47584760;

   return block;
};

Value make__47750320() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47750300() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47750040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47750020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47745860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47745480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47745460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47745040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47744580() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47744480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1__0_58_84_51490100;

SignalI base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makebase_42134420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func1__0_58_84_51490100;
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

SignalI next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makenext__data_45407300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func1__0_58_84_51490100;
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

SignalI address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makeaddress_45406920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func1__0_58_84_51490100;
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

SignalI remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makeremaining_47174460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)func1__0_58_84_51490100;
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

SystemI my__lut_49894460;

SystemI makemy__lut_49894460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49894460 = systemI;
   systemI->owner = (Object)func1__0_58_84_51490100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_47936940;

   return systemI;
};

SystemI my__interpolator_43361880;

SystemI makemy__interpolator_43361880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_43361880 = systemI;
   systemI->owner = (Object)func1__0_58_84_51490100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_51050860;

   return systemI;
};

Behavior __47581000;

Behavior make__47581000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47581000 = behavior;
   behavior->owner = (Object)func1__0_58_84_51490100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47584000();

   return behavior;
}

Behavior __47603440;

Behavior make__47603440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47603440 = behavior;
   behavior->owner = (Object)func1__0_58_84_51490100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47580760();

   return behavior;
}

Behavior __47601560;

Behavior make__47601560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47601560 = behavior;
   behavior->owner = (Object)func1__0_58_84_51490100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[z__value_51453960_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47603300();

   return behavior;
}

Behavior __47661560;

Behavior make__47661560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47661560 = behavior;
   behavior->owner = (Object)func1__0_58_84_51490100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[address_45406920_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[remaining_47174460_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[base_42134420_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[next__data_45407300_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47585140();

   return behavior;
}

Behavior __47685460;

Behavior make__47685460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47685460 = behavior;
   behavior->owner = (Object)func1__0_58_84_51490100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[base_49782580_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[next__data_49894600_my__lut_58_8400_47936940_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47584760();

   return behavior;
}

Scope makefunc1__0_58_84_51490100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1__0_58_84_51490100 = scope;
   scope->owner = (Object)func1__0_58_840_51360980;
   scope->name = "func1_0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49894460();
   scope->systemIs[1] = makemy__interpolator_43361880();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_42134420();
   scope->inners[1] = makenext__data_45407300();
   scope->inners[2] = makeaddress_45406920();
   scope->inners[3] = makeremaining_47174460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47581000();
   scope->behaviors[1] = make__47603440();
   scope->behaviors[2] = make__47601560();
   scope->behaviors[3] = make__47661560();
   scope->behaviors[4] = make__47685460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1__0_58_840_51360980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1__0_58_840_51360980 = systemT;
systemT->owner = NULL;
   systemT->name = "func1_0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51453960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_41964400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1__0_58_84_51490100();

   return systemT;
}