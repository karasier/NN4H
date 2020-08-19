#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_45478980;

SignalI z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makez__value_45987340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)tanh_58_840_45478980;
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

SignalI a_47166400_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makea_47166400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47166400_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)tanh_58_840_45478980;
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

Block __43438540;

void code__43438540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
            first = value2integer(make__45292380());
            last = value2integer(make__45292360());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__43438540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43438540 = block;
   block->owner = (Object)__43436440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43438540;

   return block;
};

Block __43436240;

void code__43436240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840,value2integer(make__45292160()),value2integer(make__45292140())));
      set_value_pos(pool_state);
   }
}

Block make__43436240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43436240 = block;
   block->owner = (Object)__43458200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43436240;

   return block;
};

Block __43457860;

void code__43457860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__45291540();
            src1 = make__45291520();
            src2 = make__45291480();
            src3 = make__45291460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__43457860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43457860 = block;
   block->owner = (Object)__43453900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43457860;

   return block;
};

Block __43438880;

void code__43438880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,addr_45911180_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->c_value,z__value_47200940_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,base_47493500_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,next__data_47557180_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,integer__part_47660760_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,a_47166400_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__43438880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43438880 = block;
   block->owner = (Object)__45266400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43438880;

   return block;
};

Block __43438740;

void code__43438740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->c_value,next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
      set_value_pos(pool_state);
   }
}

Block make__43438740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43438740 = block;
   block->owner = (Object)__45265760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43438740;

   return block;
};

Value make__45292380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45292360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45292160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45292140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__45291540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45291520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45291480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__45291460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __47890580;

SignalI base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makebase_47961180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__47890580;
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

SignalI next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makenext__data_48006480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__47890580;
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

SignalI addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makeaddr_48006400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__47890580;
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

SignalI integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840;

SignalI makeinteger__part_43721820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840 = signalI;
   signalI->owner = (Object)__47890580;
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

SystemI my__lut_47217240;

SystemI makemy__lut_47217240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47217240 = systemI;
   systemI->owner = (Object)__47890580;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_45875900;

   return systemI;
};

SystemI my__interpolator_47781140;

SystemI makemy__interpolator_47781140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47781140 = systemI;
   systemI->owner = (Object)__47890580;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_47114560;

   return systemI;
};

Behavior __43436440;

Behavior make__43436440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43436440 = behavior;
   behavior->owner = (Object)__47890580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840);
   z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->any,z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->any[z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__43438540();

   return behavior;
}

Behavior __43458200;

Behavior make__43458200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43458200 = behavior;
   behavior->owner = (Object)__47890580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__43436240();

   return behavior;
}

Behavior __43453900;

Behavior make__43453900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43453900 = behavior;
   behavior->owner = (Object)__47890580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__43457860();

   return behavior;
}

Behavior __45266400;

Behavior make__45266400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45266400 = behavior;
   behavior->owner = (Object)__47890580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[addr_48006400___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840);
   z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->any,z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->any[z__value_45987340_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[base_47961180___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[next__data_48006480___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[integer__part_43721820___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[interpolated__value_47781320_my__interpolator_58_840_47114560___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__43438880();

   return behavior;
}

Behavior __45265760;

Behavior make__45265760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45265760 = behavior;
   behavior->owner = (Object)__47890580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[base_47152040_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840);
   next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any += 1;
   next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any = realloc(next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any,next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any*sizeof(Object));
next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->any[next__data_47217380_my__lut_58_840_45875900___47890580_tanh_58_840_45478980___47799340______58_840_42212840->num_any-1] = (Object)behavior;
   behavior->block = make__43438740();

   return behavior;
}

Scope make__47890580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47890580 = scope;
   scope->owner = (Object)tanh_58_840_45478980;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47217240();
   scope->systemIs[1] = makemy__interpolator_47781140();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47961180();
   scope->inners[1] = makenext__data_48006480();
   scope->inners[2] = makeaddr_48006400();
   scope->inners[3] = makeinteger__part_43721820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43436440();
   scope->behaviors[1] = make__43458200();
   scope->behaviors[2] = make__43453900();
   scope->behaviors[3] = make__45266400();
   scope->behaviors[4] = make__45265760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_45478980() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_45478980 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_45987340();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47166400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47890580();

   return systemT;
}