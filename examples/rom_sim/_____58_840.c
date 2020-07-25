#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_45216480;

Block __45219140;

void code__45219140() {
   hw_wait(make_delay(10,NS),__45216840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45254320(),addr_45169920___45170460______58_840_45216480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__45216840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45254220(),addr_45169920___45170460______58_840_45216480);
      set_value_pos(pool_state);
   }
}

Block make__45219140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45219140 = block;
   block->owner = (Object)__45216840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45219140;

   return block;
};

Block __45259740;

void code__45259740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45169920___45170460______58_840_45216480->c_value,addr_45163780_my__table_58_840_45166880___45170460______58_840_45216480);
      set_value_pos(pool_state);
   }
}

Block make__45259740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45259740 = block;
   block->owner = (Object)__45256560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45259740;

   return block;
};

Block __45259680;

void code__45259680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->c_value,data_45169780___45170460______58_840_45216480);
      set_value_pos(pool_state);
   }
}

Block make__45259680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45259680 = block;
   block->owner = (Object)__45256340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45259680;

   return block;
};

Value make__45254320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__45254220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Scope __45170460;

SignalI addr_45169920___45170460______58_840_45216480;

SignalI makeaddr_45169920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45169920___45170460______58_840_45216480 = signalI;
   signalI->owner = (Object)__45170460;
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

SignalI data_45169780___45170460______58_840_45216480;

SignalI makedata_45169780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_45169780___45170460______58_840_45216480 = signalI;
   signalI->owner = (Object)__45170460;
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

SystemI my__table_45163260;

SystemI makemy__table_45163260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_45163260 = systemI;
   systemI->owner = (Object)__45170460;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_45166880;

   return systemI;
};

Behavior __45216840;

Behavior make__45216840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45216840 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__45170460;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__45219140();

   return behavior;
}

Behavior __45256560;

Behavior make__45256560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45256560 = behavior;
   behavior->owner = (Object)__45170460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45169920___45170460______58_840_45216480);
   addr_45169920___45170460______58_840_45216480->num_any += 1;
   addr_45169920___45170460______58_840_45216480->any = realloc(addr_45169920___45170460______58_840_45216480->any,addr_45169920___45170460______58_840_45216480->num_any*sizeof(Object));
addr_45169920___45170460______58_840_45216480->any[addr_45169920___45170460______58_840_45216480->num_any-1] = (Object)behavior;
   behavior->block = make__45259740();

   return behavior;
}

Behavior __45256340;

Behavior make__45256340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45256340 = behavior;
   behavior->owner = (Object)__45170460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,data_45163620_my__table_58_840_45166880___45170460______58_840_45216480);
   data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->num_any += 1;
   data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->any = realloc(data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->any,data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->num_any*sizeof(Object));
data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->any[data_45163620_my__table_58_840_45166880___45170460______58_840_45216480->num_any-1] = (Object)behavior;
   behavior->block = make__45259680();

   return behavior;
}

Scope make__45170460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45170460 = scope;
   scope->owner = (Object)_____58_840_45216480;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_45163260();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeaddr_45169920();
   scope->inners[1] = makedata_45169780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45216840();
   scope->behaviors[1] = make__45256560();
   scope->behaviors[2] = make__45256340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_45216480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_45216480 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45170460();

   return systemT;
}