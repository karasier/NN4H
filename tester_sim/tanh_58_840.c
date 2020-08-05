#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_49240440;

SignalI z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440;

SignalI makez__value_49373380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)tanh_58_840_49240440;
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

SignalI a_49432980_tanh_58_840_49240440___47045120______58_840_44313440;

SignalI makea_49432980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49432980_tanh_58_840_49240440___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)tanh_58_840_49240440;
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

Block __45002860;

void code__45002860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->c_value,z__value_45520920_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,addr_47078640_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,remaining_49389660_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->c_value,z__value_49460560_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,base_49572480_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,next__data_49864600_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
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
                  src0 = addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__45338660();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_49968320_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,a_49432980_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
}

Block make__45002860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45002860 = block;
   block->owner = (Object)__45291580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45002860;

   return block;
};

Block __45022840;

void code__45022840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->c_value,next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
      set_value_pos(pool_state);
   }
}

Block make__45022840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45022840 = block;
   block->owner = (Object)__45291140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45022840;

   return block;
};

Value make__45338660() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47391420;

SignalI base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440;

SignalI makebase_47498340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)__47391420;
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

SignalI next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440;

SignalI makenext__data_41381100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)__47391420;
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

SignalI addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440;

SignalI makeaddr_41228460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)__47391420;
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

SignalI remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440;

SignalI makeremaining_41228080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440 = signalI;
   signalI->owner = (Object)__47391420;
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

SystemI my__translator_45520160;

SystemI makemy__translator_45520160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_45520160 = systemI;
   systemI->owner = (Object)__47391420;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_45100080;

   return systemI;
};

SystemI my__table_48146240;

SystemI makemy__table_48146240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_48146240 = systemI;
   systemI->owner = (Object)__47391420;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_46794660;

   return systemI;
};

SystemI my__calculator_50022720;

SystemI makemy__calculator_50022720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_50022720 = systemI;
   systemI->owner = (Object)__47391420;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_49391560;

   return systemI;
};

Behavior __45291580;

Behavior make__45291580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45291580 = behavior;
   behavior->owner = (Object)__47391420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440);
   z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->any,z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->any[z__value_49373380_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[addr_41228460___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[remaining_41228080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[base_47498340___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[next__data_41381100___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[estimated__value_50022860_my__calculator_58_840_49391560___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->block = make__45002860();

   return behavior;
}

Behavior __45291140;

Behavior make__45291140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45291140 = behavior;
   behavior->owner = (Object)__47391420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[addr_45520700_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[remaining_45520580_my__translator_58_840_45100080___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[base_47460080_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440);
   next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any += 1;
   next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any = realloc(next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any,next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any*sizeof(Object));
next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->any[next__data_48146380_my__table_58_840_46794660___47391420_tanh_58_840_49240440___47045120______58_840_44313440->num_any-1] = (Object)behavior;
   behavior->block = make__45022840();

   return behavior;
}

Scope make__47391420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47391420 = scope;
   scope->owner = (Object)tanh_58_840_49240440;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_45520160();
   scope->systemIs[1] = makemy__table_48146240();
   scope->systemIs[2] = makemy__calculator_50022720();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47498340();
   scope->inners[1] = makenext__data_41381100();
   scope->inners[2] = makeaddr_41228460();
   scope->inners[3] = makeremaining_41228080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45291580();
   scope->behaviors[1] = make__45291140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_49240440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_49240440 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49373380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49432980();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47391420();

   return systemT;
}