#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_49329340;

SignalI z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makez__value_49567840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func1_58_840_49329340;
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

SignalI a_50185400_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makea_50185400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50185400_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func1_58_840_49329340;
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

Block __58353020;

void code__58353020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            first = value2integer(make__58403780());
            last = value2integer(make__58403740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58353020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58353020 = block;
   block->owner = (Object)__58352700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58353020;

   return block;
};

Block __58352660;

void code__58352660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100,value2integer(make__58403480()),value2integer(make__58403420())));
      set_value_pos(pool_state);
   }
}

Block make__58352660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58352660 = block;
   block->owner = (Object)__58352260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58352660;

   return block;
};

Block __58352220;

void code__58352220() {
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
            src0 = make__58402380();
            src1 = make__58402340();
            src2 = make__58402320();
            src3 = make__58402260();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            first = value2integer(make__58401820());
            last = value2integer(make__58401800());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58352220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58352220 = block;
   block->owner = (Object)__58351640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58352220;

   return block;
};

Block __58353840;

void code__58353840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,address_52292620_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,remaining_57586140_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,base_57696500_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,next__data_57798360_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,a_50185400_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58353840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58353840 = block;
   block->owner = (Object)__58368640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58353840;

   return block;
};

Block __58353720;

void code__58353720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58353720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58353720 = block;
   block->owner = (Object)__58368460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58353720;

   return block;
};

Value make__58403780() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58403740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58403480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58403420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58402380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58402340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58402320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58402260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58401820() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58401800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_50474580;

SignalI base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makebase_50570680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func1_58_84_50474580;
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

SignalI next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makenext__data_50710460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func1_58_84_50474580;
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

SignalI address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeaddress_50710380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func1_58_84_50474580;
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

SignalI remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeremaining_50824520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func1_58_84_50474580;
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

SystemI my__lut_56281600;

SystemI makemy__lut_56281600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56281600 = systemI;
   systemI->owner = (Object)func1_58_84_50474580;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_52294620;

   return systemI;
};

SystemI my__interpolator_57933020;

SystemI makemy__interpolator_57933020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57933020 = systemI;
   systemI->owner = (Object)func1_58_84_50474580;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_57485840;

   return systemI;
};

Behavior __58352700;

Behavior make__58352700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58352700 = behavior;
   behavior->owner = (Object)func1_58_84_50474580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58353020();

   return behavior;
}

Behavior __58352260;

Behavior make__58352260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58352260 = behavior;
   behavior->owner = (Object)func1_58_84_50474580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58352660();

   return behavior;
}

Behavior __58351640;

Behavior make__58351640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58351640 = behavior;
   behavior->owner = (Object)func1_58_84_50474580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[z__value_49567840_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58352220();

   return behavior;
}

Behavior __58368640;

Behavior make__58368640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58368640 = behavior;
   behavior->owner = (Object)func1_58_84_50474580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[address_50710380_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[remaining_50824520_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[base_50570680_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[next__data_50710460_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[interpolated__value_57933200_my__interpolator_58_8400_57485840_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58353840();

   return behavior;
}

Behavior __58368460;

Behavior make__58368460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58368460 = behavior;
   behavior->owner = (Object)func1_58_84_50474580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[base_56220520_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[next__data_56281740_my__lut_58_8400_52294620_func1_58_84_50474580_func1_58_840_49329340_layer0_58_84_49500340_layer0_58_840_58690600_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58353720();

   return behavior;
}

Scope makefunc1_58_84_50474580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_50474580 = scope;
   scope->owner = (Object)func1_58_840_49329340;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56281600();
   scope->systemIs[1] = makemy__interpolator_57933020();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50570680();
   scope->inners[1] = makenext__data_50710460();
   scope->inners[2] = makeaddress_50710380();
   scope->inners[3] = makeremaining_50824520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58352700();
   scope->behaviors[1] = make__58352260();
   scope->behaviors[2] = make__58351640();
   scope->behaviors[3] = make__58368640();
   scope->behaviors[4] = make__58368460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_49329340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_49329340 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49567840();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50185400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_50474580();

   return systemT;
}