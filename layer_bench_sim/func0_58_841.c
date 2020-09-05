#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func0_58_841_52711320;

SignalI z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makez__value_53002640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_841_52711320;
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

SignalI a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makea_53255020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_841_52711320;
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

Block __61494080;

void code__61494080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
            first = value2integer(make__61524940());
            last = value2integer(make__61524920());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61494080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61494080 = block;
   block->owner = (Object)__61493820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61494080;

   return block;
};

Block __61493780;

void code__61493780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740,value2integer(make__61524720()),value2integer(make__61524700())));
      set_value_pos(pool_state);
   }
}

Block make__61493780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61493780 = block;
   block->owner = (Object)__61493520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61493780;

   return block;
};

Block __61493480;

void code__61493480() {
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
            src0 = make__61524240();
            src1 = make__61524220();
            src2 = make__61524200();
            src3 = make__61524180();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
            first = value2integer(make__61524080());
            last = value2integer(make__61524060());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61493480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61493480 = block;
   block->owner = (Object)__61493020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61493480;

   return block;
};

Block __61494360;

void code__61494360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,address_52597820_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,remaining_54209900_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,base_54291180_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,next__data_54388380_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,a_53255020_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61494360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61494360 = block;
   block->owner = (Object)__61528780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61494360;

   return block;
};

Block __61494280;

void code__61494280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61494280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61494280 = block;
   block->owner = (Object)__61528620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61494280;

   return block;
};

Value make__61524940() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61524920() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61524720() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61524700() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61524240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61524220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61524200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61524180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61524080() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61524060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func0_58_84_54239100;

SignalI base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makebase_54291740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_84_54239100;
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

SignalI next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makenext__data_54392340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_84_54239100;
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

SignalI address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeaddress_54392240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_84_54239100;
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

SignalI remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeremaining_54657860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func0_58_84_54239100;
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

SystemI my__lut_52713200;

SystemI makemy__lut_52713200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52713200 = systemI;
   systemI->owner = (Object)func0_58_84_54239100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_842_52599960;

   return systemI;
};

SystemI my__interpolator_54748480;

SystemI makemy__interpolator_54748480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_54748480 = systemI;
   systemI->owner = (Object)func0_58_84_54239100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_842_54080360;

   return systemI;
};

Behavior __61493820;

Behavior make__61493820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61493820 = behavior;
   behavior->owner = (Object)func0_58_84_54239100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61494080();

   return behavior;
}

Behavior __61493520;

Behavior make__61493520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61493520 = behavior;
   behavior->owner = (Object)func0_58_84_54239100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61493780();

   return behavior;
}

Behavior __61493020;

Behavior make__61493020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61493020 = behavior;
   behavior->owner = (Object)func0_58_84_54239100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[z__value_53002640_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61493480();

   return behavior;
}

Behavior __61528780;

Behavior make__61528780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61528780 = behavior;
   behavior->owner = (Object)func0_58_84_54239100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[address_54392240_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[remaining_54657860_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[base_54291740_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[next__data_54392340_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[interpolated__value_54748680_my__interpolator_58_842_54080360_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61494360();

   return behavior;
}

Behavior __61528620;

Behavior make__61528620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61528620 = behavior;
   behavior->owner = (Object)func0_58_84_54239100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[base_52614760_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[next__data_52713340_my__lut_58_842_52599960_func0_58_84_54239100_func0_58_841_52711320_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61494280();

   return behavior;
}

Scope makefunc0_58_84_54239100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func0_58_84_54239100 = scope;
   scope->owner = (Object)func0_58_841_52711320;
   scope->name = "func0:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52713200();
   scope->systemIs[1] = makemy__interpolator_54748480();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_54291740();
   scope->inners[1] = makenext__data_54392340();
   scope->inners[2] = makeaddress_54392240();
   scope->inners[3] = makeremaining_54657860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61493820();
   scope->behaviors[1] = make__61493520();
   scope->behaviors[2] = make__61493020();
   scope->behaviors[3] = make__61528780();
   scope->behaviors[4] = make__61528620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc0_58_841_52711320() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func0_58_841_52711320 = systemT;
systemT->owner = NULL;
   systemT->name = "func0:T1";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53002640();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_53255020();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc0_58_84_54239100();

   return systemT;
}