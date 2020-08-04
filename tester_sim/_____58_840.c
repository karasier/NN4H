#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_49639180;

Block __49337520;

void code__49337520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49657040(),z__value_46853460___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49639300);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49656960(),z__value_46853460___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49639300);
}

Block make__49337520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49337520 = block;
   block->owner = (Object)__49639300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49337520;

   return block;
};

Block __49635680;

void code__49635680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_46853460___45605440______58_840_49639180->c_value,z__value_48337420_tanh_58_840_48065220___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
}

Block make__49635680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49635680 = block;
   block->owner = (Object)__49658520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49635680;

   return block;
};

Block __49635620;

void code__49635620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->c_value,a_47096020___45605440______58_840_49639180);
      set_value_pos(pool_state);
   }
}

Block make__49635620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49635620 = block;
   block->owner = (Object)__49658360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49635620;

   return block;
};

Value make__49657040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),32),1,data);
}

Value make__49656960() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),32),1,data);
}

Scope __45605440;

SignalI z__value_46853460___45605440______58_840_49639180;

SignalI makez__value_46853460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_46853460___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)__45605440;
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

SignalI a_47096020___45605440______58_840_49639180;

SignalI makea_47096020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47096020___45605440______58_840_49639180 = signalI;
   signalI->owner = (Object)__45605440;
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

SystemI tanh_48470560;

SystemI maketanh_48470560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_48470560 = systemI;
   systemI->owner = (Object)__45605440;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_48065220;

   return systemI;
};

Behavior __49639300;

Behavior make__49639300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49639300 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__45605440;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49337520();

   return behavior;
}

Behavior __49658520;

Behavior make__49658520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49658520 = behavior;
   behavior->owner = (Object)__45605440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_46853460___45605440______58_840_49639180);
   z__value_46853460___45605440______58_840_49639180->num_any += 1;
   z__value_46853460___45605440______58_840_49639180->any = realloc(z__value_46853460___45605440______58_840_49639180->any,z__value_46853460___45605440______58_840_49639180->num_any*sizeof(Object));
z__value_46853460___45605440______58_840_49639180->any[z__value_46853460___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->block = make__49635680();

   return behavior;
}

Behavior __49658360;

Behavior make__49658360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49658360 = behavior;
   behavior->owner = (Object)__45605440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_48470700_tanh_58_840_48065220___45605440______58_840_49639180);
   a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->num_any += 1;
   a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->any = realloc(a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->any,a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->num_any*sizeof(Object));
a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->any[a_48470700_tanh_58_840_48065220___45605440______58_840_49639180->num_any-1] = (Object)behavior;
   behavior->block = make__49635620();

   return behavior;
}

Scope make__45605440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45605440 = scope;
   scope->owner = (Object)_____58_840_49639180;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_48470560();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_46853460();
   scope->inners[1] = makea_47096020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49639300();
   scope->behaviors[1] = make__49658520();
   scope->behaviors[2] = make__49658360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_49639180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_49639180 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45605440();

   return systemT;
}