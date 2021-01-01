#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_58579940;

SignalI z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makez__value_58718880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_841_58579940;
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

SignalI a_48011940_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makea_48011940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48011940_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_841_58579940;
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

Block __56262240;

void code__56262240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            first = value2integer(make__56358120());
            last = value2integer(make__56358080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56262240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56262240 = block;
   block->owner = (Object)__56261780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56262240;

   return block;
};

Block __56261740;

void code__56261740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680,value2integer(make__56357720()),value2integer(make__56357680())));
      set_value_pos(pool_state);
   }
}

Block make__56261740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56261740 = block;
   block->owner = (Object)__56261240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56261740;

   return block;
};

Block __56261200;

void code__56261200() {
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
            src0 = make__56357140();
            src1 = make__56357120();
            src2 = make__56357080();
            src3 = make__56357040();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            first = value2integer(make__56356940());
            last = value2integer(make__56356880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56261200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56261200 = block;
   block->owner = (Object)__56260420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56261200;

   return block;
};

Block __56172640;

void code__56172640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,address_50688920_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,base_56140180_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,next__data_56256420_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,remaining_56356280_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,a_48011940_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56172640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56172640 = block;
   block->owner = (Object)__56324160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56172640;

   return block;
};

Block __56172580;

void code__56172580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56172580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56172580 = block;
   block->owner = (Object)__56324000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56172580;

   return block;
};

Value make__56358120() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56358080() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56357720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56357680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56357140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56357120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56357080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56357040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56356940() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56356880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_50262920;

SignalI base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makebase_50013040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_84_50262920;
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

SignalI next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makenext__data_51028800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_84_50262920;
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

SignalI address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeaddress_51028720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_84_50262920;
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

SignalI remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeremaining_51303880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_84_50262920;
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

SignalI change_52500180_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makechange_52500180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_52500180_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)func0_58_84_50262920;
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

SystemI my__lut_50785540;

SystemI makemy__lut_50785540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_50785540 = systemI;
   systemI->owner = (Object)func0_58_84_50262920;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_50668220;

   return systemI;
};

SystemI my__interpolator_56472400;

SystemI makemy__interpolator_56472400() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_56472400 = systemI;
   systemI->owner = (Object)func0_58_84_50262920;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_56025740;

   return systemI;
};

Behavior __56261780;

Behavior make__56261780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56261780 = behavior;
   behavior->owner = (Object)func0_58_84_50262920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56262240();

   return behavior;
}

Behavior __56261240;

Behavior make__56261240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56261240 = behavior;
   behavior->owner = (Object)func0_58_84_50262920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56261740();

   return behavior;
}

Behavior __56260420;

Behavior make__56260420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56260420 = behavior;
   behavior->owner = (Object)func0_58_84_50262920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[z__value_58718880_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56261200();

   return behavior;
}

Behavior __56324160;

Behavior make__56324160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56324160 = behavior;
   behavior->owner = (Object)func0_58_84_50262920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[address_51028720_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_50013040_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_51028800_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[remaining_51303880_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[interpolated__value_56472540_my__interpolator_58_842_56025740_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56172640();

   return behavior;
}

Behavior __56324000;

Behavior make__56324000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56324000 = behavior;
   behavior->owner = (Object)func0_58_84_50262920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[base_50383280_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[next__data_50785900_my__lut_58_842_50668220_func0_58_84_50262920_func0_58_841_58579940_layer0_58_84_49059500_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__56172580();

   return behavior;
}

Scope makefunc0_58_84_50262920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_50262920 = scope;
   scope->owner = (Object)func0_58_841_58579940;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_50785540();
   scope->systemIs[1] = makemy__interpolator_56472400();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_50013040();
   scope->inners[1] = makenext__data_51028800();
   scope->inners[2] = makeaddress_51028720();
   scope->inners[3] = makeremaining_51303880();
   scope->inners[4] = makechange_52500180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56261780();
   scope->behaviors[1] = make__56261240();
   scope->behaviors[2] = make__56260420();
   scope->behaviors[3] = make__56324160();
   scope->behaviors[4] = make__56324000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_58579940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_58579940 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_58718880();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48011940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_50262920();

   return systemT;
}