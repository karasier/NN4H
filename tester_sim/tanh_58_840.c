#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_48065220;

SignalI z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180;

SignalI makez__value_48337420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)tanh_58_840_48065220;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_bit(),32);
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

SignalI a_48470700_tanh_58_840_48065220___45605440______58_840_49639180;

SignalI makea_48470700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48470700_tanh_58_840_48065220___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)tanh_58_840_48065220;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_bit(),32);
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

Block __49656400;

void code__49656400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->c_value,z__value_41638000_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,addr_47606920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,remaining_48437520_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->c_value,z__value_48549440_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,base_48612220_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,next__data_48724080_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49724420();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_49286540_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,a_48470700_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
}

Block make__49656400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49656400 = block;
   block->owner = (Object)__49679160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49656400;

   return block;
};

Block __49656340;

void code__49656340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->c_value,next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
}

Block make__49656340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49656340 = block;
   block->owner = (Object)__49679000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49656340;

   return block;
};

Value make__49724420() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47414980;

SignalI base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180;

SignalI makebase_46982820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)__47414980;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),32);
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

SignalI next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180;

SignalI makenext__data_47365660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)__47414980;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),32);
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

SignalI addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180;

SignalI makeaddr_47365580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)__47414980;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180;

SignalI makeremaining_47365480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)__47414980;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_bit(),24);
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

SystemI my__translator_41635340;

SystemI makemy__translator_41635340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_41635340 = systemI;
   systemI->owner = (Object)__47414980;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_47759760;

   return systemI;
};

SystemI my__table_47030060;

SystemI makemy__table_47030060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47030060 = systemI;
   systemI->owner = (Object)__47414980;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47571540;

   return systemI;
};

SystemI my__calculator_49373700;

SystemI makemy__calculator_49373700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_49373700 = systemI;
   systemI->owner = (Object)__47414980;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_48373940;

   return systemI;
};

Behavior __49679160;

Behavior make__49679160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49679160 = behavior;
   behavior->owner = (Object)__47414980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180);
   z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->any,z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->any[z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[addr_47365580___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[remaining_47365480___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[base_46982820___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[next__data_47365660___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[estimated__value_49373840_my__calculator_58_840_48373940___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->block = make__49656400();

   return behavior;
}

Behavior __49679000;

Behavior make__49679000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49679000 = behavior;
   behavior->owner = (Object)__47414980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[addr_41637620_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[remaining_41637380_my__translator_58_840_47759760___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[base_43366920_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180);
   next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any,next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->any[next__data_47030220_my__table_58_840_47571540___47414980_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->block = make__49656340();

   return behavior;
}

Scope make__47414980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47414980 = scope;
   scope->owner = (Object)tanh_58_840_48065220;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_41635340();
   scope->systemIs[1] = makemy__table_47030060();
   scope->systemIs[2] = makemy__calculator_49373700();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_46982820();
   scope->inners[1] = makenext__data_47365660();
   scope->inners[2] = makeaddr_47365580();
   scope->inners[3] = makeremaining_47365480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49679160();
   scope->behaviors[1] = make__49679000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_48065220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_48065220 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48337420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48470700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47414980();

   return systemT;
}