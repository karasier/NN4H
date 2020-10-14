#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_8400_57802580;

SignalI z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makez__value_57927400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_8400_57802580;
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

SignalI a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makea_58073560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_8400_57802580;
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

Block __57282760;

void code__57282760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            first = value2integer(make__57368060());
            last = value2integer(make__57368040());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57282760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57282760 = block;
   block->owner = (Object)__57282420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57282760;

   return block;
};

Block __57282380;

void code__57282380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420,value2integer(make__57367880()),value2integer(make__57367860())));
      set_value_pos(pool_state);
   }
}

Block make__57282380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57282380 = block;
   block->owner = (Object)__57282020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57282380;

   return block;
};

Block __57281960;

void code__57281960() {
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
            src0 = make__57367340();
            src1 = make__57367320();
            src2 = make__57367300();
            src3 = make__57367280();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            first = value2integer(make__57367180());
            last = value2integer(make__57367160());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57281960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57281960 = block;
   block->owner = (Object)__57281460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57281960;

   return block;
};

Block __57283020;

void code__57283020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,address_58687520_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,remaining_60160500_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,base_43603720_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,next__data_47725240_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57283020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57283020 = block;
   block->owner = (Object)__57348440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57283020;

   return block;
};

Block __57282940;

void code__57282940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57282940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57282940 = block;
   block->owner = (Object)__57348280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57282940;

   return block;
};

Value make__57368060() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57368040() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57367880() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57367860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57367340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57367320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57367300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57367280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57367180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57367160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_840_57285480;

SignalI base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makebase_57377260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_840_57285480;
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

SignalI next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makenext__data_57584300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_840_57285480;
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

SignalI address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeaddress_57584200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_840_57285480;
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

SignalI remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeremaining_57715520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)func0_58_840_57285480;
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

SystemI my__lut_59080040;

SystemI makemy__lut_59080040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_59080040 = systemI;
   systemI->owner = (Object)func0_58_840_57285480;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8410_58689720;

   return systemI;
};

SystemI my__interpolator_48961000;

SystemI makemy__interpolator_48961000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48961000 = systemI;
   systemI->owner = (Object)func0_58_840_57285480;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8410_59998520;

   return systemI;
};

Behavior __57282420;

Behavior make__57282420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57282420 = behavior;
   behavior->owner = (Object)func0_58_840_57285480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__57282760();

   return behavior;
}

Behavior __57282020;

Behavior make__57282020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57282020 = behavior;
   behavior->owner = (Object)func0_58_840_57285480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__57282380();

   return behavior;
}

Behavior __57281460;

Behavior make__57281460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57281460 = behavior;
   behavior->owner = (Object)func0_58_840_57285480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__57281960();

   return behavior;
}

Behavior __57348440;

Behavior make__57348440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57348440 = behavior;
   behavior->owner = (Object)func0_58_840_57285480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[address_57584200_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[remaining_57715520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_57377260_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_57584300_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[interpolated__value_48961820_my__interpolator_58_8410_59998520_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__57283020();

   return behavior;
}

Behavior __57348280;

Behavior make__57348280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57348280 = behavior;
   behavior->owner = (Object)func0_58_840_57285480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[base_58924160_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[next__data_59080240_my__lut_58_8410_58689720_func0_58_840_57285480_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__57282940();

   return behavior;
}

Scope makefunc0_58_840_57285480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_840_57285480 = scope;
   scope->owner = (Object)func0_58_8400_57802580;
   scope->name = "func0:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_59080040();
   scope->systemIs[1] = makemy__interpolator_48961000();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_57377260();
   scope->inners[1] = makenext__data_57584300();
   scope->inners[2] = makeaddress_57584200();
   scope->inners[3] = makeremaining_57715520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57282420();
   scope->behaviors[1] = make__57282020();
   scope->behaviors[2] = make__57281460();
   scope->behaviors[3] = make__57348440();
   scope->behaviors[4] = make__57348280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_8400_57802580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_8400_57802580 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_57927400();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_58073560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_840_57285480();

   return systemT;
}