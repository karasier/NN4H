#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_48148040;

SignalI z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makez__value_48167980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)func0_58_840_48148040;
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

SignalI a_48167800_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makea_48167800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48167800_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)func0_58_840_48148040;
   signalI->name = "a";
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

Block __48842200;

void code__48842200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->c_value,z__value_48079940_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,addr_48113380_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,remaining_48133180_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->c_value,z__value_48133100_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,base_48133020_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,next__data_48132940_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700);
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
                  src0 = addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48878780();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_48132860_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,a_48167800_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48842200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48842200 = block;
   block->owner = (Object)__48857900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48842200;

   return block;
};

Block __48842140;

void code__48842140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->c_value,next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__48842140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48842140 = block;
   block->owner = (Object)__48857740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48842140;

   return block;
};

Value make__48878780() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48084880;

SignalI base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makebase_48084500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48084880;
   signalI->name = "base";
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

SignalI next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makenext__data_48084420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48084880;
   signalI->name = "next_data";
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

SignalI addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makeaddr_48084340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48084880;
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

SignalI remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700;

SignalI makeremaining_48084260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48084880;
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

SystemI my__translator_48079620;

SystemI makemy__translator_48079620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_48079620 = systemI;
   systemI->owner = (Object)__48084880;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_841_48081840;

   return systemI;
};

SystemI my__table_48113060;

SystemI makemy__table_48113060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_48113060 = systemI;
   systemI->owner = (Object)__48084880;
   systemI->name = "my_table";
   systemI->system = my__table_58_841_48115280;

   return systemI;
};

SystemI my__calculator_48132620;

SystemI makemy__calculator_48132620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_48132620 = systemI;
   systemI->owner = (Object)__48084880;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_841_48135080;

   return systemI;
};

Behavior __48857900;

Behavior make__48857900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48857900 = behavior;
   behavior->owner = (Object)__48084880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700);
   z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->any,z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->any[z__value_48167980_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[addr_48084340___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[remaining_48084260___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[base_48084500___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[next__data_48084420___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[estimated__value_48132760_my__calculator_58_841_48135080___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__48842200();

   return behavior;
}

Behavior __48857740;

Behavior make__48857740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48857740 = behavior;
   behavior->owner = (Object)__48084880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[addr_48079840_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[remaining_48079760_my__translator_58_841_48081840___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[base_48113280_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700);
   next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any += 1;
   next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any = realloc(next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any,next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any*sizeof(Object));
next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->any[next__data_48113200_my__table_58_841_48115280___48084880_func0_58_840_48148040___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__48842140();

   return behavior;
}

Scope make__48084880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48084880 = scope;
   scope->owner = (Object)func0_58_840_48148040;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_48079620();
   scope->systemIs[1] = makemy__table_48113060();
   scope->systemIs[2] = makemy__calculator_48132620();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48084500();
   scope->inners[1] = makenext__data_48084420();
   scope->inners[2] = makeaddr_48084340();
   scope->inners[3] = makeremaining_48084260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48857900();
   scope->behaviors[1] = make__48857740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_48148040() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_48148040 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48167980();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48167800();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48084880();

   return systemT;
}