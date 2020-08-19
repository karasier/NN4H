#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_42212840;

Block __47778240;

void code__47778240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43388280(),z__value_47845140___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__42190240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43386920(),z__value_47845140___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__42190240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43386300(),z__value_47845140___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__42190240);
}

Block make__47778240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47778240 = block;
   block->owner = (Object)__42190240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47778240;

   return block;
};

Block __42479700;

void code__42479700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47845140___47799340______58_840_42212840->c_value,z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__42479700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42479700 = block;
   block->owner = (Object)__43194280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42479700;

   return block;
};

Block __42479400;

void code__42479400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->c_value,a_47890880___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__42479400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42479400 = block;
   block->owner = (Object)__43191920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42479400;

   return block;
};

Value make__43388280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43386920() {
   static unsigned long long data[] = { 176ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__43386300() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __47799340;

SignalI z__value_47845140___47799340______58_840_42212840;

SignalI makez__value_47845140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47845140___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__47799340;
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

SignalI a_47890880___47799340______58_840_42212840;

SignalI makea_47890880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47890880___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__47799340;
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

SystemI tanh_47166240;

SystemI maketanh_47166240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_47166240 = systemI;
   systemI->owner = (Object)__47799340;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_45478980;

   return systemI;
};

Behavior __42190240;

Behavior make__42190240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42190240 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47799340;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47778240();

   return behavior;
}

Behavior __43194280;

Behavior make__43194280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43194280 = behavior;
   behavior->owner = (Object)__47799340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47845140___47799340______58_840_42212840);
   z__value_47845140___47799340______58_840_42212840->num_any += 1;
   z__value_47845140___47799340______58_840_42212840->any = realloc(z__value_47845140___47799340______58_840_42212840->any,z__value_47845140___47799340______58_840_42212840->num_any*sizeof(Object));
z__value_47845140___47799340______58_840_42212840->any[z__value_47845140___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__42479700();

   return behavior;
}

Behavior __43191920;

Behavior make__43191920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43191920 = behavior;
   behavior->owner = (Object)__47799340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_47166400_tanh_58_840_45478980___47799340______58_840_42212840);
   a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->any,a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->any[a_47166400_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__42479400();

   return behavior;
}

Scope make__47799340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47799340 = scope;
   scope->owner = (Object)_____58_840_42212840;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_47166240();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47845140();
   scope->inners[1] = makea_47890880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42190240();
   scope->behaviors[1] = make__43194280();
   scope->behaviors[2] = make__43191920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_42212840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_42212840 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47799340();

   return systemT;
}