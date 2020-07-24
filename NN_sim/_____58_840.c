#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_43627720;

Block __48454100;

void code__48454100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__43983820(),z_46496100___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
}

Block make__48454100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48454100 = block;
   block->owner = (Object)__43627980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48454100;

   return block;
};

Block __43835280;

void code__43835280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z_46496100___46157400______58_840_43627720->c_value;
            first = value2integer(make__44031680());
            last = value2integer(make__44031640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_46134780_my__table_58_840_46066780___46157400______58_840_43627720);
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
            ref = z_46496100___46157400______58_840_43627720->c_value;
            first = value2integer(make__44030060());
            last = value2integer(make__44030000());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),28),dst);
      set_value_pos(pool_state);
   dst; }),decimal__part_48339960_my__calculator_58_840_48317520___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47889240___46157400______58_840_43627720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_48383920_my__calculator_58_840_48317520___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47986000___46157400______58_840_43627720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_48450120_my__calculator_58_840_48317520___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
}

Block make__43835280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43835280 = block;
   block->owner = (Object)__43902560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43835280;

   return block;
};

Block __43835120;

void code__43835120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_47889240___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47986000___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_47490640___46157400______58_840_43627720);
      set_value_pos(pool_state);
   }
}

Block make__43835120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43835120 = block;
   block->owner = (Object)__43901780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43835120;

   return block;
};

Value make__43983820() {
   static unsigned long long data[] = { 23067520ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44031680() {
   static unsigned long long data[] = { 31ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44031640() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44030060() {
   static unsigned long long data[] = { 23ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__44030000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __46157400;

SignalI z_46496100___46157400______58_840_43627720;

SignalI makez_46496100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z_46496100___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)__46157400;
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

SignalI a_47490640___46157400______58_840_43627720;

SignalI makea_47490640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47490640___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)__46157400;
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

SignalI base_47889240___46157400______58_840_43627720;

SignalI makebase_47889240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47889240___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)__46157400;
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

SignalI next__data_47986000___46157400______58_840_43627720;

SignalI makenext__data_47986000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47986000___46157400______58_840_43627720 = signalI;
   signalI->owner = (Object)__46157400;
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

SystemI my__table_47489920;

SystemI makemy__table_47489920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47489920 = systemI;
   systemI->owner = (Object)__46157400;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_46066780;

   return systemI;
};

SystemI my__calculator_43623280;

SystemI makemy__calculator_43623280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_43623280 = systemI;
   systemI->owner = (Object)__46157400;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_48317520;

   return systemI;
};

Behavior __43627980;

Behavior make__43627980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43627980 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__46157400;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__48454100();

   return behavior;
}

Behavior __43902560;

Behavior make__43902560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43902560 = behavior;
   behavior->owner = (Object)__46157400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z_46496100___46157400______58_840_43627720);
   z_46496100___46157400______58_840_43627720->num_any += 1;
   z_46496100___46157400______58_840_43627720->any = realloc(z_46496100___46157400______58_840_43627720->any,z_46496100___46157400______58_840_43627720->num_any*sizeof(Object));
z_46496100___46157400______58_840_43627720->any[z_46496100___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_47889240___46157400______58_840_43627720);
   base_47889240___46157400______58_840_43627720->num_any += 1;
   base_47889240___46157400______58_840_43627720->any = realloc(base_47889240___46157400______58_840_43627720->any,base_47889240___46157400______58_840_43627720->num_any*sizeof(Object));
base_47889240___46157400______58_840_43627720->any[base_47889240___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_47986000___46157400______58_840_43627720);
   next__data_47986000___46157400______58_840_43627720->num_any += 1;
   next__data_47986000___46157400______58_840_43627720->any = realloc(next__data_47986000___46157400______58_840_43627720->any,next__data_47986000___46157400______58_840_43627720->num_any*sizeof(Object));
next__data_47986000___46157400______58_840_43627720->any[next__data_47986000___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->block = make__43835280();

   return behavior;
}

Behavior __43901780;

Behavior make__43901780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43901780 = behavior;
   behavior->owner = (Object)__46157400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_46452400_my__table_58_840_46066780___46157400______58_840_43627720);
   base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->num_any += 1;
   base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->any = realloc(base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->any,base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->num_any*sizeof(Object));
base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->any[base_46452400_my__table_58_840_46066780___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720);
   next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->num_any += 1;
   next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->any = realloc(next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->any,next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->num_any*sizeof(Object));
next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->any[next__data_47490060_my__table_58_840_46066780___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720);
   estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any += 1;
   estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->any = realloc(estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->any,estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any*sizeof(Object));
estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->any[estimated__value_43623660_my__calculator_58_840_48317520___46157400______58_840_43627720->num_any-1] = (Object)behavior;
   behavior->block = make__43835120();

   return behavior;
}

Scope make__46157400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46157400 = scope;
   scope->owner = (Object)_____58_840_43627720;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__table_47489920();
   scope->systemIs[1] = makemy__calculator_43623280();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez_46496100();
   scope->inners[1] = makea_47490640();
   scope->inners[2] = makebase_47889240();
   scope->inners[3] = makenext__data_47986000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43627980();
   scope->behaviors[1] = make__43902560();
   scope->behaviors[2] = make__43901780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_43627720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_43627720 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46157400();

   return systemT;
}