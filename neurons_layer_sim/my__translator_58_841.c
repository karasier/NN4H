#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_841_45767600;

SignalI z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makez__value_45762760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__translator_58_841_45767600;
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

SignalI addr_45762620_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makeaddr_45762620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45762620_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__translator_58_841_45767600;
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

SignalI remaining_45761900_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020;

SignalI makeremaining_45761900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45761900_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__translator_58_841_45767600;
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

Block __48987100;

void code__48987100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
            first = value2integer(make__48984360());
            last = value2integer(make__48984340());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_45762620_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020);
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
            ref = z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->c_value;
            first = value2integer(make__48984160());
            last = value2integer(make__48984140());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),remaining_45761900_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__48987100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48987100 = block;
   block->owner = (Object)__48985460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48987100;

   return block;
};

Value make__48984360() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48984340() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48984160() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48984140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45754020;

Behavior __48985460;

Behavior make__48985460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48985460 = behavior;
   behavior->owner = (Object)__45754020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020);
   z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any += 1;
   z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->any = realloc(z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->any,z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any*sizeof(Object));
z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->any[z__value_45762760_my__translator_58_841_45767600___45757240_func0_58_840_46016820___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->block = make__48987100();

   return behavior;
}

Scope make__45754020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45754020 = scope;
   scope->owner = (Object)my__translator_58_841_45767600;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48985460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_841_45767600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_841_45767600 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_45762760();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_45762620();
   systemT->outputs[1] = makeremaining_45761900();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45754020();

   return systemT;
}