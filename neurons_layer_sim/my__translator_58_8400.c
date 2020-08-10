#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_8400_47043460;

SignalI z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makez__value_47038960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__translator_58_8400_47043460;
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

SignalI addr_47038800_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makeaddr_47038800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47038800_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__translator_58_8400_47043460;
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

SignalI remaining_47038720_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020;

SignalI makeremaining_47038720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47038720_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020 = signalI;
   signalI->owner = (Object)my__translator_58_8400_47043460;
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

Block __49013060;

void code__49013060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
            first = value2integer(make__49034860());
            last = value2integer(make__49034840());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_47038800_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020);
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
            ref = z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->c_value;
            first = value2integer(make__49034660());
            last = value2integer(make__49034640());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),remaining_47038720_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020);
      set_value_pos(pool_state);
   }
}

Block make__49013060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49013060 = block;
   block->owner = (Object)__49035960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49013060;

   return block;
};

Value make__49034860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49034840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49034660() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49034640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47025300;

Behavior __49035960;

Behavior make__49035960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49035960 = behavior;
   behavior->owner = (Object)__47025300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020);
   z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any += 1;
   z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->any = realloc(z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->any,z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any*sizeof(Object));
z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->any[z__value_47038960_my__translator_58_8400_47043460___47027460_func1_58_840_47527920___47800340______58_840_47742020->num_any-1] = (Object)behavior;
   behavior->block = make__49013060();

   return behavior;
}

Scope make__47025300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47025300 = scope;
   scope->owner = (Object)my__translator_58_8400_47043460;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49035960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_8400_47043460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_8400_47043460 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47038960();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_47038800();
   systemT->outputs[1] = makeremaining_47038720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47025300();

   return systemT;
}