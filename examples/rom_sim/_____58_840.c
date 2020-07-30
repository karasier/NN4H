#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_47692820;

Block __47669760;

void code__47669760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47687140(),addr_47674940___47675340______58_840_47692820);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__47692940);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47687080(),addr_47674940___47675340______58_840_47692820);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__47692940);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47687020(),addr_47674940___47675340______58_840_47692820);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__47692940);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47686960(),addr_47674940___47675340______58_840_47692820);
      set_value_pos(pool_state);
   }
}

Block make__47669760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47669760 = block;
   block->owner = (Object)__47692940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47669760;

   return block;
};

Block __47690280;

void code__47690280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47674940___47675340______58_840_47692820->c_value,addr_47670780_my__table_58_840_47672580___47675340______58_840_47692820);
      set_value_pos(pool_state);
   }
}

Block make__47690280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47690280 = block;
   block->owner = (Object)__47688680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47690280;

   return block;
};

Block __47690220;

void code__47690220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->c_value,data_47674860___47675340______58_840_47692820);
      set_value_pos(pool_state);
   }
}

Block make__47690220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47690220 = block;
   block->owner = (Object)__47688520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47690220;

   return block;
};

Value make__47687140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47687080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47687020() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__47686960() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Scope __47675340;

SignalI addr_47674940___47675340______58_840_47692820;

SignalI makeaddr_47674940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47674940___47675340______58_840_47692820 = signalI;
   signalI->owner = (Object)__47675340;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SignalI data_47674860___47675340______58_840_47692820;

SignalI makedata_47674860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_47674860___47675340______58_840_47692820 = signalI;
   signalI->owner = (Object)__47675340;
   signalI->name = "data";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SystemI my__table_47670540;

SystemI makemy__table_47670540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47670540 = systemI;
   systemI->owner = (Object)__47675340;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47672580;

   return systemI;
};

Behavior __47692940;

Behavior make__47692940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47692940 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47675340;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47669760();

   return behavior;
}

Behavior __47688680;

Behavior make__47688680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47688680 = behavior;
   behavior->owner = (Object)__47675340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47674940___47675340______58_840_47692820);
   addr_47674940___47675340______58_840_47692820->num_any += 1;
   addr_47674940___47675340______58_840_47692820->any = realloc(addr_47674940___47675340______58_840_47692820->any,addr_47674940___47675340______58_840_47692820->num_any*sizeof(Object));
addr_47674940___47675340______58_840_47692820->any[addr_47674940___47675340______58_840_47692820->num_any-1] = (Object)behavior;
   behavior->block = make__47690280();

   return behavior;
}

Behavior __47688520;

Behavior make__47688520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47688520 = behavior;
   behavior->owner = (Object)__47675340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,data_47670680_my__table_58_840_47672580___47675340______58_840_47692820);
   data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->num_any += 1;
   data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->any = realloc(data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->any,data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->num_any*sizeof(Object));
data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->any[data_47670680_my__table_58_840_47672580___47675340______58_840_47692820->num_any-1] = (Object)behavior;
   behavior->block = make__47690220();

   return behavior;
}

Scope make__47675340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47675340 = scope;
   scope->owner = (Object)_____58_840_47692820;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_47670540();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeaddr_47674940();
   scope->inners[1] = makedata_47674860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47692940();
   scope->behaviors[1] = make__47688680();
   scope->behaviors[2] = make__47688520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_47692820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_47692820 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47675340();

   return systemT;
}