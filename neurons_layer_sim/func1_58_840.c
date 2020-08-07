#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_48523280;

SignalI z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makez__value_48521380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)func1_58_840_48523280;
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

SignalI a_48521280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makea_48521280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48521280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)func1_58_840_48523280;
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

Block __42709240;

void code__42709240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->c_value,z__value_48160860_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,addr_48508060_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,remaining_48527960_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->c_value,z__value_48527880_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,base_48527800_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,next__data_48527720_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700);
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
                  src0 = addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__44971000();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),addr_48527640_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,a_48521280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__42709240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42709240 = block;
   block->owner = (Object)__44922360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42709240;

   return block;
};

Block __42707760;

void code__42707760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->c_value,next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700);
      set_value_pos(pool_state);
   }
}

Block make__42707760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42707760 = block;
   block->owner = (Object)__44921620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42707760;

   return block;
};

Value make__44971000() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __48167280;

SignalI base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makebase_48166620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48167280;
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

SignalI next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makenext__data_48166540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48167280;
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

SignalI addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makeaddr_48166460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48167280;
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

SignalI remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700;

SignalI makeremaining_48166380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700 = signalI;
   signalI->owner = (Object)__48167280;
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

SystemI my__translator_48185080;

SystemI makemy__translator_48185080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_48185080 = systemI;
   systemI->owner = (Object)__48167280;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_8400_48163280;

   return systemI;
};

SystemI my__table_48507740;

SystemI makemy__table_48507740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_48507740 = systemI;
   systemI->owner = (Object)__48167280;
   systemI->name = "my_table";
   systemI->system = my__table_58_8400_48510000;

   return systemI;
};

SystemI my__calculator_48527400;

SystemI makemy__calculator_48527400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_48527400 = systemI;
   systemI->owner = (Object)__48167280;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_8400_48505320;

   return systemI;
};

Behavior __44922360;

Behavior make__44922360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44922360 = behavior;
   behavior->owner = (Object)__48167280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700);
   z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->any,z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->any[z__value_48521380_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[addr_48166460___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[remaining_48166380___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[base_48166620___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[next__data_48166540___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[estimated__value_48527540_my__calculator_58_8400_48505320___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__42709240();

   return behavior;
}

Behavior __44921620;

Behavior make__44921620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __44921620 = behavior;
   behavior->owner = (Object)__48167280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[addr_48185300_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[remaining_48185220_my__translator_58_8400_48163280___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[base_48507960_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700);
   next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any += 1;
   next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any = realloc(next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any,next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any*sizeof(Object));
next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->any[next__data_48507880_my__table_58_8400_48510000___48167280_func1_58_840_48523280___47858060______58_840_48588700->num_any-1] = (Object)behavior;
   behavior->block = make__42707760();

   return behavior;
}

Scope make__48167280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48167280 = scope;
   scope->owner = (Object)func1_58_840_48523280;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_48185080();
   scope->systemIs[1] = makemy__table_48507740();
   scope->systemIs[2] = makemy__calculator_48527400();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48166620();
   scope->inners[1] = makenext__data_48166540();
   scope->inners[2] = makeaddr_48166460();
   scope->inners[3] = makeremaining_48166380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__44922360();
   scope->behaviors[1] = make__44921620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_48523280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_48523280 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48521380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48521280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48167280();

   return systemT;
}