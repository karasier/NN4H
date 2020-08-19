#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_840_47898220;

SignalI z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makez__value_48137800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)func0_58_840_47898220;
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

SignalI a_49851100_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makea_49851100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49851100_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)func0_58_840_47898220;
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

Block __51628000;

void code__51628000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->c_value;
            first = value2integer(make__51703260());
            last = value2integer(make__51703200());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51628000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628000 = block;
   block->owner = (Object)__51627580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628000;

   return block;
};

Block __51627540;

void code__51627540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040,value2integer(make__51702940()),value2integer(make__51702920())));
      set_value_pos(pool_state);
   }
}

Block make__51627540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51627540 = block;
   block->owner = (Object)__51627160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51627540;

   return block;
};

Block __51627100;

void code__51627100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__51702060();
            src1 = make__51702020();
            src2 = make__51702000();
            src3 = make__51701940();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51627100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51627100 = block;
   block->owner = (Object)__51626300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51627100;

   return block;
};

Block __51628880;

void code__51628880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,addr_51773600_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->c_value,z__value_51443280_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,base_51610540_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,next__data_51809940_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,integer__part_47483460_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,a_49851100_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51628880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628880 = block;
   block->owner = (Object)__51670160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628880;

   return block;
};

Block __51628560;

void code__51628560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->c_value,next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040);
      set_value_pos(pool_state);
   }
}

Block make__51628560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51628560 = block;
   block->owner = (Object)__51669900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51628560;

   return block;
};

Value make__51703260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51703200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51702940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51702920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51702060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51702020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51702000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51701940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __50194340;

SignalI base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makebase_50336980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50194340;
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

SignalI next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makenext__data_50422940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50194340;
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

SignalI addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makeaddr_50422840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50194340;
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

SignalI integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040;

SignalI makeinteger__part_50581000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040 = signalI;
   signalI->owner = (Object)__50194340;
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

SystemI my__lut_47659000;

SystemI makemy__lut_47659000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47659000 = systemI;
   systemI->owner = (Object)__50194340;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_841_51777100;

   return systemI;
};

SystemI my__interpolator_47692180;

SystemI makemy__interpolator_47692180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47692180 = systemI;
   systemI->owner = (Object)__50194340;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_841_51081980;

   return systemI;
};

Behavior __51627580;

Behavior make__51627580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51627580 = behavior;
   behavior->owner = (Object)__50194340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040);
   z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->any,z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->any[z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51628000();

   return behavior;
}

Behavior __51627160;

Behavior make__51627160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51627160 = behavior;
   behavior->owner = (Object)__50194340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51627540();

   return behavior;
}

Behavior __51626300;

Behavior make__51626300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51626300 = behavior;
   behavior->owner = (Object)__50194340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51627100();

   return behavior;
}

Behavior __51670160;

Behavior make__51670160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51670160 = behavior;
   behavior->owner = (Object)__50194340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[addr_50422840___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040);
   z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->any,z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->any[z__value_48137800_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[base_50336980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[next__data_50422940___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[integer__part_50581000___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[interpolated__value_47692360_my__interpolator_58_841_51081980___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51628880();

   return behavior;
}

Behavior __51669900;

Behavior make__51669900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51669900 = behavior;
   behavior->owner = (Object)__50194340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[base_46060540_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040);
   next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any += 1;
   next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any = realloc(next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any,next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any*sizeof(Object));
next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->any[next__data_47659160_my__lut_58_841_51777100___50194340_func0_58_840_47898220___46257580______58_840_50470040->num_any-1] = (Object)behavior;
   behavior->block = make__51628560();

   return behavior;
}

Scope make__50194340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50194340 = scope;
   scope->owner = (Object)func0_58_840_47898220;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47659000();
   scope->systemIs[1] = makemy__interpolator_47692180();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50336980();
   scope->inners[1] = makenext__data_50422940();
   scope->inners[2] = makeaddr_50422840();
   scope->inners[3] = makeinteger__part_50581000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51627580();
   scope->behaviors[1] = make__51627160();
   scope->behaviors[2] = make__51626300();
   scope->behaviors[3] = make__51670160();
   scope->behaviors[4] = make__51669900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_840_47898220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_840_47898220 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48137800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49851100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__50194340();

   return systemT;
}