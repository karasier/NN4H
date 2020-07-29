#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_840_47318980;

SignalI z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800;

SignalI makez__value_47317060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)my__translator_58_840_47318980;
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

SignalI addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800;

SignalI makeaddr_47562680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)my__translator_58_840_47318980;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800;

SignalI makeremaining_47562580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)my__translator_58_840_47318980;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_bit(),24);
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

Block __45885980;

void code__45885980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->c_value;
            first = value2integer(make__45918400());
            last = value2integer(make__45918360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->c_value;
            first = value2integer(make__45918080());
            last = value2integer(make__45918000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),24),dst);
      set_value_pos(pool_state);
   dst; }),remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
}

Block make__45885980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45885980 = block;
   block->owner = (Object)__45942600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45885980;

   return block;
};

Value make__45918400() {
   static unsigned long long data[] = { 31ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45918360() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45918080() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45918000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47321040;

Behavior __45942600;

Behavior make__45942600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45942600 = behavior;
   behavior->owner = (Object)__47321040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800);
   z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->num_any += 1;
   z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->any = realloc(z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->any,z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->num_any*sizeof(Object));
z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->any[z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->block = make__45885980();

   return behavior;
}

Scope make__47321040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47321040 = scope;
   scope->owner = (Object)my__translator_58_840_47318980;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45942600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_840_47318980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_840_47318980 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47317060();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_47562680();
   systemT->outputs[1] = makeremaining_47562580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47321040();

   return systemT;
}