#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52079200;

SignalI z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makez__value_52198300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)func1_58_840_52079200;
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

SignalI a_52293860_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makea_52293860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52293860_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)func1_58_840_52079200;
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

Block __53768880;

void code__53768880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->c_value;
            first = value2integer(make__53853420());
            last = value2integer(make__53853400());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53768880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53768880 = block;
   block->owner = (Object)__53768560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53768880;

   return block;
};

Block __53768520;

void code__53768520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380,value2integer(make__53853220()),value2integer(make__53853200())));
      set_value_pos(pool_state);
   }
}

Block make__53768520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53768520 = block;
   block->owner = (Object)__53768180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53768520;

   return block;
};

Block __53768140;

void code__53768140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__53852380();
            src1 = make__53852300();
            src2 = make__53852280();
            src3 = make__53852260();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53768140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53768140 = block;
   block->owner = (Object)__53767560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53768140;

   return block;
};

Block __53769140;

void code__53769140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,addr_44275580_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->c_value,z__value_52601500_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,base_52724780_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,next__data_52790200_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,integer__part_53173720_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,a_52293860_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53769140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53769140 = block;
   block->owner = (Object)__53784760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53769140;

   return block;
};

Block __53769040;

void code__53769040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->c_value,next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380);
      set_value_pos(pool_state);
   }
}

Block make__53769040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53769040 = block;
   block->owner = (Object)__53784540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53769040;

   return block;
};

Value make__53853420() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53853400() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53853220() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53853200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53852380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53852300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53852280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53852260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __52414960;

SignalI base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makebase_52605220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__52414960;
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

SignalI next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makenext__data_52730300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__52414960;
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

SignalI addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makeaddr_52730220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__52414960;
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

SignalI integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380;

SignalI makeinteger__part_52773400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380 = signalI;
   signalI->owner = (Object)__52414960;
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

SystemI my__lut_47609720;

SystemI makemy__lut_47609720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47609720 = systemI;
   systemI->owner = (Object)__52414960;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_44180660;

   return systemI;
};

SystemI my__interpolator_53287000;

SystemI makemy__interpolator_53287000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53287000 = systemI;
   systemI->owner = (Object)__52414960;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52415080;

   return systemI;
};

Behavior __53768560;

Behavior make__53768560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53768560 = behavior;
   behavior->owner = (Object)__52414960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380);
   z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->any,z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->any[z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53768880();

   return behavior;
}

Behavior __53768180;

Behavior make__53768180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53768180 = behavior;
   behavior->owner = (Object)__52414960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53768520();

   return behavior;
}

Behavior __53767560;

Behavior make__53767560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53767560 = behavior;
   behavior->owner = (Object)__52414960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53768140();

   return behavior;
}

Behavior __53784760;

Behavior make__53784760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53784760 = behavior;
   behavior->owner = (Object)__52414960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[addr_52730220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380);
   z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->any,z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->any[z__value_52198300_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[base_52605220___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[next__data_52730300___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[integer__part_52773400___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[interpolated__value_53287240_my__interpolator_58_8400_52415080___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53769140();

   return behavior;
}

Behavior __53784540;

Behavior make__53784540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53784540 = behavior;
   behavior->owner = (Object)__52414960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[base_47032600_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380);
   next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any += 1;
   next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any = realloc(next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any,next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any*sizeof(Object));
next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->any[next__data_47609960_my__lut_58_8400_44180660___52414960_func1_58_840_52079200___48777200______58_840_53232380->num_any-1] = (Object)behavior;
   behavior->block = make__53769040();

   return behavior;
}

Scope make__52414960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __52414960 = scope;
   scope->owner = (Object)func1_58_840_52079200;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47609720();
   scope->systemIs[1] = makemy__interpolator_53287000();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52605220();
   scope->inners[1] = makenext__data_52730300();
   scope->inners[2] = makeaddr_52730220();
   scope->inners[3] = makeinteger__part_52773400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53768560();
   scope->behaviors[1] = make__53768180();
   scope->behaviors[2] = make__53767560();
   scope->behaviors[3] = make__53784760();
   scope->behaviors[4] = make__53784540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52079200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52079200 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52198300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52293860();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__52414960();

   return systemT;
}