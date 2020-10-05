#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_57684380;

SignalI z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makez__value_57850800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_8400_57684380;
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

SignalI a_57964120_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makea_57964120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_57964120_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_8400_57684380;
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

Block __58932880;

void code__58932880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            first = value2integer(make__58942180());
            last = value2integer(make__58942140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58932880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58932880 = block;
   block->owner = (Object)__58932380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58932880;

   return block;
};

Block __58932300;

void code__58932300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100,value2integer(make__58941980()),value2integer(make__58941960())));
      set_value_pos(pool_state);
   }
}

Block make__58932300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58932300 = block;
   block->owner = (Object)__58932000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58932300;

   return block;
};

Block __58931960;

void code__58931960() {
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
            src0 = make__59006700();
            src1 = make__59006680();
            src2 = make__59006660();
            src3 = make__59006640();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value;
            first = value2integer(make__59006520());
            last = value2integer(make__59006440());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58931960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58931960 = block;
   block->owner = (Object)__58931240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58931960;

   return block;
};

Block __58933120;

void code__58933120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,address_57266420_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,remaining_45285380_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,base_47867460_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,next__data_49153560_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,a_57964120_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58933120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58933120 = block;
   block->owner = (Object)__58948060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58933120;

   return block;
};

Block __58933060;

void code__58933060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->c_value,next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
      set_value_pos(pool_state);
   }
}

Block make__58933060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58933060 = block;
   block->owner = (Object)__58947740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58933060;

   return block;
};

Value make__58942180() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58942140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58941980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58941960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59006700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59006680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59006660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59006640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59006520() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59006440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_47506660;

SignalI base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makebase_48704240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_840_47506660;
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

SignalI next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makenext__data_49232860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_840_47506660;
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

SignalI address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeaddress_49232720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_840_47506660;
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

SignalI remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100;

SignalI makeremaining_49518620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100 = signalI;
   signalI->owner = (Object)func0_58_840_47506660;
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

SystemI my__lut_57702580;

SystemI makemy__lut_57702580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_57702580 = systemI;
   systemI->owner = (Object)func0_58_840_47506660;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_57268920;

   return systemI;
};

SystemI my__interpolator_49497820;

SystemI makemy__interpolator_49497820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_49497820 = systemI;
   systemI->owner = (Object)func0_58_840_47506660;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_59114220;

   return systemI;
};

Behavior __58932380;

Behavior make__58932380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58932380 = behavior;
   behavior->owner = (Object)func0_58_840_47506660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58932880();

   return behavior;
}

Behavior __58932000;

Behavior make__58932000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58932000 = behavior;
   behavior->owner = (Object)func0_58_840_47506660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58932300();

   return behavior;
}

Behavior __58931240;

Behavior make__58931240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58931240 = behavior;
   behavior->owner = (Object)func0_58_840_47506660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[z__value_57850800_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58931960();

   return behavior;
}

Behavior __58948060;

Behavior make__58948060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58948060 = behavior;
   behavior->owner = (Object)func0_58_840_47506660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[address_49232720_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[remaining_49518620_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[base_48704240_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[next__data_49232860_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[interpolated__value_49498960_my__interpolator_58_8410_59114220_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58933120();

   return behavior;
}

Behavior __58947740;

Behavior make__58947740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58947740 = behavior;
   behavior->owner = (Object)func0_58_840_47506660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[base_57513360_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100);
   next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any += 1;
   next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any = realloc(next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any,next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any*sizeof(Object));
next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->any[next__data_57702760_my__lut_58_8410_57268920_func0_58_840_47506660_func0_58_8400_57684380_layer1_58_84_59308340_layer1_58_840_50828740_neural__network_58_84_49127360_neural__network_58_840_56730500______58_84_49103560______58_840_56814100->num_any-1] = (Object)behavior;
   behavior->block = make__58933060();

   return behavior;
}

Scope makefunc0_58_840_47506660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_47506660 = scope;
   scope->owner = (Object)func0_58_8400_57684380;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_57702580();
   scope->systemIs[1] = makemy__interpolator_49497820();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48704240();
   scope->inners[1] = makenext__data_49232860();
   scope->inners[2] = makeaddress_49232720();
   scope->inners[3] = makeremaining_49518620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58932380();
   scope->behaviors[1] = make__58932000();
   scope->behaviors[2] = make__58931240();
   scope->behaviors[3] = make__58948060();
   scope->behaviors[4] = make__58947740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_57684380() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_57684380 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57850800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_57964120();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_47506660();

   return systemT;
}