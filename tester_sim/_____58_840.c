#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_43211700;

Block __50216660;

void code__50216660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43323280(),z__value_42273840___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__43173260);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43323120(),z__value_42273840___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__43173260);
}

Block make__50216660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50216660 = block;
   block->owner = (Object)__43173260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50216660;

   return block;
};

Block __43221360;

void code__43221360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_42273840___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
}

Block make__43221360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43221360 = block;
   block->owner = (Object)__43289500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43221360;

   return block;
};

Block __43221260;

void code__43221260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_43475620___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
}

Block make__43221260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43221260 = block;
   block->owner = (Object)__43288900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43221260;

   return block;
};

Value make__43323280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43323120() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47765300;

SignalI z__value_42273840___47765300______58_840_43211700;

SignalI makez__value_42273840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_42273840___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)__47765300;
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

SignalI a_43475620___47765300______58_840_43211700;

SignalI makea_43475620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_43475620___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)__47765300;
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

SystemI tanh_49720040;

SystemI maketanh_49720040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_49720040 = systemI;
   systemI->owner = (Object)__47765300;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_49517820;

   return systemI;
};

Behavior __43173260;

Behavior make__43173260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43173260 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47765300;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50216660();

   return behavior;
}

Behavior __43289500;

Behavior make__43289500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43289500 = behavior;
   behavior->owner = (Object)__47765300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_42273840___47765300______58_840_43211700);
   z__value_42273840___47765300______58_840_43211700->num_any += 1;
   z__value_42273840___47765300______58_840_43211700->any = realloc(z__value_42273840___47765300______58_840_43211700->any,z__value_42273840___47765300______58_840_43211700->num_any*sizeof(Object));
z__value_42273840___47765300______58_840_43211700->any[z__value_42273840___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->block = make__43221360();

   return behavior;
}

Behavior __43288900;

Behavior make__43288900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43288900 = behavior;
   behavior->owner = (Object)__47765300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_49720180_tanh_58_840_49517820___47765300______58_840_43211700);
   a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->any,a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->any[a_49720180_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->block = make__43221260();

   return behavior;
}

Scope make__47765300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47765300 = scope;
   scope->owner = (Object)_____58_840_43211700;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_49720040();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_42273840();
   scope->inners[1] = makea_43475620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43173260();
   scope->behaviors[1] = make__43289500();
   scope->behaviors[2] = make__43288900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_43211700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_43211700 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47765300();

   return systemT;
}