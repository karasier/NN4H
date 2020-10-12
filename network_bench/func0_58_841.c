#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49015620;

SignalI z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makez__value_49291480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_841_49015620;
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

SignalI a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makea_49243180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_841_49015620;
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

Block __56533120;

void code__56533120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            first = value2integer(make__56567780());
            last = value2integer(make__56567760());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56533120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56533120 = block;
   block->owner = (Object)__56557340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56533120;

   return block;
};

Block __56557300;

void code__56557300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640,value2integer(make__56567480()),value2integer(make__56567460())));
      set_value_pos(pool_state);
   }
}

Block make__56557300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56557300 = block;
   block->owner = (Object)__56557040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56557300;

   return block;
};

Block __56557000;

void code__56557000() {
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
            src0 = make__56566640();
            src1 = make__56566600();
            src2 = make__56566580();
            src3 = make__56566560();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value;
            first = value2integer(make__56566440());
            last = value2integer(make__56566420());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56557000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56557000 = block;
   block->owner = (Object)__56556300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56557000;

   return block;
};

Block __56533380;

void code__56533380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,address_49410620_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,remaining_47699900_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,base_49020000_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,next__data_49998480_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,a_49243180_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56533380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56533380 = block;
   block->owner = (Object)__56573240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56533380;

   return block;
};

Block __56533320;

void code__56533320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->c_value,next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
      set_value_pos(pool_state);
   }
}

Block make__56533320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56533320 = block;
   block->owner = (Object)__56573000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56533320;

   return block;
};

Value make__56567780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56567760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56567480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56567460() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56566640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56566600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56566580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56566560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56566440() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56566420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_50327600;

SignalI base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makebase_50409380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_84_50327600;
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

SignalI next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makenext__data_50492900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_84_50327600;
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

SignalI address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeaddress_50492740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_84_50327600;
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

SignalI remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640;

SignalI makeremaining_50574260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640 = signalI;
   signalI->owner = (Object)func0_58_84_50327600;
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

SystemI my__lut_50094600;

SystemI makemy__lut_50094600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50094600 = systemI;
   systemI->owner = (Object)func0_58_84_50327600;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_49413680;

   return systemI;
};

SystemI my__interpolator_50099720;

SystemI makemy__interpolator_50099720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_50099720 = systemI;
   systemI->owner = (Object)func0_58_84_50327600;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_44662500;

   return systemI;
};

Behavior __56557340;

Behavior make__56557340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56557340 = behavior;
   behavior->owner = (Object)func0_58_84_50327600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56533120();

   return behavior;
}

Behavior __56557040;

Behavior make__56557040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56557040 = behavior;
   behavior->owner = (Object)func0_58_84_50327600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56557300();

   return behavior;
}

Behavior __56556300;

Behavior make__56556300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56556300 = behavior;
   behavior->owner = (Object)func0_58_84_50327600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[z__value_49291480_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56557000();

   return behavior;
}

Behavior __56573240;

Behavior make__56573240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56573240 = behavior;
   behavior->owner = (Object)func0_58_84_50327600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[address_50492740_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[remaining_50574260_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[base_50409380_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[next__data_50492900_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[interpolated__value_50099960_my__interpolator_58_842_44662500_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56533380();

   return behavior;
}

Behavior __56573000;

Behavior make__56573000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56573000 = behavior;
   behavior->owner = (Object)func0_58_84_50327600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[base_49972380_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640);
   next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any += 1;
   next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any = realloc(next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any,next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any*sizeof(Object));
next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->any[next__data_50094780_my__lut_58_842_49413680_func0_58_84_50327600_func0_58_841_49015620_layer0_58_84_42172200_layer0_58_840_57916920_neural__network_58_84_50661100_neural__network_58_840_50526860______58_84_50661800______58_840_50692640->num_any-1] = (Object)behavior;
   behavior->block = make__56533320();

   return behavior;
}

Scope makefunc0_58_84_50327600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_50327600 = scope;
   scope->owner = (Object)func0_58_841_49015620;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50094600();
   scope->systemIs[1] = makemy__interpolator_50099720();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50409380();
   scope->inners[1] = makenext__data_50492900();
   scope->inners[2] = makeaddress_50492740();
   scope->inners[3] = makeremaining_50574260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56557340();
   scope->behaviors[1] = make__56557040();
   scope->behaviors[2] = make__56556300();
   scope->behaviors[3] = make__56573240();
   scope->behaviors[4] = make__56573000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49015620() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49015620 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49291480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49243180();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_50327600();

   return systemT;
}