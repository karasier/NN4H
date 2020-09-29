#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_50074180;

SignalI z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makez__value_50220140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_841_50074180;
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

SignalI a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makea_50337620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_841_50074180;
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

Block __57670520;

void code__57670520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            first = value2integer(make__57680160());
            last = value2integer(make__57680140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57670520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57670520 = block;
   block->owner = (Object)__57670160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57670520;

   return block;
};

Block __57670100;

void code__57670100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800,value2integer(make__57679980()),value2integer(make__57679960())));
      set_value_pos(pool_state);
   }
}

Block make__57670100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57670100 = block;
   block->owner = (Object)__57669640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57670100;

   return block;
};

Block __57669580;

void code__57669580() {
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
            src0 = make__57720300();
            src1 = make__57720280();
            src2 = make__57720260();
            src3 = make__57720240();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            first = value2integer(make__57720060());
            last = value2integer(make__57720040());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57669580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57669580 = block;
   block->owner = (Object)__57669020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57669580;

   return block;
};

Block __57670880;

void code__57670880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,address_50288820_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,remaining_50417800_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,base_50672060_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,next__data_50949580_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,a_50337620_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57670880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57670880 = block;
   block->owner = (Object)__57685820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57670880;

   return block;
};

Block __57670820;

void code__57670820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57670820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57670820 = block;
   block->owner = (Object)__57685580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57670820;

   return block;
};

Value make__57680160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57680140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57679980() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57679960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57720300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57720280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57720260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57720240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57720060() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57720040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_50948520;

SignalI base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makebase_51048600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_84_50948520;
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

SignalI next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makenext__data_44249820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_84_50948520;
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

SignalI address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress_44249680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_84_50948520;
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

SignalI remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeremaining_47378440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func0_58_84_50948520;
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

SystemI my__lut_50488600;

SystemI makemy__lut_50488600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50488600 = systemI;
   systemI->owner = (Object)func0_58_84_50948520;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50267260;

   return systemI;
};

SystemI my__interpolator_44400260;

SystemI makemy__interpolator_44400260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_44400260 = systemI;
   systemI->owner = (Object)func0_58_84_50948520;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_50224940;

   return systemI;
};

Behavior __57670160;

Behavior make__57670160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57670160 = behavior;
   behavior->owner = (Object)func0_58_84_50948520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57670520();

   return behavior;
}

Behavior __57669640;

Behavior make__57669640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57669640 = behavior;
   behavior->owner = (Object)func0_58_84_50948520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57670100();

   return behavior;
}

Behavior __57669020;

Behavior make__57669020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57669020 = behavior;
   behavior->owner = (Object)func0_58_84_50948520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[z__value_50220140_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57669580();

   return behavior;
}

Behavior __57685820;

Behavior make__57685820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57685820 = behavior;
   behavior->owner = (Object)func0_58_84_50948520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_44249680_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[remaining_47378440_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[base_51048600_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[next__data_44249820_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[interpolated__value_44444220_my__interpolator_58_842_50224940_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57670880();

   return behavior;
}

Behavior __57685580;

Behavior make__57685580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57685580 = behavior;
   behavior->owner = (Object)func0_58_84_50948520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[base_50366560_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[next__data_50488940_my__lut_58_842_50267260_func0_58_84_50948520_func0_58_841_50074180_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57670820();

   return behavior;
}

Scope makefunc0_58_84_50948520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_50948520 = scope;
   scope->owner = (Object)func0_58_841_50074180;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50488600();
   scope->systemIs[1] = makemy__interpolator_44400260();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_51048600();
   scope->inners[1] = makenext__data_44249820();
   scope->inners[2] = makeaddress_44249680();
   scope->inners[3] = makeremaining_47378440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57670160();
   scope->behaviors[1] = make__57669640();
   scope->behaviors[2] = make__57669020();
   scope->behaviors[3] = make__57685820();
   scope->behaviors[4] = make__57685580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_50074180() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_50074180 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_50220140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50337620();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_50948520();

   return systemT;
}