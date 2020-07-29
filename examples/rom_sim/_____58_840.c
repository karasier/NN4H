#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_43974200;

Block __43951560;

void code__43951560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45114120(),addr_43794900___43796800______58_840_43974200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__43974380);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45114060(),addr_43794900___43796800______58_840_43974200);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__43974380);
}

Block make__43951560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43951560 = block;
   block->owner = (Object)__43974380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43951560;

   return block;
};

Block __44608240;

void code__44608240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_43794900___43796800______58_840_43974200->c_value,addr_43957400_my__table_58_840_42884460___43796800______58_840_43974200);
      set_value_pos(pool_state);
   }
}

Block make__44608240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44608240 = block;
   block->owner = (Object)__45116220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44608240;

   return block;
};

Block __44607820;

void code__44607820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->c_value,data_43843500___43796800______58_840_43974200);
      set_value_pos(pool_state);
   }
}

Block make__44607820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44607820 = block;
   block->owner = (Object)__45115960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44607820;

   return block;
};

Value make__45114120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__45114060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Scope __43796800;

SignalI addr_43794900___43796800______58_840_43974200;

SignalI makeaddr_43794900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_43794900___43796800______58_840_43974200 = signalI;
   signalI->owner = (Object)__43796800;
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

SignalI data_43843500___43796800______58_840_43974200;

SignalI makedata_43843500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_43843500___43796800______58_840_43974200 = signalI;
   signalI->owner = (Object)__43796800;
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

SystemI my__table_43956700;

SystemI makemy__table_43956700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_43956700 = systemI;
   systemI->owner = (Object)__43796800;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_42884460;

   return systemI;
};

Behavior __43974380;

Behavior make__43974380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43974380 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__43796800;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__43951560();

   return behavior;
}

Behavior __45116220;

Behavior make__45116220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45116220 = behavior;
   behavior->owner = (Object)__43796800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_43794900___43796800______58_840_43974200);
   addr_43794900___43796800______58_840_43974200->num_any += 1;
   addr_43794900___43796800______58_840_43974200->any = realloc(addr_43794900___43796800______58_840_43974200->any,addr_43794900___43796800______58_840_43974200->num_any*sizeof(Object));
addr_43794900___43796800______58_840_43974200->any[addr_43794900___43796800______58_840_43974200->num_any-1] = (Object)behavior;
   behavior->block = make__44608240();

   return behavior;
}

Behavior __45115960;

Behavior make__45115960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45115960 = behavior;
   behavior->owner = (Object)__43796800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,data_43957040_my__table_58_840_42884460___43796800______58_840_43974200);
   data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->num_any += 1;
   data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->any = realloc(data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->any,data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->num_any*sizeof(Object));
data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->any[data_43957040_my__table_58_840_42884460___43796800______58_840_43974200->num_any-1] = (Object)behavior;
   behavior->block = make__44607820();

   return behavior;
}

Scope make__43796800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43796800 = scope;
   scope->owner = (Object)_____58_840_43974200;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_43956700();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeaddr_43794900();
   scope->inners[1] = makedata_43843500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43974380();
   scope->behaviors[1] = make__45116220();
   scope->behaviors[2] = make__45115960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_43974200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_43974200 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__43796800();

   return systemT;
}