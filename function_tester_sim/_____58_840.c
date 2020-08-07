#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_47587520;

Block __47588460;

void code__47588460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47605860(),z__value_47049020___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__47587640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47605800(),z__value_47049020___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__47587640);
}

Block make__47588460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47588460 = block;
   block->owner = (Object)__47587640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47588460;

   return block;
};

Block __47608920;

void code__47608920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47049020___47049560______58_840_47587520->c_value,z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47608920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47608920 = block;
   block->owner = (Object)__47607320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47608920;

   return block;
};

Block __47608860;

void code__47608860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->c_value,a_47048940___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47608860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47608860 = block;
   block->owner = (Object)__47607160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47608860;

   return block;
};

Value make__47605860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47605800() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Scope __47049560;

SignalI z__value_47049020___47049560______58_840_47587520;

SignalI makez__value_47049020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47049020___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47049560;
   signalI->name = "z_value";
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

SignalI a_47048940___47049560______58_840_47587520;

SignalI makea_47048940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47048940___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47049560;
   signalI->name = "a";
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

SystemI tanh_47589220;

SystemI maketanh_47589220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_47589220 = systemI;
   systemI->owner = (Object)__47049560;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_47591360;

   return systemI;
};

Behavior __47587640;

Behavior make__47587640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47587640 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47049560;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47588460();

   return behavior;
}

Behavior __47607320;

Behavior make__47607320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47607320 = behavior;
   behavior->owner = (Object)__47049560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47049020___47049560______58_840_47587520);
   z__value_47049020___47049560______58_840_47587520->num_any += 1;
   z__value_47049020___47049560______58_840_47587520->any = realloc(z__value_47049020___47049560______58_840_47587520->any,z__value_47049020___47049560______58_840_47587520->num_any*sizeof(Object));
z__value_47049020___47049560______58_840_47587520->any[z__value_47049020___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47608920();

   return behavior;
}

Behavior __47607160;

Behavior make__47607160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47607160 = behavior;
   behavior->owner = (Object)__47049560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_47589360_tanh_58_840_47591360___47049560______58_840_47587520);
   a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->any,a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->any[a_47589360_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47608860();

   return behavior;
}

Scope make__47049560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47049560 = scope;
   scope->owner = (Object)_____58_840_47587520;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_47589220();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47049020();
   scope->inners[1] = makea_47048940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47587640();
   scope->behaviors[1] = make__47607320();
   scope->behaviors[2] = make__47607160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_47587520() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_47587520 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47049560();

   return systemT;
}