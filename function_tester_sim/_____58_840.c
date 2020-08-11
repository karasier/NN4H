#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_46825860;

Block __46345840;

void code__46345840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47026980(),z__value_46274900___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__46825980);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47026500(),z__value_46274900___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__46825980);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47026080(),z__value_46274900___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__46825980);
}

Block make__46345840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46345840 = block;
   block->owner = (Object)__46825980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46345840;

   return block;
};

Block __46845920;

void code__46845920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_46274900___45255200______58_840_46825860->c_value,z__value_47685760_tanh_58_840_47028240___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__46845920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46845920 = block;
   block->owner = (Object)__46843740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46845920;

   return block;
};

Block __46845860;

void code__46845860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->c_value,a_46359700___45255200______58_840_46825860);
      set_value_pos(pool_state);
   }
}

Block make__46845860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __46845860 = block;
   block->owner = (Object)__46843560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__46845860;

   return block;
};

Value make__47026980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47026500() {
   static unsigned long long data[] = { 51ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47026080() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __45255200;

SignalI z__value_46274900___45255200______58_840_46825860;

SignalI makez__value_46274900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_46274900___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__45255200;
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

SignalI a_46359700___45255200______58_840_46825860;

SignalI makea_46359700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_46359700___45255200______58_840_46825860 = signalI;
   signalI->owner = (Object)__45255200;
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

SystemI tanh_47446360;

SystemI maketanh_47446360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_47446360 = systemI;
   systemI->owner = (Object)__45255200;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_47028240;

   return systemI;
};

Behavior __46825980;

Behavior make__46825980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46825980 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__45255200;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__46345840();

   return behavior;
}

Behavior __46843740;

Behavior make__46843740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46843740 = behavior;
   behavior->owner = (Object)__45255200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_46274900___45255200______58_840_46825860);
   z__value_46274900___45255200______58_840_46825860->num_any += 1;
   z__value_46274900___45255200______58_840_46825860->any = realloc(z__value_46274900___45255200______58_840_46825860->any,z__value_46274900___45255200______58_840_46825860->num_any*sizeof(Object));
z__value_46274900___45255200______58_840_46825860->any[z__value_46274900___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__46845920();

   return behavior;
}

Behavior __46843560;

Behavior make__46843560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46843560 = behavior;
   behavior->owner = (Object)__45255200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_47446560_tanh_58_840_47028240___45255200______58_840_46825860);
   a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->num_any += 1;
   a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->any = realloc(a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->any,a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->num_any*sizeof(Object));
a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->any[a_47446560_tanh_58_840_47028240___45255200______58_840_46825860->num_any-1] = (Object)behavior;
   behavior->block = make__46845860();

   return behavior;
}

Scope make__45255200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45255200 = scope;
   scope->owner = (Object)_____58_840_46825860;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_47446360();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_46274900();
   scope->inners[1] = makea_46359700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46825980();
   scope->behaviors[1] = make__46843740();
   scope->behaviors[2] = make__46843560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_46825860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_46825860 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45255200();

   return systemT;
}