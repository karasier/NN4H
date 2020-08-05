#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_47217540;

SignalI z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200;

SignalI makez__value_47345880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)tanh_58_840_47217540;
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

SignalI a_47433840_tanh_58_840_47217540___47360280______58_840_49570200;

SignalI makea_47433840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47433840_tanh_58_840_47217540___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)tanh_58_840_47217540;
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

Block __49587820;

void code__49587820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->c_value,z__value_45641820_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,addr_46397900_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,remaining_45363320_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->c_value,z__value_45694660_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,base_47029460_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,next__data_47231800_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
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
                  src0 = addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49624440();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_47342900_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,a_47433840_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
}

Block make__49587820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49587820 = block;
   block->owner = (Object)__49603580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49587820;

   return block;
};

Block __49587760;

void code__49587760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->c_value,next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
      set_value_pos(pool_state);
   }
}

Block make__49587760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49587760 = block;
   block->owner = (Object)__49603420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49587760;

   return block;
};

Value make__49624440() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47482820;

SignalI base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200;

SignalI makebase_47580280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)__47482820;
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

SignalI next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200;

SignalI makenext__data_47648960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)__47482820;
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

SignalI addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200;

SignalI makeaddr_47648880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)__47482820;
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

SignalI remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200;

SignalI makeremaining_47648780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200 = signalI;
   signalI->owner = (Object)__47482820;
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

SystemI my__translator_45640580;

SystemI makemy__translator_45640580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_45640580 = systemI;
   systemI->owner = (Object)__47482820;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_45359420;

   return systemI;
};

SystemI my__table_47214660;

SystemI makemy__table_47214660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47214660 = systemI;
   systemI->owner = (Object)__47482820;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_45688200;

   return systemI;
};

SystemI my__calculator_47435120;

SystemI makemy__calculator_47435120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_47435120 = systemI;
   systemI->owner = (Object)__47482820;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_45281480;

   return systemI;
};

Behavior __49603580;

Behavior make__49603580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49603580 = behavior;
   behavior->owner = (Object)__47482820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200);
   z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->any,z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->any[z__value_47345880_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[addr_47648880___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[remaining_47648780___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[base_47580280___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[next__data_47648960___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[estimated__value_47435300_my__calculator_58_840_45281480___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->block = make__49587820();

   return behavior;
}

Behavior __49603420;

Behavior make__49603420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49603420 = behavior;
   behavior->owner = (Object)__47482820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[addr_45641300_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[remaining_45641160_my__translator_58_840_45359420___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[base_47009080_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200);
   next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any += 1;
   next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any = realloc(next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any,next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any*sizeof(Object));
next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->any[next__data_47214820_my__table_58_840_45688200___47482820_tanh_58_840_47217540___47360280______58_840_49570200->num_any-1] = (Object)behavior;
   behavior->block = make__49587760();

   return behavior;
}

Scope make__47482820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47482820 = scope;
   scope->owner = (Object)tanh_58_840_47217540;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_45640580();
   scope->systemIs[1] = makemy__table_47214660();
   scope->systemIs[2] = makemy__calculator_47435120();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47580280();
   scope->inners[1] = makenext__data_47648960();
   scope->inners[2] = makeaddr_47648880();
   scope->inners[3] = makeremaining_47648780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49603580();
   scope->behaviors[1] = make__49603420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_47217540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_47217540 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47345880();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47433840();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47482820();

   return systemT;
}