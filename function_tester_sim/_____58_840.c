#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_50428240;

Block __50077160;

void code__50077160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50422120(),z__value_47312440___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__50428360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50422060(),z__value_47312440___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__50428360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50422000(),z__value_47312440___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__50428360);
}

Block make__50077160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50077160 = block;
   block->owner = (Object)__50428360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50077160;

   return block;
};

Block __50425220;

void code__50425220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47312440___46842460______58_840_50428240->c_value,z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50425220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50425220 = block;
   block->owner = (Object)__50423620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50425220;

   return block;
};

Block __50425160;

void code__50425160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->c_value,a_47562960___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50425160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50425160 = block;
   block->owner = (Object)__50423460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50425160;

   return block;
};

Value make__50422120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50422060() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50422000() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __46842460;

SignalI z__value_47312440___46842460______58_840_50428240;

SignalI makez__value_47312440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47312440___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__46842460;
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

SignalI a_47562960___46842460______58_840_50428240;

SignalI makea_47562960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47562960___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__46842460;
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

SystemI tanh_47364180;

SystemI maketanh_47364180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_47364180 = systemI;
   systemI->owner = (Object)__46842460;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_47310920;

   return systemI;
};

Behavior __50428360;

Behavior make__50428360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50428360 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__46842460;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50077160();

   return behavior;
}

Behavior __50423620;

Behavior make__50423620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50423620 = behavior;
   behavior->owner = (Object)__46842460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47312440___46842460______58_840_50428240);
   z__value_47312440___46842460______58_840_50428240->num_any += 1;
   z__value_47312440___46842460______58_840_50428240->any = realloc(z__value_47312440___46842460______58_840_50428240->any,z__value_47312440___46842460______58_840_50428240->num_any*sizeof(Object));
z__value_47312440___46842460______58_840_50428240->any[z__value_47312440___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50425220();

   return behavior;
}

Behavior __50423460;

Behavior make__50423460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50423460 = behavior;
   behavior->owner = (Object)__46842460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_47364400_tanh_58_840_47310920___46842460______58_840_50428240);
   a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->any,a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->any[a_47364400_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50425160();

   return behavior;
}

Scope make__46842460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46842460 = scope;
   scope->owner = (Object)_____58_840_50428240;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_47364180();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47312440();
   scope->inners[1] = makea_47562960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50428360();
   scope->behaviors[1] = make__50423620();
   scope->behaviors[2] = make__50423460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_50428240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_50428240 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46842460();

   return systemT;
}