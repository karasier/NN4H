#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_47747000;

SignalI z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makez__value_47859260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)tanh_58_840_47747000;
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

SignalI a_50564200_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makea_50564200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50564200_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)tanh_58_840_47747000;
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

Block __51522740;

void code__51522740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
            first = value2integer(make__51552940());
            last = value2integer(make__51552920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),6),dst);
      set_value_pos(pool_state);
   dst; }),address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51522740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51522740 = block;
   block->owner = (Object)__51522440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51522740;

   return block;
};

Block __51522400;

void code__51522400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),6),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420,value2integer(make__51552720()),value2integer(make__51552680())));
      set_value_pos(pool_state);
   }
}

Block make__51522400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51522400 = block;
   block->owner = (Object)__51522080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51522400;

   return block;
};

Block __51522040;

void code__51522040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3,src4,src5;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__51593100();
            src1 = make__51593080();
            src2 = make__51593060();
            src3 = make__51593040();
            src4 = make__51593020();
            src5 = make__51593000();
            concat_value(6,1,dst,src0,src1,src2,src3,src4,src5);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->c_value;
            first = value2integer(make__51592900());
            last = value2integer(make__51592880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51522040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51522040 = block;
   block->owner = (Object)__51521540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51522040;

   return block;
};

Block __51522900;

void code__51522900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,address_51988860_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,remaining_50679080_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,base_50838560_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,next__data_51063240_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,a_50564200_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51522900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51522900 = block;
   block->owner = (Object)__51556920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51522900;

   return block;
};

Block __51522840;

void code__51522840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->c_value,next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
      set_value_pos(pool_state);
   }
}

Block make__51522840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51522840 = block;
   block->owner = (Object)__51556700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51522840;

   return block;
};

Value make__51552940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51552920() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51552720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51552680() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51593100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51593080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51593060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51593040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51593020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51593000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51592900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51592880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47431120;

SignalI base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makebase_47477180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47431120;
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

SignalI next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makenext__data_47523540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47431120;
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

SignalI address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makeaddress_47523460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47431120;
   signalI->name = "address";
   signalI->type = get_type_vector(get_type_bit(),6);
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

SignalI remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420;

SignalI makeremaining_47586180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420 = signalI;
   signalI->owner = (Object)__47431120;
   signalI->name = "remaining";
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

SystemI my__lut_42270780;

SystemI makemy__lut_42270780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_42270780 = systemI;
   systemI->owner = (Object)__47431120;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_51990760;

   return systemI;
};

SystemI my__interpolator_51198080;

SystemI makemy__interpolator_51198080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_51198080 = systemI;
   systemI->owner = (Object)__47431120;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_50595180;

   return systemI;
};

Behavior __51522440;

Behavior make__51522440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51522440 = behavior;
   behavior->owner = (Object)__47431120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420);
   z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->any,z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->any[z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51522740();

   return behavior;
}

Behavior __51522080;

Behavior make__51522080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51522080 = behavior;
   behavior->owner = (Object)__47431120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51522400();

   return behavior;
}

Behavior __51521540;

Behavior make__51521540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51521540 = behavior;
   behavior->owner = (Object)__47431120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420);
   z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->any,z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->any[z__value_47859260_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51522040();

   return behavior;
}

Behavior __51556920;

Behavior make__51556920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51556920 = behavior;
   behavior->owner = (Object)__47431120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[address_47523460___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[remaining_47586180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[base_47477180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[next__data_47523540___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[interpolated__value_51198220_my__interpolator_58_840_50595180___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51522900();

   return behavior;
}

Behavior __51556700;

Behavior make__51556700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51556700 = behavior;
   behavior->owner = (Object)__47431120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[base_52231780_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420);
   next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any += 1;
   next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any = realloc(next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any,next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any*sizeof(Object));
next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->any[next__data_42274820_my__lut_58_840_51990760___47431120_tanh_58_840_47747000___47298340______58_840_51489420->num_any-1] = (Object)behavior;
   behavior->block = make__51522840();

   return behavior;
}

Scope make__47431120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47431120 = scope;
   scope->owner = (Object)tanh_58_840_47747000;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_42270780();
   scope->systemIs[1] = makemy__interpolator_51198080();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47477180();
   scope->inners[1] = makenext__data_47523540();
   scope->inners[2] = makeaddress_47523460();
   scope->inners[3] = makeremaining_47586180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51522440();
   scope->behaviors[1] = make__51522080();
   scope->behaviors[2] = make__51521540();
   scope->behaviors[3] = make__51556920();
   scope->behaviors[4] = make__51556700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_47747000() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_47747000 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47859260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50564200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47431120();

   return systemT;
}