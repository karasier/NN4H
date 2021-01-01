#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_55628360;

SignalI z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makez__value_55982520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_840_55628360;
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

SignalI a_56091720_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makea_56091720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_56091720_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_840_55628360;
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

Block __56565320;

void code__56565320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            first = value2integer(make__56677260());
            last = value2integer(make__56677240());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56565320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56565320 = block;
   block->owner = (Object)__56564880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56565320;

   return block;
};

Block __56564820;

void code__56564820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680,value2integer(make__56676700()),value2integer(make__56676680())));
      set_value_pos(pool_state);
   }
}

Block make__56564820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56564820 = block;
   block->owner = (Object)__56564360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56564820;

   return block;
};

Block __56564280;

void code__56564280() {
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
            src0 = make__56675760();
            src1 = make__56675740();
            src2 = make__56675720();
            src3 = make__56675700();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            first = value2integer(make__56675600());
            last = value2integer(make__56675580());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56564280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56564280 = block;
   block->owner = (Object)__56563580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56564280;

   return block;
};

Block __56467560;

void code__56467560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,address_56158520_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,base_57767200_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,next__data_57953540_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,remaining_58033400_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,a_56091720_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56467560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56467560 = block;
   block->owner = (Object)__56586840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56467560;

   return block;
};

Block __56467460;

void code__56467460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56467460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56467460 = block;
   block->owner = (Object)__56586600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56467460;

   return block;
};

Value make__56677260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56677240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56676700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56676680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56675760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56675740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56675720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56675700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56675600() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56675580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_48006340;

SignalI base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makebase_49054140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_84_48006340;
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

SignalI next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makenext__data_49329060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_84_48006340;
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

SignalI address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeaddress_49328900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_84_48006340;
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

SignalI remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeremaining_49590920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_84_48006340;
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

SignalI change_49440880_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makechange_49440880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_49440880_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func1_58_84_48006340;
   signalI->name = "change";
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

SystemI my__lut_56441060;

SystemI makemy__lut_56441060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_56441060 = systemI;
   systemI->owner = (Object)func1_58_84_48006340;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_56160720;

   return systemI;
};

SystemI my__interpolator_58162080;

SystemI makemy__interpolator_58162080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_58162080 = systemI;
   systemI->owner = (Object)func1_58_84_48006340;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_57582980;

   return systemI;
};

Behavior __56564880;

Behavior make__56564880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56564880 = behavior;
   behavior->owner = (Object)func1_58_84_48006340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56565320();

   return behavior;
}

Behavior __56564360;

Behavior make__56564360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56564360 = behavior;
   behavior->owner = (Object)func1_58_84_48006340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56564820();

   return behavior;
}

Behavior __56563580;

Behavior make__56563580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56563580 = behavior;
   behavior->owner = (Object)func1_58_84_48006340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[z__value_55982520_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56564280();

   return behavior;
}

Behavior __56586840;

Behavior make__56586840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56586840 = behavior;
   behavior->owner = (Object)func1_58_84_48006340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_49328900_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_49054140_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_49329060_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[remaining_49590920_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[interpolated__value_58162220_my__interpolator_58_8400_57582980_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56467560();

   return behavior;
}

Behavior __56586600;

Behavior make__56586600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56586600 = behavior;
   behavior->owner = (Object)func1_58_84_48006340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_56271140_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_56441200_my__lut_58_8400_56160720_func1_58_84_48006340_func1_58_840_55628360_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56467460();

   return behavior;
}

Scope makefunc1_58_84_48006340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_48006340 = scope;
   scope->owner = (Object)func1_58_840_55628360;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_56441060();
   scope->systemIs[1] = makemy__interpolator_58162080();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_49054140();
   scope->inners[1] = makenext__data_49329060();
   scope->inners[2] = makeaddress_49328900();
   scope->inners[3] = makeremaining_49590920();
   scope->inners[4] = makechange_49440880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56564880();
   scope->behaviors[1] = make__56564360();
   scope->behaviors[2] = make__56563580();
   scope->behaviors[3] = make__56586840();
   scope->behaviors[4] = make__56586600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_55628360() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_55628360 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_55982520();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_56091720();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_48006340();

   return systemT;
}