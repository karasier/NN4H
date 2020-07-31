#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_49517820;

SignalI z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makez__value_49658960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)tanh_58_840_49517820;
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

SignalI a_49720180_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makea_49720180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49720180_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)tanh_58_840_49517820;
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

Block __43359260;

void code__43359260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_45748780_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value,addr_46714540_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value,remaining_49815380_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_49878120_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_49973640_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_50110080_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
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
                  src0 = addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__43705140();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_50213800_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_49720180_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
}

Block make__43359260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43359260 = block;
   block->owner = (Object)__43555620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43359260;

   return block;
};

Block __43359160;

void code__43359160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value,addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value,remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
      set_value_pos(pool_state);
   }
}

Block make__43359160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43359160 = block;
   block->owner = (Object)__43554960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43359160;

   return block;
};

Value make__43705140() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __43523960;

SignalI base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makebase_45347820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)__43523960;
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

SignalI next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makenext__data_45735520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)__43523960;
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

SignalI addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makeaddr_45735300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)__43523960;
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

SignalI remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700;

SignalI makeremaining_45735180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700 = signalI;
   signalI->owner = (Object)__43523960;
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

SystemI my__translator_45747640;

SystemI makemy__translator_45747640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_45747640 = systemI;
   systemI->owner = (Object)__43523960;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_45729480;

   return systemI;
};

SystemI my__table_42241940;

SystemI makemy__table_42241940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_42241940 = systemI;
   systemI->owner = (Object)__43523960;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47303580;

   return systemI;
};

SystemI my__calculator_50333760;

SystemI makemy__calculator_50333760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_50333760 = systemI;
   systemI->owner = (Object)__43523960;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_49751780;

   return systemI;
};

Behavior __43555620;

Behavior make__43555620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43555620 = behavior;
   behavior->owner = (Object)__43523960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700);
   z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->any,z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->any[z__value_49658960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[addr_45735300___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[remaining_45735180___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[base_45347820___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[next__data_45735520___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[estimated__value_50333900_my__calculator_58_840_49751780___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->block = make__43359260();

   return behavior;
}

Behavior __43554960;

Behavior make__43554960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43554960 = behavior;
   behavior->owner = (Object)__43523960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[addr_45748520_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[remaining_45748140_my__translator_58_840_45729480___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[base_47693240_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700);
   next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any += 1;
   next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any = realloc(next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any,next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any*sizeof(Object));
next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->any[next__data_42242280_my__table_58_840_47303580___43523960_tanh_58_840_49517820___47765300______58_840_43211700->num_any-1] = (Object)behavior;
   behavior->block = make__43359160();

   return behavior;
}

Scope make__43523960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __43523960 = scope;
   scope->owner = (Object)tanh_58_840_49517820;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_45747640();
   scope->systemIs[1] = makemy__table_42241940();
   scope->systemIs[2] = makemy__calculator_50333760();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_45347820();
   scope->inners[1] = makenext__data_45735520();
   scope->inners[2] = makeaddr_45735300();
   scope->inners[3] = makeremaining_45735180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43555620();
   scope->behaviors[1] = make__43554960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_49517820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_49517820 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49658960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49720180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__43523960();

   return systemT;
}