#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_49570200;

Block __48700020;

void code__48700020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49588380(),z__value_47437220___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49570320);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49588320(),z__value_47437220___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49570320);
}

Block make__48700020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48700020 = block;
   block->owner = (Object)__49570320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48700020;

   return block;
};

Block __49591440;

void code__49591440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47437220___47360280______58_840_49570200->c_value,z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
}

Block make__49591440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49591440 = block;
   block->owner = (Object)__49589840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49591440;

   return block;
};

Block __49591380;

void code__49591380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->c_value,a_47483120___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
}

Block make__49591380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49591380 = block;
   block->owner = (Object)__49589680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49591380;

   return block;
};

Value make__49588380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49588320() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47360280;

SignalI z__value_47437220___47360280______58_840_49570200;

SignalI makez__value_47437220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47437220___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)__47360280;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),32);
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

SignalI a_47483120___47360280______58_840_49570200;

SignalI makea_47483120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47483120___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)__47360280;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),32);
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

SystemI tanh_47433700;

SystemI maketanh_47433700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_47433700 = systemI;
   systemI->owner = (Object)__47360280;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_47217540;

   return systemI;
};

Behavior __49570320;

Behavior make__49570320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49570320 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47360280;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__48700020();

   return behavior;
}

Behavior __49589840;

Behavior make__49589840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49589840 = behavior;
   behavior->owner = (Object)__47360280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47437220___47360280______58_840_49570200);
   z__value_47437220___47360280______58_840_49570200->num_any += 1;
   z__value_47437220___47360280______58_840_49570200->any = realloc(z__value_47437220___47360280______58_840_49570200->any,z__value_47437220___47360280______58_840_49570200->num_any*sizeof(Object));
z__value_47437220___47360280______58_840_49570200->any[z__value_47437220___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->block = make__49591440();

   return behavior;
}

Behavior __49589680;

Behavior make__49589680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49589680 = behavior;
   behavior->owner = (Object)__47360280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_47433840_tanh_58_840_47217540___47360280______58_840_49570200);
   a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->any,a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->any[a_47433840_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->block = make__49591380();

   return behavior;
}

Scope make__47360280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47360280 = scope;
   scope->owner = (Object)_____58_840_49570200;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_47433700();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47437220();
   scope->inners[1] = makea_47483120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49570320();
   scope->behaviors[1] = make__49589840();
   scope->behaviors[2] = make__49589680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_49570200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_49570200 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47360280();

   return systemT;
}