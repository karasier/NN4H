#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_44313440;

Block __50021000;

void code__50021000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__44989820(),z__value_47252760___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__44314160);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__44989700(),z__value_47252760___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__44314160);
}

Block make__50021000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50021000 = block;
   block->owner = (Object)__44314160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50021000;

   return block;
};

Block __44954900;

void code__44954900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47252760___47045120______58_840_44313440->c_value,z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
}

Block make__44954900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44954900 = block;
   block->owner = (Object)__44225680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44954900;

   return block;
};

Block __44954660;

void code__44954660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->c_value,a_47391720___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
}

Block make__44954660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44954660 = block;
   block->owner = (Object)__44224880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44954660;

   return block;
};

Value make__44989820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44989700() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47045120;

SignalI z__value_47252760___47045120______58_840_44313440;

SignalI makez__value_47252760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47252760___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)__47045120;
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

SignalI a_47391720___47045120______58_840_44313440;

SignalI makea_47391720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47391720___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)__47045120;
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

SystemI tanh_49432840;

SystemI maketanh_49432840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_49432840 = systemI;
   systemI->owner = (Object)__47045120;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_49240440;

   return systemI;
};

Behavior __44314160;

Behavior make__44314160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44314160 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47045120;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50021000();

   return behavior;
}

Behavior __44225680;

Behavior make__44225680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44225680 = behavior;
   behavior->owner = (Object)__47045120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47252760___47045120______58_840_44313440);
   z__value_47252760___47045120______58_840_44313440->num_any += 1;
   z__value_47252760___47045120______58_840_44313440->any = realloc(z__value_47252760___47045120______58_840_44313440->any,z__value_47252760___47045120______58_840_44313440->num_any*sizeof(Object));
z__value_47252760___47045120______58_840_44313440->any[z__value_47252760___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->block = make__44954900();

   return behavior;
}

Behavior __44224880;

Behavior make__44224880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44224880 = behavior;
   behavior->owner = (Object)__47045120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_49432980_tanh_58_840_49240440___47045120______58_840_44313440);
   a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->any,a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->any[a_49432980_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->block = make__44954660();

   return behavior;
}

Scope make__47045120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47045120 = scope;
   scope->owner = (Object)_____58_840_44313440;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_49432840();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47252760();
   scope->inners[1] = makea_47391720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44314160();
   scope->behaviors[1] = make__44225680();
   scope->behaviors[2] = make__44224880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_44313440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_44313440 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47045120();

   return systemT;
}