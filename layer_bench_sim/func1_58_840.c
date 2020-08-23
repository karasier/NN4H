#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_46896420;

SignalI z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makez__value_47853300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func1_58_840_46896420;
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

SignalI a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makea_48046620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func1_58_840_46896420;
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

Block __45709060;

void code__45709060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
            first = value2integer(make__47001840());
            last = value2integer(make__47001820());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__45709060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45709060 = block;
   block->owner = (Object)__45708560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45709060;

   return block;
};

Block __45708420;

void code__45708420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480,value2integer(make__47001480()),value2integer(make__47001460())));
      set_value_pos(pool_state);
   }
}

Block make__45708420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45708420 = block;
   block->owner = (Object)__45707400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45708420;

   return block;
};

Block __45707160;

void code__45707160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__47000440();
            src1 = make__47000360();
            src2 = make__47000340();
            src3 = make__47000300();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__45707160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45707160 = block;
   block->owner = (Object)__45706200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45707160;

   return block;
};

Block __45709500;

void code__45709500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,addr_47951740_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,z__value_52490620_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,base_45506300_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,next__data_46086200_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,integer__part_47643380_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,a_48046620_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__45709500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45709500 = block;
   block->owner = (Object)__46100820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45709500;

   return block;
};

Block __45709280;

void code__45709280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__45709280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45709280 = block;
   block->owner = (Object)__46100560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45709280;

   return block;
};

Value make__47001840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47001820() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47001480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47001460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47000440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47000360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47000340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47000300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope func1_58_84_52062920;

SignalI base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makebase_52195940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func1_58_84_52062920;
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

SignalI next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makenext__data_52282900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func1_58_84_52062920;
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

SignalI addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeaddr_52282800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func1_58_84_52062920;
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

SignalI integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480;

SignalI makeinteger__part_52541460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)func1_58_84_52062920;
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

SystemI my__lut_50197540;

SystemI makemy__lut_50197540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50197540 = systemI;
   systemI->owner = (Object)func1_58_84_52062920;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_47933160;

   return systemI;
};

SystemI my__interpolator_47887800;

SystemI makemy__interpolator_47887800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47887800 = systemI;
   systemI->owner = (Object)func1_58_84_52062920;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52257760;

   return systemI;
};

Behavior __45708560;

Behavior make__45708560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45708560 = behavior;
   behavior->owner = (Object)func1_58_84_52062920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__45709060();

   return behavior;
}

Behavior __45707400;

Behavior make__45707400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45707400 = behavior;
   behavior->owner = (Object)func1_58_84_52062920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__45708420();

   return behavior;
}

Behavior __45706200;

Behavior make__45706200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45706200 = behavior;
   behavior->owner = (Object)func1_58_84_52062920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__45707160();

   return behavior;
}

Behavior __46100820;

Behavior make__46100820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46100820 = behavior;
   behavior->owner = (Object)func1_58_84_52062920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[addr_52282800_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[z__value_47853300_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[base_52195940_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[next__data_52282900_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[integer__part_52541460_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[interpolated__value_47888060_my__interpolator_58_8400_52257760_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__45709500();

   return behavior;
}

Behavior __46100560;

Behavior make__46100560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46100560 = behavior;
   behavior->owner = (Object)func1_58_84_52062920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[base_48173200_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[next__data_50197880_my__lut_58_8400_47933160_func1_58_84_52062920_func1_58_840_46896420_layer0_58_84_48320680_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__45709280();

   return behavior;
}

Scope makefunc1_58_84_52062920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_52062920 = scope;
   scope->owner = (Object)func1_58_840_46896420;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50197540();
   scope->systemIs[1] = makemy__interpolator_47887800();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52195940();
   scope->inners[1] = makenext__data_52282900();
   scope->inners[2] = makeaddr_52282800();
   scope->inners[3] = makeinteger__part_52541460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45708560();
   scope->behaviors[1] = make__45707400();
   scope->behaviors[2] = make__45706200();
   scope->behaviors[3] = make__46100820();
   scope->behaviors[4] = make__46100560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_46896420() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_46896420 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47853300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48046620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_52062920();

   return systemT;
}