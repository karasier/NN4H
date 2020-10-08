#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0__0_58_840_51007340;

SignalI z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makez__value_51173120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__0_58_840_51007340;
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

SignalI a_51242540_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makea_51242540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_51242540_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__0_58_840_51007340;
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

Block __51171840;

void code__51171840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
            first = value2integer(make__51246700());
            last = value2integer(make__51246660());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51171840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51171840 = block;
   block->owner = (Object)__51171400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51171840;

   return block;
};

Block __51171340;

void code__51171340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320,value2integer(make__51246480()),value2integer(make__51246460())));
      set_value_pos(pool_state);
   }
}

Block make__51171340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51171340 = block;
   block->owner = (Object)__51170800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51171340;

   return block;
};

Block __51170660;

void code__51170660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__51245520();
            src1 = make__51245500();
            src2 = make__51245340();
            src3 = make__51245300();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value;
            first = value2integer(make__51245160());
            last = value2integer(make__51245140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51170660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51170660 = block;
   block->owner = (Object)__51169960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51170660;

   return block;
};

Block __51172240;

void code__51172240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,address_50244260_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,remaining_51812300_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,base_51907840_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,next__data_51970600_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,a_51242540_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51172240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51172240 = block;
   block->owner = (Object)__51216740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51172240;

   return block;
};

Block __51172060;

void code__51172060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->c_value,next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
      set_value_pos(pool_state);
   }
}

Block make__51172060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51172060 = block;
   block->owner = (Object)__51216440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51172060;

   return block;
};

Value make__51246700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51246660() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51246480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51246460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51245520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51245500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51245340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51245300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51245160() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51245140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0__0_58_84_48189080;

SignalI base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makebase_43321300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__0_58_84_48189080;
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

SignalI next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makenext__data_45334600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__0_58_84_48189080;
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

SignalI address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makeaddress_45424440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__0_58_84_48189080;
   signalI->name = "address";
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

SignalI remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320;

SignalI makeremaining_45728720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320 = signalI;
   signalI->owner = (Object)func0__0_58_84_48189080;
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

SystemI my__lut_50426900;

SystemI makemy__lut_50426900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50426900 = systemI;
   systemI->owner = (Object)func0__0_58_84_48189080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50246160;

   return systemI;
};

SystemI my__interpolator_52074120;

SystemI makemy__interpolator_52074120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52074120 = systemI;
   systemI->owner = (Object)func0__0_58_84_48189080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_51726820;

   return systemI;
};

Behavior __51171400;

Behavior make__51171400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51171400 = behavior;
   behavior->owner = (Object)func0__0_58_84_48189080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51171840();

   return behavior;
}

Behavior __51170800;

Behavior make__51170800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51170800 = behavior;
   behavior->owner = (Object)func0__0_58_84_48189080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51171340();

   return behavior;
}

Behavior __51169960;

Behavior make__51169960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51169960 = behavior;
   behavior->owner = (Object)func0__0_58_84_48189080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[z__value_51173120_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51170660();

   return behavior;
}

Behavior __51216740;

Behavior make__51216740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51216740 = behavior;
   behavior->owner = (Object)func0__0_58_84_48189080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[address_45424440_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[remaining_45728720_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[base_43321300_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[next__data_45334600_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[interpolated__value_52074260_my__interpolator_58_842_51726820_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51172240();

   return behavior;
}

Behavior __51216440;

Behavior make__51216440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51216440 = behavior;
   behavior->owner = (Object)func0__0_58_84_48189080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[base_50331520_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320);
   next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any += 1;
   next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any = realloc(next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any,next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any*sizeof(Object));
next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->any[next__data_50427040_my__lut_58_842_50246160_func0__0_58_84_48189080_func0__0_58_840_51007340______58_84_45467980______58_840_50983320->num_any-1] = (Object)behavior;
   behavior->block = make__51172060();

   return behavior;
}

Scope makefunc0__0_58_84_48189080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0__0_58_84_48189080 = scope;
   scope->owner = (Object)func0__0_58_840_51007340;
   scope->name = "func0_0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50426900();
   scope->systemIs[1] = makemy__interpolator_52074120();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_43321300();
   scope->inners[1] = makenext__data_45334600();
   scope->inners[2] = makeaddress_45424440();
   scope->inners[3] = makeremaining_45728720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51171400();
   scope->behaviors[1] = make__51170800();
   scope->behaviors[2] = make__51169960();
   scope->behaviors[3] = make__51216740();
   scope->behaviors[4] = make__51216440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0__0_58_840_51007340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0__0_58_840_51007340 = systemT;
systemT->owner = NULL;
   systemT->name = "func0_0:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_51173120();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_51242540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0__0_58_84_48189080();

   return systemT;
}