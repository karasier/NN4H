#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_49257840;

SignalI z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makez__value_49481260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func1_58_840_49257840;
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

SignalI a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makea_50023520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func1_58_840_49257840;
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

Block __57776760;

void code__57776760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            first = value2integer(make__57858200());
            last = value2integer(make__57858140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57776760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57776760 = block;
   block->owner = (Object)__57776340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57776760;

   return block;
};

Block __57776260;

void code__57776260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800,value2integer(make__57857840()),value2integer(make__57857740())));
      set_value_pos(pool_state);
   }
}

Block make__57776260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57776260 = block;
   block->owner = (Object)__57775880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57776260;

   return block;
};

Block __57775660;

void code__57775660() {
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
            src0 = make__57857160();
            src1 = make__57857140();
            src2 = make__57857120();
            src3 = make__57857100();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value;
            first = value2integer(make__57857000());
            last = value2integer(make__57856980());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57775660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57775660 = block;
   block->owner = (Object)__57774900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57775660;

   return block;
};

Block __57777040;

void code__57777040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,address_53207800_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,remaining_57370760_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,base_57456500_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,next__data_57583000_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,a_50023520_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57777040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57777040 = block;
   block->owner = (Object)__57792080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57777040;

   return block;
};

Block __57776980;

void code__57776980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->c_value,next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
      set_value_pos(pool_state);
   }
}

Block make__57776980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57776980 = block;
   block->owner = (Object)__57791780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57776980;

   return block;
};

Value make__57858200() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57858140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57857840() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57857740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57857160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57857140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57857120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57857100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57857000() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57856980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_50336960;

SignalI base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makebase_50431560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func1_58_84_50336960;
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

SignalI next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makenext__data_50571840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func1_58_84_50336960;
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

SignalI address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeaddress_50571280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func1_58_84_50336960;
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

SignalI remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800;

SignalI makeremaining_50685460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800 = signalI;
   signalI->owner = (Object)func1_58_84_50336960;
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

SystemI my__lut_56115320;

SystemI makemy__lut_56115320() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56115320 = systemI;
   systemI->owner = (Object)func1_58_84_50336960;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53209800;

   return systemI;
};

SystemI my__interpolator_57717660;

SystemI makemy__interpolator_57717660() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_57717660 = systemI;
   systemI->owner = (Object)func1_58_84_50336960;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_57270440;

   return systemI;
};

Behavior __57776340;

Behavior make__57776340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57776340 = behavior;
   behavior->owner = (Object)func1_58_84_50336960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57776760();

   return behavior;
}

Behavior __57775880;

Behavior make__57775880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57775880 = behavior;
   behavior->owner = (Object)func1_58_84_50336960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57776260();

   return behavior;
}

Behavior __57774900;

Behavior make__57774900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57774900 = behavior;
   behavior->owner = (Object)func1_58_84_50336960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[z__value_49481260_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57775660();

   return behavior;
}

Behavior __57792080;

Behavior make__57792080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57792080 = behavior;
   behavior->owner = (Object)func1_58_84_50336960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[address_50571280_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[remaining_50685460_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[base_50431560_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[next__data_50571840_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[interpolated__value_57717860_my__interpolator_58_8400_57270440_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57777040();

   return behavior;
}

Behavior __57791780;

Behavior make__57791780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57791780 = behavior;
   behavior->owner = (Object)func1_58_84_50336960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[base_53244400_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800);
   next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any += 1;
   next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any = realloc(next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any,next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any*sizeof(Object));
next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->any[next__data_56115460_my__lut_58_8400_53209800_func1_58_84_50336960_func1_58_840_49257840_layer0_58_84_49420260_layer0_58_840_58458880_neural__network_58_84_49014260_neural__network_58_840_56289980______58_84_49014960______58_840_56376800->num_any-1] = (Object)behavior;
   behavior->block = make__57776980();

   return behavior;
}

Scope makefunc1_58_84_50336960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_50336960 = scope;
   scope->owner = (Object)func1_58_840_49257840;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56115320();
   scope->systemIs[1] = makemy__interpolator_57717660();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50431560();
   scope->inners[1] = makenext__data_50571840();
   scope->inners[2] = makeaddress_50571280();
   scope->inners[3] = makeremaining_50685460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57776340();
   scope->behaviors[1] = make__57775880();
   scope->behaviors[2] = make__57774900();
   scope->behaviors[3] = make__57792080();
   scope->behaviors[4] = make__57791780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_49257840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_49257840 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_49481260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_50023520();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_50336960();

   return systemT;
}