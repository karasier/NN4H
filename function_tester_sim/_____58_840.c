#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_48029580;

Block __47771960;

void code__47771960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48045240(),z__value_47736500______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48005260);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48045160(),z__value_47736500______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48005260);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48045060(),z__value_47736500______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48005260);
}

Block make__47771960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47771960 = block;
   block->owner = (Object)__48005260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47771960;

   return block;
};

Block __48025500;

void code__48025500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47736500______58_84_47674340______58_840_48029580->c_value,z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48025500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48025500 = block;
   block->owner = (Object)__48022960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48025500;

   return block;
};

Block __48025360;

void code__48025360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,a_47807400______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48025360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48025360 = block;
   block->owner = (Object)__48022560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48025360;

   return block;
};

Value make__48045240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48045160() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48045060() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope _____58_84_47674340;

SignalI z__value_47736500______58_84_47674340______58_840_48029580;

SignalI makez__value_47736500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47736500______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)_____58_84_47674340;
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

SignalI a_47807400______58_84_47674340______58_840_48029580;

SignalI makea_47807400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47807400______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)_____58_84_47674340;
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

SystemI tanh_45778240;

SystemI maketanh_45778240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_45778240 = systemI;
   systemI->owner = (Object)_____58_84_47674340;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_48073140;

   return systemI;
};

Behavior __48005260;

Behavior make__48005260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48005260 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_47674340;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47771960();

   return behavior;
}

Behavior __48022960;

Behavior make__48022960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48022960 = behavior;
   behavior->owner = (Object)_____58_84_47674340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47736500______58_84_47674340______58_840_48029580);
   z__value_47736500______58_84_47674340______58_840_48029580->num_any += 1;
   z__value_47736500______58_84_47674340______58_840_48029580->any = realloc(z__value_47736500______58_84_47674340______58_840_48029580->any,z__value_47736500______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
z__value_47736500______58_84_47674340______58_840_48029580->any[z__value_47736500______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48025500();

   return behavior;
}

Behavior __48022560;

Behavior make__48022560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48022560 = behavior;
   behavior->owner = (Object)_____58_84_47674340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48025360();

   return behavior;
}

Scope make_____58_84_47674340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_47674340 = scope;
   scope->owner = (Object)_____58_840_48029580;
   scope->name = "__:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_45778240();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47736500();
   scope->inners[1] = makea_47807400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48005260();
   scope->behaviors[1] = make__48022960();
   scope->behaviors[2] = make__48022560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_48029580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_48029580 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_47674340();

   return systemT;
}