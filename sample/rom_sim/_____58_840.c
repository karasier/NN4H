#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_42662700;

Block __42646040;

void code__42646040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43376760(),addr_42344640___42346900______58_840_42662700);
      set_value_pos(pool_state);
   }
}

Block make__42646040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42646040 = block;
   block->owner = (Object)__42663160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42646040;

   return block;
};

Block __43172660;

void code__43172660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_42344640___42346900______58_840_42662700->c_value,addr_42591300_my__table_58_840_42486440___42346900______58_840_42662700);
      set_value_pos(pool_state);
   }
}

Block make__43172660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43172660 = block;
   block->owner = (Object)__43346320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43172660;

   return block;
};

Block __43172460;

void code__43172460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->c_value,data_42368000___42346900______58_840_42662700);
      set_value_pos(pool_state);
   }
}

Block make__43172460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43172460 = block;
   block->owner = (Object)__43384580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43172460;

   return block;
};

Value make__43376760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Scope __42346900;

SignalI addr_42344640___42346900______58_840_42662700;

SignalI makeaddr_42344640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_42344640___42346900______58_840_42662700 = signalI;
   signalI->owner = (Object)__42346900;
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

SignalI data_42368000___42346900______58_840_42662700;

SignalI makedata_42368000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   data_42368000___42346900______58_840_42662700 = signalI;
   signalI->owner = (Object)__42346900;
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

SystemI my__table_42613460;

SystemI makemy__table_42613460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_42613460 = systemI;
   systemI->owner = (Object)__42346900;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_42486440;

   return systemI;
};

Behavior __42663160;

Behavior make__42663160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42663160 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__42346900;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__42646040();

   return behavior;
}

Behavior __43346320;

Behavior make__43346320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43346320 = behavior;
   behavior->owner = (Object)__42346900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_42344640___42346900______58_840_42662700);
   addr_42344640___42346900______58_840_42662700->num_any += 1;
   addr_42344640___42346900______58_840_42662700->any = realloc(addr_42344640___42346900______58_840_42662700->any,addr_42344640___42346900______58_840_42662700->num_any*sizeof(Object));
addr_42344640___42346900______58_840_42662700->any[addr_42344640___42346900______58_840_42662700->num_any-1] = (Object)behavior;
   behavior->block = make__43172660();

   return behavior;
}

Behavior __43384580;

Behavior make__43384580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43384580 = behavior;
   behavior->owner = (Object)__42346900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,data_42614680_my__table_58_840_42486440___42346900______58_840_42662700);
   data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->num_any += 1;
   data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->any = realloc(data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->any,data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->num_any*sizeof(Object));
data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->any[data_42614680_my__table_58_840_42486440___42346900______58_840_42662700->num_any-1] = (Object)behavior;
   behavior->block = make__43172460();

   return behavior;
}

Scope make__42346900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __42346900 = scope;
   scope->owner = (Object)_____58_840_42662700;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_42613460();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeaddr_42344640();
   scope->inners[1] = makedata_42368000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42663160();
   scope->behaviors[1] = make__43346320();
   scope->behaviors[2] = make__43384580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_42662700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_42662700 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__42346900();

   return systemT;
}