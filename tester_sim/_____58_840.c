#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_50117360;

Block __49643420;

void code__49643420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50110940(),z__value_46335420___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__50117480);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50110880(),z__value_46335420___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__50117480);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50110820(),z__value_46335420___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__50117480);
}

Block make__49643420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49643420 = block;
   block->owner = (Object)__50117480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49643420;

   return block;
};

Block __50114060;

void code__50114060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_46335420___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
}

Block make__50114060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50114060 = block;
   block->owner = (Object)__50112460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50114060;

   return block;
};

Block __50114000;

void code__50114000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_46919980___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
}

Block make__50114000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50114000 = block;
   block->owner = (Object)__50112300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50114000;

   return block;
};

Value make__50110940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50110880() {
   static unsigned long long data[] = { 23067520ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50110820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45591340;

SignalI z__value_46335420___45591340______58_840_50117360;

SignalI makez__value_46335420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_46335420___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)__45591340;
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

SignalI a_46919980___45591340______58_840_50117360;

SignalI makea_46919980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_46919980___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)__45591340;
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

SystemI tanh_47717440;

SystemI maketanh_47717440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_47717440 = systemI;
   systemI->owner = (Object)__45591340;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_47423860;

   return systemI;
};

Behavior __50117480;

Behavior make__50117480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50117480 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__45591340;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__49643420();

   return behavior;
}

Behavior __50112460;

Behavior make__50112460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50112460 = behavior;
   behavior->owner = (Object)__45591340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_46335420___45591340______58_840_50117360);
   z__value_46335420___45591340______58_840_50117360->num_any += 1;
   z__value_46335420___45591340______58_840_50117360->any = realloc(z__value_46335420___45591340______58_840_50117360->any,z__value_46335420___45591340______58_840_50117360->num_any*sizeof(Object));
z__value_46335420___45591340______58_840_50117360->any[z__value_46335420___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->block = make__50114060();

   return behavior;
}

Behavior __50112300;

Behavior make__50112300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50112300 = behavior;
   behavior->owner = (Object)__45591340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_47717820_tanh_58_840_47423860___45591340______58_840_50117360);
   a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->any,a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->any[a_47717820_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->block = make__50114000();

   return behavior;
}

Scope make__45591340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45591340 = scope;
   scope->owner = (Object)_____58_840_50117360;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_47717440();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_46335420();
   scope->inners[1] = makea_46919980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50117480();
   scope->behaviors[1] = make__50112460();
   scope->behaviors[2] = make__50112300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_50117360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_50117360 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45591340();

   return systemT;
}