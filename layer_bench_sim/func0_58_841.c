#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_49114060;

SignalI z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makez__value_49423820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_841_49114060;
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

SignalI a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makea_49682100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_841_49114060;
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

Block __60087880;

void code__60087880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
            first = value2integer(make__60150660());
            last = value2integer(make__60150640());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60087880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60087880 = block;
   block->owner = (Object)__60087500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60087880;

   return block;
};

Block __60087440;

void code__60087440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220,value2integer(make__60150500()),value2integer(make__60150480())));
      set_value_pos(pool_state);
   }
}

Block make__60087440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60087440 = block;
   block->owner = (Object)__60087120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60087440;

   return block;
};

Block __60087080;

void code__60087080() {
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
            src0 = make__60149980();
            src1 = make__60149960();
            src2 = make__60149940();
            src3 = make__60149920();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value;
            first = value2integer(make__60149800());
            last = value2integer(make__60149740());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60087080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60087080 = block;
   block->owner = (Object)__60086620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60087080;

   return block;
};

Block __60088100;

void code__60088100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,address_47881700_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,remaining_52541940_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,base_52620480_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,next__data_52815240_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,a_49682100_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60088100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60088100 = block;
   block->owner = (Object)__60081260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60088100;

   return block;
};

Block __60088040;

void code__60088040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__60088040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60088040 = block;
   block->owner = (Object)__60081100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60088040;

   return block;
};

Value make__60150660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60150640() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60150500() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60150480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60149980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60149960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60149940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60149920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60149800() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60149740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_52300800;

SignalI base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makebase_52384600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_84_52300800;
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

SignalI next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makenext__data_52476300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_84_52300800;
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

SignalI address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeaddress_52476200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_84_52300800;
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

SignalI remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220;

SignalI makeremaining_52535700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)func0_58_84_52300800;
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

SystemI my__lut_49244280;

SystemI makemy__lut_49244280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_49244280 = systemI;
   systemI->owner = (Object)func0_58_84_52300800;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_47845180;

   return systemI;
};

SystemI my__interpolator_53026660;

SystemI makemy__interpolator_53026660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53026660 = systemI;
   systemI->owner = (Object)func0_58_84_52300800;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_52439740;

   return systemI;
};

Behavior __60087500;

Behavior make__60087500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60087500 = behavior;
   behavior->owner = (Object)func0_58_84_52300800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60087880();

   return behavior;
}

Behavior __60087120;

Behavior make__60087120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60087120 = behavior;
   behavior->owner = (Object)func0_58_84_52300800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60087440();

   return behavior;
}

Behavior __60086620;

Behavior make__60086620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60086620 = behavior;
   behavior->owner = (Object)func0_58_84_52300800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[z__value_49423820_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60087080();

   return behavior;
}

Behavior __60081260;

Behavior make__60081260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60081260 = behavior;
   behavior->owner = (Object)func0_58_84_52300800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[address_52476200_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[remaining_52535700_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[base_52384600_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[next__data_52476300_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[interpolated__value_52977720_my__interpolator_58_842_52439740_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60088100();

   return behavior;
}

Behavior __60081100;

Behavior make__60081100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60081100 = behavior;
   behavior->owner = (Object)func0_58_84_52300800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[base_49363460_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[next__data_49245080_my__lut_58_842_47845180_func0_58_84_52300800_func0_58_841_49114060_layer__hidden_58_84_47504000_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__60088040();

   return behavior;
}

Scope makefunc0_58_84_52300800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_52300800 = scope;
   scope->owner = (Object)func0_58_841_49114060;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_49244280();
   scope->systemIs[1] = makemy__interpolator_53026660();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_52384600();
   scope->inners[1] = makenext__data_52476300();
   scope->inners[2] = makeaddress_52476200();
   scope->inners[3] = makeremaining_52535700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60087500();
   scope->behaviors[1] = make__60087120();
   scope->behaviors[2] = make__60086620();
   scope->behaviors[3] = make__60081260();
   scope->behaviors[4] = make__60081100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_49114060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_49114060 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49423820();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_49682100();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_52300800();

   return systemT;
}