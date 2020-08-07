#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_47591360;

SignalI z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makez__value_47589460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)tanh_58_840_47591360;
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

SignalI a_47589360_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makea_47589360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47589360_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)tanh_58_840_47591360;
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

Block __47605300;

void code__47605300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->c_value,z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,remaining_47555120_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->c_value,z__value_47555040_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,base_47554960_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,next__data_47554880_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
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
                  src0 = addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47641940();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_47554800_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,a_47589360_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47605300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47605300 = block;
   block->owner = (Object)__47621060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47605300;

   return block;
};

Block __47605240;

void code__47605240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value,next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47605240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47605240 = block;
   block->owner = (Object)__47620900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47605240;

   return block;
};

Value make__47641940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47048500;

SignalI base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makebase_47048080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47048500;
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

SignalI next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makenext__data_47048000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47048500;
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

SignalI addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makeaddr_47047900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47048500;
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

SignalI remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makeremaining_47047800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47048500;
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

SystemI my__translator_47099420;

SystemI makemy__translator_47099420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_47099420 = systemI;
   systemI->owner = (Object)__47048500;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_47102200;

   return systemI;
};

SystemI my__table_47561560;

SystemI makemy__table_47561560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47561560 = systemI;
   systemI->owner = (Object)__47048500;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47114600;

   return systemI;
};

SystemI my__calculator_47595480;

SystemI makemy__calculator_47595480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_47595480 = systemI;
   systemI->owner = (Object)__47048500;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_47557240;

   return systemI;
};

Behavior __47621060;

Behavior make__47621060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47621060 = behavior;
   behavior->owner = (Object)__47048500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520);
   z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->any,z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->any[z__value_47589460_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[addr_47047900___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[remaining_47047800___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[base_47048080___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[next__data_47048000___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[estimated__value_47554700_my__calculator_58_840_47557240___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47605300();

   return behavior;
}

Behavior __47620900;

Behavior make__47620900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47620900 = behavior;
   behavior->owner = (Object)__47048500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47605240();

   return behavior;
}

Scope make__47048500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47048500 = scope;
   scope->owner = (Object)tanh_58_840_47591360;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_47099420();
   scope->systemIs[1] = makemy__table_47561560();
   scope->systemIs[2] = makemy__calculator_47595480();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47048080();
   scope->inners[1] = makenext__data_47048000();
   scope->inners[2] = makeaddr_47047900();
   scope->inners[3] = makeremaining_47047800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47621060();
   scope->behaviors[1] = make__47620900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_47591360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_47591360 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47589460();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47589360();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47048500();

   return systemT;
}