#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_53709540;

SignalI z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makez__value_53944480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func1_58_840_53709540;
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

SignalI a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makea_54180400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func1_58_840_53709540;
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

Block __61538340;

void code__61538340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
            first = value2integer(make__61577160());
            last = value2integer(make__61577140());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61538340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61538340 = block;
   block->owner = (Object)__61562620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61538340;

   return block;
};

Block __61562580;

void code__61562580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740,value2integer(make__61577000()),value2integer(make__61576980())));
      set_value_pos(pool_state);
   }
}

Block make__61562580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61562580 = block;
   block->owner = (Object)__61562320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61562580;

   return block;
};

Block __61562280;

void code__61562280() {
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
            src0 = make__61576520();
            src1 = make__61576500();
            src2 = make__61576480();
            src3 = make__61576460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value;
            first = value2integer(make__61576360());
            last = value2integer(make__61576340());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61562280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61562280 = block;
   block->owner = (Object)__61561820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61562280;

   return block;
};

Block __61538560;

void code__61538560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,address_50508920_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,remaining_54753660_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,base_54845560_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,next__data_55133160_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,a_54180400_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61538560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61538560 = block;
   block->owner = (Object)__61556520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61538560;

   return block;
};

Block __61538500;

void code__61538500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61538500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61538500 = block;
   block->owner = (Object)__61556360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61538500;

   return block;
};

Value make__61577160() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61577140() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61577000() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61576980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61576520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61576500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61576480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61576460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61576360() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61576340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope func1_58_84_53254440;

SignalI base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makebase_53357540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func1_58_84_53254440;
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

SignalI next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makenext__data_53438220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func1_58_84_53254440;
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

SignalI address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeaddress_53438080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func1_58_84_53254440;
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

SignalI remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740;

SignalI makeremaining_53542820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)func1_58_84_53254440;
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

SystemI my__lut_52805780;

SystemI makemy__lut_52805780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_52805780 = systemI;
   systemI->owner = (Object)func1_58_84_53254440;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_50511740;

   return systemI;
};

SystemI my__interpolator_47588640;

SystemI makemy__interpolator_47588640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47588640 = systemI;
   systemI->owner = (Object)func1_58_84_53254440;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_54377280;

   return systemI;
};

Behavior __61562620;

Behavior make__61562620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61562620 = behavior;
   behavior->owner = (Object)func1_58_84_53254440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61538340();

   return behavior;
}

Behavior __61562320;

Behavior make__61562320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61562320 = behavior;
   behavior->owner = (Object)func1_58_84_53254440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61562580();

   return behavior;
}

Behavior __61561820;

Behavior make__61561820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61561820 = behavior;
   behavior->owner = (Object)func1_58_84_53254440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[z__value_53944480_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61562280();

   return behavior;
}

Behavior __61556520;

Behavior make__61556520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61556520 = behavior;
   behavior->owner = (Object)func1_58_84_53254440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[address_53438080_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[remaining_53542820_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[base_53357540_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[next__data_53438220_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[interpolated__value_47588840_my__interpolator_58_8400_54377280_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61538560();

   return behavior;
}

Behavior __61556360;

Behavior make__61556360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61556360 = behavior;
   behavior->owner = (Object)func1_58_84_53254440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[base_52674400_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[next__data_52806020_my__lut_58_8400_50511740_func1_58_84_53254440_func1_58_840_53709540_layer0_58_84_47891680_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61538500();

   return behavior;
}

Scope makefunc1_58_84_53254440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   func1_58_84_53254440 = scope;
   scope->owner = (Object)func1_58_840_53709540;
   scope->name = "func1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_52805780();
   scope->systemIs[1] = makemy__interpolator_47588640();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53357540();
   scope->inners[1] = makenext__data_53438220();
   scope->inners[2] = makeaddress_53438080();
   scope->inners[3] = makeremaining_53542820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61562620();
   scope->behaviors[1] = make__61562320();
   scope->behaviors[2] = make__61561820();
   scope->behaviors[3] = make__61556520();
   scope->behaviors[4] = make__61556360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_53709540() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_53709540 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_53944480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_54180400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makefunc1_58_84_53254440();

   return systemT;
}