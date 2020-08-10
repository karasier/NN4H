#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_46688540;

Block __46331520;

void code__46331520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47412620(),z__value_48244660___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__46688800);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47412500(),z__value_48244660___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__46688800);
}

Block make__46331520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46331520 = block;
   block->owner = (Object)__46688800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46331520;

   return block;
};

Block __46778360;

void code__46778360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48244660___48198920______58_840_46688540->c_value,z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__46778360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46778360 = block;
   block->owner = (Object)__47414280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46778360;

   return block;
};

Block __46778260;

void code__46778260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->c_value,a_48315560___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__46778260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46778260 = block;
   block->owner = (Object)__47414100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46778260;

   return block;
};

Value make__47412620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47412500() {
   static unsigned long long data[] = { 51ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __48198920;

SignalI z__value_48244660___48198920______58_840_46688540;

SignalI makez__value_48244660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48244660___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48198920;
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

SignalI a_48315560___48198920______58_840_46688540;

SignalI makea_48315560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48315560___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48198920;
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

SystemI tanh_48593400;

SystemI maketanh_48593400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_48593400 = systemI;
   systemI->owner = (Object)__48198920;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_48442500;

   return systemI;
};

Behavior __46688800;

Behavior make__46688800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46688800 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__48198920;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__46331520();

   return behavior;
}

Behavior __47414280;

Behavior make__47414280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47414280 = behavior;
   behavior->owner = (Object)__48198920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48244660___48198920______58_840_46688540);
   z__value_48244660___48198920______58_840_46688540->num_any += 1;
   z__value_48244660___48198920______58_840_46688540->any = realloc(z__value_48244660___48198920______58_840_46688540->any,z__value_48244660___48198920______58_840_46688540->num_any*sizeof(Object));
z__value_48244660___48198920______58_840_46688540->any[z__value_48244660___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__46778360();

   return behavior;
}

Behavior __47414100;

Behavior make__47414100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47414100 = behavior;
   behavior->owner = (Object)__48198920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_48593600_tanh_58_840_48442500___48198920______58_840_46688540);
   a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->any,a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->any[a_48593600_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__46778260();

   return behavior;
}

Scope make__48198920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48198920 = scope;
   scope->owner = (Object)_____58_840_46688540;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_48593400();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_48244660();
   scope->inners[1] = makea_48315560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46688800();
   scope->behaviors[1] = make__47414280();
   scope->behaviors[2] = make__47414100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_46688540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_46688540 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48198920();

   return systemT;
}