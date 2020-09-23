#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_48083540;

Block __47280060;

void code__47280060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48098480(),z__value_47935320______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48083780);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48098400(),z__value_47935320______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48083780);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48098340(),z__value_47935320______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48083780);
}

Block make__47280060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47280060 = block;
   block->owner = (Object)__48083780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47280060;

   return block;
};

Block __48078960;

void code__48078960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47935320______58_84_47881340______58_840_48083540->c_value,z__value_48237240_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48078960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48078960 = block;
   block->owner = (Object)__48100980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48078960;

   return block;
};

Block __48078880;

void code__48078880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->c_value,a_47981680______58_84_47881340______58_840_48083540);
      set_value_pos(pool_state);
   }
}

Block make__48078880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48078880 = block;
   block->owner = (Object)__48100360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48078880;

   return block;
};

Value make__48098480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48098400() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48098340() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope _____58_84_47881340;

SignalI z__value_47935320______58_84_47881340______58_840_48083540;

SignalI makez__value_47935320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47935320______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)_____58_84_47881340;
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

SignalI a_47981680______58_84_47881340______58_840_48083540;

SignalI makea_47981680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47981680______58_84_47881340______58_840_48083540 = signalI;
   signalI->owner = (Object)_____58_84_47881340;
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

SystemI tanh_48317160;

SystemI maketanh_48317160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_48317160 = systemI;
   systemI->owner = (Object)_____58_84_47881340;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_48164460;

   return systemI;
};

Behavior __48083780;

Behavior make__48083780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48083780 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_47881340;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47280060();

   return behavior;
}

Behavior __48100980;

Behavior make__48100980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48100980 = behavior;
   behavior->owner = (Object)_____58_84_47881340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47935320______58_84_47881340______58_840_48083540);
   z__value_47935320______58_84_47881340______58_840_48083540->num_any += 1;
   z__value_47935320______58_84_47881340______58_840_48083540->any = realloc(z__value_47935320______58_84_47881340______58_840_48083540->any,z__value_47935320______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
z__value_47935320______58_84_47881340______58_840_48083540->any[z__value_47935320______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48078960();

   return behavior;
}

Behavior __48100360;

Behavior make__48100360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48100360 = behavior;
   behavior->owner = (Object)_____58_84_47881340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540);
   a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any += 1;
   a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any = realloc(a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any,a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any*sizeof(Object));
a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->any[a_48317980_tanh_58_840_48164460______58_84_47881340______58_840_48083540->num_any-1] = (Object)behavior;
   behavior->block = make__48078880();

   return behavior;
}

Scope make_____58_84_47881340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_47881340 = scope;
   scope->owner = (Object)_____58_840_48083540;
   scope->name = "__:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_48317160();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47935320();
   scope->inners[1] = makea_47981680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48083780();
   scope->behaviors[1] = make__48100980();
   scope->behaviors[2] = make__48100360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_48083540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_48083540 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_47881340();

   return systemT;
}