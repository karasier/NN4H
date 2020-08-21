#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_51489420;

Block __51151900;

void code__51151900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51523620(),z__value_47344120___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__51489540);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51523560(),z__value_47344120___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__51489540);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51523500(),z__value_47344120___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__51489540);
}

Block make__51151900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51151900 = block;
   block->owner = (Object)__51489540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51151900;

   return block;
};

Block __51527020;

void code__51527020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47344120___47298340______58_840_51489420->c_value,z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51527020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51527020 = block;
   block->owner = (Object)__51525260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51527020;

   return block;
};

Block __51526960;

void code__51526960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->c_value,a_47431420___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51526960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526960 = block;
   block->owner = (Object)__51525060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526960;

   return block;
};

Value make__51523620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51523560() {
   static unsigned long long data[] = { 112ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51523500() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Scope __47298340;

SignalI z__value_47344120___47298340______58_840_51489420;

SignalI makez__value_47344120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47344120___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47298340;
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

SignalI a_47431420___47298340______58_840_51489420;

SignalI makea_47431420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47431420___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47298340;
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

SystemI tanh_50564020;

SystemI maketanh_50564020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   tanh_50564020 = systemI;
   systemI->owner = (Object)__47298340;
   systemI->name = "tanh";
   systemI->system = tanh_58_840_47747000;

   return systemI;
};

Behavior __51489540;

Behavior make__51489540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51489540 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47298340;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__51151900();

   return behavior;
}

Behavior __51525260;

Behavior make__51525260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51525260 = behavior;
   behavior->owner = (Object)__47298340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47344120___47298340______58_840_51489420);
   z__value_47344120___47298340______58_840_51489420->num_any += 1;
   z__value_47344120___47298340______58_840_51489420->any = realloc(z__value_47344120___47298340______58_840_51489420->any,z__value_47344120___47298340______58_840_51489420->num_any*sizeof(Object));
z__value_47344120___47298340______58_840_51489420->any[z__value_47344120___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51527020();

   return behavior;
}

Behavior __51525060;

Behavior make__51525060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51525060 = behavior;
   behavior->owner = (Object)__47298340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,a_50564200_tanh_58_840_47747000___47298340______58_840_51489420);
   a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->any,a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->any[a_50564200_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51526960();

   return behavior;
}

Scope make__47298340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47298340 = scope;
   scope->owner = (Object)_____58_840_51489420;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = maketanh_50564020();
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47344120();
   scope->inners[1] = makea_47431420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51489540();
   scope->behaviors[1] = make__51525260();
   scope->behaviors[2] = make__51525060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_51489420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_51489420 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47298340();

   return systemT;
}