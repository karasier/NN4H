#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_48073140;

SignalI z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makez__value_45595800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)tanh_58_840_48073140;
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

SignalI a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makea_45779280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)tanh_58_840_48073140;
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

Block __48044100;

void code__48044100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
            first = value2integer(make__48054900());
            last = value2integer(make__48054880());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48044100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48044100 = block;
   block->owner = (Object)__48043840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48044100;

   return block;
};

Block __48043800;

void code__48043800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580,value2integer(make__48054700()),value2integer(make__48054680())));
      set_value_pos(pool_state);
   }
}

Block make__48043800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48043800 = block;
   block->owner = (Object)__48043420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48043800;

   return block;
};

Block __48043340;

void code__48043340() {
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
            src0 = make__48078460();
            src1 = make__48078440();
            src2 = make__48078420();
            src3 = make__48078400();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value;
            first = value2integer(make__48078280());
            last = value2integer(make__48078260());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48043340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48043340 = block;
   block->owner = (Object)__48042640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48043340;

   return block;
};

Block __48044380;

void code__48044380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,address_45988960_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,remaining_47243120_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,base_47511180_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,next__data_47623580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,a_45779280_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48044380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48044380 = block;
   block->owner = (Object)__48060220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48044380;

   return block;
};

Block __48044300;

void code__48044300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->c_value,next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
      set_value_pos(pool_state);
   }
}

Block make__48044300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48044300 = block;
   block->owner = (Object)__48060060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48044300;

   return block;
};

Value make__48054900() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48054880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48054700() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48054680() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48078460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48078440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48078420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48078400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48078280() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48078260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope tanh_58_84_47807100;

SignalI base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makebase_47853160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)tanh_58_84_47807100;
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

SignalI next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makenext__data_47891340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)tanh_58_84_47807100;
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

SignalI address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makeaddress_47891260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)tanh_58_84_47807100;
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

SignalI remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580;

SignalI makeremaining_47962080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580 = signalI;
   signalI->owner = (Object)tanh_58_84_47807100;
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

SystemI my__lut_47521960;

SystemI makemy__lut_47521960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_47521960 = systemI;
   systemI->owner = (Object)tanh_58_84_47807100;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_45960080;

   return systemI;
};

SystemI my__interpolator_47740420;

SystemI makemy__interpolator_47740420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_47740420 = systemI;
   systemI->owner = (Object)tanh_58_84_47807100;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_45779080;

   return systemI;
};

Behavior __48043840;

Behavior make__48043840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48043840 = behavior;
   behavior->owner = (Object)tanh_58_84_47807100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48044100();

   return behavior;
}

Behavior __48043420;

Behavior make__48043420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48043420 = behavior;
   behavior->owner = (Object)tanh_58_84_47807100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48043800();

   return behavior;
}

Behavior __48042640;

Behavior make__48042640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48042640 = behavior;
   behavior->owner = (Object)tanh_58_84_47807100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[z__value_45595800_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48043340();

   return behavior;
}

Behavior __48060220;

Behavior make__48060220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48060220 = behavior;
   behavior->owner = (Object)tanh_58_84_47807100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[address_47891260_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[remaining_47962080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[base_47853160_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[next__data_47891340_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[interpolated__value_47740580_my__interpolator_58_840_45779080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48044380();

   return behavior;
}

Behavior __48060060;

Behavior make__48060060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48060060 = behavior;
   behavior->owner = (Object)tanh_58_84_47807100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[base_47458460_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580);
   next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any += 1;
   next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any = realloc(next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any,next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any*sizeof(Object));
next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->any[next__data_47522420_my__lut_58_840_45960080_tanh_58_84_47807100_tanh_58_840_48073140______58_84_47674340______58_840_48029580->num_any-1] = (Object)behavior;
   behavior->block = make__48044300();

   return behavior;
}

Scope maketanh_58_84_47807100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   tanh_58_84_47807100 = scope;
   scope->owner = (Object)tanh_58_840_48073140;
   scope->name = "tanh:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_47521960();
   scope->systemIs[1] = makemy__interpolator_47740420();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_47853160();
   scope->inners[1] = makenext__data_47891340();
   scope->inners[2] = makeaddress_47891260();
   scope->inners[3] = makeremaining_47962080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48043840();
   scope->behaviors[1] = make__48043420();
   scope->behaviors[2] = make__48042640();
   scope->behaviors[3] = make__48060220();
   scope->behaviors[4] = make__48060060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_48073140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_48073140 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_45595800();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_45779280();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = maketanh_58_84_47807100();

   return systemT;
}