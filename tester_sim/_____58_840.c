#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_45534800;

Block __48069580;

void code__48069580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45855440(),z__value_46031040___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__45535360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__45855300(),z__value_46031040___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__45535360);
}

Block make__48069580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48069580 = block;
   block->owner = (Object)__45535360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48069580;

   return block;
};

Block __45569500;

void code__45569500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_46031040___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_47317060_my__translator_58_840_47318980___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47321440___45758540______58_840_45534800->c_value,addr_47257900_my__table_58_840_47235380___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47321340___45758540______58_840_45534800->c_value,remaining_43438000_my__calculator_58_840_43287620___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_46031040___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_45400240_my__calculator_58_840_43287620___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47275520___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_45918880_my__calculator_58_840_43287620___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47321520___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47191620_my__calculator_58_840_43287620___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = addr_47321440___45758540______58_840_45534800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__45890600();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_47255180_my__calculator_58_840_43287620___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
}

Block make__45569500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45569500 = block;
   block->owner = (Object)__45754960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45569500;

   return block;
};

Block __45569360;

void code__45569360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->c_value,addr_47321440___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->c_value,remaining_47321340___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_47275520___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47321520___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_47204980___45758540______58_840_45534800);
      set_value_pos(pool_state);
   }
}

Block make__45569360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45569360 = block;
   block->owner = (Object)__45753740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45569360;

   return block;
};

Value make__45855440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45855300() {
   static unsigned long long data[] = { 23067520ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45890600() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45758540;

SignalI z__value_46031040___45758540______58_840_45534800;

SignalI makez__value_46031040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_46031040___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)__45758540;
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

SignalI a_47204980___45758540______58_840_45534800;

SignalI makea_47204980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47204980___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)__45758540;
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

SignalI base_47275520___45758540______58_840_45534800;

SignalI makebase_47275520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47275520___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)__45758540;
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

SignalI next__data_47321520___45758540______58_840_45534800;

SignalI makenext__data_47321520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47321520___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)__45758540;
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

SignalI addr_47321440___45758540______58_840_45534800;

SignalI makeaddr_47321440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47321440___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)__45758540;
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

SignalI remaining_47321340___45758540______58_840_45534800;

SignalI makeremaining_47321340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47321340___45758540______58_840_45534800 = signalI;
   signalI->owner = (Object)__45758540;
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

SystemI my__translator_47562440;

SystemI makemy__translator_47562440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_47562440 = systemI;
   systemI->owner = (Object)__45758540;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_47318980;

   return systemI;
};

SystemI my__table_47587440;

SystemI makemy__table_47587440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47587440 = systemI;
   systemI->owner = (Object)__45758540;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47235380;

   return systemI;
};

SystemI my__calculator_47319440;

SystemI makemy__calculator_47319440() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_47319440 = systemI;
   systemI->owner = (Object)__45758540;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_43287620;

   return systemI;
};

Behavior __45535360;

Behavior make__45535360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45535360 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__45758540;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__48069580();

   return behavior;
}

Behavior __45754960;

Behavior make__45754960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45754960 = behavior;
   behavior->owner = (Object)__45758540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_46031040___45758540______58_840_45534800);
   z__value_46031040___45758540______58_840_45534800->num_any += 1;
   z__value_46031040___45758540______58_840_45534800->any = realloc(z__value_46031040___45758540______58_840_45534800->any,z__value_46031040___45758540______58_840_45534800->num_any*sizeof(Object));
z__value_46031040___45758540______58_840_45534800->any[z__value_46031040___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_47321440___45758540______58_840_45534800);
   addr_47321440___45758540______58_840_45534800->num_any += 1;
   addr_47321440___45758540______58_840_45534800->any = realloc(addr_47321440___45758540______58_840_45534800->any,addr_47321440___45758540______58_840_45534800->num_any*sizeof(Object));
addr_47321440___45758540______58_840_45534800->any[addr_47321440___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47321340___45758540______58_840_45534800);
   remaining_47321340___45758540______58_840_45534800->num_any += 1;
   remaining_47321340___45758540______58_840_45534800->any = realloc(remaining_47321340___45758540______58_840_45534800->any,remaining_47321340___45758540______58_840_45534800->num_any*sizeof(Object));
remaining_47321340___45758540______58_840_45534800->any[remaining_47321340___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_47275520___45758540______58_840_45534800);
   base_47275520___45758540______58_840_45534800->num_any += 1;
   base_47275520___45758540______58_840_45534800->any = realloc(base_47275520___45758540______58_840_45534800->any,base_47275520___45758540______58_840_45534800->num_any*sizeof(Object));
base_47275520___45758540______58_840_45534800->any[base_47275520___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_47321520___45758540______58_840_45534800);
   next__data_47321520___45758540______58_840_45534800->num_any += 1;
   next__data_47321520___45758540______58_840_45534800->any = realloc(next__data_47321520___45758540______58_840_45534800->any,next__data_47321520___45758540______58_840_45534800->num_any*sizeof(Object));
next__data_47321520___45758540______58_840_45534800->any[next__data_47321520___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->block = make__45569500();

   return behavior;
}

Behavior __45753740;

Behavior make__45753740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45753740 = behavior;
   behavior->owner = (Object)__45758540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800);
   addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->num_any += 1;
   addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->any = realloc(addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->any,addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->num_any*sizeof(Object));
addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->any[addr_47562680_my__translator_58_840_47318980___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800);
   remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->num_any += 1;
   remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->any = realloc(remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->any,remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->num_any*sizeof(Object));
remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->any[remaining_47562580_my__translator_58_840_47318980___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47302280_my__table_58_840_47235380___45758540______58_840_45534800);
   base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->num_any += 1;
   base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->any = realloc(base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->any,base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->num_any*sizeof(Object));
base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->any[base_47302280_my__table_58_840_47235380___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800);
   next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->num_any += 1;
   next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->any = realloc(next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->any,next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->num_any*sizeof(Object));
next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->any[next__data_47587660_my__table_58_840_47235380___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800);
   estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->num_any += 1;
   estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->any = realloc(estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->any,estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->num_any*sizeof(Object));
estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->any[estimated__value_47319900_my__calculator_58_840_43287620___45758540______58_840_45534800->num_any-1] = (Object)behavior;
   behavior->block = make__45569360();

   return behavior;
}

Scope make__45758540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45758540 = scope;
   scope->owner = (Object)_____58_840_45534800;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_47562440();
   scope->systemIs[1] = makemy__table_47587440();
   scope->systemIs[2] = makemy__calculator_47319440();
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_46031040();
   scope->inners[1] = makea_47204980();
   scope->inners[2] = makebase_47275520();
   scope->inners[3] = makenext__data_47321520();
   scope->inners[4] = makeaddr_47321440();
   scope->inners[5] = makeremaining_47321340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45535360();
   scope->behaviors[1] = make__45754960();
   scope->behaviors[2] = make__45753740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_45534800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_45534800 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45758540();

   return systemT;
}