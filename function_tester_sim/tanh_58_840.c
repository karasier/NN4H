#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_47310920;

SignalI z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makez__value_47613540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)tanh_58_840_47310920;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI a_47364400_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makea_47364400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47364400_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)tanh_58_840_47310920;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),8);
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

Block __50454060;

void code__50454060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
            first = value2integer(make__50468160());
            last = value2integer(make__50468140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50454060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50454060 = block;
   block->owner = (Object)__50453800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50454060;

   return block;
};

Block __50453760;

void code__50453760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240,value2integer(make__50468000()),value2integer(make__50467980())));
      set_value_pos(pool_state);
   }
}

Block make__50453760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50453760 = block;
   block->owner = (Object)__50453500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50453760;

   return block;
};

Block __50453460;

void code__50453460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__50467480();
            src1 = make__50467460();
            src2 = make__50467440();
            src3 = make__50467420();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50453460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50453460 = block;
   block->owner = (Object)__50453100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50453460;

   return block;
};

Block __50454220;

void code__50454220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,addr_47619460_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->c_value,z__value_42483080_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,base_44591640_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,next__data_45766760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,integer__part_47237760_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,a_47364400_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50454220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50454220 = block;
   block->owner = (Object)__50447300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50454220;

   return block;
};

Block __50454160;

void code__50454160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->c_value,next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
      set_value_pos(pool_state);
   }
}

Block make__50454160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50454160 = block;
   block->owner = (Object)__50447140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50454160;

   return block;
};

Value make__50468160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50468140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50468000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50467980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50467480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50467460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50467440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50467420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __47587200;

SignalI base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makebase_47647840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__47587200;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makenext__data_47326800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__47587200;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SignalI addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makeaddr_47326720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__47587200;
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

SignalI integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240;

SignalI makeinteger__part_47534900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240 = signalI;
   signalI->owner = (Object)__47587200;
   signalI->name = "integer_part";
   signalI->type = get_type_vector(get_type_signed(),8);
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

SystemI my__lut_47554060;

SystemI makemy__lut_47554060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47554060 = systemI;
   systemI->owner = (Object)__47587200;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_47597180;

   return systemI;
};

SystemI my__interpolator_47566760;

SystemI makemy__interpolator_47566760() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47566760 = systemI;
   systemI->owner = (Object)__47587200;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_48016600;

   return systemI;
};

Behavior __50453800;

Behavior make__50453800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50453800 = behavior;
   behavior->owner = (Object)__47587200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240);
   z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->any,z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->any[z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50454060();

   return behavior;
}

Behavior __50453500;

Behavior make__50453500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50453500 = behavior;
   behavior->owner = (Object)__47587200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50453760();

   return behavior;
}

Behavior __50453100;

Behavior make__50453100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50453100 = behavior;
   behavior->owner = (Object)__47587200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50453460();

   return behavior;
}

Behavior __50447300;

Behavior make__50447300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50447300 = behavior;
   behavior->owner = (Object)__47587200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[addr_47326720___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240);
   z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->any,z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->any[z__value_47613540_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[base_47647840___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[next__data_47326800___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[integer__part_47534900___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[interpolated__value_47567300_my__interpolator_58_840_48016600___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50454220();

   return behavior;
}

Behavior __50447140;

Behavior make__50447140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50447140 = behavior;
   behavior->owner = (Object)__47587200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[base_47330920_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240);
   next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any += 1;
   next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any = realloc(next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any,next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any*sizeof(Object));
next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->any[next__data_47554280_my__lut_58_840_47597180___47587200_tanh_58_840_47310920___46842460______58_840_50428240->num_any-1] = (Object)behavior;
   behavior->block = make__50454160();

   return behavior;
}

Scope make__47587200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47587200 = scope;
   scope->owner = (Object)tanh_58_840_47310920;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47554060();
   scope->systemIs[1] = makemy__interpolator_47566760();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47647840();
   scope->inners[1] = makenext__data_47326800();
   scope->inners[2] = makeaddr_47326720();
   scope->inners[3] = makeinteger__part_47534900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50453800();
   scope->behaviors[1] = make__50453500();
   scope->behaviors[2] = make__50453100();
   scope->behaviors[3] = make__50447300();
   scope->behaviors[4] = make__50447140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_47310920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_47310920 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47613540();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47364400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47587200();

   return systemT;
}