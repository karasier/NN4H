#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_53485960;

SignalI z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makez__value_53582260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)func0_58_840_53485960;
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

SignalI a_53771180_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makea_53771180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53771180_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)func0_58_840_53485960;
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

Block __48797700;

void code__48797700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->c_value;
            first = value2integer(make__48940520());
            last = value2integer(make__48940500());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__48797700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48797700 = block;
   block->owner = (Object)__48797060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48797700;

   return block;
};

Block __48796980;

void code__48796980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900,value2integer(make__48940040()),value2integer(make__48939980())));
      set_value_pos(pool_state);
   }
}

Block make__48796980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48796980 = block;
   block->owner = (Object)__48795200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48796980;

   return block;
};

Block __48794880;

void code__48794880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__48961600();
            src1 = make__48961580();
            src2 = make__48961540();
            src3 = make__48961520();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__48794880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48794880 = block;
   block->owner = (Object)__48793880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48794880;

   return block;
};

Block __48776060;

void code__48776060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,addr_52413380_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->c_value,z__value_44530980_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,base_47023380_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,next__data_47039200_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,integer__part_47198380_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,a_53771180_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__48776060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48776060 = block;
   block->owner = (Object)__48909420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48776060;

   return block;
};

Block __48798400;

void code__48798400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->c_value,next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__48798400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48798400 = block;
   block->owner = (Object)__48909180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48798400;

   return block;
};

Value make__48940520() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48940500() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48940040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48939980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48961600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48961580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48961540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48961520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __53863540;

SignalI base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makebase_53950520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53863540;
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

SignalI next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makenext__data_54013260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53863540;
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

SignalI addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makeaddr_54013180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53863540;
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

SignalI integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900;

SignalI makeinteger__part_21887160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53863540;
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

SystemI my__lut_52614280;

SystemI makemy__lut_52614280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52614280 = systemI;
   systemI->owner = (Object)__53863540;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_52415480;

   return systemI;
};

SystemI my__interpolator_48667560;

SystemI makemy__interpolator_48667560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48667560 = systemI;
   systemI->owner = (Object)__53863540;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_53978280;

   return systemI;
};

Behavior __48797060;

Behavior make__48797060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48797060 = behavior;
   behavior->owner = (Object)__53863540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900);
   z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->any,z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->any[z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__48797700();

   return behavior;
}

Behavior __48795200;

Behavior make__48795200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48795200 = behavior;
   behavior->owner = (Object)__53863540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__48796980();

   return behavior;
}

Behavior __48793880;

Behavior make__48793880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48793880 = behavior;
   behavior->owner = (Object)__53863540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__48794880();

   return behavior;
}

Behavior __48909420;

Behavior make__48909420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48909420 = behavior;
   behavior->owner = (Object)__53863540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[addr_54013180___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900);
   z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->any,z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->any[z__value_53582260_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[base_53950520___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[next__data_54013260___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[integer__part_21887160___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[interpolated__value_48667920_my__interpolator_58_841_53978280___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__48776060();

   return behavior;
}

Behavior __48909180;

Behavior make__48909180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48909180 = behavior;
   behavior->owner = (Object)__53863540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[base_52505740_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900);
   next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any += 1;
   next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any = realloc(next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any,next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any*sizeof(Object));
next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->any[next__data_52614460_my__lut_58_841_52415480___53863540_func0_58_840_53485960___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__48798400();

   return behavior;
}

Scope make__53863540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53863540 = scope;
   scope->owner = (Object)func0_58_840_53485960;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52614280();
   scope->systemIs[1] = makemy__interpolator_48667560();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53950520();
   scope->inners[1] = makenext__data_54013260();
   scope->inners[2] = makeaddr_54013180();
   scope->inners[3] = makeinteger__part_21887160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48797060();
   scope->behaviors[1] = make__48795200();
   scope->behaviors[2] = make__48793880();
   scope->behaviors[3] = make__48909420();
   scope->behaviors[4] = make__48909180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_53485960() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_53485960 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53582260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53771180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__53863540();

   return systemT;
}