#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_47438020;

SignalI z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makez__value_47583280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)func0_58_840_47438020;
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

SignalI a_47781200_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makea_47781200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47781200_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)func0_58_840_47438020;
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

Block __47800200;

void code__47800200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->c_value;
            first = value2integer(make__47930640());
            last = value2integer(make__47930480());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47800200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47800200 = block;
   block->owner = (Object)__47799620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47800200;

   return block;
};

Block __47799520;

void code__47799520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),({
      Value ref,dst = get_value();
      unsigned long long first,last;
      unsigned int pool_state = get_value_pos();
      ref = z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->c_value;
      first = value2integer(make__47929940());
      last = value2integer(make__47929880());
      dst = write_range(ref,first,last,get_type_bit(),dst);
      set_value_pos(pool_state);
   dst; }));
      set_value_pos(pool_state);
   }
}

Block make__47799520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47799520 = block;
   block->owner = (Object)__47799020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47799520;

   return block;
};

Block __47798960;

void code__47798960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__47926400();
            src1 = make__47926380();
            src2 = make__47926320();
            src3 = make__47926300();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47798960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47798960 = block;
   block->owner = (Object)__47798220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47798960;

   return block;
};

Block __47798160;

void code__47798160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->c_value;
            first = value2integer(make__47925540());
            last = value2integer(make__47925520());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47798160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47798160 = block;
   block->owner = (Object)__47797020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47798160;

   return block;
};

Block __47796620;

void code__47796620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value;
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),({
      Value ref,dst = get_value();
      unsigned long long first,last;
      unsigned int pool_state = get_value_pos();
      ref = z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->c_value;
      first = value2integer(make__47925260());
      last = value2integer(make__47925240());
      dst = write_range(ref,first,last,get_type_bit(),dst);
      set_value_pos(pool_state);
   dst; }));
      set_value_pos(pool_state);
   }
}

Block make__47796620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47796620 = block;
   block->owner = (Object)__47795700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47796620;

   return block;
};

Block __47775920;

void code__47775920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,addr_49857960_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->c_value,z__value_47619380_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,base_47831080_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,next__data_48888000_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,integer__part_49014740_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,a_47781200_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47775920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47775920 = block;
   block->owner = (Object)__47877680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47775920;

   return block;
};

Block __47775800;

void code__47775800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->c_value,next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000);
      set_value_pos(pool_state);
   }
}

Block make__47775800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47775800 = block;
   block->owner = (Object)__47877440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47775800;

   return block;
};

Value make__47930640() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47930480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47929940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47929880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47926400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47926380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47926320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47926300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47925540() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47925520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47925260() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47925240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __45806960;

SignalI base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makebase_47346940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__45806960;
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

SignalI next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makenext__data_47431920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__45806960;
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

SignalI addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makeaddr_47431760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__45806960;
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

SignalI integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makeinteger__part_47563940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__45806960;
   signalI->name = "integer_part";
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

SignalI decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000;

SignalI makedecimal__part_47563600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000 = signalI;
   signalI->owner = (Object)__45806960;
   signalI->name = "decimal_part";
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

SystemI my__lut_50057020;

SystemI makemy__lut_50057020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50057020 = systemI;
   systemI->owner = (Object)__45806960;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_49859860;

   return systemI;
};

SystemI my__interpolator_49132900;

SystemI makemy__interpolator_49132900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49132900 = systemI;
   systemI->owner = (Object)__45806960;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_47486960;

   return systemI;
};

Behavior __47799620;

Behavior make__47799620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47799620 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000);
   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any,z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any[z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47800200();

   return behavior;
}

Behavior __47799020;

Behavior make__47799020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47799020 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47799520();

   return behavior;
}

Behavior __47798220;

Behavior make__47798220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47798220 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47798960();

   return behavior;
}

Behavior __47797020;

Behavior make__47797020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47797020 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000);
   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any,z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any[z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47798160();

   return behavior;
}

Behavior __47795700;

Behavior make__47795700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47795700 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[decimal__part_47563600___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47796620();

   return behavior;
}

Behavior __47877680;

Behavior make__47877680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47877680 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[addr_47431760___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000);
   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any,z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->any[z__value_47583280_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[base_47346940___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[next__data_47431920___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[integer__part_47563940___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[interpolated__value_49133040_my__interpolator_58_841_47486960___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47775920();

   return behavior;
}

Behavior __47877440;

Behavior make__47877440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47877440 = behavior;
   behavior->owner = (Object)__45806960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[base_49986220_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000);
   next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any += 1;
   next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any = realloc(next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any,next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any*sizeof(Object));
next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->any[next__data_50057160_my__lut_58_841_49859860___45806960_func0_58_840_47438020___43144740______58_840_45098000->num_any-1] = (Object)behavior;
   behavior->block = make__47775800();

   return behavior;
}

Scope make__45806960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45806960 = scope;
   scope->owner = (Object)func0_58_840_47438020;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50057020();
   scope->systemIs[1] = makemy__interpolator_49132900();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47346940();
   scope->inners[1] = makenext__data_47431920();
   scope->inners[2] = makeaddr_47431760();
   scope->inners[3] = makeinteger__part_47563940();
   scope->inners[4] = makedecimal__part_47563600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47799620();
   scope->behaviors[1] = make__47799020();
   scope->behaviors[2] = make__47798220();
   scope->behaviors[3] = make__47797020();
   scope->behaviors[4] = make__47795700();
   scope->behaviors[5] = make__47877680();
   scope->behaviors[6] = make__47877440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_47438020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_47438020 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47583280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47781200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__45806960();

   return systemT;
}