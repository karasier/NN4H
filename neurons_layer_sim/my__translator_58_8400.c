#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_8400_48163280;

SignalI z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makez__value_48160860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__translator_58_8400_48163280;
   signalI->name = "z_value";
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

SignalI addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makeaddr_48185300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__translator_58_8400_48163280;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),4);
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

SignalI remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makeremaining_48185220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)my__translator_58_8400_48163280;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_bit(),4);
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

Block __44858740;

void code__44858740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
            first = value2integer(make__45078100());
            last = value2integer(make__45077940());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700);
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
            ref = z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
            first = value2integer(make__45077600());
            last = value2integer(make__45077580());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__44858740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44858740 = block;
   block->owner = (Object)__44884400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44858740;

   return block;
};

Value make__45078100() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45077940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45077600() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45077580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48166080;

Behavior __44884400;

Behavior make__44884400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44884400 = behavior;
   behavior->owner = (Object)__48166080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__44858740();

   return behavior;
}

Scope make__48166080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48166080 = scope;
   scope->owner = (Object)my__translator_58_8400_48163280;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44884400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_8400_48163280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_8400_48163280 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48160860();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_48185300();
   systemT->outputs[1] = makeremaining_48185220();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48166080();

   return systemT;
}