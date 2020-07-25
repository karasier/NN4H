#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_43571960;

Block __41616500;

void code__41616500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45115100(),z_39485500___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
}

Block make__41616500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41616500 = block;
   block->owner = (Object)__43572200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41616500;

   return block;
};

Block __43636220;

void code__43636220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z_39485500___47904480______58_840_43571960->c_value;
            first = value2integer(make__45114940());
            last = value2integer(make__45114820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_45889140_my__table_58_840_45873540___47904480______58_840_43571960);
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
            ref = z_39485500___47904480______58_840_43571960->c_value;
            first = value2integer(make__45114480());
            last = value2integer(make__45114460());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),28),dst);
      set_value_pos(pool_state);
   dst; }),decimal__part_45550520_my__calculator_58_840_45426340___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_45188760___47904480______58_840_43571960->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_45805760_my__calculator_58_840_45426340___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_45621980___47904480______58_840_43571960->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47529040_my__calculator_58_840_45426340___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
}

Block make__43636220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43636220 = block;
   block->owner = (Object)__45120240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43636220;

   return block;
};

Block __43636080;

void code__43636080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_45188760___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45621980___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_43369500___47904480______58_840_43571960);
      set_value_pos(pool_state);
   }
}

Block make__43636080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43636080 = block;
   block->owner = (Object)__45119900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43636080;

   return block;
};

Value make__45115100() {
   static unsigned long long data[] = { 23067520ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45114940() {
   static unsigned long long data[] = { 31ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45114820() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45114480() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45114460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47904480;

SignalI z_39485500___47904480______58_840_43571960;

SignalI makez_39485500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z_39485500___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)__47904480;
   signalI->name = "z";
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

SignalI a_43369500___47904480______58_840_43571960;

SignalI makea_43369500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_43369500___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)__47904480;
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

SignalI base_45188760___47904480______58_840_43571960;

SignalI makebase_45188760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_45188760___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)__47904480;
   signalI->name = "base";
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

SignalI next__data_45621980___47904480______58_840_43571960;

SignalI makenext__data_45621980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45621980___47904480______58_840_43571960 = signalI;
   signalI->owner = (Object)__47904480;
   signalI->name = "next_data";
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

SystemI my__table_46961480;

SystemI makemy__table_46961480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_46961480 = systemI;
   systemI->owner = (Object)__47904480;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_45873540;

   return systemI;
};

SystemI my__calculator_46956800;

SystemI makemy__calculator_46956800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_46956800 = systemI;
   systemI->owner = (Object)__47904480;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_45426340;

   return systemI;
};

Behavior __43572200;

Behavior make__43572200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43572200 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47904480;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__41616500();

   return behavior;
}

Behavior __45120240;

Behavior make__45120240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45120240 = behavior;
   behavior->owner = (Object)__47904480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z_39485500___47904480______58_840_43571960);
   z_39485500___47904480______58_840_43571960->num_any += 1;
   z_39485500___47904480______58_840_43571960->any = realloc(z_39485500___47904480______58_840_43571960->any,z_39485500___47904480______58_840_43571960->num_any*sizeof(Object));
z_39485500___47904480______58_840_43571960->any[z_39485500___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_45188760___47904480______58_840_43571960);
   base_45188760___47904480______58_840_43571960->num_any += 1;
   base_45188760___47904480______58_840_43571960->any = realloc(base_45188760___47904480______58_840_43571960->any,base_45188760___47904480______58_840_43571960->num_any*sizeof(Object));
base_45188760___47904480______58_840_43571960->any[base_45188760___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_45621980___47904480______58_840_43571960);
   next__data_45621980___47904480______58_840_43571960->num_any += 1;
   next__data_45621980___47904480______58_840_43571960->any = realloc(next__data_45621980___47904480______58_840_43571960->any,next__data_45621980___47904480______58_840_43571960->num_any*sizeof(Object));
next__data_45621980___47904480______58_840_43571960->any[next__data_45621980___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->block = make__43636220();

   return behavior;
}

Behavior __45119900;

Behavior make__45119900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45119900 = behavior;
   behavior->owner = (Object)__47904480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47528040_my__table_58_840_45873540___47904480______58_840_43571960);
   base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->num_any += 1;
   base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->any = realloc(base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->any,base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->num_any*sizeof(Object));
base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->any[base_47528040_my__table_58_840_45873540___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960);
   next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->num_any += 1;
   next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->any = realloc(next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->any,next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->num_any*sizeof(Object));
next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->any[next__data_46961880_my__table_58_840_45873540___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960);
   estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any += 1;
   estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->any = realloc(estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->any,estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any*sizeof(Object));
estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->any[estimated__value_46957240_my__calculator_58_840_45426340___47904480______58_840_43571960->num_any-1] = (Object)behavior;
   behavior->block = make__43636080();

   return behavior;
}

Scope make__47904480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47904480 = scope;
   scope->owner = (Object)_____58_840_43571960;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_46961480();
   scope->systemIs[1] = makemy__calculator_46956800();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez_39485500();
   scope->inners[1] = makea_43369500();
   scope->inners[2] = makebase_45188760();
   scope->inners[3] = makenext__data_45621980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43572200();
   scope->behaviors[1] = make__45120240();
   scope->behaviors[2] = make__45119900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_43571960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_43571960 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47904480();

   return systemT;
}