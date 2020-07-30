#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_47423860;

SignalI z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makez__value_47568420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)tanh_58_840_47423860;
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

SignalI a_47717820_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makea_47717820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47717820_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)tanh_58_840_47423860;
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

Block __50151200;

void code__50151200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_47343240_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value,addr_47359800_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value,remaining_47001460_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),z__value_47365300_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_47471320_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47598980_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
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
                  src0 = addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50163060();
            dst = shift_left_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),addr_47713020_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),a_47717820_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
}

Block make__50151200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50151200 = block;
   block->owner = (Object)__50166960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50151200;

   return block;
};

Block __50151140;

void code__50151140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value,addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value,remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
      set_value_pos(pool_state);
   }
}

Block make__50151140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50151140 = block;
   block->owner = (Object)__50166800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50151140;

   return block;
};

Value make__50163060() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __46919640;

SignalI base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makebase_46999980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)__46919640;
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

SignalI next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makenext__data_47347980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)__46919640;
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

SignalI addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makeaddr_47347880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)__46919640;
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

SignalI remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360;

SignalI makeremaining_47347800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360 = signalI;
   signalI->owner = (Object)__46919640;
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

SystemI my__translator_47342920;

SystemI makemy__translator_47342920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__translator_47342920 = systemI;
   systemI->owner = (Object)__46919640;
   systemI->name = "my_translator";
   systemI->system = my__translator_58_840_47345240;

   return systemI;
};

SystemI my__table_47568880;

SystemI makemy__table_47568880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__table_47568880 = systemI;
   systemI->owner = (Object)__46919640;
   systemI->name = "my_table";
   systemI->system = my__table_58_840_47362100;

   return systemI;
};

SystemI my__calculator_41821660;

SystemI makemy__calculator_41821660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__calculator_41821660 = systemI;
   systemI->owner = (Object)__46919640;
   systemI->name = "my_calculator";
   systemI->system = my__calculator_58_840_47003620;

   return systemI;
};

Behavior __50166960;

Behavior make__50166960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50166960 = behavior;
   behavior->owner = (Object)__46919640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360);
   z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->any,z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->any[z__value_47568420_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[addr_47347880___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[remaining_47347800___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[base_46999980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[next__data_47347980___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[estimated__value_41823840_my__calculator_58_840_47003620___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->block = make__50151200();

   return behavior;
}

Behavior __50166800;

Behavior make__50166800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50166800 = behavior;
   behavior->owner = (Object)__46919640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[addr_47343140_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[remaining_47343060_my__translator_58_840_47345240___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[base_47457440_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360);
   next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any += 1;
   next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any = realloc(next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any,next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any*sizeof(Object));
next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->any[next__data_47569280_my__table_58_840_47362100___46919640_tanh_58_840_47423860___45591340______58_840_50117360->num_any-1] = (Object)behavior;
   behavior->block = make__50151140();

   return behavior;
}

Scope make__46919640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __46919640 = scope;
   scope->owner = (Object)tanh_58_840_47423860;
   scope->name = "";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__translator_47342920();
   scope->systemIs[1] = makemy__table_47568880();
   scope->systemIs[2] = makemy__calculator_41821660();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_46999980();
   scope->inners[1] = makenext__data_47347980();
   scope->inners[2] = makeaddr_47347880();
   scope->inners[3] = makeremaining_47347800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50166960();
   scope->behaviors[1] = make__50166800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_47423860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_47423860 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47568420();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47717820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__46919640();

   return systemT;
}