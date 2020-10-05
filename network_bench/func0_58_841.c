#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_52897920;

SignalI z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makez__value_42658240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_841_52897920;
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

SignalI a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makea_47733500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_841_52897920;
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

Block __52835400;

void code__52835400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            first = value2integer(make__53056660());
            last = value2integer(make__53056560());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52835400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52835400 = block;
   block->owner = (Object)__52834760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52835400;

   return block;
};

Block __52834720;

void code__52834720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(make__53056040()),value2integer(make__53056020())));
      set_value_pos(pool_state);
   }
}

Block make__52834720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52834720 = block;
   block->owner = (Object)__52834160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52834720;

   return block;
};

Block __52834060;

void code__52834060() {
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
            src0 = make__53054240();
            src1 = make__53054220();
            src2 = make__53054200();
            src3 = make__53054180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            first = value2integer(make__53053820());
            last = value2integer(make__53053780());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52834060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52834060 = block;
   block->owner = (Object)__52831640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52834060;

   return block;
};

Block __52836180;

void code__52836180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,address_50166600_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,remaining_53271460_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,base_45953700_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,next__data_47901680_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52836180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52836180 = block;
   block->owner = (Object)__52898720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52836180;

   return block;
};

Block __52835960;

void code__52835960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52835960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52835960 = block;
   block->owner = (Object)__52898000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52835960;

   return block;
};

Value make__53056660() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53056560() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53056040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53056020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53054240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53054220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53054200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53054180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53053820() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53053780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_48039720;

SignalI base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makebase_49337460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_84_48039720;
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

SignalI next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makenext__data_49502360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_84_48039720;
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

SignalI address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress_49502280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_84_48039720;
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

SignalI remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeremaining_49731260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func0_58_84_48039720;
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

SystemI my__lut_51033880;

SystemI makemy__lut_51033880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_51033880 = systemI;
   systemI->owner = (Object)func0_58_84_48039720;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50431900;

   return systemI;
};

SystemI my__interpolator_48155220;

SystemI makemy__interpolator_48155220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48155220 = systemI;
   systemI->owner = (Object)func0_58_84_48039720;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_52851600;

   return systemI;
};

Behavior __52834760;

Behavior make__52834760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52834760 = behavior;
   behavior->owner = (Object)func0_58_84_48039720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52835400();

   return behavior;
}

Behavior __52834160;

Behavior make__52834160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52834160 = behavior;
   behavior->owner = (Object)func0_58_84_48039720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52834720();

   return behavior;
}

Behavior __52831640;

Behavior make__52831640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52831640 = behavior;
   behavior->owner = (Object)func0_58_84_48039720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52834060();

   return behavior;
}

Behavior __52898720;

Behavior make__52898720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52898720 = behavior;
   behavior->owner = (Object)func0_58_84_48039720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[address_49502280_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[remaining_49731260_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[base_49337460_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[next__data_49502360_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[interpolated__value_48156100_my__interpolator_58_842_52851600_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52836180();

   return behavior;
}

Behavior __52898000;

Behavior make__52898000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52898000 = behavior;
   behavior->owner = (Object)func0_58_84_48039720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[base_50858660_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[next__data_51034060_my__lut_58_842_50431900_func0_58_84_48039720_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52835960();

   return behavior;
}

Scope makefunc0_58_84_48039720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_48039720 = scope;
   scope->owner = (Object)func0_58_841_52897920;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_51033880();
   scope->systemIs[1] = makemy__interpolator_48155220();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49337460();
   scope->inners[1] = makenext__data_49502360();
   scope->inners[2] = makeaddress_49502280();
   scope->inners[3] = makeremaining_49731260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52834760();
   scope->behaviors[1] = make__52834160();
   scope->behaviors[2] = make__52831640();
   scope->behaviors[3] = make__52898720();
   scope->behaviors[4] = make__52898000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_52897920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_52897920 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_42658240();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_47733500();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_48039720();

   return systemT;
}