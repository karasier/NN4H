#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_59180820;

SignalI z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makez__value_59299060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func1_58_840_59180820;
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

SignalI a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makea_59345400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func1_58_840_59180820;
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

Block __49895500;

void code__49895500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            first = value2integer(make__53617560());
            last = value2integer(make__53617520());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49895500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49895500 = block;
   block->owner = (Object)__49894980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49895500;

   return block;
};

Block __49894940;

void code__49894940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(make__53617280()),value2integer(make__53617260())));
      set_value_pos(pool_state);
   }
}

Block make__49894940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49894940 = block;
   block->owner = (Object)__49894680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49894940;

   return block;
};

Block __49894640;

void code__49894640() {
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
            src0 = make__54124300();
            src1 = make__54124280();
            src2 = make__54124240();
            src3 = make__54124220();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            first = value2integer(make__54124120());
            last = value2integer(make__54124080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49894640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49894640 = block;
   block->owner = (Object)__49893980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49894640;

   return block;
};

Block __49895820;

void code__49895820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,address_53298740_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,remaining_52374360_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,base_52625640_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,next__data_52798240_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49895820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49895820 = block;
   block->owner = (Object)__53622920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49895820;

   return block;
};

Block __49895740;

void code__49895740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49895740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49895740 = block;
   block->owner = (Object)__53622700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49895740;

   return block;
};

Value make__53617560() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53617520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53617280() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53617260() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54124300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54124280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54124240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54124220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54124120() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54124080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_47729080;

SignalI base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makebase_48054900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func1_58_84_47729080;
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

SignalI next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makenext__data_49281760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func1_58_84_47729080;
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

SignalI address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress_49281220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func1_58_84_47729080;
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

SignalI remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeremaining_49631200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)func1_58_84_47729080;
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

SystemI my__lut_47920620;

SystemI makemy__lut_47920620() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47920620 = systemI;
   systemI->owner = (Object)func1_58_84_47729080;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53302080;

   return systemI;
};

SystemI my__interpolator_53069480;

SystemI makemy__interpolator_53069480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_53069480 = systemI;
   systemI->owner = (Object)func1_58_84_47729080;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52059820;

   return systemI;
};

Behavior __49894980;

Behavior make__49894980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49894980 = behavior;
   behavior->owner = (Object)func1_58_84_47729080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__49895500();

   return behavior;
}

Behavior __49894680;

Behavior make__49894680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49894680 = behavior;
   behavior->owner = (Object)func1_58_84_47729080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__49894940();

   return behavior;
}

Behavior __49893980;

Behavior make__49893980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49893980 = behavior;
   behavior->owner = (Object)func1_58_84_47729080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__49894640();

   return behavior;
}

Behavior __53622920;

Behavior make__53622920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53622920 = behavior;
   behavior->owner = (Object)func1_58_84_47729080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[address_49281220_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[remaining_49631200_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[base_48054900_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[next__data_49281760_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[interpolated__value_53069740_my__interpolator_58_8400_52059820_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__49895820();

   return behavior;
}

Behavior __53622700;

Behavior make__53622700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53622700 = behavior;
   behavior->owner = (Object)func1_58_84_47729080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[base_45856560_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[next__data_47920820_my__lut_58_8400_53302080_func1_58_84_47729080_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__49895740();

   return behavior;
}

Scope makefunc1_58_84_47729080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_47729080 = scope;
   scope->owner = (Object)func1_58_840_59180820;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47920620();
   scope->systemIs[1] = makemy__interpolator_53069480();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48054900();
   scope->inners[1] = makenext__data_49281760();
   scope->inners[2] = makeaddress_49281220();
   scope->inners[3] = makeremaining_49631200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49894980();
   scope->behaviors[1] = make__49894680();
   scope->behaviors[2] = make__49893980();
   scope->behaviors[3] = make__53622920();
   scope->behaviors[4] = make__53622700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_59180820() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_59180820 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_59299060();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_59345400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_47729080();

   return systemT;
}