#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_42968340;

Block __42969500;

void code__42969500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43886360(),addr_43086760___43087600______58_840_42968340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__42968500);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43886240(),addr_43086760___43087600______58_840_42968340);
      set_value_pos(pool_state);
   }
}

Block make__42969500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42969500 = block;
   block->owner = (Object)__42968500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42969500;

   return block;
};

Block __43890280;

void code__43890280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_43086760___43087600______58_840_42968340->c_value,addr_42970920_my__table_58_840_42973540___43087600______58_840_42968340);
      set_value_pos(pool_state);
   }
}

Block make__43890280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43890280 = block;
   block->owner = (Object)__43888280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43890280;

   return block;
};

Block __43890220;

void code__43890220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->c_value,data_43086640___43087600______58_840_42968340);
      set_value_pos(pool_state);
   }
}

Block make__43890220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43890220 = block;
   block->owner = (Object)__43888060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43890220;

   return block;
};

Value make__43886360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__43886240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Scope __43087600;

SignalI addr_43086760___43087600______58_840_42968340;

SignalI makeaddr_43086760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_43086760___43087600______58_840_42968340 = signalI;
   signalI->owner = (Object)__43087600;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SignalI data_43086640___43087600______58_840_42968340;

SignalI makedata_43086640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_43086640___43087600______58_840_42968340 = signalI;
   signalI->owner = (Object)__43087600;
   signalI->name = "data";
   signalI->type = get_type_vector(get_type_bit(),2);
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

SystemI my__table_42970560;

SystemI makemy__table_42970560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_42970560 = systemI;
   systemI->owner = (Object)__43087600;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_42973540;

   return systemI;
};

Behavior __42968500;

Behavior make__42968500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42968500 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__43087600;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__42969500();

   return behavior;
}

Behavior __43888280;

Behavior make__43888280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43888280 = behavior;
   behavior->owner = (Object)__43087600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_43086760___43087600______58_840_42968340);
   addr_43086760___43087600______58_840_42968340->num_any += 1;
   addr_43086760___43087600______58_840_42968340->any = realloc(addr_43086760___43087600______58_840_42968340->any,addr_43086760___43087600______58_840_42968340->num_any*sizeof(Object));
addr_43086760___43087600______58_840_42968340->any[addr_43086760___43087600______58_840_42968340->num_any-1] = (Object)behavior;
   behavior->block = make__43890280();

   return behavior;
}

Behavior __43888060;

Behavior make__43888060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43888060 = behavior;
   behavior->owner = (Object)__43087600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,data_42970740_my__table_58_840_42973540___43087600______58_840_42968340);
   data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->num_any += 1;
   data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->any = realloc(data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->any,data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->num_any*sizeof(Object));
data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->any[data_42970740_my__table_58_840_42973540___43087600______58_840_42968340->num_any-1] = (Object)behavior;
   behavior->block = make__43890220();

   return behavior;
}

Scope make__43087600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43087600 = scope;
   scope->owner = (Object)_____58_840_42968340;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_42970560();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeaddr_43086760();
   scope->inners[1] = makedata_43086640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42968500();
   scope->behaviors[1] = make__43888280();
   scope->behaviors[2] = make__43888060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_42968340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_42968340 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__43087600();

   return systemT;
}