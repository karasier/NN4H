#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_48006060;

Block __47812080;

void code__47812080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__42490640(),z__value_47911200___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48006280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__42488240(),z__value_47911200___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__48006280);
}

Block make__47812080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47812080 = block;
   block->owner = (Object)__48006280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47812080;

   return block;
};

Block __48026300;

void code__48026300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_47911200___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_45243680_my__translator_58_840_45074140___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45059860___47826480______58_840_48006060->c_value,addr_47533600_my__table_58_840_47535740___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45059600___47826480______58_840_48006060->c_value,remaining_41750340_my__calculator_58_840_7840240___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_47911200___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_43717000_my__calculator_58_840_7840240___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_42441660___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_45408500_my__calculator_58_840_7840240___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_45060100___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45928300_my__calculator_58_840_7840240___47826480______58_840_48006060);
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
                  src0 = addr_45059860___47826480______58_840_48006060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__43146660();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_47173020_my__calculator_58_840_7840240___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
}

Block make__48026300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48026300 = block;
   block->owner = (Object)__42234860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48026300;

   return block;
};

Block __48026200;

void code__48026200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->c_value,addr_45059860___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->c_value,remaining_45059600___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_42441660___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45060100___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_47990840___47826480______58_840_48006060);
      set_value_pos(pool_state);
   }
}

Block make__48026200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48026200 = block;
   block->owner = (Object)__42233920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48026200;

   return block;
};

Value make__42490640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__42488240() {
   static unsigned long long data[] = { 23067520ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__43146660() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47826480;

SignalI z__value_47911200___47826480______58_840_48006060;

SignalI makez__value_47911200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47911200___47826480______58_840_48006060 = signalI;
   signalI->owner = (Object)__47826480;
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

SignalI a_47990840___47826480______58_840_48006060;

SignalI makea_47990840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47990840___47826480______58_840_48006060 = signalI;
   signalI->owner = (Object)__47826480;
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

SignalI base_42441660___47826480______58_840_48006060;

SignalI makebase_42441660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_42441660___47826480______58_840_48006060 = signalI;
   signalI->owner = (Object)__47826480;
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

SignalI next__data_45060100___47826480______58_840_48006060;

SignalI makenext__data_45060100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45060100___47826480______58_840_48006060 = signalI;
   signalI->owner = (Object)__47826480;
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

SignalI addr_45059860___47826480______58_840_48006060;

SignalI makeaddr_45059860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45059860___47826480______58_840_48006060 = signalI;
   signalI->owner = (Object)__47826480;
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

SignalI remaining_45059600___47826480______58_840_48006060;

SignalI makeremaining_45059600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45059600___47826480______58_840_48006060 = signalI;
   signalI->owner = (Object)__47826480;
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

SystemI my__translator_45243360;

SystemI makemy__translator_45243360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_45243360 = systemI;
   systemI->owner = (Object)__47826480;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_45074140;

   return systemI;
};

SystemI my__table_47689960;

SystemI makemy__table_47689960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47689960 = systemI;
   systemI->owner = (Object)__47826480;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47535740;

   return systemI;
};

SystemI my__calculator_47236100;

SystemI makemy__calculator_47236100() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_47236100 = systemI;
   systemI->owner = (Object)__47826480;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_7840240;

   return systemI;
};

Behavior __48006280;

Behavior make__48006280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48006280 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)__47826480;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__47812080();

   return behavior;
}

Behavior __42234860;

Behavior make__42234860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42234860 = behavior;
   behavior->owner = (Object)__47826480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47911200___47826480______58_840_48006060);
   z__value_47911200___47826480______58_840_48006060->num_any += 1;
   z__value_47911200___47826480______58_840_48006060->any = realloc(z__value_47911200___47826480______58_840_48006060->any,z__value_47911200___47826480______58_840_48006060->num_any*sizeof(Object));
z__value_47911200___47826480______58_840_48006060->any[z__value_47911200___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_45059860___47826480______58_840_48006060);
   addr_45059860___47826480______58_840_48006060->num_any += 1;
   addr_45059860___47826480______58_840_48006060->any = realloc(addr_45059860___47826480______58_840_48006060->any,addr_45059860___47826480______58_840_48006060->num_any*sizeof(Object));
addr_45059860___47826480______58_840_48006060->any[addr_45059860___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_45059600___47826480______58_840_48006060);
   remaining_45059600___47826480______58_840_48006060->num_any += 1;
   remaining_45059600___47826480______58_840_48006060->any = realloc(remaining_45059600___47826480______58_840_48006060->any,remaining_45059600___47826480______58_840_48006060->num_any*sizeof(Object));
remaining_45059600___47826480______58_840_48006060->any[remaining_45059600___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_42441660___47826480______58_840_48006060);
   base_42441660___47826480______58_840_48006060->num_any += 1;
   base_42441660___47826480______58_840_48006060->any = realloc(base_42441660___47826480______58_840_48006060->any,base_42441660___47826480______58_840_48006060->num_any*sizeof(Object));
base_42441660___47826480______58_840_48006060->any[base_42441660___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_45060100___47826480______58_840_48006060);
   next__data_45060100___47826480______58_840_48006060->num_any += 1;
   next__data_45060100___47826480______58_840_48006060->any = realloc(next__data_45060100___47826480______58_840_48006060->any,next__data_45060100___47826480______58_840_48006060->num_any*sizeof(Object));
next__data_45060100___47826480______58_840_48006060->any[next__data_45060100___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->block = make__48026300();

   return behavior;
}

Behavior __42233920;

Behavior make__42233920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42233920 = behavior;
   behavior->owner = (Object)__47826480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060);
   addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->num_any += 1;
   addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->any = realloc(addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->any,addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->num_any*sizeof(Object));
addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->any[addr_45243580_my__translator_58_840_45074140___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060);
   remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->num_any += 1;
   remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->any = realloc(remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->any,remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->num_any*sizeof(Object));
remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->any[remaining_45243500_my__translator_58_840_45074140___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47625020_my__table_58_840_47535740___47826480______58_840_48006060);
   base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->num_any += 1;
   base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->any = realloc(base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->any,base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->num_any*sizeof(Object));
base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->any[base_47625020_my__table_58_840_47535740___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060);
   next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->num_any += 1;
   next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->any = realloc(next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->any,next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->num_any*sizeof(Object));
next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->any[next__data_47690120_my__table_58_840_47535740___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060);
   estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->num_any += 1;
   estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->any = realloc(estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->any,estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->num_any*sizeof(Object));
estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->any[estimated__value_47236260_my__calculator_58_840_7840240___47826480______58_840_48006060->num_any-1] = (Object)behavior;
   behavior->block = make__48026200();

   return behavior;
}

Scope make__47826480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47826480 = scope;
   scope->owner = (Object)_____58_840_48006060;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_45243360();
   scope->systemIs[1] = makemy__table_47689960();
   scope->systemIs[2] = makemy__calculator_47236100();
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makez__value_47911200();
   scope->inners[1] = makea_47990840();
   scope->inners[2] = makebase_42441660();
   scope->inners[3] = makenext__data_45060100();
   scope->inners[4] = makeaddr_45059860();
   scope->inners[5] = makeremaining_45059600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48006280();
   scope->behaviors[1] = make__42234860();
   scope->behaviors[2] = make__42233920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_48006060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_48006060 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47826480();

   return systemT;
}