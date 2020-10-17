#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func2_58_840_62634860;

SignalI z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makez__value_63014140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func2_58_840_62634860;
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

SignalI a_63117160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makea_63117160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_63117160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func2_58_840_62634860;
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

Block __53883320;

void code__53883320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__54003820());
            last = value2integer(make__54003760());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53883320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53883320 = block;
   block->owner = (Object)__53882200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53883320;

   return block;
};

Block __53882020;

void code__53882020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460,value2integer(make__54003480()),value2integer(make__54003420())));
      set_value_pos(pool_state);
   }
}

Block make__53882020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53882020 = block;
   block->owner = (Object)__53880640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53882020;

   return block;
};

Block __53880400;

void code__53880400() {
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
            src0 = make__54041960();
            src1 = make__54041920();
            src2 = make__54041880();
            src3 = make__54041840();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value;
            first = value2integer(make__54041600());
            last = value2integer(make__54041500());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53880400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53880400 = block;
   block->owner = (Object)__53896960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53880400;

   return block;
};

Block __53883780;

void code__53883780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,address_65150820_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,remaining_54176840_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_54376340_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_54708620_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,a_63117160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53883780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53883780 = block;
   block->owner = (Object)__53989720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53883780;

   return block;
};

Block __53883700;

void code__53883700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->c_value,next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
      set_value_pos(pool_state);
   }
}

Block make__53883700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53883700 = block;
   block->owner = (Object)__53989400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53883700;

   return block;
};

Value make__54003820() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54003760() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54003480() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54003420() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54041960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54041920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54041880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54041840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54041600() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54041500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func2_58_84_64738160;

SignalI base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makebase_64852740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func2_58_84_64738160;
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

SignalI next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makenext__data_64918540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func2_58_84_64738160;
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

SignalI address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeaddress_64918400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func2_58_84_64738160;
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

SignalI remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460;

SignalI makeremaining_65016980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460 = signalI;
   signalI->owner = (Object)func2_58_84_64738160;
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

SystemI my__lut_65309940;

SystemI makemy__lut_65309940() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_65309940 = systemI;
   systemI->owner = (Object)func2_58_84_64738160;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8430_65128600;

   return systemI;
};

SystemI my__interpolator_55010000;

SystemI makemy__interpolator_55010000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_55010000 = systemI;
   systemI->owner = (Object)func2_58_84_64738160;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8430_53880060;

   return systemI;
};

Behavior __53882200;

Behavior make__53882200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53882200 = behavior;
   behavior->owner = (Object)func2_58_84_64738160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53883320();

   return behavior;
}

Behavior __53880640;

Behavior make__53880640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53880640 = behavior;
   behavior->owner = (Object)func2_58_84_64738160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53882020();

   return behavior;
}

Behavior __53896960;

Behavior make__53896960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53896960 = behavior;
   behavior->owner = (Object)func2_58_84_64738160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[z__value_63014140_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53880400();

   return behavior;
}

Behavior __53989720;

Behavior make__53989720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53989720 = behavior;
   behavior->owner = (Object)func2_58_84_64738160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[address_64918400_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[remaining_65016980_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_64852740_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_64918540_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[interpolated__value_55010660_my__interpolator_58_8430_53880060_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53883780();

   return behavior;
}

Behavior __53989400;

Behavior make__53989400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53989400 = behavior;
   behavior->owner = (Object)func2_58_84_64738160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[base_65230200_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460);
   next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any += 1;
   next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any = realloc(next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any,next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any*sizeof(Object));
next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->any[next__data_65310420_my__lut_58_8430_65128600_func2_58_84_64738160_func2_58_840_62634860_layer1_58_84_55920260_layer1_58_840_55227580_neural__network_58_84_49999740_neural__network_58_840_63512020______58_84_49854440______58_840_63857460->num_any-1] = (Object)behavior;
   behavior->block = make__53883700();

   return behavior;
}

Scope makefunc2_58_84_64738160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func2_58_84_64738160 = scope;
   scope->owner = (Object)func2_58_840_62634860;
   scope->name = "func2:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_65309940();
   scope->systemIs[1] = makemy__interpolator_55010000();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_64852740();
   scope->inners[1] = makenext__data_64918540();
   scope->inners[2] = makeaddress_64918400();
   scope->inners[3] = makeremaining_65016980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53882200();
   scope->behaviors[1] = make__53880640();
   scope->behaviors[2] = make__53896960();
   scope->behaviors[3] = make__53989720();
   scope->behaviors[4] = make__53989400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc2_58_840_62634860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func2_58_840_62634860 = systemT;
systemT->owner = NULL;
   systemT->name = "func2:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_63014140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_63117160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc2_58_84_64738160();

   return systemT;
}