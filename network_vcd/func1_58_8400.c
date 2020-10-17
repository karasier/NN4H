#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_8400_64135580;

SignalI z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makez__value_64287600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_8400_64135580;
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

SignalI a_64738640_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makea_64738640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_64738640_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_8400_64135580;
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

Block __53553460;

void code__53553460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__53688040());
            last = value2integer(make__53688020());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53553460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53553460 = block;
   block->owner = (Object)__53553100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53553460;

   return block;
};

Block __53553060;

void code__53553060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460,value2integer(make__53687860()),value2integer(make__53687840())));
      set_value_pos(pool_state);
   }
}

Block make__53553060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53553060 = block;
   block->owner = (Object)__53552360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53553060;

   return block;
};

Block __53552320;

void code__53552320() {
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
            src0 = make__53686520();
            src1 = make__53686460();
            src2 = make__53686420();
            src3 = make__53686400();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__53686100());
            last = value2integer(make__53686080());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53552320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53552320 = block;
   block->owner = (Object)__53573980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53552320;

   return block;
};

Block __53554220;

void code__53554220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,address_54640900_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,remaining_61675920_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_61823460_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_61995980_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,a_64738640_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53554220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53554220 = block;
   block->owner = (Object)__53624380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53554220;

   return block;
};

Block __53554060;

void code__53554060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53554060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53554060 = block;
   block->owner = (Object)__53624100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53554060;

   return block;
};

Value make__53688040() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53688020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53687860() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53687840() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53686520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53686460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53686420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53686400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53686100() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53686080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_840_54933600;

SignalI base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_55480100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_840_54933600;
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

SignalI next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_55739420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_840_54933600;
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

SignalI address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeaddress_55739320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_840_54933600;
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

SignalI remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_55918640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func1_58_840_54933600;
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

SystemI my__lut_55429200;

SystemI makemy__lut_55429200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_55429200 = systemI;
   systemI->owner = (Object)func1_58_840_54933600;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8420_54648000;

   return systemI;
};

SystemI my__interpolator_62110700;

SystemI makemy__interpolator_62110700() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_62110700 = systemI;
   systemI->owner = (Object)func1_58_840_54933600;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8420_61514160;

   return systemI;
};

Behavior __53553100;

Behavior make__53553100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53553100 = behavior;
   behavior->owner = (Object)func1_58_840_54933600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53553460();

   return behavior;
}

Behavior __53552360;

Behavior make__53552360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53552360 = behavior;
   behavior->owner = (Object)func1_58_840_54933600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53553060();

   return behavior;
}

Behavior __53573980;

Behavior make__53573980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53573980 = behavior;
   behavior->owner = (Object)func1_58_840_54933600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_64287600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53552320();

   return behavior;
}

Behavior __53624380;

Behavior make__53624380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53624380 = behavior;
   behavior->owner = (Object)func1_58_840_54933600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_55739320_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_55918640_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_55480100_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_55739420_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[interpolated__value_62110840_my__interpolator_58_8420_61514160_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53554220();

   return behavior;
}

Behavior __53624100;

Behavior make__53624100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53624100 = behavior;
   behavior->owner = (Object)func1_58_840_54933600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_54855140_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_55429660_my__lut_58_8420_54648000_func1_58_840_54933600_func1_58_8400_64135580_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53554060();

   return behavior;
}

Scope makefunc1_58_840_54933600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_840_54933600 = scope;
   scope->owner = (Object)func1_58_8400_64135580;
   scope->name = "func1:T0";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_55429200();
   scope->systemIs[1] = makemy__interpolator_62110700();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_55480100();
   scope->inners[1] = makenext__data_55739420();
   scope->inners[2] = makeaddress_55739320();
   scope->inners[3] = makeremaining_55918640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53553100();
   scope->behaviors[1] = make__53552360();
   scope->behaviors[2] = make__53573980();
   scope->behaviors[3] = make__53624380();
   scope->behaviors[4] = make__53624100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_8400_64135580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_8400_64135580 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T00";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_64287600();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_64738640();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_840_54933600();

   return systemT;
}